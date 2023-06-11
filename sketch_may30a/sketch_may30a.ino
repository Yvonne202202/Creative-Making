#include <ADCTouch.h>
int ref0, ref1, ref2, ref3;     //reference values to remove offset
const int Key=2;

bool Flag=false;

void setup() 
{
    // No pins to setup, pins can still be used regularly, although it will affect readings
    Serial.begin(9600);
    ref0 = ADCTouch.read(A0, 500);    //create reference values to 
    ref1 = ADCTouch.read(A1, 500);    //account for the capacitance of the pad    
    ref2 = ADCTouch.read(A2, 500);    //create reference values to 
    ref3 = ADCTouch.read(A3, 500);    //account for the capacitance of the pad
//    Serial.print(ref0);             //send actual reading
//    Serial.print("\t");
//    Serial.print(ref1);             //send actual reading
//    Serial.print("\t");    
//    Serial.print(ref2);             //send actual reading
//    Serial.print("\t");
//    Serial.println(ref3);
    pinMode(2,INPUT_PULLUP);
    
} 

void loop() 
{
    if(digitalRead(Key)==LOW)
    {
        delay(20);
        while(digitalRead(Key)==LOW){};
        ref0 = ADCTouch.read(A0, 500);    //create reference values to 
        ref1 = ADCTouch.read(A1, 500);    //account for the capacitance of the pad    
        ref2 = ADCTouch.read(A0, 500);    //create reference values to 
        ref3 = ADCTouch.read(A1, 500);    //account for the capacitance of the pad
//        Serial.print(ref0);             //send actual reading
//        Serial.print("\t");
//        Serial.print(ref1);             //send actual reading
//        Serial.print("\t");    
//        Serial.print(ref2);             //send actual reading
//        Serial.print("\t");
//        Serial.println(ref3);

        Flag=true;
    }
    
    
    int value0 = ADCTouch.read(A0);   //no second parameter
    int value1 = ADCTouch.read(A1);   //   --> 100 samples
    int value2 = ADCTouch.read(A2);   //no second parameter
    int value3 = ADCTouch.read(A3);   //   --> 100 samples
    
    value0 -= ref0;       //remove offset
    value1 -= ref1;
    value2 -= ref2;       //remove offset
    value3 -= ref3;
    
//    Serial.print(value0 > 40);    //send (boolean) pressed or not pressed
//    Serial.print("\t");           //use if(value > threshold) to get the state of a button
//    Serial.print(value1 > 40);    //send (boolean) pressed or not pressed
//    Serial.print("\t");           //use if(value > threshold) to get the state of a button
//    Serial.print(value2 > 40);    //send (boolean) pressed or not pressed
//    Serial.print("\t");           //use if(value > threshold) to get the state of a button
//    Serial.print(value3 > 40);
//    Serial.print("\t\t");
    //调试用，需要屏蔽
    Serial.print(value0);             //send actual reading
    Serial.print("\t");
    Serial.print(value1);             //send actual reading
    Serial.print("\t");    
    Serial.print(value2);             //send actual reading
    Serial.print("\t");
    Serial.println(value3);
    delay(100);
    
    //发送数据给Unity
    if(value0>50)
    {
        Serial.println('1');    
    }
    if(value1>50)
    {
        Serial.println('2');    
    }
    if(value2>50)
    {
        Serial.println('3');    
    }
    if(value3>50)
    {
        Serial.println('4');    
    }
}
