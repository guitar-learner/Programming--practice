#include <REGX52.H>
#include <INTRINS.H>
void Delay500ms()		//@11.0592MHz
{
	unsigned int xms;
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 22;
	j = 3;
	k = 227;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{
	P2=0xFE;
	Delay500ms();
	P2=0xFD;
	Delay500ms();
	P2=0xFB;
	Delay500ms();
	P2=0xF7;
	Delay500ms();
	P2=0xEF;
	Delay500ms();
	P2=0xDF;
	Delay500ms();
	P2=0xBF;
	Delay500ms();
	P2=0x7F;
	Delay500ms();
}