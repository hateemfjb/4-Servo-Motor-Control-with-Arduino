// C++ code
//

#include <Servo.h>

Servo servo1, servo2, servo3, servo4;

void setup()
{
   servo1.attach(10);
  servo2.attach(11);
  servo3.attach(9);
  servo4.attach(6);
  

  // Sweep each servo for 2 seconds
  for (int angle = 0; angle <= 180; angle += 5) {
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
    
    delay(50);
  }

  // Hold all servos at 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
 
}

void loop()
{
  // Do nothing
}