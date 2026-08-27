import time
import psutil
import serial
import subprocess

# Update '/dev/ttyACM0' or '/dev/ttyUSB0' to match your dongle's serial port
SERIAL_PORT = '/dev/ttyACM0' 
BAUD_RATE = 115200

def get_gpu_usage():
    try:
        # Tries to get NVIDIA GPU usage via nvidia-smi
        output = subprocess.check_output(
            ["nvidia-smi", "--query-gpu=utilization.gpu", "--format=csv,noheader,nounits"],
            encoding='utf-8'
        )
        return int(output.strip())
    except Exception:
        # Default placeholder if no NVIDIA GPU is available
        return 0

def main():
    try:
        ser = serial.Serial(SERIAL_PORT, BAUD_RATE, timeout=1)
        time.sleep(2) # Give connection a moment to establish
        print(f"Connected to dongle on {SERIAL_PORT}")
        
        while True:
            cpu = int(psutil.cpu_percent(interval=1))
            ram = int(psutil.virtual_memory().percent)
            gpu = get_gpu_usage()
            
            # Format: "CPU,RAM,GPU\n" -> e.g., "45,62,12\n"
            data_str = f"{cpu},{ram},{gpu}\n"
            ser.write(data_str.encode('utf-8'))
            
    except serial.SerialException as e:
        print(f"Error opening serial port: {e}")

if __name__ == "__main__":
    main()