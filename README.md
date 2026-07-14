
### 1. Analog Filtering & Frequency Domain Characterization
*Focus: Passive filtering networks, analog signal integration, and frequency-response modeling.*

| Laboratory Module | Analytical Engineering Objective |
| :--- | :--- |
| **Transducer Low-Pass Filtering & Ripple Attenuation** | Attenuation of high-frequency switching noise on variable impedance sensor lines. |
| **High-Pass Structural Vibration & Acoustic Noise Isolation Filter** | High-pass attenuation of mechanical fuselage vibration and cockpit acoustic rumble. |
| **Passive RC Integration for Analog Voltage Reconstruction** | Mathematical integration of PWM signals into clean, continuous-time DC reference voltages. |
| **RC Time-Constant Characterization & Transient Response** | Transient step-response analysis and capacitor leakage characterization under load. |
| **Bode Plot Characterization & $-3\text{ dB}$ Cutoff Verification** | Verification of first-order filter attenuation rates and phase shifts using swept-sine stimulus. |

### 2. Active Analog Signal Processing (Op-Amp Circuits)
*Focus: Real-time decision thresholds, signal amplification, and active analog signal routing.*

| Laboratory Module | Analytical Engineering Objective |
| :--- | :--- |
| **Photodetector Comparator with Dynamic Thresholding** | Closed-loop optical signal thresholding utilizing reference calibration. |
| **Low-Voltage Detection & Multistage Window Comparator** | Power rail under-voltage and over-voltage window detection using hardware comparators. |
| **Small-Signal Acoustic Pre-Amplifier with Active Gain Control** | Active instrumentation-grade op-amp pre-amplification with flat-band frequency response. |
| **Variable Reference Thresholding & Comparator Design** | Single-ended comparators utilizing low-impedance potentiometer references. |
| **Hysteresis-Based Signal Conditioning for Clean Transitions** | Elimination of race conditions and rapid state oscillations using Schmitt triggers. |
| **Analog Peak-Hold Circuit for Fast Transient Capture** | High-speed diode-capacitor peak capture circuit for measuring electrical surges. |

### 3. Sensor Interface & Signal Conditioning
*Focus: Impedance matching, non-linear sensor linearization, and overvoltage circuit protection.*

| Laboratory Module | Analytical Engineering Objective |
| :--- | :--- |
| **Non-Linear Temperature Transducer Scaling & Linearization** | Thermistor circuit design with hardware linearization and active voltage range optimization. |
| **Photo-Transducer Impedance Matching & Signal Stabilization** | Buffer-stage design to prevent loading effects on high-impedance light-dependent transducers. |
| **Transceiver Signal Processing & Active Band-Pass Filtering** | Band-pass active filtering for 40 kHz acoustic transducer echo return path. |
| **IMU Vibration Filtering & Jitter Mitigation** | Accelerometer multi-axis hardware low-pass filtering to isolate flight structural dynamics. |
| **Dynamic Range Scaling & Attenuator Network Design** | Input voltage divider optimization matching sensor limits to $0\text{V} - 3.3\text{V}$ ADC inputs. |
| **Overvoltage Protection & Input ESD Clamping** | Schottky diode clamping networks protecting CMOS inputs from lightning-induced transients. |
| **Optical Sensor Interrupt Interface for Event Triggering** | High-speed photodetector interrupt circuit designed for microsecond event registration. |
| **Analog Band-Pass Audio Analysis & LED Driver Sync Array** | Hardware band-split audio filtering and high-current LED driver array synchronization. |

### 4. Mixed-Signal Integrity & Digitization Characterization (ADC)
*Focus: Statistical signal processing, power noise analysis, and sampling optimization.*

| Laboratory Module | Analytical Engineering Objective |
| :--- | :--- |
| **High-Impedance ADC Input Behavior & Pull-Down Optimization** | Analysis of floating analog pin susceptibility to electrostatic coupling and cross-talk. |
| **Input Decoupling & Charge-Bucket ADC Optimization** | Matching input source impedance and bypass capacitance to SAR ADC sample-and-hold stages. |
| **DSP Software Filter Evaluation for Noise Rejection** | Real-time moving average filter latency-versus-rejection evaluation. |
| **Decimation & Oversampling to Increase Effective Bits (ENOB)** | Signal decimation to trade sampling speed for measurement precision. |
| **Quantization Noise & PSRR Analysis** | Characterization of ADC quantization noise floor changes when switching from clean battery power to noisy USB power. |
| **Mixed-Signal Ground-Loop Analysis & Noise Mitigation** | Differential measurements proving the performance gains of isolating analog and digital ground domains. |

### 5. Contact Bounce & Hardware Debouncing
*Focus: Mechanical state stability, interrupt-driven systems, and timing edge optimization.*

| Laboratory Module | Analytical Engineering Objective |
| :--- | :--- |
| **Characterization of Electromechanical Contact Bounce Transients** | Oscilloscope analysis capturing high-frequency contact-make/break bounce durations. |
| **Hardware-Level Low-Pass Debouncing Networks** | Sizing RC filters and Schmitt-trigger buffers to hardware-debounce physical input lines. |
| **State-Machine Software Debounce Algorithms** | Designing non-blocking software counters for robust physical input registration. |
| **Non-Blocking ISR Edge-Triggered Debounce Logic** | Hardware-interrupt handling utilizing microsecond timestamp delta checks. |
| **Quadrature Encoder State Decoding & Edge Cleaning** | Direct hardware decoding of dual-phase rotational encoders under bounce conditions. |
| **Parallel Input Scanners & Multi-Channel Debounce Array** | Multi-channel matrix input scanning and parallel software debouncing algorithms. |

### 6. Real-Time Timing & Temporal Acquisition
*Focus: Hardware peripheral registers, timer interrupt routines, and input capture.*

| Laboratory Module | Analytical Engineering Objective |
| :--- | :--- |
| **Time-of-Flight (ToF) Spatial Propagation Measurement** | Measuring microsecond-interval echo return pulses to calculate acoustic ranging indices. |
| **Sub-Millisecond Real-Time Latency Measurement System** | High-resolution stopwatch system quantifying physical processing latency. |
| **Input Capture Interrupts for Duty-Cycle Demodulation** | Direct timer hardware input-capture register tracking to read variable duty cycles. |
| **High-Precision Edge-Counting Frequency Meter** | External event counting utilizing hardware-gated interrupt intervals. |
| **Microseconds-Resolution Actuator PWM Control** | Direct registration of microsecond-precision pulses to position safety-critical actuators. |
| **Hardware Timer ISR Optimization & Clock Generation** | Minimizing ISR overhead during high-frequency clock generation toggles. |
| **High-Resolution Hardware Chronometer System** | Multistage hardware counter optimization with millisecond-accurate display. |
| **Duty-Cycle & Pulse-Width Temporal Capture** | Edge-triggered capture registers profiling high-frequency signal stability. |
| **Precision Acoustic Ranging & Distance Profiling** | Multi-point ultrasonic distance validation under environmental air-density changes. |
| **Complex Form-Factor Multi-LED Driver Array Design** | Form-factor PCB layout containing high-density multiplexed status indicator lines. |

### 7. Power Electronics & Thermal Analysis
*Focus: Switched-mode power supply (SMPS) design, thermal dissipation, and transient loads.*

| Laboratory Module | Analytical Engineering Objective |
| :--- | :--- |
| **Switched-Mode Power Supply (SMPS) Efficiency Analysis** | Evaluating DC-DC buck converter efficiency under varying current demands. |
| **Linear Regulator Thermal Dissipation & Stress Profiling** | Multi-layer PCB copper pour testing to maximize thermal dissipation of low-dropout (LDO) regulators. |
| **PDN Transient Stability Testing** | Probing $V_{CC}$ sag and transient recovery times under fast-switching micro-load pulses. |
| **High-Side Gate Drive & Power Path Control Design** | Designing discrete P-channel and N-channel MOSFET switches to control auxiliary power lanes. |
| **CC/CV Charging Profile Emulation & Safe State Analysis** | Characterization of constant-current/constant-voltage charging paths. |
| **Transient Inrush Current Protection & Soft-Start** | Active and passive inrush current limiting for large capacitive load banks. |
| **Multi-Rail Power Sequencing & State Diagnostics** | Designing deterministic power-on delay sequences to safely wake processors. |
| **Low-Dropout Regulator (LDO) Spectral Noise & PSRR** | Testing voltage rail spectral noise density up to $100\text{ kHz}$ to protect high-resolution ADC references. |
| **SMPS Ripple & High-Frequency Noise Auditing** | Probing high-frequency switching transients and layout-dependent parasitic inductances. |
| **Low-Side/High-Side Shunt Current Monitoring** | Utilizing current sense amplifiers to measure microvolt drops across low-value shunt resistors. |

### 8. Physical Layer Signal Integrity & Protocols
*Focus: Serial bus communications, transmission line parameters, and EMI immunity.*

| Laboratory Module | Analytical Engineering Objective |
| :--- | :--- |
| **Bit Error Rate (BER) Analysis Under Induced EMI** | Injecting physical electromagnetic interference into UART lines to record packet corruption thresholds. |
| **Rise-Time Optimization & Bus Capacitance Verification** | Choosing physical pull-up resistors for $400\text{ kHz}$ I2C buses to meet timing rise constraints. |
| **Setup & Hold Timing Verification for High-Speed Bus** | Logic analyzer verification of high-speed SPI timing tolerances under load. |
| **Hardware Bus Sniffing & Frame Validation** | Troubleshooting bus content and frame structures using state analyzers. |
| **Transmission Line Effects & Active Termination Solutions** | Resolving reflection and attenuation issues over extended I2C bus wiring. |
| **Common-Mode Noise Rejection in Differential Buses** | Verifying noise immunity over long-distance RS485 differential communication links. |
| **CAN Bus Frame Snooping & Error Tracking** | Investigating bit-stuffing, error frames, and state transitions of Controller Area Network lines. |
| **Clock Jitter & Baud Rate Tolerance Analysis** | Simulating transceivers running on mismatched external crystals to evaluate communication drift. |
| **High-Speed Clock Ringing, Slew Rate, & Jitter Profiling** | Probing signal integrity of high-speed system clocks over poor trace geometry. |
| **Transmission Line Impedance Matching & Termination** | Implementing parallel, series, and AC terminations on long transmission paths to isolate reflections. |

---

## 🛠️ Verification Tooling

To ensure the hardware validations documented in this suite are industrially sound, the following physical and analytical instruments were used:
*   **Oscilloscopes & Analyzers:** Real-time digital storage oscilloscopes (DSOs) for signal reflection, ripple voltage, and rising edge/overshoot measurement.
*   **Logic Analyzers:** Multi-channel digital analyzers running protocol decoders for UART, SPI, I2C, and CAN.
*   **Simulation Suite:** MATLAB, Python (NumPy, SciPy), and LTspice for mathematical and SPICE behavior modeling before hardware prototyping.
*   **PCB CAD Tooling:** KiCad and Altium Designer for mixed-signal multi-layer schematic layout, ground planes, and stack-up optimization.

---
---

# Guides

- KiCad Guide  
- Altium Guide  
- Fusion360 Guide  
- Matlab Guide
- Arduino Cheatsheet
- Raspberry Pi Cheatsheet
- FPGA Cheatsheet

