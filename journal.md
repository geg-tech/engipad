---
title: "EngiPad"
author: "egg splats"
description: "The Engineer's Construction PDA from Team Fortress 2, now as a macropad!"
created_at: "2025-06-20"
---

# Total Hours (at time of submission): 16 hours

back at it with another project :3 <br/>
this time a quick one! <br/>
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
<img width="739" alt="image" src="https://github.com/user-attachments/assets/fd14d69b-7533-46b9-94bc-2cdae4c1c5d8" /> <br/>

After I got the schematic, I started to work on the PCB design, mirroring the 3x3 grid of the Engineer's PDA with the 8th key taking up twice the space and adding RGB lights between the switches. I considered having the PCB extend throughout the macropad, but found it easier to place the RP2040 going to the side to compact the PCB below 100mm x 100mm in order to save money. <br/>
I also threw in some silkscreen art, making a TF2 inspired graphic for the front and a Highway backside, as well as a lanyard hole for extra PCBs! <br/>
<img width="360" alt="pcb" src="https://github.com/user-attachments/assets/887abc10-1c97-4398-81d6-aff8a565b059" />
<img width="300" alt="front" src="https://github.com/user-attachments/assets/e066c240-e10d-4351-82b8-55b68a5b1308" />
<img width="270" alt="back" src="https://github.com/user-attachments/assets/4c38c8c5-c9f6-4786-b6e8-931cc1d7eb5f" /><br/>
> note: i disabled the silkscreen in the PCB view since it made the board look very cluttered lol <br/>

I made the backside with Figma, using the frame technique I learned from the Highway Figma magazine to place and design my back silkscreen (and is by far my favorite pcb made yet :3) <br/>
<img width="300" alt="image" src="https://github.com/user-attachments/assets/4ea7a988-6b35-4319-8c7b-bc63cf8d1e53" />
<img width="300" alt="image" src="https://github.com/user-attachments/assets/2bb894cf-b217-4565-9106-6c6de6061e70" /> <br/>
> I used an orthographic screenshot of the PCB's backside and used Figma to draw out shapes to put on the silkscreen! The graphic was made in black and white since it's the easiest format for KiCad's image converter to work with

time spent: 6 hours planning, designing PCB, and making art

## 6/22/25 - cadding the case
After finishing my PCB, I started working on the case. While I *could* lazily take the game files for the PDA and port them into a model, I figured that ripping and using the *exact* models from the game would definitely NOT be allowed in Highway (plus the fact that it's lame and boring). <br/>
This left me with recreating the model in Fusion. I found a source online that had the original model for the PDA, and managed to import them into Blender to take pictures to aid in designing. <br/>
<img width="400" alt="image" src="https://github.com/user-attachments/assets/a56af7bd-52d8-4888-ad8a-e0b68d62c9c9" />
<img width="330" alt="image" src="https://github.com/user-attachments/assets/3926d01e-f9ed-4adf-b636-3bcc7b0da9c2" />
<img width="130" alt="image" src="https://github.com/user-attachments/assets/2bbfcb45-d257-407a-9831-fab0740dc432" />
<img width="130" alt="image" src="https://github.com/user-attachments/assets/52e380ab-e1a1-45fb-8abe-5fc80feb4d46" /> <br/>
<img width="642" alt="image" src="https://github.com/user-attachments/assets/4c0699ad-734c-4e60-8fc8-96bbb3aee36c" /> <br/>

After a while, I finished most the CAD for the case. I split the case apart into the two shells, as detailed above, as well as splitting the trapezoidal screen part thingy into it's own section. <br/>

<img width="852" alt="image" src="https://github.com/user-attachments/assets/937b92f7-b126-4d48-943c-4717bdbecbe0" /> <br/>

To mount the OLED in the screen section, I made two halves of the PDA's screen and "sandwiched" the OLED in between those two halves, with the headers poking out to connect to the PCB. The two halves are then slotted into the main shell for the screen, with the back side of one of the halves having a ledge for easy gluing. <br/>
I initially thought of using some tiny screws to mount the two halves, but was soon shut down due to the screws being too big for this scale and my printer not having *that* level of precision, especially at an angle. <br/>

<img width="598" alt="image" src="https://github.com/user-attachments/assets/a29eab56-8419-419e-8294-3288b3c0815c" /> 
<img width="400" alt="image" src="https://github.com/user-attachments/assets/71ac83fd-a54f-4823-866b-df6328ac4fcd" /><br/>

The two case halves are mounted with the PCB in a sandwich style mounting, with the PCB in between of the screw holes in the case shells. The case halves also have a small lip where they can interlock to improve alignment and ease of building, which is used between the top shell and the screen section. <br/>

<img width="500" alt="image" src="https://github.com/user-attachments/assets/a68fb8c7-a835-4aa8-9831-1b98c7afa231" />
<img width="500" alt="image" src="https://github.com/user-attachments/assets/0e14d4f4-3a62-46f5-83c7-b31d73319335" /> <br/>

For the rocker switch, I used a 11.5mm wide hole to put my own toggle switch in (the metal lever one). I *did* find an actual rocker switch like the one in-game, but it was too large for my scale. I aimed to be as game-accurate for this CAD as possible, but using an actual switch was honestly too cool to pass up in my opinion. <br/>

<img width="500" alt="image" src="https://github.com/user-attachments/assets/ba2bb7c4-a60d-4a39-a472-594544db74a6" /> <br/>

However, for people who don't have a cool metal switch, I also made an alternate version of the screen shell with a rocker switch. (unfunctional though, sorry) <br/>

<img width="367" alt="image" src="https://github.com/user-attachments/assets/0ef6d927-d681-4f6a-a1af-f827b6bfb62e" /> <br/>

Speaking of being game-accurate, I noticed that the keycaps on the actual PDA model weren't perfectly square, but more like octogons in a way. This led to me designing my own custom keycaps, modeling them after the buttons on the Engineer's PDA. <br/>

<img width="1049" alt="image" src="https://github.com/user-attachments/assets/78177199-6ed5-49bf-832b-3ff38c165bd1" /> <br/>

I didn't have time to color and render the model, but I will most likely finish modeling and the Hackpad tomorrow
time: 6 hours cadding

## 6/23/25 - Rendering and finishing up 
This morning I managed to color the Fusion model and render it. <br/>
I took a screenshot of the PDA from the TF2 Wiki and took apart the colors, applying it to the CAD model. <br/>

<img width="887" alt="image" src="https://github.com/user-attachments/assets/695958dd-c8df-4c55-bc2f-fd5fe6f137cb" /> <br/>

I also SEVERELY underestimated the Render tool in Fusion, because it made the colored CAD model look so much better like wtf :sob: <br/>

![engipad](https://github.com/user-attachments/assets/e71ce7d9-abd8-4db7-9d09-51e5451996e3)
![exploded](https://github.com/user-attachments/assets/39276f28-2124-4216-81d6-68ced8c5acd1)
![top](https://github.com/user-attachments/assets/47f4618f-67bf-424b-89aa-fc783ae4f111)

Once I had the CAD down, I started to work on the firmware. I picked QMK for the firmware, since I have experience using it from my other Highway project. I followed the guide found [here](https://docs.qmk.fm/porting_your_keyboard_to_qmk), and made a folder containing the keyboard and keymap .json files. <br/>

<img width="768" alt="image" src="https://github.com/user-attachments/assets/af2dd828-f764-4853-ac1f-d88555ebd348" />

I edited the code to fit my Hackpad's direct, 8-key wiring, as well as setting the keybinds to correspond with shortcuts for Fusion commands, like Shift for selecting multiple elements or rotating the camera and E to extrude. I also added undo and redo macros, since I always forget what shortcut redo is lol <br/>

<img width="730" alt="image" src="https://github.com/user-attachments/assets/d11282ca-410d-4f48-a493-c41721da9672" /> <br/>
<img width="500" alt="image" src="https://github.com/user-attachments/assets/a1b66564-f6f3-452d-a8b3-78c906200dd1" />
<img width="500" alt="image" src="https://github.com/user-attachments/assets/a11eaad3-fe6f-448b-b62a-89670dc03cf3" /> <br/>

I also set up the code for the OLED and RGB, making the OLED print out "engineer gamin" for now and the RGB set to a default RGB pattern by QMK. I plan to fine tune and test out the firmware more accurately when the Hackpad parts come in, but this will do for now.

After I got the firmware setup, I began working on my README and preparing this repo for submission :D

current time: 4 hours rendering, programming QMK firmware, and setting up for submission

## 7/2/25 - parts came in
the parts actually came in two days ago but i was lazy so im putting this under today <br/>

Got my parts from hack club! <br/>
I 3D printed my custom keycaps using the last of my black filament and test fitted the keycaps on the switches. I was worried about my printer screwing up the stem geometry, but turned out the outer diameter of the stem was too big to fit in the switch (6mm wide to the switches' 5.4mm size limit). <br/>

Once I got the keycaps down, I turned to the hardware, soldering the headers onto the OLED and rp2040 and then flashing the firmware. The current firmware was preliminary, so only part of it worked with many of the features like the OLED and RGB not implemented, so I started work on that. <br/>

Once I made a proper keybaord setup with QMK, I started to work on the *keyboard.json* and *keymap.c* files. <br/>
I thought my current matrix setup would work, but QMK would refuse to compile it. I thought it was something to do with the microcontroller or me setting up QMK incorrectly, but ended up being an issue with the GPIO pin names. I initially put in the pin names found on the [Seeed Studio store page](https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html) (D1, D2, D3, etc.), but QMK only recognizes the original GPIO names on the chip, meaning that I had to go into my schematic and adjust the GPIO names to the ones on the rp2040 chip. <br/>

<img width="240" alt="image" src="https://github.com/user-attachments/assets/c6842bf7-10ed-4c1c-ae2e-1dbbb294e5d3" /> <br/>

The firmware managed to compile and work when I connected GND to the GPIO pins, which left me with coding the RGB and OLED. <br/>
There *really* wasn't any good sources online from my very short research into Google, since many of the wiki pages and videos referenced a rules.mk and config file that *should* have been made with the keybaord, so I went into [@alexren's Orpheuspad](https://github.com/hackclub/hackpad/tree/03a6a5542e0cffbb43e530b67994741fcccb205e/hackpads/orpheuspad/firmware/QMK) for reference on how to implement OLED and RGB. <br/>
Turns out, I was supposed to make my **own** rules.mk and config.h file inside the keyboard, so I proceeded to make those files and put in the settings for the additions. I'm not able to test out the rgb as of now since my PCB isn't here, but I managed to get the OLED screen working with QMK. <br/>

I used the QMK wiki page for [oled drivers](https://docs.qmk.fm/features/oled_driver) and tweaked around with the code for the logo, and managed to get the OLED to display my own custom image by making my own *glcdfont.c* file and pasting in code from this [logo editor](https://joric.github.io/qle/). <br/>
I made the custom image with photoshop, down sizing and adjusting the images used for my PCB's silkscreen art. <br/>

<img width="481" alt="image" src="https://github.com/user-attachments/assets/ea09f5d1-a655-43e3-87f5-15e7256be479" />

![engipad-banner](https://github.com/user-attachments/assets/87ba6aca-e7af-4ff1-90e8-54b5f2c805ac)

time spent: 5 hours soldering, coding hardware, and redesigning keycaps

