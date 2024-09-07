# Proteus-Library-Collection
A collection of Proteus Simulation Model, PCB Footprint and 3D Model Libraries for most common devices which are not available directly in your Software.

Arduino microprocessor boards library for Proteus.
Includes internal circuit, packages and 3D models.
Simulation examples.
![Proteus ISIS BG1](https://github.com/user-attachments/assets/e3456f3a-a653-452d-b408-1ccb1523bfcb)


Table of Contents
Arduino Proteus Library
Arduino Proteus Library Simulation Demo
Arduino Proteus Simulation Remarks
Download Attachments
Conclusion

Arduino Proteus Library
The Arduino Proteus Library is based on the AVR microcontroller’s model that comes with the Proteus ISIS simulator itself, we just need to install an add-on library to have a couple of Arduino boards models included as well as some sensors that you can use later on for your Arduino Projects Simulation.

Arduino Proteus Library Download
You can download the Arduino Proteus Library using the link below or the button near the end of this tutorial. And unzip the folder to see its contents, and here is what’s inside.

Unzip the library folder and open it, and you’ll find some folders and files. The Files I’ve marked in the screenshot above, are the model files ( .LIB and .IDX ) that we’ll copy and paste for installing the Arduino Proteus Library. Follow the next section’s step-by-step installation guide.

Arduino Proteus Library Install
Here is a step-by-step guide for installing Arduino Proteus Library in Proteus ISIS.

1- Copy Library Files
After downloading the library folder, unzip it and copy all the ( .LIB and .IDX ) files.

2- Go to the Proteus libraries folder & Paste
Open the installation directory for proteus which is usually as follows:

C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\DATA\LIBRARY

And paste the files you’ve copied right there.



3- Open Proteus (ISIS) and Test
It’s now done, and you can open Proteus (ISIS) and create a new project to test the functionality of the Arduino Proteus Library. And that’s what we’ll be doing in the next section hereafter.


Arduino Proteus Library Simulation Demo
In this example, we’ll test the Arduino Proteus Simulation with an LED blinking example.

Arduino Proteus Simulation Project
Now, let’s create an Arduino Proteus Simulation project in ISIS (v8.13)

Open Proteus ISIS

Create New Project

Create a Schematic With the Default Template




## Library contents:
**Arduino Micro:**
Simple simulation component (simulates only the microcontroller)
Complete simulation component (include all pins, internal components and USB port)
Packages with 3D models: headers only, soldered and Arduino with headers.

Arduino Nano v3:
Simple simulation component (simulates only the microcontroller)
Complete simulation component (include all pins, internal components and USB port)
Packages with 3D models: headers only, soldered and Arduino with headers.



How to install:
Close Proteus
Copy the contents of the folder "Copy to Proteus folder" to inside your installed proteus folder. There is a link file there that should point you to the correct folder. If not, Proteus is usually inside C:\Program Files (x86)\Labcenter Electronics. By now it should be ready to use. Just search for a component in the Arduino category, from library Arduino Cp
Open the examples from "Simulation_Examples" folder for more important information on how to use
Open files inside "3D Package Examples" folder and click on 3D Visualizer button (below Edit menu) to view the different 3D packages.
Open files inside "Internal Schematics" to view the circuit inside each Arduino.
Enjoy :)

