<img width="1024" height="394" alt="image" src="https://github.com/user-attachments/assets/4ca61fd0-52de-4121-98f7-79f94e5f9d61" />


# S.O Dongle 
## -by a 14 yr old kid

## Overview:
### A fully diy dongle that shows your pcs stats(such as ram and cpu usage) on a 0.91 oled display.

This project was made fully by me for the #dongle program on hackclub.com. Thx to the team for hosting this program
Ive always had a love for creating and tech so when you put the 2 together you  get hardware and hence i am here creating a dongle with softwares ive never touched before but its all part of the journey.
At the moment the software is only written for Ubuntu (my daily driver) but i may write some for other os'.

Anyway here is some eye candy:

<img width="485" height="595" alt="image" src="https://github.com/user-attachments/assets/86e62ff3-e36b-427e-acb4-dc3979c61159" />

<img width="679" height="355" alt="image" src="https://github.com/user-attachments/assets/54cadd7c-61b1-4b71-be84-1901e12d2039" />

<img width="877" height="521" alt="image" src="https://github.com/user-attachments/assets/87d62fe3-5697-473f-b18f-8e816ef85d01" />

<img width="860" height="430" alt="image" src="https://github.com/user-attachments/assets/4659d30f-f96b-441e-96d3-537ea2199f69" />

<img width="486" height="667" alt="image" src="https://github.com/user-attachments/assets/1c2f8f9e-02be-4975-bfe5-ebf45ba6f1a4" />

<img width="877" height="530" alt="image" src="https://github.com/user-attachments/assets/0c803d69-befb-4b98-815d-b29ab867d83a" />

<img width="877" height="530" alt="image" src="https://github.com/user-attachments/assets/205c680b-09ed-4114-95e5-bef5d4807d70" />

<img width="877" height="530" alt="image" src="https://github.com/user-attachments/assets/b13cfeae-69ba-4323-9a58-6fec0759edab" />

<img width="951" height="648" alt="image" src="https://github.com/user-attachments/assets/4f4eac45-f95e-4f28-aa65-971b35cc676a" />

<img width="168" height="390" alt="image" src="https://github.com/user-attachments/assets/073de5cf-cbb1-448f-b792-23f4c93bd2e3" />

Now we are done with that here is the bom:

##  Bill of Materials (BOM) & Links

| Item # | Part Name / Description | Category | Qty Needed | Unit Cost ($) | Total Cost ($) | Source & Link |
| :---: | :--- | :--- | :---: | :---: | :---: | :--- |
| **1** | CH552G 8-bit USB Microcontroller (`U1`) | Active Components | 1 | $0.60 | $0.60 | [LCSC (C111292)](https://www.lcsc.com/search?q=C111292) |
| **2** | 100nF (0.1µF) Decoupling Capacitor (`C1`, `C2`) | Passives | 2 | $0.01 | $0.02 | [LCSC (C14663)](https://www.lcsc.com/search?q=C14663) |
| **3** | 10kΩ Chip Resistor (`R1`) | Passives | 1 | $0.01 | $0.01 | [LCSC (C25804)](https://www.lcsc.com/search?q=C25804) |
| **4** | SMD Tactile Push Button (`SW1`) | Electromechanical | 1 | $0.02 | $0.02 | [LCSC (C2837531)](https://www.lcsc.com/search?q=C2837531) |
| **5** | 0.91" I2C OLED Display Module (128x32, 4-pin) | Displays | 1 | $0.99 | $0.99 | [AliExpress](https://www.aliexpress.com/item/1005003727192340.html) |
| **6** | USB-A Edge Connector (`J1`) | PCB Integration | 1 | $0.00 | $0.00 | Integrated on PCB |
| **7** | Custom 3D Printed Case & Lid (`Case.step` + `Lid.step`) | 3D Printing | 1 set | $0.74 | $0.74 | [JLCPCB 3DP](https://jlcpcb.com/3d-printing) |
| **8** | Custom PCB Prototype (White, ENIG Finish, Qty 5) | PCB | 5 | $4.14 | $20.70 | [JLCPCB](https://jlcpcb.com) |

---

## Cost Summary & Shipping

* **Total Components (LCSC + AliExpress):** $1.64
* **PCB Fabrication (Qty 5 via JLCPCB):** $20.70
* **3D Printed Enclosure (JLCPCB 3DP):** $0.74
* **LCSC Shipping & Handling:** $8.25 *(Standard line + handling fee)*
* **AliExpress Shipping:** $0.00 *(Free shipping option)*
* **JLCPCB Shipping (Estimated):** ~$8.00 
* **Grand Total (Including Estimated Shipping):** **~$39.33**
---

## Manufacturing & Assembly

1. **PCBs & 3D Prints:** Ordered via [JLCPCB](https://jlcpcb.com) (White solder mask, ENIG finish) and [JLCPCB 3DP](https://jlcpcb.com/3d-printing) (9600 Resin, White).
2. **Electronics & Switch:** Microcontroller, passives, and tactile switch ordered via [LCSC](https://www.lcsc.com).
3. **Display:** 0.91" 4-pin I2C OLED display ordered via [AliExpress](https://www.aliexpress.com).
4. **Hand Soldering EVERYTHING**

<img width="1405" height="648" alt="image" src="https://github.com/user-attachments/assets/34c42cf3-da1d-4706-8f6f-871a757a6280" />
