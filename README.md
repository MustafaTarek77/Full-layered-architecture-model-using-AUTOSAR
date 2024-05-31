# Full Layered Architecture Model using AUTOSAR

This project implements a full-layered architecture model based on the AUTOSAR (Automotive Open System Architecture) standard. The architecture includes the following layers:

1. **Microcontroller Abstraction Layer (MCAL)**
2. **ECU Abstraction Layer (ECUAL)**
3. **Services Layer**
4. **Application Layer**

## Project Structure

### Microcontroller Abstraction Layer (MCAL)
The MCAL provides a hardware abstraction layer between the microcontroller and the upper software layers. In this project, the MCAL includes:
- **Port Driver**: Manages the configuration of microcontroller pins.
- **DIO (Digital Input/Output) Driver**: Handles digital input and output functionalities.
- **Timer Driver**: Provides timing and counting services.

### ECU Abstraction Layer (ECUAL)
The ECUAL abstracts the ECU-specific details and provides a standardized interface to the upper layers. In this project, the ECUAL includes:
- **LED Driver**: Manages the operations of LEDs.
- **Button Driver**: Handles the operations of push buttons.

### Services Layer
The Services Layer provides various services to the upper layers. In this project, it includes:
- **Scheduler**: Manages task scheduling and execution timing.

### Application Layer
The Application Layer contains the system logic and application-specific functionalities. In this project, it includes:
- **System Logic**: Implements the main application logic that utilizes the underlying layers.
  
## File Structure
```
.
├── MCAL
│   ├── Port
│   ├── DIO
│   └── Timer
├── ECUAL
│   ├── LED
│   └── Button
├── Services
│   └── Scheduler
└── Application
    └── SystemLogic
```

## Contact
For any queries or issues, please open an issue on the GitHub repository or contact the project maintainers.

---

Happy coding!
