# Iot-Guardian-posture-monitoring-and-mitigating-muscle-strain

## 👨‍🔬 Team Members
- *G. Akshitha* – 2111CS050066  
- *P. Sindhu Reddy* – 2111CS050074  
- *K. Charmika Reddy* – 2111CS050085  

*Under the Guidance of:*  
K.V. Siva Prasad Reddy

---

## 📌 Abstract

*Guardian-Posture* is an IoT-based wearable system designed to monitor body posture and mitigate muscle strain, particularly beneficial for elderly individuals and those with sedentary lifestyles. Using sensors like the MPU6050 and GSM technology, the system monitors posture in real-time, provides alerts for improper posture, detects falls, and offers electrical stimulation to prevent musculoskeletal discomfort.

---

## 🎯 Aim

To develop an advanced wearable system that leverages IoT and sensor technology to track, analyze, and improve human posture and muscle health through real-time monitoring, alert systems, and stimulation feedback.

---

## 🎯 Objectives

- To design a wearable system using the MPU6050 Gyroscope and NodeMCU.
- To send real-time posture data to the cloud using ThingSpeak.
- To provide feedback via LCD, buzzer, and vibration.
- To activate muscle stimulation based on posture data.
- To send SMS alerts in case of fall detection using GSM.

---

## 🛠️ Technologies Used

### Sensor Layer
- *MPU6050* – Gyroscope + Accelerometer for motion sensing.

### Wearable Device Layer
- *NodeMCU* – Microcontroller with Wi-Fi.
- *Stimulator* – For rhythmic muscle contraction.

### Communication Layer
- *GSM Module* – SMS alerts on fall detection.
- *ThingSpeak* – Cloud platform for data logging and analysis.

### User Interface Layer
- *LCD Display* – Real-time posture and system status.
- *Manual Switch* – For stimulator control.

### Power Management
- *Battery Powered System*

---

## 🧠 Methodology

1. Wearable sensors continuously capture posture data.
2. Data is sent via NodeMCU to ThingSpeak (cloud).
3. Real-time analysis is done on posture alignment.
4. Alerts are generated through buzzers, vibrations, or messages.
5. Muscle stimulation is triggered as needed.

---

## 💡 Features

- ✅ Real-Time Posture Monitoring  
- ✅ Muscle Strain Detection & Alerts  
- ✅ Fall Detection with GSM SMS Alerts  
- ✅ Customizable Stimulator Control  
- ✅ Data Visualization via Cloud  
- ✅ Lightweight, Wearable, and Battery Operated

---

## 🔍 System Requirements

### Hardware
- NodeMCU (ESP8266)
- MPU6050 Gyroscope Sensor
- LCD Display
- Buzzer
- Vibration Motor
- Stimulator
- GSM Module (SIM800L or similar)
- Switch
- Battery Pack

### Software
- Arduino IDE (for programming)
- Embedded C
- ExpressSCH (circuit design)
- ThingSpeak (IoT data cloud)

---

## 📚 Literature Survey

Referenced works include systems designed for posture detection using sensors in Parkinson’s patients, wearable garments for health tracking, and force-based sitting posture detection. These studies helped shape the architecture of Guardian-Posture.

---

## 🧪 System Analysis

### Existing System Limitations
- Lack of personalization
- High cost and complexity
- Invasive treatments
- Inefficient traditional methods

### Proposed System Advantages
- Personalized feedback
- Active stimulation support
- Compact and wearable
- Cloud integration for analysis

---

## 🏥 Applications

- Elderly Care and Fall Detection
- Workplace Ergonomics
- Physiotherapy and Rehabilitation
- Sports Injury Prevention

---

## 📈 Future Scope

- Integration with robotic limbs
- Advanced machine learning posture prediction
- Android/iOS mobile app interface
- Real-time physiotherapist feedback system

---

## 🙏 Acknowledgements

Special thanks to *K.V. Siva Prasad Reddy, the Department of Internet of Things, and the School of Engineering at **Malla Reddy University*, Hyderabad, for their support and guidance.

---

## 📬 Contact

For any queries or collaborations, feel free to reach out.

---

> This project is developed as part of our final year major project submission in B.Tech Computer Science with specialization in IoT at Malla Reddy University.
