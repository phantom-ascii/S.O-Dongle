# JOURNAL 
## -written by @phantom.ascii

## Overview:
Timespent: ~14hrs (idk the exact amount as i didnt know i had to record how long i spent until now as im finishing up my repo so i looked at journal timings and made an honest guess)
This is S.O Dongle. A dongle made for convenience. It has an oled display which will display your pcs specs for example cpu and ram usage. The software is currently based for Ubuntu but i might make it more accessible for other os later. The firmware is built on C. the pcb itself has alot of art on the silkscreen, a flash boot button the mcu its self, capacitors and resistor, the 0.91 oled and the usb-a tongue. I had alot of fun during this project and learnt alot about electronics. Thx to Sophia and the team for hosting this program. Cant wait to see what else you cook up.


### August 26 2026 4am
**Total time spent: ~2hrs**
The start:
This is the time i started the ysws, dongle. I got a message of a new ysws and immediately i got to work. I brainstormed for a while and eventually came up with a project. An oled, usb-a pc stats checker built around my own firmware.
Im going to make the firmware mainly for ubuntu (the distro im using rn) but might also make variants for windows macos and other linux distros so star this repo so that ik ppl want it.

### August 26 6:19
**Total time spent: ~10 min**
I just finished the schematics im going for a flat surface mount pcb with ch552g for the mcu anda 4 pin oled 0.91. Anyway here is my schematics. I have 0 errors and the only warning was cause i edited a symbol:
<img width="1165" height="683" alt="image" src="https://github.com/user-attachments/assets/908b43d0-4237-44d6-becf-c53d5dd49f46" />
<img width="699" height="508" alt="image" src="https://github.com/user-attachments/assets/f6e8d0d9-8e97-4535-97a3-c1962bd040cf" />

Imma go sleep now. ill make the pcb in the day. Goodnight...

### AUG 26 6:33
**Total time spent: ~1hrs**
Guess no sleep for us i need to fix this button. Thx to sophia from the hackclub team for pointing the out the problem. 
<img width="427" height="303" alt="image" src="https://github.com/user-attachments/assets/84cb215f-b0e3-4790-898e-b6bc6ead8cdd" />

Thats the current button we need to fix it.

<img width="817" height="491" alt="image" src="https://github.com/user-attachments/assets/2f1feabb-7011-4def-b17a-9321f4581719" />

I Fixed the button. I also layed out the power nodes nicer (gnd down, power up)
And guess what guys

### Aug 26 16:07
**Total time spent: ~1hrs**
Anddd guexs what. I made another mistake and had to fix it casue my d+ was connected to gnd which would have shoted the system. So here is the final schematic(*hopefully*).

<img width="938" height="624" alt="image" src="https://github.com/user-attachments/assets/5ea3e39f-d525-4786-915a-9be6199ba365" />

Time to make the pcb

### Aug 26 17:19
**Total time spent: ~1hrs 30min**
I assigned all the footprints and 3d models i made the edge cuts and laid out my pcb:
<img width="415" height="494" alt="image" src="https://github.com/user-attachments/assets/0b94a196-88d8-4919-9e24-e43c51e89522" />
<img width="145" height="425" alt="image" src="https://github.com/user-attachments/assets/5a246664-73a4-44d5-ae3f-c7fb63d9a880" />

Im thinking about aiddding an led to show when the bootflahs button is being pressed. Well see if i add it.

### Aug 26 18:54
**Total time spent: ~1hrs 30min**
Alr guys no LED it would ruin the data lines apparently. Anyways i routed the wires, made the copper pours and changed up the edge cut a bit. I also fixxed all the errors. I only have silkscreen warnings now:

<img width="158" height="438" alt="image" src="https://github.com/user-attachments/assets/d390d3e7-9511-4e42-8876-6b6b00932368" />
<img width="106" height="47" alt="image" src="https://github.com/user-attachments/assets/2c1ed265-af46-4bb9-b39b-4745225fefab" />

Heres a 3D view of the pcb:

<img width="694" height="661" alt="image" src="https://github.com/user-attachments/assets/9d606674-952b-4c29-bfe4-be0051d60012" />
mmm.. raytracing... mmmm...

Onto the silkscreen art... Byeee

### Aug 26 21:09
**Total time spent: ~20min**
And i have finished the art. Personally i think it looks decent. I also added a secret HackClub flag under the OLED.

<img width="850" height="346" alt="image" src="https://github.com/user-attachments/assets/0c089f51-96b5-4a69-9392-67bbee40a2ca" />
<img width="850" height="346" alt="image" src="https://github.com/user-attachments/assets/d296435c-6d33-4486-ac28-0e9b60eaf661" />

### Aug 26 21:29
**Total time spent: ~30min**
I added a little hole in the pcb for keychains to fit in. Itas about 2.5mm in diameter and i put it in edge.cut.

<img width="957" height="388" alt="image" src="https://github.com/user-attachments/assets/fb6d3b6f-075c-4aff-b95a-010fde1fa7c4" />
<img width="811" height="575" alt="image" src="https://github.com/user-attachments/assets/e7ed6e5f-2ac6-4cc1-aad0-cb6b7ce91f51" />

What do you think?

### Aug 26 22:59
**Total time spent: ~30min**
Alr so basicly the keychain hole is too small to acutally be used if i make a case and i cant rezlly make it leager without it looking dorky so im going to use it as a mounitng hole. So yhhhh

I made the case now im going to create the lid 

<img width="550" height="511" alt="image" src="https://github.com/user-attachments/assets/cce5356c-3fb6-41c2-86ba-d2d30e2239ef" />


### Aug 26 23:31
**Total time spent: ~1hrs 30min**
Finished the case and the Lid. Im going to now add some like graphics or smth to the lid and then im going to make me github repo quickly and export all necessarey files then work on firmware.

<img width="707" height="548" alt="image" src="https://github.com/user-attachments/assets/45ef66c5-9d8b-485c-b116-8dcab3e6471c" />
<img width="744" height="604" alt="image" src="https://github.com/user-attachments/assets/e6222124-5a27-4998-b2c9-cec5c1d9f2e9" />
<img width="744" height="604" alt="image" src="https://github.com/user-attachments/assets/9de89afb-dbe5-403b-8d26-88da3a2e2023" />


### Aug 27 00:55
**Total time spent: ~2hrs**
Chamfered the left wall and polished the 3d case a bit

<img width="877" height="521" alt="image" src="https://github.com/user-attachments/assets/b019e071-b566-45ef-8f09-dfa218ed770d" />
<img width="877" height="521" alt="image" src="https://github.com/user-attachments/assets/48d41115-1115-43b4-b162-26430b254ea9" />

I also wrote 2 small scripts. One was in c++ for the actual mcu firmware and one was a .py for my ubuntu system which would send my mcu my system specs. Thats about it and im currently fixing up the repo(folder management and readme) and then i will submit it. This was an amazing journy. Thanks to sophia for hosting this program. I rly learnt so much about c++ python pcbs 3d modelling and so much more from the past 2 days and i cant wait to see what other programs you have in store for us. Hope you enjoined reading.

### Aug 29 01:10
**Total time spent: 10mins**
After review the fnal decision ins freekick to liverpool. All jokes aside i had to fix a mistake after review. I had to add an extrusion to the case right under the usb toungue so that the usb would be more rigid whilst inserting. Anyways here it is:

<img width="760" height="508" alt="image" src="https://github.com/user-attachments/assets/9e3270bf-d9d3-44e6-b31f-ae008edf53ec" />

the pcb looks a bit elevated just to show the actual addition. byeee
