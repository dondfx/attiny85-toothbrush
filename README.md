# ATtiny85 Toothbrush Firmware 🪥⚡

![CI](https://github.com/dondfx/attiny85-toothbrush/actions/workflows/ci.yml/badge.svg)

> Bare-metal C firmware that turns an ATtiny85 into a three-speed  
> electric-toothbrush controller.  
> **Short press → cycle speeds · Long press → start / stop & ultra-low-power sleep**

---

## ✨ Features

| Category | Highlights |
|----------|------------|
| Deterministic PWM | Phase-correct Timer 0 (~16 kHz on PB0) |
| Three Speed Levels | 100 % · 66 % · 33 % duty via lookup table |
| One-Button UI | INT0 ISR, short vs ≥ 2 s long press |
| Ultra-Low Power | \< 2 µA in `SLEEP_MODE_PWR_DOWN` when stopped |
| Modular Drivers | `motor`, `button`, `power` APIs |
| CI Build | GitHub Actions builds every push |

---

## 🛠 Build & Flash

```bash
git clone https://github.com/dondfx/attiny85-toothbrush.git
cd attiny85-toothbrush
platformio run             # builds firmware.hex
platformio run -t upload   # flash with USBtinyISP

```text
LFUSE 0xE2   HFUSE 0xD7   EFUSE 0xFF
```

```text
include/   headers  
src/       drivers + main  
.github/   (CI workflow will live here)  
platformio.ini  
docs/      screenshots & diagrams  
```
