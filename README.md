# ESP32 Blynk IoT – 3 LED Remote Control System

---

## 📌 Project Overview

This project demonstrates a basic Internet of Things (IoT) system using an ESP32 microcontroller and the Blynk IoT cloud platform.

The system allows users to remotely control three LEDs (Red, Yellow, and Green) via the Blynk Web Dashboard or Mobile Application over WiFi.

It showcases the integration of embedded systems, cloud computing, and wireless communication.

---

## 🖼️ Project Preview

### 🔌 Circuit Diagram
![Circuit Diagram](images/circuit.png)

### ☁️ System Architecture
![System Architecture](images/architecture.png)

### 📱 Blynk Dashboard
![Blynk Dashboard](images/dashboard.png)

---

## 🎯 Project Objectives

- Understand IoT system architecture
- Connect ESP32 to WiFi
- Integrate ESP32 with Blynk Cloud
- Control hardware remotely via internet
- Practice embedded C++ programming
- Implement virtual pins and cloud communication

---

## 🏗️ System Architecture

Smartphone / Web Dashboard  
⬇  
Blynk Cloud Server  
⬇  
ESP32 (WiFi Connection)  
⬇  
LEDs (GPIO Output Control)

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

The project is written in Embedded C++ using the Arduino framework for ESP32.

---

## 📚 Libraries Used

1. **Blynk Library**
   - Connects ESP32 to Blynk Cloud
   - Manages authentication and virtual pins
   - Handles real-time communication

2. **WiFi.h**
   - Built-in ESP32 library
   - Enables WiFi connectivity

3. **WiFiClient.h**
   - Handles TCP/IP communication with Blynk server

---

## 🛠️ Development Tools

- Arduino IDE
- ESP32 Board Package
- Blynk IoT Platform
- Wokwi Simulator (for testing and simulation)

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
2. ESP32 authenticates with Blynk Cloud using an Auth Token.
3. When a switch is toggled in the dashboard:
   - Blynk sends a value to the corresponding Virtual Pin.
   - `BLYNK_WRITE()` function reads the value.
   - The corresponding LED turns ON or OFF.
4. LED status is displayed in the Serial Monitor.
