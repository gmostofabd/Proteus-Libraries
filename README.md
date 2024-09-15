# 🌟 **Proteus Libraries Collection** 🌟

Here you'll find a curated **collection** of **Proteus Libraries** for:

- **Simulation Models** 🔬
- **PCB Footprints** 🛠️
- **3D Models** 🏗️
- **Demo Examples (Arduino)** 🎓

These libraries feature a range of **🔧 essential devices** that may not be available directly in your Proteus software. Discover components and models that enhance your simulation and design experience! 🌟

---
![proteuslogo2](https://github.com/user-attachments/assets/80902421-4440-4199-8832-ccf42d149324) 
<br/>

**Proteus** is a powerful tool used by embedded system developers for its robust simulation capabilities. With its **intuitive** and **user-friendly** interface, Proteus is perfect for both **PCB design** and **circuit simulation**. It allows you to simulate a wide range of **electronic circuits** and **embedded systems**, making the development process more efficient and streamlined.

🚀 **Explore, simulate, and innovate** with our libraries and take your projects to the next level! 🚀

<br/>
![Irregation Controller 2](https://github.com/user-attachments/assets/eadb2674-f198-4313-937b-edfed6aa9870)


Following the highly popular Proteus 7, the platform has evolved with the introduction of Proteus version 8, which brings even more advanced features and improved functionality for modern design and simulation needs. Whether you're working on microcontroller projects, IoT devices, or complex circuit designs, Proteus continues to be a valuable tool in the embedded systems ecosystem.

![Irregation Controller 1](https://github.com/user-attachments/assets/832e247f-9438-4411-a0b1-71cb9bed474a)

![Proteus Library Thumbnail_1](https://github.com/user-attachments/assets/1899fd1e-a4dc-428b-a672-2d73f9e07407)


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


<hr/>

## 🔧 Installation Guide

1. **Close Proteus (ISIS and ARES)**  
   Ensure that both ISIS and ARES are **not running** before proceeding.

2. **Download and Extract the Repo**  
   - Click on the **Code** button on this GitHub page and select **Download ZIP**.  
   - Extract the contents to a convenient location on your computer.

3. **Move Library Files**  
   Copy or move all `*.LIB` and `*.IDX` files from the extracted folder into the correct Proteus library directory.

   - If the path `C:\Users\<username>\AppData\Local\VirtualStore\Program Files (x86)\Labcenter Electronics\Proteus 7 Professional\LIBRARY` exists, place the files here.
   
   - If not, place them in `C:\Program Files (x86)\Labcenter Electronics\Proteus 7 Professional\LIBRARY`.

---

⚠️ **Note**: Make sure to replace `<username>` with your own Windows username in the file path.



## 📁 Alternative DATA Folder Location

For certain versions of Proteus, the `DATA` folder might be located in a different path, such as:

C:\ProgramData\Labcenter Electronics\Proteus 8 Professional\DATA

> 📝 **Note**: Sometimes, the `LIBRARY` folder might be hidden. If you are unable to locate the folder, make sure to check your **hidden folders** as well. You can do this by adjusting your folder options to **show hidden files and folders**.

** Open Proteus (ISIS) and Test
It’s now done, and you can open Proteus (ISIS) and create a new project to test the functionality of the Arduino Proteus Library. And that’s what we’ll be doing in the next section hereafter.


<hr/>

# Proteus Library Simulation Demo
In this example, we’ll test the Arduino Proteus Simulation with an LED blinking example.

Arduino Proteus Simulation Project
Now, let’s create an Arduino Proteus Simulation project in ISIS (v8.13)

Open Proteus ISIS

Create New Project

Create a Schematic With the Default Template

<hr/>



