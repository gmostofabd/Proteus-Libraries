# 🌟 **Proteus Libraries** 🌟

---
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

![Proteus Logo](https://github.com/user-attachments/assets/80902421-4440-4199-8832-ccf42d149324)

<br/>
<hr/>
<br/>

**Proteus** is a powerful tool used by embedded system developers for its robust simulation capabilities. With its **intuitive** and **user-friendly** interface, Proteus is perfect for both **PCB design** and **circuit simulation**. It allows you to simulate a wide range of **electronic circuits** and **embedded systems**, making the development process more efficient and streamlined.

---

Here’s a **3D model of an irrigation controller circuit PCB** in Proteus software. Not all components shown here are available in the default library. 

In my case, using **Proteus version 8.17 (SP0)**, I faced a similar challenge. For instance, the **footprint for the 16x2 LCD** required for the design was missing from the default library, emphasizing the need for **custom libraries**.

![Irrigation Controller](https://github.com/user-attachments/assets/eadb2674-f198-4313-937b-edfed6aa9870)

---

## 📚 **Table of Contents**

=========================

- 👉 **Arduino Boards and Shields**  

  - **Arduino Uno**
  - **Arduino Nano**
  - **Node MCU**
  - **Wemos D1**  

=========================

- 👉 **Sensors Libraries**  

  - **IR Sensor**
  - **Flame Sensor**
  - **Gas Sensor**
  - **Heart Beat Sensor**
  - **Temperature Sensor (DS18B20)**
  - **Color Sensor**
  - **Ultrasonic Sensor**
  - **PIR Sensor**
  - **Soil Moisture Sensor**
  - **DHT11/22 (Temp + Humi) Sensor** 

=========================

- 👉 **Display Devices**  

  - **LCD 16x2 for Proteus**
  - **LCD 16x4 for Proteus**
  - **LCD 20x4 for Proteus**
  - **LCD 8x2 for Proteus** 

=========================

- 👉 **Interface Modules Libraries**  
  - **Bluetooth Library for Proteus**  
  - **L298 Motor Driver for Proteus**
  - **RTC (DS1307) Module Libraries**  

=========================

![Proteus Libraries](https://github.com/user-attachments/assets/55330808-4974-4722-9c54-dd81c476b07c)

---

## 🔧 Installation Guide

1. **Close Proteus (ISIS and ARES)**  
   Ensure both ISIS and ARES are **not running** before proceeding.

2. **Download and Extract the Repo**  
   - Click on the **Code** button on this GitHub page and select **Download ZIP**.  
   - Extract the contents to a convenient location on your computer.

3. **Move Library Files**  
   Copy all `*.LIB` and `*.IDX` files from the extracted folder into the correct Proteus library directory.

   - For Proteus 7, the path is usually:
     ```bash
     C:\Users\<username>\AppData\Local\VirtualStore\Program Files (x86)\Labcenter Electronics\Proteus 7 Professional\LIBRARY
     ```

   - For Proteus 8, place them in:
     ```bash
     C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\DATA
     ```

---

⚠️ **Note**: Replace `<username>` with your Windows username in the file path.

---

## 📁 Alternative DATA Folder Location

For some Proteus versions, the `DATA` folder might be located in:

```
C:\ProgramData\Labcenter Electronics\Proteus 8 Professional\DATA
```

> 📝 **Tip**: If you can’t find the `LIBRARY` folder, make sure to check **hidden folders** by adjusting your folder options to **show hidden files and folders**.

---

<p align="center">
  <img src="https://github.com/user-attachments/assets/208401fc-95f1-4e60-80cf-a7ce7dac42e1" alt="Proteus Libraries" width="45%">
  <img src="https://github.com/user-attachments/assets/59005c9f-ff5f-40f4-a420-ee0453fc44a8" alt="Proteus Libraries" width="45%">
</p>

---

# Proteus Library Simulation Demo

In this section, we’ll create and simulate an **Arduino LED blinking** project in **Proteus (v8.13)**:

1. Open Proteus ISIS.
2. Create a new project.
3. Design the schematic using the default template.

---
