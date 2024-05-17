#include "IRremote.h"
int pinReceptor = 2;
int totalLed = 9;
const int pines[] = {3,4,5,6,7,8,9,10,11};

void setup() 
{
  for (int i=0; i<totalLed; i++)
  {
    pinMode(pines[i], OUTPUT);
  }
  IrReceiver.begin(pinReceptor, ENABLE_LED_FEEDBACK);
}

void loop() 
{
  if (IrReceiver.decode())
  {
    if (IrReceiver.decodedIRData.command == 0x45)
    {
      apagarTodos();
      prenderLed(1);
    }
    else if (IrReceiver.decodedIRData.command == 0x46)
    {
      apagarTodos();
      prenderLed(2);
    }
    else if (IrReceiver.decodedIRData.command == 0x47)
    {
      apagarTodos();
      prenderLed(3);
    }
    else if (IrReceiver.decodedIRData.command == 0x44)
    {
      apagarTodos();
      prenderLed(4);
    }
    else if (IrReceiver.decodedIRData.command == 0x40)
    {
      apagarTodos();
      prenderLed(5);
    }
    else if (IrReceiver.decodedIRData.command == 0x43)
    {
      apagarTodos();
      prenderLed(6);
    }
    else if (IrReceiver.decodedIRData.command == 0x7)
    {
      apagarTodos();
      prenderLed(7);
    }
    else if (IrReceiver.decodedIRData.command == 0x15)
    {
      apagarTodos();
      prenderLed(8);
    }
    else if (IrReceiver.decodedIRData.command == 0x9)
    {
      apagarTodos();
      prenderLed(9);
    }
    else 
    {
      apagarTodos();
    }
    IrReceiver.resume();
  }
}

void apagarTodos() 
{
  for(int i=0; i<totalLed; i++)
  {
    digitalWrite(pines[i],LOW);
  }
}

void prenderLed(int led)
{
  for(int i=0; i<led; i++)
  {
    digitalWrite(pines[i],HIGH);
  }
}


