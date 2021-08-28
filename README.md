# Programming-Multiple-Motors-using-Arduino
### This simple project shows programming four different motors using Arduino. It is not possible to program four motors at a time using a general purpose Arduino controller, because the power supply will not be sufficient to drive four motors. So, it is suggested to use an external power supply to satisfy the power requirements. Now we will see the list of basic components that needed for this simple project.

# List of Components/Materials Required:
- General purpose Arduino UNO
- DC Motors (4)
- Bread Board
- Connecting Wires
- External Power Supply

## The figure given below shows The Circuit Diagram.
![alt text](file:///C:/Users/Sai%20Chetan%20Poluri/Downloads/Circuit-diagram-for-Controlling-Multiple-Servo-Motors-with-Arduino.png)
## Now we will see the basic explanation of the Arduino Proragam.
### It is must that we define a buit-in library called `#include <Servo.h>` to use the motors. The next step is to installize the all the four motors as mot1, mot2, mot3, mot4. 
```
Servo mot1;
Servo mot2;
Servo mot3;
Servo mot4;

```
### It's time to connect all the motors to the Arduino through the PWM pins. As per the code given below motor1 (mot1) is connected to the 3rd pin of the Arduino UNO board. It is similar case with the remaining motors. It is must to cross check that the pins are PWM pins only. It is not reliable to use the digital pins for the Servo Motors. 
```
void setup() {
  mot1.attach(3);
  mot2.attach(5);
  mot3.attach(6);
  mot4.attach(9);
}

```
###The next step is to use the void loop() function. The basic function of this project is to rotate all the motors from 0 to 180 degree and then 180 to 0 degree. The delay is also used in the code given below and it is used to increase or decrease the speed of the motor as it effect the increasing or decreasing speed of variable ‘i’.
```
void setup() {
  mot1.attach(3);
  mot2.attach(5);
  mot3.attach(6);
  mot4.attach(9);
}

```
### This is how the given arduino code can be used in the applications that need two or motors. The next level of this application will be synchronization of the motors as per the requirements.
