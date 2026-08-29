<img width="687" height="257" alt="image" src="https://github.com/user-attachments/assets/735b80bd-fb59-4659-989e-2bc2b8dca77e" />

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

<img width="860" height="430" alt="image" src="https://github.com/user-attachments/assets/4659d30f-f96b-441e-96d3-537ea2199f69" />

<img width="486" height="667" alt="image" src="https://github.com/user-attachments/assets/1c2f8f9e-02be-4975-bfe5-ebf45ba6f1a4" />

<img width="760" height="508" alt="image" src="https://github.com/user-attachments/assets/9a9df3e2-5560-4abe-ba67-c299853cd515" />

<img width="471" height="524" alt="image" src="https://github.com/user-attachments/assets/21de51db-e983-4161-b516-683a08e80b45" />

<img width="471" height="524" alt="image" src="https://github.com/user-attachments/assets/153067d6-82ac-4932-9581-8865cfd658a5" />

<img width="877" height="530" alt="image" src="https://github.com/user-attachments/assets/b13cfeae-69ba-4323-9a58-6fec0759edab" />

<img width="951" height="648" alt="image" src="https://github.com/user-attachments/assets/4f4eac45-f95e-4f28-aa65-971b35cc676a" />

<img width="168" height="390" alt="image" src="https://github.com/user-attachments/assets/073de5cf-cbb1-448f-b792-23f4c93bd2e3" />

Now we are done with that here is the bom:

**Bill of Materials (BOM) & Vendor Shipping**

| Item # | Part Name / Description | Qty Ordered | Item Cost ($) | Vendor Shipping Cost ($) | Source & Link |
| :---: | :--- | :---: | :---: | :---: | :--- |
| **1** | CH552G 8-bit USB Microcontroller (`U1`) | 1 pc | $0.75 | $8.25 *(LCSC S&H)* | [LCSC (C111292)](https://www.lcsc.com/search?q=C111292) |
| **2** | 100nF Decoupling Capacitors (`C1`, `C2`) | 50 pcs | $0.76 | $8.25 *(LCSC S&H)* | [LCSC (C14663)](https://www.lcsc.com/search?q=C14663) |
| **3** | 10kΩ Chip Resistor (`R1`) | 100 pcs | $0.48 | $8.25 *(LCSC S&H)* | [LCSC (C25804)](https://www.lcsc.com/search?q=C25804) |
| **4** | SMD Tactile Push Button (`SW1`) | 50 pcs | $0.95 | $8.25 *(LCSC S&H)* | [LCSC (C2837531)](https://www.lcsc.com/search?q=C2837531) |
| **5** | 0.91" I2C OLED Display Module (128x32, 4-pin) | 1 pc | $0.99 | $0.00 *(Free)* | [AliExpress](https://www.aliexpress.com/item/1005003727192340.html) |
| **6** | USB-A Edge Connector (`J1`) | 1 pc | $0.00 | $0.00 | Integrated on PCB |
| **7** | Custom 3D Printed Case & Lid (`Case.step` + `Lid.step`) | 1 set | $0.74 | $21.32 *(JLCPCB)* | [JLCPCB 3DP](https://jlcpcb.com/3d-printing) |
| **8** | Custom PCB Prototype (White, ENIG Finish, Qty 5) | 5 boards | $20.70 | $21.32 *(JLCPCB)* | [JLCPCB](https://jlcpcb.com) |

---

**Cart & Checkout Totals Breakdown**

* **LCSC Cart Total:** **$11.19** ($2.94 parts + $5.25 shipping + $3.00 handling fee)
* **AliExpress Cart Total:** **$0.99** ($0.99 parts + $0.00 shipping)
* **JLCPCB Cart Total:** **$22.76** ($21.44 parts + $21.32 shipping - $20.00 coupon discount)
* **Combined Grand Total:** **$34.94**
---

## Manufacturing & Assembly

1. **PCBs & 3D Prints:** Ordered via [JLCPCB](https://jlcpcb.com) (White solder mask, ENIG finish) and [JLCPCB 3DP](https://jlcpcb.com/3d-printing) (9600 Resin, White).
2. **Electronics & Switch:** Microcontroller, passives, and tactile switch ordered via [LCSC](https://www.lcsc.com).
3. **Display:** 0.91" 4-pin I2C OLED display ordered via [AliExpress](https://www.aliexpress.com).
4. **Hand Soldering EVERYTHING**
   
<img width="1524" height="845" alt="image" src="https://github.com/user-attachments/assets/997cc1e4-d13a-4b0f-9b84-3c4ad40ae10a" />
