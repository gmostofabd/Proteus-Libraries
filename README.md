# 🌟 **Proteus Libraries** 🌟

<p align="center">
<img src="https://github.com/gmostofabd/Proteus-Libraries/blob/744c6c31d987f8810724fba236198f56e6f68f24/assets/Proteus_Libraries_Thumbnail_1.png" alt="Real World look" style="width: 70%; height: auto;" />
</p>

<p align="center">
<img src="https://github.com/user-attachments/assets/be4d9ec7-f65c-4112-a225-0b7a4d3d917f" alt="Steps of Adding Proteus Library" style="width: 70%; height: auto;" />
</p>

<p align="center">
<img src="https://github.com/user-attachments/assets/35050cde-3360-4d2e-ae23-ab015865d7ca" alt="Steps of Adding Proteus Library" style="width: 70%; height: auto;" />
</p>

---

Before diving into the details of **Proteus Libraries**, it’s assumed you have a foundational understanding of **electronics design** and **PCB development**. However, let’s take a quick review of the **Proteus Design Suite** basics to ensure we’re on the same page.

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

In Proteus, **libraries** play a vital role by providing necessary components, models, and footprints for circuit design and simulation. These libraries contain symbols and models of various components like **resistors**, **capacitors**, **transistors**, **ICs**, **microcontrollers**, and more.

---

## ⚙️ **Why Proteus Libraries Matter?**

Proteus libraries provide the building blocks for designing accurate circuits, running simulations, and creating PCB layouts. They include:

- **Schematic components** 🧩 – Symbols representing components in circuit design.
- **Simulation models** 🔄 – Realistic circuit simulations, including microcontrollers like **Arduino**, **PIC**, and **AVR**.
- **PCB footprints** 🛠️ – Layouts for PCB manufacturing.
- **3D models** 🏗️ – For visualizing designs in a 3D environment.

These resources save **time**, reduce **costs**, and streamline the design process. 

---

## **How to Handle Missing Libraries**

If you encounter missing libraries, try these solutions:

- **Check for software updates** for the latest built-in libraries.
- **Import third-party libraries** from trusted platforms like **SnapEDA**, **SamacSys**, or manufacturer websites.
- **Create custom components** by building your own libraries.
- **Reinstall or repair** the software if the installation is incomplete or corrupted.

---

## **Sources of Proteus Libraries**

Libraries in Proteus can be obtained from:

- **Built-in Libraries**: Cover standard components like **resistors**, **capacitors**, **transistors**, and popular ICs like the **74xx series** and **ATmega microcontrollers**.
- **Third-party Libraries**: Import from platforms like **SnapEDA** or **SamacSys** for components not included in the built-in libraries.
- **Custom Libraries**: Create your own libraries with custom symbols, simulation models, and footprints.

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

<div align="center">
 <table>
   <tr>
      <th align="center">**Arduino Boards and Shields**</th> 
      <th align="center">**Sensor Libraries**</th> 
      <th align="center">**Display Devices**</th> 
   </tr> 
   <tr>
      <td align="left">- Arduino Uno <br> - Arduino Nano <br> - Node MCU <br> - Wemos D1 <br></td> 
      <td align="left">- IR Sensor <br> - Flame Sensor <br> - Gas Sensor <br> - Heart Beat Sensor <br> - DS18B20 Temp Sensor <br> - Color Sensor <br> - Ultrasonic Sensor <br> - PIR Sensor <br> - Soil Moisture Sensor <br> - DHT11/22 (Temp + Humi) Sensor <br></td> 
      <td align="left">- LCD 16x2 <br> - LCD 16x4 <br> - LCD 20x4 <br> - LCD 8x2 <br></td>
   </tr>
   <tr>
      <th align="center">**Interface Modules**</th> 
      <th align="center">**Motor Drivers**</th> 
      <th align="center">**Communication Modules**</th> 
   </tr>
   <tr>
      <td align="left">- Bluetooth Library <br> - L298 Motor Driver <br> - RTC DS1307 Module <br></td> 
      <td align="left">- L298N Motor Driver <br> - L293D Motor Driver <br> - H-Bridge Driver <br></td> 
      <td align="left">- ESP8266 WiFi <br> - NRF24L01 Wireless <br> - HC-05 Bluetooth <br></td> 
   </tr>
 </table>
</div>

---

## 🔧 **How to Install a Library?**

1. **Close Proteus (ISIS and ARES)**  
   Make sure both **ISIS** and **ARES** are not running.

2. **Download and Extract the Repo**  
   - Click **Code** and select **Download ZIP**.
   - Extract the files to a convenient location.

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

For some Proteus versions, the `DATA` folder may be located in:

```bash
C:\ProgramData\Labcenter Electronics\Proteus 8 Professional\DATA
```

> **Tip**: If you can’t find the `LIBRARY` folder, enable **Show hidden files and folders** in your system settings.

---

# 🛠️ **Creating Custom Footprints & Adding External 3D CAD Libraries**

### **Step-by-Step: Designing a Custom Footprint**

1. **Open Proteus ARES**  
   Launch the **ARES** module used for PCB design.

2. **Go to 'Library' Tab**  
   Select **Library > Library Manager** from the toolbar.

3. **Create a New Component**  
   - Click **Create New Component**.
   - Define the component’s name and number of pins.

4. **Draw the Footprint**  
   Manually design the footprint based on physical specs like pin spacing and pad size.

5. **Save the Component**  
   Save the component in your custom library.

6. **Test the Footprint**  
   Use the new component in a PCB layout to ensure correct alignment.

---

### **Step-by-Step: Adding External 3D CAD Libraries**

1. **Download the CAD File**  
   Get the 3D model (`.STP`, `.IGS`, or `.3DS`) from **SnapEDA**, **SamacSys**, or component manufacturers.

2. **Import into Proteus ARES**  
   Go to **Tools > 3D Visualization** and import the downloaded CAD file.

3. **Assign the 3D Model to a Footprint**  
   - Select the footprint.
   - Right-click and choose **Properties**.
   - Assign the imported 3D CAD model under the 3D model section.

4. **Preview the 3D Model**  
   Use **3D Visualization** to verify the alignment and accuracy of the model.

---
#    🌐 Explore More Resources
If you're interested in learning more about Proteus, electronics design, or embedded systems, be sure to check out the following resources:

📹 YouTube: @melabBd
📌 Pinterest:
📸 Instagram:
🌐 Google Site:
📝 Blogs:
<p align="center"> <a href="https://www.youtube.com/@melabBd" target="_blank"> <img src="https://via.placeholder.com/150?text=YouTube" alt="YouTube" style="margin: 10px;" /> </a> <a href="https://www.pinterest.com/gmostofabd0" target="_blank"> <img src="https://via.placeholder.com/150?text=Pinterest" alt="Pinterest" style="margin: 10px;" /> </a> <a href="https://www.instagram.com/gmostofabd" target="_blank"> <img src="https://via.placeholder.com/150?text=Instagram" alt="Instagram" style="margin: 10px;" /> </a> <a href="https://melabbd.google.site" target="_blank"> <img src="https://via.placeholder.com/150?text=Google+Site" alt="Google Site" style="margin: 10px;" /> </a> <a href="https://melabbd.blogspot.com" target="_blank"> <img src="https://via.placeholder.com/150?text=Blogs" alt="Blogs" style="margin: 10px;" /> </a> </p>

By following these resources, you can expand your knowledge in electronics design, PCB development, and the use of Proteus libraries. Feel free to reach out via these platforms if you have any questions or suggestions! Happy designing!
