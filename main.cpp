#include "mbed.h"
#include "C12832.h"

PwmOut led1(LED1);
C12832 lcd(p5, p7, p6, p8, p11);
AnalogIn pot1(p19);
float g;

int main() {
    lcd.cls();
    lcd.locate(0,0);
 while(1) {
 led1 = pot1;
 float g = pot1;
 lcd.printf("Value of Pot is %.2f\n" ,g);
 lcd.printf("Value of Pot is %.2e\n" ,g);

 wait(1);
 }
}
