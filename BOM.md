# 📦 Bill of Materials – ATtiny85 Toothbrush Controller

This document outlines the key components required to assemble the ATtiny85-based toothbrush controller circuit.

## 🔧 Components List

| **#** | **Component**   | **Value / Part Number** | **Description**                          | **Package / Notes**                  |
|-------|------------------|-------------------------|------------------------------------------|--------------------------------------|
| 1     | U1               | ATtiny85                | 8-bit AVR Microcontroller                | DIP-8                                |
| 2     | Q1               | 2N7002                  | N-Channel MOSFET                         | SOT-23                               |
| 3     | D2               | 1N4007                  | General Purpose Rectifier Diode          | DO-41                                |
| 4     | R2               | 1 kΩ                    | Pull-up resistor for push button         | 1/4W, 5%                             |
| 5     | R3               | 1 kΩ                    | Gate resistor for MOSFET                 | 1/4W, 5%                             |
| 6     | R4               | 10 kΩ                   | Pull-down resistor for MOSFET gate       | 1/4W, 5%                             |
| 7     | C1               | 100 nF                  | Debounce capacitor for push button       | Ceramic, 50V                         |
| 8     | C2               | 100 nF                  | Flyback suppression capacitor            | Ceramic, 50V                         |
| 9     | Push Button      | SPST                    | Momentary tactile push-button            | Through-hole                         |
| 10    | Motor            | 5V DC Motor             | Small brushed DC motor                   | Direct drive                         |

---

## 🔌 Notes

- **C2** is used for noise suppression across the motor terminals.
- **D2 (1N4007)** provides flyback diode protection for the motor.
- **Q1 (2N7002)** acts as a low-side switch for motor control.
- Ensure **C1** is placed as close as possible to the push-button input to minimize debounce issues.

