#include <Morse.h>
Morse morse(8,250);

String message = "Happy Winter";

void setup(){
}

void loop(){
 for (int i = 0; i <= message.length()  - 1; i++)
{
   char current = message[i];
   current = toLowerCase(current);
   morse.displayRemorse(current);       
}
delay(5000);
}

