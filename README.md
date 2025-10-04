# 🌞 Autonomous Solar Panel Cleaning Robot

Simulation of an autonomous robot for **cleaning solar panels**, built in **ROS2 Humble** with C++. Designed for precise navigation, coverage path planning, and mission execution.

---

## 🛠 Features

- **Gazebo Simulation:** Full robot simulation to test navigation and cleaning operations.  
- **Localization & Sensor Fusion:**  
  - GPS/IMU/Encoder fusion using **Extended Kalman Filter (EKF)**.  
  - Odometry correction for accurate localization on sloped surfaces.  
- **Coverage Path Planning:**  
  - Integrated **opennav_coverage** for robust area coverage.  
  - **Zigzag planner plugin** for Nav2 as a lightweight alternative.  
- **Mission Execution:**  
  - **Behavior Trees** to coordinate cleaning, navigation, and docking.  
  - Simulated **battery management** using a linear discharge model.  

---

## 🧰 Tech Stack

| Area                     | Tools & Libraries                      |
|---------------------------|---------------------------------------|
| Programming              | C++, Python                            |
| Robotics Framework       | ROS2 Humble, Nav2                      |
| Simulation               | Gazebo                                  |
| Sensor Fusion & Estimation | EKF                 |
| Monitoring & Debugging    | PlotJuggler, RViz, rqt                 |

---

## 🚀 Getting Started

1. **Clone the repository**
```bash
git clone https://github.com/Mmanell/Autonomous-Solar-Panels-Cleaning-Robot.git
cd Autonomous-Solar-Panels-Cleaning-Robot
