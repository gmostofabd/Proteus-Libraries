# 🌟 **Proteus Libraries** 🌟

Here you'll find a curated **collection** of **Proteus Libraries** for:

- **Simulation Models** 🔬
- **PCB Footprints** 🛠️
- **3D Models** 🏗️
- **Demo Examples (Arduino)** 🎓

These libraries feature a range of **🔧 essential devices** that may not be available directly in your Proteus software. Discover components and models that enhance your simulation and design experience! 🌟

🚀 **Explore, simulate, and innovate** with our libraries and take your projects to the next level! 🚀

---


🔍 **When Do You Need a New Library in Proteus?**

If you're using the **free version of Proteus**, you may often find that certain components or devices are **not available** in the default library. This limitation can affect your ability to simulate more advanced circuits or work with the latest technology.

To overcome this, adding or creating a **new library** is essential, especially when working with:
- **Custom components** 🛠️
- **New microcontrollers** ⚙️
- **Specialized sensors** 🔧

However, the **free version** may not support all custom libraries, which means you'll need to be selective about which components to integrate. **Upgrading** to a full version of Proteus unlocks the ability to add a broader range of components and improves simulation accuracy.

By carefully choosing and integrating **custom libraries**, you can still extend Proteus' capabilities and maintain efficiency in your projects, even with the free version. 🌟

📈 **Tip**: If a specific library is essential for your project, consider exploring **community-shared libraries** that can work with the free version!


<br/>
<hr/>
<br/>

![proteuslogo2](https://github.com/user-attachments/assets/80902421-4440-4199-8832-ccf42d149324) 
<br/>

**Proteus** is a powerful tool used by embedded system developers for its robust simulation capabilities. With its **intuitive** and **user-friendly** interface, Proteus is perfect for both **PCB design** and **circuit simulation**. It allows you to simulate a wide range of **electronic circuits** and **embedded systems**, making the development process more efficient and streamlined.


<br/>
<hr/>
<br/>
Here you can see a **3D model of an irrigation controller circuit PCB** in Proteus software. Do you think all the components shown here are available in your default library? The answer is likely **no**.

In my case, I'm currently using **Proteus version 8.17 (SP0)**, and I’ve encountered the same issue. Some of the parts required for the design were missing from the default library. For example, I couldn't find the necessary **footprint for the 16x2 LCD** used in the controller circuit.

This highlights the importance of having access to **custom libraries** when working on more advanced designs or specific projects. 

![Irregation Controller 2](https://github.com/user-attachments/assets/eadb2674-f198-4313-937b-edfed6aa9870)


The schematic I used in **Proteus ISIS** to convert my PCB is shown below:


![Irregation Controller 1](https://github.com/user-attachments/assets/832e247f-9438-4411-a0b1-71cb9bed474a)

<br/>
<hr/>
<br/>


## 📚 **Table of Contents**

=========================

- 👉 **All Proteus Sensor Libraries**  
  - **Arduino Libraries for Proteus**  
  - **Bluetooth Library for Proteus**  
  - **Heart Beat Sensor for Proteus**  
  - **Infrared Sensor for Proteus**  
  - **L298 Motor Driver for Proteus**  
  - **LCD 16x2 for Proteus**  
  - **PIR Sensor for Proteus**  
  - **Ultrasonic Sensor for Proteus**  
  - **Node MCU Library for Proteus**  
  - **Soil Moisture Sensor for Proteus**

=========================

=========================

- 👉 **Display Devices**  

  - **LCD 16x2 for Proteus**
  - **LCD 16x4 for Proteus**
  - **LCD 20x4 for Proteus**
  - **LCD 8x2 for Proteus** 

=========================

=========================

- 👉 **Arduino Boards and Sheilds**  

  - **Arduino Uno**
  - **Arduino Nano**
  - **Node MCU**
  - **Wemos D1**  

=========================



<p align="center">
  <img src="https://github.com/user-attachments/assets/55330808-4974-4722-9c54-dd81c476b07c" alt="Proteus Libraries" width="400" height="auto">
</p>


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

<p align="center">
  <img src="https://github.com/user-attachments/assets/208401fc-95f1-4e60-80cf-a7ce7dac42e1" alt="Proteus Libraries" width="45%" height="auto">
  <img src="https://github.com/user-attachments/assets/59005c9f-ff5f-40f4-a420-ee0453fc44a8" alt="Proteus Libraries" width="45%" height="auto">
</p>

<br/>
<hr/>
<br/>

# Proteus Library Simulation Demo
In this example, we’ll test the Arduino Proteus Simulation with an LED blinking example.

Arduino Proteus Simulation Project
Now, let’s create an Arduino Proteus Simulation project in ISIS (v8.13)

Open Proteus ISIS

Create New Project

Create a Schematic With the Default Template

<hr/>



