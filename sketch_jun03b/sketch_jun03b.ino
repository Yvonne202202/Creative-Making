#include <movingAvg.h>

// Original values were 200 and then 600
const int PressedMaxThreshold = 200;
const int ReleasedMinThreshold = 300;
const byte PinCount = 8;
//改
const byte InputPins[PinCount] = {A1, A2, A3, A4, A5};
const char KeyCodes[PinCount] = {'1', '2', '3', '4','5', '6', '7', '8'};
bool Flag=true;
struct TouchInput
{
    byte analogPin;
    char keycode;
    movingAvg filter = movingAvg(20);
    boolean wasPressed = false;
};

TouchInput Pins[PinCount];


void setup()
{
     Serial.begin(9600);
    for (int i = 0; i < PinCount; i++)
    {
        Pins[i].analogPin = InputPins[i];
        Pins[i].keycode = KeyCodes[i];
        Pins[i].filter.begin();
    }
}




void loop()
{
    for (int i = 0; i < PinCount; i++)
    {
        float currentAverage = Pins[i].filter.reading(analogRead(Pins[i].analogPin));
        boolean previousState = Pins[i].wasPressed;
        boolean currentState = previousState; // Default if in the dead zone
    
        
        if (currentAverage < PressedMaxThreshold)
        {
            currentState = true;      // Pressed
        }
        else if  (currentAverage > ReleasedMinThreshold)
        {
            currentState = false;      // Released
        }
    
    
        if (currentState != previousState)
        {
            if (currentState==true && Flag==true)
            {
                Serial.println(Pins[i].keycode);
                Flag=false;
            }
            else if (currentState==false && Flag==false)
            {
               Serial.println(Pins[i+4].keycode);
               Flag=true;
            }
            Pins[i].wasPressed = currentState;
        }
    }
}
