# ESP32 Blynk IoT – 3 LED Remote Control System

An Internet of Things (IoT) project that enables remote control of three LEDs using an ESP32 microcontroller and the Blynk IoT cloud platform.

---

## 📌 Project Overview

This project demonstrates how a microcontroller (ESP32) can connect to the internet and control physical hardware remotely using a cloud-based dashboard.

Users can turn ON/OFF three LEDs (Red, Yellow, Green) through the Blynk Web Dashboard or Mobile App in real time.

The project integrates:

- Embedded Systems
- WiFi Communication
- Cloud Computing
- Remote Device Control

---

## 🏗️ System Architecture

Smartphone / Web Dashboard  
⬇  
Blynk Cloud Server  
⬇  
ESP32 (WiFi)  
⬇  
LEDs (GPIO Output)

---

## 🖼️ Project Demonstration

### 🔌 Circuit Diagram
![Circuit Diagram](images/circuit.png)

---

### 📱 Dashboard OFF → LED OFF
![Dashboard OFF](images/dashboard-off.png)
![LED OFF](images/led-off.png)

When the dashboard switch is OFF, the LED connected to ESP32 remains OFF.

---

### 📱 Dashboard ON → LED ON
![Dashboard ON](images/dashboard-on.png)
![LED ON](images/led-on.png)

When the dashboard switch is ON, the LED turns ON instantly via cloud communication.

---

## 🎯 Project Objectives

- Understand IoT architecture
- Connect ESP32 to WiFi
- Integrate ESP32 with Blynk Cloud
- Control hardware remotely
- Practice embedded C++ programming
- Implement virtual pins and cloud communication

---

## 🔧 Hardware Requirements

- ESP32 Development Board
- 3 LEDs (Red, Yellow, Green)
- 3 × 220Ω Resistors
- Breadboard
- Jumper wires

---

## 🔌 Pin Configuration

| LED Color | ESP32 GPIO Pin |
|-----------|---------------|
| Red       | GPIO 13 |
| Yellow    | GPIO 12 |
| Green     | GPIO 14 |

---

## 🖥️ Programming Language

- **C++ (Arduino Framework)**

The project is developed using Embedded C++ within the Arduino IDE environment.

---

## 📚 Libraries Used

### 1️⃣ Blynk Library
- Connects ESP32 to Blynk Cloud
- Manages authentication
- Handles virtual pin communication

### 2️⃣ WiFi.h
- Built-in ESP32 library
- Enables WiFi connectivity

### 3️⃣ WiFiClient.h
- Handles TCP/IP communication between ESP32 and Blynk server

---

## 🛠️ Development Tools

- Arduino IDE
- ESP32 Board Package
- Blynk IoT Platform
- Wokwi Simulator (for simulation testing)

---

## ☁️ Blynk Configuration

### Template Settings
- Hardware: ESP32
- Connection Type: WiFi

### Datastreams

| Virtual Pin | Data Type | Function |
|------------|----------|----------|
| V0 | Integer | Red LED Control |
| V2 | Integer | Yellow LED Control |
| V4 | Integer | Green LED Control |

### Dashboard Setup
- Add 3 Switch widgets
- Assign:
  - Switch 1 → V0
  - Switch 2 → V2
  - Switch 3 → V4

---

## 🧠 How It Works

1. ESP32 connects to WiFi.
2. ESP32 authenticates using Blynk Auth Token.
3. User toggles a switch on the dashboard.
4. Blynk sends the value to a Virtual Pin.
5. `BLYNK_WRITE()` function receives the value.
6. ESP32 turns the corresponding LED ON or OFF.
7. Status is printed in Serial Monitor.

---

## ⚠️ Error Encountered During Development

### Error Message
