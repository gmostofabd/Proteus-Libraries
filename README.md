# 🌟 **Proteus Libraries** 🌟

<p align="center">
<img src="https://github.com/gmostofabd/Proteus-Libraries/blob/744c6c31d987f8810724fba236198f56e6f68f24/assets/Proteus_Libraries_Thumbnail_1.png" alt="Real World look" style="width: 90%; height: auto;" />
</p>

---

Before we dive into the details of **Proteus Libraries**, it's assumed that you have a foundational understanding of **electronics design** and **PCB development**. However, let’s take a quick review of the basics of the **Proteus Design Suite** to ensure we’re all on the same page.

---

## 🔍 **What is Proteus?**

**Proteus Design Suite** is a versatile software tool by **Labcenter Electronics** used for:

- **Electronic circuit design** 💡
- **Simulation** 🔄
- **PCB layout** 🛠️

Proteus is widely used in **academia** and **industry** due to its ability to simulate real-world microcontroller code, circuits, and PCB designs, all in a single, easy-to-use interface.

Whether you're testing an **Arduino project** or designing complex industrial circuits, Proteus provides the flexibility needed for everything from hobbyist projects to professional-grade systems.

---

### **Proteus Libraries**

In Proteus, **libraries** play a vital role by providing the necessary components, models, and footprints required for circuit design and simulation. These libraries contain symbols and models of various electronic components like **resistors**, **capacitors**, **transistors**, **ICs**, **microcontrollers**, and more.

---

## ⚙️ **Why Proteus Libraries Matter?**

Proteus libraries provide the building blocks for designing accurate circuits, running simulations, and creating PCB layouts. Here’s what these libraries include:

- **Schematic components** 🧩 – Symbols used to represent components during circuit design.
- **Simulation models** 🔄 – Enable realistic circuit simulations, including microcontrollers like **Arduino**, **PIC**, and **AVR**.
- **PCB footprints** 🛠️ – Physical component layouts for PCB manufacturing.
- **3D models** 🏗️ – For visualizing your designs in a 3D environment.

These resources save **time**, reduce **costs**, and make the design process smoother.

If you are using a **trial version** or a **restricted version** of Proteus, some libraries might be limited or locked behind paywalls. In such cases, access to advanced components, particularly for professional use, may be restricted.

---

## **How to Handle Missing Libraries**

If you encounter missing libraries, here’s what you can do:

- **Check for software updates** regularly to get the latest built-in libraries.
- **Import third-party libraries** from trusted platforms like **SnapEDA**, **SamacSys**, or manufacturers' websites.
- **Create custom components** by building your own libraries tailored to your specific needs.
- **Reinstall or repair** the software if the installation is incomplete or corrupted.

---

## **Sources of Proteus Libraries**

Libraries in Proteus can be obtained from various sources, each offering a range of components and features:

- **Built-in Libraries**: Preloaded with Proteus, covering standard components like **resistors**, **capacitors**, **transistors**, and popular ICs like the **74xx series** and **ATmega microcontrollers**.
- **Third-party Libraries**: For components not available in the built-in libraries, you can import them from sources like **SnapEDA** or **SamacSys**.
- **Custom Libraries**: Proteus allows users to create their own libraries. This is particularly useful for unique components not available elsewhere. You can define custom symbols, simulation models, and footprints to suit your design.

---

<div style="display: flex; justify-content: space-between; flex-wrap: nowrap;">
    <img src="https://github.com/gmostofabd/Proteus-Libraries/blob/7d33b14fbae93d9d05113027c16cbb15cd9bd64c/assets/ISIS.png" alt="Proteus ISIS" style="width: 30%; height: auto;" />
    <img src="https://github.com/gmostofabd/Proteus-Libraries/blob/7d33b14fbae93d9d05113027c16cbb15cd9bd64c/assets/ares.png" alt="Proteus ARES" style="width: 30%; height: auto;" />
    <img src="https://github.com/gmostofabd/Proteus-Libraries/blob/7d33b14fbae93d9d05113027c16cbb15cd9bd64c/assets/CAD.png" alt="3D CAD Models" style="width: 30%; height: auto;" />
<p style="font-size: 18px; font-weight: bold;">Proteus Simulation Models</p>
<p style="font-size: 18px; font-weight: bold;">PCB Footprints</p>
<p style="font-size: 18px; font-weight: bold;">3D CAD Models</p>   
</div>

---

## 📚 **List of Libraries**

### **Arduino Boards and Shields**
- **Arduino Uno**
- **Arduino Nano**
- **Node MCU**
- **Wemos D1**

### **Sensor Libraries**
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

### **Display Devices**
- **LCD 16x2 for Proteus**
- **LCD 16x4 for Proteus**
- **LCD 20x4 for Proteus**
- **LCD 8x2 for Proteus**

### **Interface Modules Libraries**
- **Bluetooth Library for Proteus**
- **L298 Motor Driver for Proteus**
- **RTC (DS1307) Module Libraries**

---

## 🔧 **How to Install a Library?**

1. **Close Proteus (ISIS and ARES)**  
   Ensure both **ISIS** and **ARES** are not running.

2. **Download and Extract the Repo**  
   - Click on the **Code** button and select **Download ZIP**.
   - Extract the contents to a convenient location.

3. **Move Library Files**  
   Copy all `*.LIB` and `*.IDX` files from the extracted folder into the Proteus library directory.

   - For **Proteus 7**:
     ```bash
     C:\Users\<username>\AppData\Local\VirtualStore\Program Files (x86)\Labcenter Electronics\Proteus 7 Professional\LIBRARY
     ```

   - For **Proteus 8**:
     ```bash
     C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\DATA
     ```

---

## 📁 **Alternative DATA Folder Location**

For some Proteus versions, the `DATA` folder might be located in:

```bash
C:\ProgramData\Labcenter Electronics\Proteus 8 Professional\DATA
```

> **Tip**: If you can’t find the `LIBRARY` folder, make sure to check **hidden folders** by enabling **Show hidden files and folders** in your system settings.

---

<p align="center">
  <img src="https://github.com/user-attachments/assets/208401fc-95f1-4e60-80cf-a7ce7dac42e1" alt="Proteus Libraries" width="45%">
  <img src="https://github.com/user-attachments/assets/59005c9f-ff5f-40f4-a420-ee0453fc44a8" alt="Proteus Libraries" width="45%">
</p>

---

## 📘 **Proteus Library Simulation Demo**

In this section, we’ll create and simulate an **Arduino LED blinking** project in **Proteus (v8.13)**:

1. Open **Proteus ISIS**.
2. Create a new project.
3. Design the schematic using the default template.

---
