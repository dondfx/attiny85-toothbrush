# ATtiny85 Toothbrush Firmware 🪥⚡

![CI](https://github.com/dondfx/attiny85-toothbrush/actions/workflows/ci.yml/badge.svg?branch=main)

<p align="center">
    <img src="hardware/docs/attiny85-toothbrush.png" alt="ATtiny85 Toothbrush Project" height="600"/>
</p>

> Bare-metal C firmware that turns an ATtiny85 into a three-speed electric-toothbrush controller.  
> **Short press → cycle speeds · Long press → start / stop & ultra-low-power sleep**

---

## ✨ Features

| Category         | Highlights                                                         |
|------------------|---------------------------------------------------------------------|
| ⚙️ Deterministic PWM | Phase-correct 8-bit PWM via Timer0 (~16 kHz) for smooth motor control |
| 🚀 Three Speed Levels | Lookup table for 100%, 66%, and 33% motor duty cycles              |
| 🖲️ One-Button UI     | INT0-based ISR distinguishes between short and long presses        |
| 🔋 Ultra-Low Power   | \< 5 µA in `SLEEP_MODE_PWR_DOWN` mode for long battery life         |
| 🧩 Modular Drivers   | Clean, decoupled APIs for `motor`, `button`, and `power` subsystems |
| 🔄 Continuous Build  | GitHub Actions CI on every push to `main`                          |

---

## 📦 Overview

This project is a minimal but robust firmware for DIY or commercial electric toothbrush designs.  
It emphasizes **low power consumption**, **predictable timing**, and **user-friendly control**,  
while sticking to **bare-metal C** for full control over performance and size.

Ideal for:

- Battery-powered personal care devices  
- Hobby projects involving brushed DC motors  
- Learning AVR low-level development  

---

## 🛠 Build & Flash

```bash
git clone https://github.com/dondfx/attiny85-toothbrush.git
cd attiny85-toothbrush
platformio run             # builds firmware.hex
platformio run -t upload   # flash with USBtinyISP
```

---

## 🔥 Fuse Settings

Ensure proper clock and power behavior by burning the correct fuses:

```text
LFUSE 0xE2   HFUSE 0xD7   EFUSE 0xFF

To burn the fuses, use this command (replace -c usbtiny if you're using a different programmer):
avrdude -p attiny85 -c usbtiny -U lfuse:w:0xE2:m -U hfuse:w:0xD7:m -U efuse:w:0xFF:m
```

---

## 📁 Project Structure

```text
attiny85-toothbrush/
├── include/        → Header files (motor.h, button.h, power.h)
├── src/            → Source code: drivers + main
├── hardware/
│   ├── gerbers/    → PCB manufacturing files
│   ├── step/       → 3D STEP model of the PCB
│   └── docs/       → Wiring diagram & connection info (PDF)
├── .github/        → GitHub Actions CI workflow
├── platformio.ini  → PlatformIO project config
├── BOM.md          → Bill of Materials with footprints
└── README.md       → This documentation 
```

---

## 📸 Hardware Reference

- MCU: ATtiny85 @ 8 MHz (internal RC oscillator)
- Output: PB0 (OC0A) → Motor PWM control
- Input: PB2 (INT0) → Single button
- Power Mode: Enters SLEEP_MODE_PWR_DOWN after 2 s long press

---

## 🧪 Status

✅ Stable & tested on breadboard and custom PCB
✅ < 5 µA sleep current
🔄 Future: H-bridge motor driver support (e.g., DRV8833)

---

## 📜 License

This project is licensed under the MIT License.

---

Built for fun, learning, and real-world utility. Contributions welcome!