# Smart Seatbelt Reminder System 🚗🔔

This is a prototype I built as a part of my KPIT NOVA Training (C & Embedded Systems).  
It detects seat occupancy and whether a seatbelt is fastened and gives a visual alert if the seat is occupied but the seatbelt is not fastened.

---

## 🔧 Components
- Arduino Uno
- Force Sensitive Resistor (DIY)
- Push Button
- LED (with 220Ω resistor)
- 2.2kΩ resistor for FSR voltage divider
- Breadboard & jumper wires

---

## ⚙️ Logic
| Seat Occupied (FSR) | Seatbelt Fastened (Button) | LED Alert |
|---------------------|----------------------------|-----------|
| No                  | Doesn't Matter             | OFF       |
| Yes                 | Fastened                   | OFF       |
| Yes                 | Not Fastened               | ON        |

---

## 💻 Code
See [`code/seatbelt_reminder.ino`](code/seatbelt_reminder.ino) for the Arduino sketch.

---

## 🎥 Project Demonstration

👉 **[Watch the Explanation Video](https://drive.google.com/file/d/1qQo-11nlXlelZzJ0Vcii1JdHcMzLLR8O/view?usp=sharin)**  
👉 **[Watch the Screen Capture (Simulation + Code)](https://drive.google.com/file/d/1x88V_Sy108ky46mefbtW2RTI8pH2Y4Jy/view?usp=sharing)**

These videos show:
- A verbal explanation of the project and how it works
- A live screen capture of the simulation and code running

---

## 📷 Simulation
![Circuit](images/tinkercad_circuit.png)

---

## 🧾 Report
See [`report/Smart_Seatbelt_Reminder_System_Report.pdf`](report/Smart_Seatbelt_Reminder_System_Report.pdf) for the detailed documentation.

---

## ✨ Reflection
This was my first embedded prototype integrating sensors and logic.  
It helped me understand:
- Input pull-up logic
- Voltage dividers
- Debugging through serial monitor

---

*Created during my KPIT NOVA Training journey. The performance assessment was ongoing at the time of submission. Regardless of the outcome, I’m sharing it here to document my learning and growth.*
