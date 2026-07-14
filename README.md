Reference: Art of Electronics: Student Manual co-authored by Thomas C. Hayes and Paul Horowitz 
---

## 1. Analog Filtering & Frequency Domain Characterization

*Focus: Passive filtering, signal integration, and frequency-response modeling.*

* **Low-Pass Filter for Noisy Potentiometer** $\rightarrow$ Transducer Low-Pass Filtering & Ripple Attenuation
* **High-Pass Audio Filter** $\rightarrow$ High-Pass Structural Vibration & Acoustic Noise Isolation Filter
* **PWM Smoothing Experiment** $\rightarrow$ Passive RC Integration for Analog Voltage Reconstruction
* **Capacitor Charge/Discharge Timing** $\rightarrow$ RC Time-Constant Characterization & Transient Response Modeling
* **Frequency Cutoff Experiment** $\rightarrow$ Bode Plot Characterization & $-3\text{ dB}$ Cutoff Frequency Verification

---

## 2. Active Analog Signal Processing (Op-Amp Circuits)

*Focus: Real-time decision-making, signal amplification, and analog thresholding.*

* **Light Threshold Detector** $\rightarrow$ Photodetector Comparator with Dynamic Thresholding
* **Battery Voltage Indicator** $\rightarrow$ Low-Voltage Detection & Multistage Window Comparator
* **Simple Microphone Amplifier** $\rightarrow$ Small-Signal Acoustic Pre-Amplifier with Active Gain Control
* **Comparator with Potentiometer Reference** $\rightarrow$ Variable Reference Thresholding & Comparator Design
* **Schmitt Trigger Switch Cleaner** $\rightarrow$ Hysteresis-Based Signal Conditioning for Clean State Transitions
* **Peak Detector** $\rightarrow$ Analog Peak-Hold Circuit for Fast Transient Capture

---

## 3. Sensor Interface & Signal Conditioning

*Focus: Scaling, stabilizing, and isolating analog sensors in hostile electromagnetic environments.*

* **Thermistor Voltage Scaling** $\rightarrow$ Non-Linear Temperature Transducer Scaling & Linearization
* **LDR Stabilization Circuit** $\rightarrow$ Photo-Transducer Impedance Matching & Signal Stabilization
* **Ultrasonic Sensor Filtering** $\rightarrow$ Transceiver Signal Processing & Active Band-Pass Filtering
* **Accelerometer Smoothing Circuit** $\rightarrow$ IMU Vibration Filtering & Jitter Mitigation
* **Voltage Divider Scaling Experiment** $\rightarrow$ Dynamic Range Scaling & Attenuator Network Design
* **Analog Sensor Protection Circuit** $\rightarrow$ Overvoltage Protection & Input ESD Clamping
* **DinoRun4 with LDR Input System** $\rightarrow$ Optical Sensor Interrupt Interface for Real-Time Event Triggering
* **Lights Audio Sync** $\rightarrow$ Analog Band-Pass Audio Analysis & LED Driver Sync Array

---

## 4. Mixed-Signal Integrity & Digitization Characterization (ADC)

*Focus: Noise mitigation, statistical signal processing, and resolution enhancement.*

* **Floating ADC Readings Experiment** $\rightarrow$ High-Impedance ADC Input Behavior & Pull-Down Optimization
* **Capacitor Effect on ADC Stability** $\rightarrow$ Input Decoupling & Charge-Bucket ADC Optimization
* **Moving Average Filter Test** $\rightarrow$ DSP Software Filter Evaluation for High-Frequency Noise Rejection
* **Oversampling Experiment** $\rightarrow$ Decimation & Oversampling to Increase Effective Number of Bits (ENOB)
* **USB vs Battery ADC Comparison** $\rightarrow$ Quantization Noise & Power Supply Rejection Ratio (PSRR) Analysis
* **Ground Noise Experiment** $\rightarrow$ Mixed-Signal Ground-Loop Analysis & Common-Mode Noise Mitigation

---

## 5. Contact Bounce & Hardware Debouncing

*Focus: State machine stability and transient mitigation.*

* **Button Bounce Oscilloscope Capture** $\rightarrow$ Characterization of Electromechanical Contact Bounce Transients
* **RC Hardware Debounce** $\rightarrow$ Hardware-Level Low-Pass Debouncing Networks
* **Software Debounce Test** $\rightarrow$ State-Machine Software Debounce Algorithms
* **Interrupt Debounce Experiment** $\rightarrow$ Non-Blocking ISR Edge-Triggered Debounce Logic
* **Rotary Encoder Debounce** $\rightarrow$ Quadrature Encoder State Decoding & Edge Cleaning
* **Multi-Button Debounce Tester** $\rightarrow$ Parallel Input Scanners & Multi-Channel Debounce Array

---

## 6. Real-Time Timing & Temporal Acquisition

*Focus: Hardware timers, interrupt-driven systems, and deterministic measurement.*

* **Ultrasonic Echo Timing** $\rightarrow$ Time-of-Flight (ToF) Spatial Propagation Measurement
* **Reaction Timer** $\rightarrow$ Sub-Millisecond Real-Time Latency Measurement System
* **PWM Duty-Cycle Measurement** $\rightarrow$ Input Capture Interrupts for Duty-Cycle Demodulation
* **Frequency Counter** $\rightarrow$ High-Precision Edge-Counting Frequency Meter
* **Servo Pulse Timing** $\rightarrow$ Microseconds-Resolution Actuator Pulse-Width Modulation (PWM) Control
* **Timer Interrupt LED Blinker** $\rightarrow$ Hardware Timer ISR Optimization & Deterministic Clock Generation
* **Stopwatch Using Hardware Timers** $\rightarrow$ High-Resolution Hardware Chronometer System
* **Pulse-Width Measurement** $\rightarrow$ Duty-Cycle & Pulse-Width Temporal Capture (Input Capture Mode)
* **Ultrasonic Depth Measurement** $\rightarrow$ Precision Acoustic Ranging & Distance Profiling
* **Valentine's Heart PCB** $\rightarrow$ Complex Form-Factor Multi-LED Driver Array Design

---

## 7. Power Electronics & Thermal Analysis

*Focus: Efficiency, ripple rejection, and thermal budgets in high-stress environments.*

* **Buck Converter Efficiency Experiment** $\rightarrow$ Switched-Mode Power Supply (SMPS) Efficiency Analysis
* **LDO Thermal Analysis** $\rightarrow$ Linear Regulator Thermal Dissipation & Junction-to-Ambient Stress Profiling
* **Load Transient Response Test** $\rightarrow$ PDN (Power Distribution Network) Transient Stability Testing
* **MOSFET High-Side Switching** $\rightarrow$ High-Side Gate Drive & Power Path Control Design
* **Battery Charging Basics** $\rightarrow$ CC/CV Charging Profile Emulation & Safe State Analysis
* **Inrush Current Limiter** $\rightarrow$ Transient Inrush Current Protection & Soft-Start Characterization
* **Power Sequencing Experiment** $\rightarrow$ Multi-Rail Power Sequencing & State Diagnostics
* **Voltage Regulator Noise Analysis** $\rightarrow$ Low-Dropout Regulator (LDO) Spectral Noise & PSRR Measurement
* **DC-DC Converter Ripple Measurement** $\rightarrow$ Switched-Mode Power Supply Ripple & High-Frequency Noise Auditing
* **Current Sense Amplifier Experiment** $\rightarrow$ Low-Side/High-Side Shunt Current Monitoring

---

## 8. Physical Layer Signal Integrity & Protocols

*Focus: Noise injection, transmission line effects, and robust bus communications.*

* **UART Noise Injection Experiment** $\rightarrow$ Bit Error Rate (BER) Analysis Under Induced EMI
* **I2C Pull-Up Resistance Study** $\rightarrow$ Rise-Time Optimization & Bus Capacitance Verification
* **SPI Clock Timing Analysis** $\rightarrow$ Setup & Hold Timing Verification for High-Speed Bus Communication
* **Logic Analyzer Protocol Decoding** $\rightarrow$ Hardware Bus Sniffing & Frame Validation
* **Long-Wire I2C Failure Analysis** $\rightarrow$ Transmission Line Effects & Active Termination Solutions
* **RS485 Differential Signaling Basics** $\rightarrow$ Common-Mode Noise Rejection in Long-Distance Differential Buses
* **CAN Bus Message Monitoring** $\rightarrow$ Controller Area Network (CAN) Frame Snooping & Error Tracking
* **UART Baud Rate Error Experiment** $\rightarrow$ Clock Jitter & Baud Rate Tolerance Analysis
* **Clock Signal Integrity Measurement** $\rightarrow$ High-Speed Clock Ringing, Slew Rate, & Jitter Profiling
* **Signal Ringing and Termination Experiment** $\rightarrow$ Transmission Line Impedance Matching & Series/Parallel Termination

---

# Guides

- KiCad Guide  
- Altium Guide  
- Fusion360 Guide  
- Matlab Guide
- Arduino Cheatsheet
- Raspberry Pi Cheatsheet
- FPGA Cheatsheet

