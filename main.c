#include<reg51.h>

//signal 1
sbit tl1r = P2^0;      // red
sbit tl1o = P2^1;      // orange
sbit tl1g = P2^2;      // green

//signal 2
sbit tl2r = P2^3;    // red
sbit tl2o = P2^4;     // orange
sbit tl2g = P2^5;    // green

//signal 3
sbit tl3r = P3^0;    // red
sbit tl3o = P3^1;    // orange
sbit tl3g = P3^2;    // green

//signal 4
sbit tl4r = P3^3;    // red
sbit tl4o = P3^4;    // orange
sbit tl4g = P3^5;    // green


void delay(int t);          
void trafficlight(void);
void main()                  // main program
{                 
	P2=0x00;         // turned off the lights
	P3=0x00;        // turned off the lights
	
  while(1)
     {
	trafficlight();	
     }

}
void delay(unsigned long int t)              // delay routine
{
	while(t>0)
	{
	unsigned long int i;
	for(i=1;i<10*1275;i++);
		t--;
	}
}
void trafficlight(void)         // traffic light system program
{
P2= 0x14;  // traffic signal control data
P3= 0x09;
delay(2);   // delay 
P2= 0x21;    // traffic signal control data
P3= 0x09;
delay(10);
P2= 0x21;    // traffic signal control data
P3= 0x0a;
delay(2);  // delay
P2= 0x09;  // traffic signal control data
P3= 0x0c;
delay(10);  // delay
P2= 0x09;  // traffic signal control data
P3= 0x14;
delay(2);  // delay
P2= 0x09;  // traffic signal control data
P3= 0x21;
delay(10);
P2= 0x0a;  // traffic signal control data
P3= 0x21;
delay(2);
P2= 0x0c;  // traffic signal control data
P3= 0x09;
delay(10);
}