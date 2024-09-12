# Proteus Library

![proteuslogo2](https://github.com/user-attachments/assets/80902421-4440-4199-8832-ccf42d149324) 
<br/>
Here you will find a collection of Proteus Libraries for Simulation, PCB Footprint, 3D Models and Demo exaples. The most common devices which are not available directly in your Proteus Software.

Proteus is widely used among embedded system developers for its powerful simulation capabilities. It offers an intuitive and user-friendly interface, making it a go-to solution for both PCB design and circuit simulation. With Proteus, you can easily simulate a variety of electronic circuits and embedded systems, streamlining the development process. In our previous post on LED blinking codes, we demonstrated code simulations using Proteus to showcase its effectiveness in real-time simulation.

![25_1](https://github.com/user-attachments/assets/848b2884-9560-418a-a633-85c9bdfa9055)


Following the highly popular Proteus 7, the platform has evolved with the introduction of Proteus version 8, which brings even more advanced features and improved functionality for modern design and simulation needs. Whether you're working on microcontroller projects, IoT devices, or complex circuit designs, Proteus continues to be a valuable tool in the embedded systems ecosystem.

![Irregation Controller 1](https://github.com/user-attachments/assets/832e247f-9438-4411-a0b1-71cb9bed474a)

![Irregation Controller 2](https://github.com/user-attachments/assets/eadb2674-f198-4313-937b-edfed6aa9870)



![Proteus Library Thumbnail_1](https://github.com/user-attachments/assets/1899fd1e-a4dc-428b-a672-2d73f9e07407)

You can download the Arduino Proteus Library from this repository alongwith properly captions. Then unzip the folder to see its contents, and here is what’s inside.
<br/>

**Table of Contents**
-  Proteus Libraries
-  Components 3D Models (3ds, STP, Step etc)
-  Simulation Demo
-  Required Attachments (Hex files and others)
-  Instructions (if any)

=========================
All Proteus Sensor's Libraries 
👉Arduino  Libraries for Proteus        
👉Bluetooth Library for Proteus     
👉Heart Beat sensor for Proteus   
👉Infrared sensor for Proteus         
👉L298 Motor driver for Proteus    
👉LCD 16x2 for Proteus    
👉PIR Sensor for Proteus                
👉Ultrasonic sensor for Proteus     
👉Node MCU library for Proteus               
👉Soil Moisture            
======================================


======================================
** What to do?**

You have to put library files to libray files in labcenter/proteus/library that has files with extension "lib" and other files models you have to it to model files labcenter/proteus/models.
======================================

![ir2](https://github.com/user-attachments/assets/208401fc-95f1-4e60-80cf-a7ce7dac42e1) ![ir1](https://github.com/user-attachments/assets/59005c9f-ff5f-40f4-a420-ee0453fc44a8)

Unzip the library folder and open it, and you’ll find some folders and files. The Files I’ve marked in the screenshot above, are the model files ( .LIB and .IDX ) that we’ll copy and paste for installing the Arduino Proteus Library. Follow the next section’s step-by-step installation guide.

![Proteus Libraries](https://github.com/user-attachments/assets/55330808-4974-4722-9c54-dd81c476b07c)



***How to Install Proteus Library
**Extract Library Files:
After downloading the library folder, unzip it and copy all the ( .LIB and .IDX ) files.
Open the .zip file containing the model library.

**Extract the contents, typically finding folder like LIB.

**Locate Proteus Library Folder:
Identify your Proteus library folder on your computer. The default location may vary based on your Proteus software version.
For Proteus 8 Professional, it’s often found at:
C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\DATA\LIBRARY

** Copy LIB Files:
Open the LIB folder extracted from the model library.
Copy the files within the LIB folder.
Paste these files into your Proteus Library Folder.

** Alternative DATA Folder Location:
For certain Proteus versions, you might locate the DATA folder in a different path, such as:
C:\ProgramData\Labcenter Electronics\Proteus 8 Professional\DATA
Note: The ProgramData folder could be hidden, so unhide it if needed.

After copying the library files, restart Proteus to apply the changes. Open Proteus and navigate to the Pick Device Window. Confirm that the added model(s) are available for easy selection and integration into your projects.


** Open Proteus (ISIS) and Test
It’s now done, and you can open Proteus (ISIS) and create a new project to test the functionality of the Arduino Proteus Library. And that’s what we’ll be doing in the next section hereafter.

Note: Sometimes, it happens that Library folder is hidden, so if you are unable to find your Library folder then check your hidden folders too.


# Proteus Library Simulation Demo
In this example, we’ll test the Arduino Proteus Simulation with an LED blinking example.

Arduino Proteus Simulation Project
Now, let’s create an Arduino Proteus Simulation project in ISIS (v8.13)

Open Proteus ISIS

Create New Project

Create a Schematic With the Default Template
