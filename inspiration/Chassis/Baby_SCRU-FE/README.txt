                   .:                     :,                                          
,:::::::: ::`      :::                   :::                                          
,:::::::: ::`      :::                   :::                                          
.,,:::,,, ::`.:,   ... .. .:,     .:. ..`... ..`   ..   .:,    .. ::  .::,     .:,`   
   ,::    :::::::  ::, :::::::  `:::::::.,:: :::  ::: .::::::  ::::: ::::::  .::::::  
   ,::    :::::::: ::, :::::::: ::::::::.,:: :::  ::: :::,:::, ::::: ::::::, :::::::: 
   ,::    :::  ::: ::, :::  :::`::.  :::.,::  ::,`::`:::   ::: :::  `::,`   :::   ::: 
   ,::    ::.  ::: ::, ::`  :::.::    ::.,::  :::::: ::::::::: ::`   :::::: ::::::::: 
   ,::    ::.  ::: ::, ::`  :::.::    ::.,::  .::::: ::::::::: ::`    ::::::::::::::: 
   ,::    ::.  ::: ::, ::`  ::: ::: `:::.,::   ::::  :::`  ,,, ::`  .::  :::.::.  ,,, 
   ,::    ::.  ::: ::, ::`  ::: ::::::::.,::   ::::   :::::::` ::`   ::::::: :::::::. 
   ,::    ::.  ::: ::, ::`  :::  :::::::`,::    ::.    :::::`  ::`   ::::::   :::::.  
                                ::,  ,::                               ``             
                                ::::::::                                              
                                 ::::::                                               
                                  `,,`


http://www.thingiverse.com/thing:1708240
Baby SCRU-FE - Learn How To Program a Sensor Robot with Arduino!  Continuous Rotation Servos and an Ultra Sonic Sensor - Battery Box Turtlebot Swarm Obstacle Avoidance Robot by rtheiss is licensed under the Creative Commons - Attribution license.
http://creativecommons.org/licenses/by/3.0/

# Summary

https://youtu.be/cZfhbxOQjFA
https://youtu.be/QYsAG1VM7Ss

Teach students how to use ultra-sonic sensors to program a simple obstacle avoidance robot!
Lessons and a sample code are attached in the thing files.  Scroll Down for the activity information.

When my daughter was three she wanted a baby sibling for SCRU-FE (http://www.thingiverse.com/thing:780050).  I said Challenge accepted! and looked through my small robotics parts to make an even smaller and simpler baby robot.  

Use it for Fun, Programming Practice, or to connect additional sensors for a turtle bot swarm to gather information!

This robot uses 9g size continuous rotation servos to simplify design and coding, a #952 Ball caster from Pololu and the treads from #1127 Solarbotics wheels which fit over the round servo horn and have great traction.

It allows students to focus more on sensors rather that trying to figure out motor controller boards and is an awesome first robot to build.

I am hoping to use this robot with my students in the future as the first robotics lesson in High School Robotics, and for Middle School as the introduction to advanced robotics after my beginner robotics lessons (http://www.thingiverse.com/thing:1696610).  A few days worth of programming lessons are included in the thing files.

# Print Settings

Printer Brand: MakerBot
Printer: MakerBot Replicator (5th Generation)
Rafts: Doesn't Matter
Supports: No
Resolution: Low
Infill: 50%

Notes: 
Really easy print with a good flat surface for best adhesion.

# Post-Printing

## Assembly Instructions and Tips

* Attach the US Sensor mount to the body with a 6mm long M3 capscrew from each side.  The size of the print allows the M3 screw to thread into the plastic to allow the angle of the sensor to be adjusted.  If this doesn't seem to thread in you can drill out the holes with a 3mm or 1/8" drill bit and use a 15mm long M3 cap screw and locking nut to secure it instead.  The sensor mount should be angled slightly downward.  Attach the Ultra Sonic HC-SR04 Sensor with magnet wire at the four corners or as I like to with small rubber bands (the rubber bands will help keep the sensor from breaking from handling or a fall, but will have to be replaced regularly)

* Attach the #952 ball caster with no spacers.  First clear out the holes with a 1.5mm drill bit (or 1/16" ).  Then allow the M2 bolts for the caster to thread themselves into the plastic.  If needed add M2 nuts in the nut keepers if your hole size it too large to lock the casters without them.

* Drill out the servo mount holes with a 1/16" or 1.5mm drill bit.  Attach the continuous rotation servos being careful not to pinch the wires as you put them in, and direct the wires through the slots toward the front.  Secure them with M2 x 10mm socket cap screws  and washers (if you don't have them use four included shoulder screws).  Attach the round servo horns with the two smaller headed screws and slip the treads from the solarbotics #1127 tires over them, they should be a secure fit.


* Using Thick double sided tape, thick quick drying glue or hot glue: attach the battery box in a position where the switch will be down and out of the way (behind the head is found to be best).

*See the options for boards and batteries in the Makes tab




# How I Designed This

Designed with 123D Design with simple extrusions and fillets to allow for a strong robot chassis that is super quick and easy to print in two parts to allow for sensor angle adjustment.

![Alt text](https://cdn.thingiverse.com/assets/5e/f4/08/bb/9b/BScrufePlain2.JPG)

![Alt text](https://cdn.thingiverse.com/assets/ae/52/9e/45/8c/ScreenCapture.JPG)

![Alt text](https://cdn.thingiverse.com/assets/84/06/2b/ef/e1/BScrufePlain6.JPG)

# Bill of Materials

(1) Baby SCRU-FE Printed Body
(1) SCRU-FE US Printed Sensor Mount
(2) M3 x 6mm screws to attach printed parts
wire or rubber bands to attach US Sensor
(1) HC-SR04 Ultrasonic sensor
(1) 200mm female/female 4 pin cable
Thick double sided tape or glue to attach parts to the battery box
(1) 4-AAA Battery Holder, Enclosed with Switch
(1)#952 Pololu Ball Caster with 1/2″ Plastic Ball*
(6) M2 x 10mm socket cap screw for casters and servos with regular nuts and washers (nuts may not be needed)
(2) #2820 FEETECH FS90R Micro Continuous Rotation Servo*
(2) #1127 Solarbotics RW2i Wheel (internal set screw)*
Arduino Micro Board & Mini 170 pin Breadboard or UNO and Sensor Shield of your choice or plain board if you plan to permanently solder connections (see example pictures in makes)

*numbered parts purchased from Pololu.com


# Project:  Learn How to Program an Obstacle Avoidance Robot!

## Overview:

In this lesson you will be able to learn how to program using Arduino Boards in order to get a robot to sense objects and move around to avoid them autonomously.

## Objectives:

Students will be able to create their first custom robot and create programs that will allow the robot to maneuver autonomously.

Students will be able to understand the importance of syntax and order in a programming language.

Students will be able to use a computer to control external devices through coding.

## Audience:

This Lesson is advanced robotics for Middle School (grades 6-8) and Foundation of Robotics Unit 2 for High School Robotics (grades 9-12).

## Subjects:

Math, Science, Behavioral Science, Robotics, Linguistics, Technology

## Standards:

NYS MST Technology Standard 5.3: use a computer system to monitor and control external
events and/or systems.

## Activity:

See Handouts located in thing files in order:

*Build your Bot! (3-4 40 minute time blocks)

*Move Your Motors! (two 40 minute time blocks)

*Sense, Think and Move! (two 40 minute time blocks)

*Get Logical! (two 40 minute time blocks)


## Duration:

The Lessons I have designed do not include the robot build which would require 3-4 40 minute periods or two 80 minute periods.

In this unit there are three lessons that will each cover a 40 minute time block.  It is also recommended to review one day after each lesson and allow for student time to complete the three assignments, or try out some code variations that they may come up with.  The total unit should include 5-6 40 minute blocks of time, or three 80 minute blocks of time.

## Preparation:

In order to make this unit succesful you will need a computer, USB cable and the correct download of Arduino IDE that will communicate with the boards you are using.  You will also need an assembled robot for each group, or extra time for robot assembly.

## References:

rtheiss.com
http://www.thingiverse.com/thing:780050
https://www.arduino.cc/

## Rubric and Assessment:

See Handouts

## Handouts:

See thing file for full pdf links

![Alt text](https://cdn.thingiverse.com/assets/89/02/0d/fd/3a/BuildYourBotP1.jpg)

![Alt text](https://cdn.thingiverse.com/assets/8b/8b/e0/0d/ec/BuildYourBotP2.jpg)

![Alt text](https://cdn.thingiverse.com/assets/c8/61/92/fa/5e/Lesson1-MoveYourMotorsP1.jpg)

![Alt text](https://cdn.thingiverse.com/assets/60/62/a3/de/6a/Lesson1-MoveYourMotorsp2.jpg)

![Alt text](https://cdn.thingiverse.com/assets/75/aa/9a/26/73/Lesson2-SenseThinkMoveP1.jpg)

![Alt text](https://cdn.thingiverse.com/assets/8f/4c/61/ad/6d/Lesson2-SenseThinkMoveP2.jpg)

![Alt text](https://cdn.thingiverse.com/assets/9c/a5/78/f7/af/Lesson3-GetLogicalP1.jpg)

![Alt text](https://cdn.thingiverse.com/assets/f0/26/6c/2d/a0/Lesson3-GetLogicalP2.jpg)