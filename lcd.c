#include <wiringPi.h>           //WiringPi kutuphanesi
#include <lcd.h>                //LCD pinleri WiringPi
#include <stdio.h>              //printf kullanmak icin kutuphane
 
//LCD pinleri
 
#define LCD_RS  3               //Register pin
#define LCD_E   0               //Enable Pin
#define LCD_D4  6               //Data pin 4
#define LCD_D5  1               //Data pin 5
#define LCD_D6  5               //Data pin 6
#define LCD_D7  4               //Data pin 7
 
int main()
{
    int lcd;  
    wiringPiSetup();    
    if (lcd = lcdInit (2, 16,4, LCD_RS, LCD_E ,LCD_D4 , LCD_D5, LCD_D6,LCD_D7,0,0,0,0)){
            printf ("lcdInit Hata! \n");
            return -1 ;
    }
    while(1==1)
    {
    lcdPosition(lcd,0,0);           //Satir sutun secim
    lcdPuts(lcd, "   Pardus ARM   "); 
    lcdPosition(lcd,0,1);
	lcdPuts(lcd, "  Topluluk IoT");
	}
    getchar();                      
    lcdClear(lcd);                  //Ekrani temizle
}
