# 📦 Bill of Materials – ATtiny85 Toothbrush Controller

This document outlines the key components required to assemble the ATtiny85-based toothbrush controller circuit.

## 🔧 Components List

| **#** | **Component**   | **Value / Part Number** | **Description**                          | **Package / Footprint**              |
|-------|------------------|-------------------------|------------------------------------------|--------------------------------------|
| 1     | U1               | ATtiny85                | 8-bit AVR Microcontroller                | QFN50P400X400X80-21                  |
| 2     | Q1               | 2N7002                  | N-Channel MOSFET                         | SOT-23                               |
| 3     | D2               | 1N4007                  | General Purpose Rectifier Diode          | SMA                                  |
| 4     | R2               | 1 kΩ                    | Pull-up resistor for push button         | 0805 (2012 metric)                   |
| 5     | R3               | 1 kΩ                    | Gate resistor for MOSFET                 | 0805 (2012 metric)                   |
| 6     | R4               | 10 kΩ                   | Pull-down resistor for MOSFET gate       | 0805 (2012 metric)                   |
| 7     | C1               | 100 nF                  | Debounce capacitor for push button       | 0805 (2012 metric)                   |
| 8     | C2               | 100 nF                  | Flyback suppression capacitor            | 0805 (2012 metric)                   |
| 9     | Push Button      | SPST                    | Momentary tactile push-button            | Correct (as per schematic)           |
| 10    | Motor            | 5V DC Motor             | Small brushed DC motor                   | Correct (as per schematic)           |

---

## 🔌 Notes

- **C2** is used for noise suppression across the motor terminals.
- **D2 (1N4007)** in SMA package provides flyback protection for the motor.
- **Q1 (2N7002)** controls motor power via low-side switching.
- **All 0805 resistors/capacitors** are standard SMT parts suitable for automated assembly.
- **U1 (ATtiny85)** in QFN package requires proper thermal pad handling during reflow.

