#include<reg51.h>
sbit led=P2^0;
//void timer1mode1(unsigned char);
void main()
{
	TMOD=0x10;
	EA=ET1=TR1=1;
	TH1=0x3C;
	TL1=0xAF;
	while(1);
}
void timer1mode1(void) interrupt 3
{
	TR1=0;
  led=!led;
	TH1=0x3C;
	TL1=0xAF;
	TR1=1;
}