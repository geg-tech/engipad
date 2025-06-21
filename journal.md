---
title: "EngiPad"
author: "egg splats"
description: "The Engineer's Construction PDA from Team Fortress 2, now as a macropad!"
created_at: "2025-06-20"
---

back at it with another project :3 this time a quick one! <br/>
(dates are again in mm/dd/yy cuz 🦅) <br/>

## 6/21/25 - started planning and designing in KiCad
first entry into this repo :3 <br/> 

For this Hackpad, I plan to base it off of the [TF2 Engineer's Construction PDA](https://wiki.teamfortress.com/wiki/PDA), which has 8 switches and a rocker switch. <br/>
> there *is* a screen, but it's never seen working in-game so I won't be considering that in my design (I'll possibly replace it with some LEDs or Neopixels)

<img width="327" alt="image" src="https://github.com/user-attachments/assets/c4e3da0a-fba9-48e5-a12e-d58b896e2160" /> <br/>
 
Looking at the model, the macropad can be split into two halves with the split going down the dark grey, with the PCB and electronics on the bottom half and the rest of the case going on top.

<img width="896" alt="image" src="https://github.com/user-attachments/assets/57097617-3826-4f29-852b-110aa7868e17" /> <br/>

After I got the general plan down, I started to design the PCB in KiCad, starting with the schematic. I first considered doing a matrix-style wiring for the switches, but then settled on doing direct wiring since the Hackpad microcontroller has enough GPIO to support 8 switches and LEDs and the fact that matrix wiring requires diodes which take up space on the PCB. <br/>
<img width="1000" alt="image" src="https://github.com/user-attachments/assets/3d6b7df5-b844-486c-9a24-09e70ea20915" /> <br/>
> K.I.S.S. keep it simple, stupid!





