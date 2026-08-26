# JOURNAL 
## -written by @phantom.ascii

### August 26 2026 4am
The start:
This is the time i started the ysws, dongle. I got a message of a new ysws and immediately i got to work. I brainstormed for a while and eventually came up with a project. An oled, usb-a pc stats checker built around my own firmware.
Im going to make the firmware mainly for ubuntu (the distro im using rn) but might also make variants for windows macos and other linux distros so star this repo so that ik ppl want it.

### August 26 6:19
I just finished the schematics im going for a flat surface mount pcb with ch552g for the mcu anda 4 pin oled 0.91. Anyway here is my schematics. I have 0 errors and the only warning was cause i edited a symbol:
<img width="1165" height="683" alt="image" src="https://github.com/user-attachments/assets/908b43d0-4237-44d6-becf-c53d5dd49f46" />
<img width="699" height="508" alt="image" src="https://github.com/user-attachments/assets/f6e8d0d9-8e97-4535-97a3-c1962bd040cf" />

Imma go sleep now. ill make the pcb in the day. Goodnight...

### AUG 26 6:33
Guess no sleep for us i need to fix this button. Thx to sophia from the hackclub team for pointing the out the problem. 
<img width="427" height="303" alt="image" src="https://github.com/user-attachments/assets/84cb215f-b0e3-4790-898e-b6bc6ead8cdd" />

Thats the current button we need to fix it.

<img width="817" height="491" alt="image" src="https://github.com/user-attachments/assets/2f1feabb-7011-4def-b17a-9321f4581719" />

I Fixed the button. I also layed out the power nodes nicer (gnd down, power up)
And guess what guys

### Aug 26 16:07
Anddd guexs what. I made another mistake and had to fix it casue my d+ was connected to gnd which would have shoted the system. So here is the final schematic(*hopefully*).

<img width="938" height="624" alt="image" src="https://github.com/user-attachments/assets/5ea3e39f-d525-4786-915a-9be6199ba365" />

Time to make the pcb

### Aug 26 17:19
I assigned all the footprints and 3d models i made the edge cuts and laid out my pcb:
<img width="415" height="494" alt="image" src="https://github.com/user-attachments/assets/0b94a196-88d8-4919-9e24-e43c51e89522" />
<img width="145" height="425" alt="image" src="https://github.com/user-attachments/assets/5a246664-73a4-44d5-ae3f-c7fb63d9a880" />

Im thinking about aiddding an led to show when the bootflahs button is being pressed. Well see if i add it.

### Aug 26 18:54
Alr guys no LED it would ruin the data lines apparently. Anyways i routed the wires, made the copper pours and changed up the edge cut a bit. I also fixxed all the errors. I only have silkscreen warnings now:

<img width="158" height="438" alt="image" src="https://github.com/user-attachments/assets/d390d3e7-9511-4e42-8876-6b6b00932368" />
<img width="106" height="47" alt="image" src="https://github.com/user-attachments/assets/2c1ed265-af46-4bb9-b39b-4745225fefab" />

Heres a 3D view of the pcb:

<img width="694" height="661" alt="image" src="https://github.com/user-attachments/assets/9d606674-952b-4c29-bfe4-be0051d60012" />
mmm.. raytracing... mmmm...

Onto the silkscreen art... Byeee
