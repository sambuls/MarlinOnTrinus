# First test
## Wiring
For the first basic test I opted for the Arduino MEGA 2560 as the controller for the TJC4024T032_001 LCD screen.
As a first test, the Arduino was flashed with an empty sketch.

The LCD screen has 1 terminal with 4 pins (+5V/TX/RX/GND). The power pins (+5V/GND) can be connected to the Arduino power pins to power up the LCD screen.
The serial pins of the LCD screen (TX/RX) can be connected to the serial pins of the Arduino. Notice that the RX pin of the LCD must be connected to the TX pin of the Arduino and the TX of the LCD screen must be connected to the RX pin of the Arduino.

When connecting the Arduino via its USB port to a computer, the LCD will light up and the standard Kodama interface will launch.

## Basic interaction
When opening the terminal within arduino and setting its baudrate to 115200 the LCD screen will respond with the message 'M105'
This messages will continue to repeat at approx. 4 seconds.
When the standard Kodama interface launches, it displays 3 icon buttons and 1 menu button. On the Left, a time indicator can be found.

### Temperature Setting
When pressing the temperature icon button, a popup screen will appear to adjust the (?nozzle/bed?) temperature.
The '-' and '+' button will send the  GCODE M104 command with the adjust temperature parameters (e.g. M104 S50).
(Notice that when the popup screen appears, the GCODE M105 command will not be repeatedly transmitted.)

### Speed Setting
Consistent with the 'temperature icond button', the 'speed icon button' will popup a screen where the overal print speed can be adjusted.
The '-' and '+' button will send the GCODE M220 command with the adjusted speed parameter.
(Notice that when the popup screen appears, the GCODE M105 command will not be repeatedly transmitted.)

### Control Setting
Via the 'control' popup screen (Menu>Control), the axis position can be changed.
When sliding one of the axis to a value, a GCODE command will be send to alter the position.
(e.g. G0 F4200 X47 / G0 F4200 Y42 / G0 F4200 Z49).

### Conslusion and findings
* The LCD screen with the standard Trinus Kodama firmware is extremely simpel
* Via an Arduino, basic (lcd)GCODEs, can be captured.


## Basic Implementation
For a basic implementation of the LCD screen on the Trinus running Marlin, I need to find the serial pins of the Marlin Atmega Controller and add them to the pins file.
When connecting the LCD screen to the Marlin motherboard, the RX/TX pins of the LCD screen must match to the TX/RX pins of the Marling Atmega Controller.

Relating to firmware, I need to make a decision...
Here, I will not change the firmware of the LCD screen, keeping the origional working of it.
This approach allows for easy instalation of the standard Trinus LCD screen (without the need of reflashing it).
This implies that I only need to modify the 'Marlin on Trinus' firmware.

Within the 'Marling on Trinus' firmware, I need to add a section that can capture the standard LCD GCODEs and process them.
