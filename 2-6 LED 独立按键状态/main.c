#include <REGX52.H>
void Delay(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
	while(xms)
	{
	
	i = 12;
	j = 169;
	do
	{
		while (--j);
	} while (--i);
    }
	xms--;
}
void main()
{
	while(1)
	{
		if(P3_1==0)
		{
			
			Delay(20);
			
				Delay(20);
		
			P2_0=0;
		}
		
		
	}
	
}
