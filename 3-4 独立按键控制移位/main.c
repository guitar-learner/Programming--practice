#include <REGX52.H>

void Delay(unsigned int xms)    //@12.000MHz
{
    unsigned char i, j;
    while(xms--)
    {
        i = 2;
        j = 239;
        do
        {
            while (--j);
        } while (--i);
    }
}
unsigned char LEDNUM=0;
void main()
{
	
	P2_0=0;
	while(1)
	{
		
		if(P3_1==0)
		{
			Delay(20);
			while(P3_1==0)
			Delay(20);
			LEDNUM++;
			if(LEDNUM==8)
				LEDNUM=0;
			P2=~(0x01<<LEDNUM);

		}	

	
	
		
		if(P3_0==0)
		{
			Delay(20);
			while(P3_0==0)
			Delay(20);
			
			
			if(LEDNUM==0)
				LEDNUM=7;
		    else
				LEDNUM--;
			P2=~(0x01<<LEDNUM);
		}
	
	}
	
}
