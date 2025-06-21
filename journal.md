---
title: "EngiPad"
author: "egg splats"
description: "The Engineer's Construction PDA from Team Fortress 2, now as a macropad!"
created_at: "2025-06-20"
---

back at it with another project :3 this time a quick one! <br/>
(dates are again in mm/dd/yy cuz 🦅) <br/>

## 6/21/25 - started planning and designing in KiCad
we locking in for this one 🗣️🗣️🔥 <br/> 

For this Hackpad, I plan to base it off of the [TF2 Engineer's Construction PDA](https://wiki.teamfortress.com/wiki/PDA), which has 8 switches and a rocker switch. <br/>

<img width="327" alt="image" src="https://github.com/user-attachments/assets/c4e3da0a-fba9-48e5-a12e-d58b896e2160" /> <br/>
 
Looking at the model, the macropad can be split into two halves with the split going down the dark grey, with the PCB and electronics on the bottom half and the rest of the case going on top.

<img width="896" alt="image" src="https://github.com/user-attachments/assets/57097617-3826-4f29-852b-110aa7868e17" /> <br/>

After I got the general plan down, I started to design the PCB in KiCad, starting with the schematic. I first considered doing a matrix-style wiring for the switches, but then settled on doing direct wiring since the Hackpad microcontroller has enough GPIO to support 8 switches and LEDs and the fact that matrix wiring requires diodes which take up space on the PCB. <br/>
I also decided to add on an OLED screen to the macropad, putting the OLED in a slot inside the PDA's screen. I originally planned not to do this idea since the OLED didn't have any screw holes, but then I was inspired by **samliu's** solution by having a slot in their macropad case, as seen in their [Squarepad's](https://github.com/samdev-7/squarepad) CAD.<br/>

<img width="1136" alt="schematic" src="https://github.com/user-attachments/assets/a7e20d25-7216-44c9-9146-bbaa4c57a77f"/> <br/>
> K.I.S.S. - keep it simple, stupid! <br/>

After I got the schematic, I started to work on the PCB design, mirroring the 3x3 grid of the Engineer's PDA with the 8th key taking up twice the space and adding RGB lights between the switches. I considered having the PCB extend throughout the macropad, but found it easier to place the RP2040 going to the side to compact the PCB below 100mm x 100mm in order to save money. <br/>
I also threw in some silkscreen art, making a TF2 inspired graphic for the front and a Highway backside, as well as a lanyard hole for extra PCBs! <br/>
<img width="330" alt="pcb" src="https://github.com/user-attachments/assets/887abc10-1c97-4398-81d6-aff8a565b059" />
<img width="330" alt="front" src="https://github.com/user-attachments/assets/e066c240-e10d-4351-82b8-55b68a5b1308" />
<img width="330" alt="image" src="https://github.com/user-attachments/assets/89641764-6103-4e83-9623-a2090574dbd5" /> <br/>
> note: i disabled the silkscreen in the PCB view since it made the board look very cluttered lol <br/>

I made the backside with Figma, using the frame technique I learned from the Highway Figma magazine to place and design my back silkscreen (and is by far my favorite pcb made yet :3) <br/>




hours as of now: 5
