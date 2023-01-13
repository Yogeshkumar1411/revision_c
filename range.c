#include<stdio.h>
typedef unsigned int ui_32;
typedef signed int si_32;
typedef signed short int ssi_32;
typedef signed short int ssui_32;

//#define ui 
//#define si
#define ssi
#define ssui
int main()
{
	ui_32 a=1,ui_count=0;
	si_32 b=1,si_count=0;
	ssi_32 c=1,ssi_count=0;
	ssui_32 d=1,ssui_count=0;
	signed long int e;
	unsigned long int f;
////////////////////////////////////////////////////////////////
#ifdef ui
	while(a++)
	{
		ui_count++;
	}
	printf("ui_count = %u\n",ui_count);
#endif
////////////////////////////////////////////////////////////////	
#ifdef si
	while(++b)
	{
		si_count++;
		if(b&1<<31)
		{
			printf("si_count = %d\n",si_count);
			printf("b = %d\n",b);
			break;
		}
			
	}
//	printf("si_count = %u\n",si_count);
#endif
///////////////////////////////////////////////////////////////
#ifdef ssi
        while(c++)
        {
                ssi_count++;
        }
        printf("ssi_count = %u\n",ssi_count);
#endif
///////////////////////////////////////////////////////////////	
#ifdef ssui
        while(++d)
        {
                ssui_count++;
                if(d&1<<31)
                {
                        printf("ssui_count = %d\n",ssui_count);
                        printf("b = %d\n",d);
                        break;
                }

        }
//      printf("si_count = %u\n",si_count);
#endif
///////////////////////////////////////////////////////////////
}
