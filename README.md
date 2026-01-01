# Arduino-Based Vending Machine

An **Arduino-controlled vending machine prototype** designed to dispense items
based on user input and payment detection.  
The system integrates sensors, stepper motors, and an LCD display to simulate
a real-world vending machine operation.

This project was developed as part of my **Mechatronics Engineering coursework** <br>
August 2022

---

## 🧠 Project Overview

- Uses an **Arduino Uno** as the main controller
- Detects coin insertion using an **IR sensor**
- Accepts user input via **push buttons**
- Displays system status and messages on an **LCD (I2C)**
- Controls **stepper motors** using ULN2003 driver modules
- Uses a **helix (spiral) coil mechanism** for physical product dispensing
- Designed as a **low-cost vending machine prototype**

---

## ⚙️ System Working Principle

1. User inserts a coin through the coin insertion slot
2. **IR sensor detects the presence of the coin**
3. Arduino enables product selection
4. User selects a product using push buttons
5. Arduino processes the selection logic
6. The corresponding stepper motor is activated
7. The motor rotates a **helix (spiral) coil**
8. Rotation of the helix pushes the product forward
9. The product exits through the dispensing slot
10. LCD displays system status and messages

---

## 🧰 Hardware Components Used

- Arduino Uno
- IR Sensor Module (coin detection)
- Stepper Motors (28BYJ-48)
- ULN2003 Stepper Motor Driver Modules
- Push Buttons
- LCD Display with I2C Module
- Breadboard and jumper wires
- Power supply

---

## 💻 Software Used

- Arduino IDE
- Embedded C/C++

---

## ✨ Features

- Coin presence detection using IR sensor
- Physical product dispensing using helix coil mechanism
- Independent motor control for each product slot
- Real-time system feedback via LCD
- Modular and expandable design

---

## ⚠️ Limitations

- IR sensor detects only **coin presence**, not coin value
- Mechanical dispensing accuracy depends on product size and alignment
- Prototype-level implementation

---

## 🔮 Future Improvements

- Integration of coin or RFID-based payment system
- Inventory tracking and stock management
- Improved mechanical dispensing mechanism
- EEPROM-based data storage
- Wireless monitoring (IoT integration)

---

## 👥 Project Team & Contribution

This project was developed as a **group project** as part of
Mechatronics Engineering coursework.

---

## 📝 License

This project is released under the MIT License.
