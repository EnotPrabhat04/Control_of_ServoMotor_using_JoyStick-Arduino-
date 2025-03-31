**Servo Motor Control using Joystick and Buzzer.**
This project demonstrates the control of a servo motor using a joystick module, with an additional feature to trigger a buzzer using a button switch. 
It is designed as an interactive system to showcase real-time servo movement based on user input. The code also provides an option to integrate a second servo motor for more complex applications, like robotic arm movement or camera gimbal control.

**Components Used:-**
Arduino Board,Servo Motor(s),Joystick Module (X and Y axis),Push Button,Buzzer,Connecting Wires,Power Supply.

**Working Principle**
**1.Joystick Control:-** The joystick module consists of two potentiometers to measure movement along the X and Y axes. These values are read using the Arduino's analog pins (A0 for X-axis and A1 for Y-axis).

**2.Servo Control:-** The servo motor angle is calculated based on the joystick's input, ranging from 0 to 180 degrees. The motor moves according to the joystick's horizontal movement.

**Optional Dual Servo Control:-**
The code is designed to support the use of two servo motors. If a second servo motor is connected to pin 10, it can be controlled using the Y-axis input from the joystick.
This is particularly useful in applications like:
Robotic arms,Gimbal camera mounts,RC cars or drones
To enable the second servo, simply uncomment the lines in the code.


