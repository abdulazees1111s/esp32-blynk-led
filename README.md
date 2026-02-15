# ESP32 Blynk IoT – 3 LED Remote Control

## 📌 Project Overview

This project demonstrates a basic Internet of Things (IoT) system using an ESP32 microcontroller and the Blynk IoT platform.

The system allows users to remotely control three LEDs (Red, Yellow, and Green) through the Blynk web dashboard or mobile application over WiFi.

---

## 🎯 Project Objectives

- Understand IoT system architecture
- Connect ESP32 to WiFi and Blynk Cloud
- Control physical devices remotely
- Practice embedded C++ programming
- Implement virtual pins and cloud communication

---

## 🏗️ System Architecture

Smartphone / Web Dashboard  
⬇  
Blynk Cloud Server  
⬇  
ESP32 (WiFi)  
⬇  
LEDs (GPIO Control)

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

## 💻 Software Requirements

- Arduino IDE
- ESP32 Board Package
- Blynk Library (latest version)

---

## 🧠 How It Works

1. ESP32 connects to WiFi.
2. ESP32 authenticates with Blynk Cloud using an Auth Token.
3. When a switch is toggled:
   - Blynk sends a value to a Virtual Pin.
   - `BLYNK_WRITE()` reads the value.
   - The corresponding LED turns ON or OFF.
4. LED status can be sent back to the dashboard.
