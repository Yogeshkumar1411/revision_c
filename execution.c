#include<stdio.h>
#include<time.h>
int main()
{
	clock_t start,end;
	int a;
//	start = clock();
	printf("Enter the number\n");
	scanf("%d",&a);
	printf("number = %d\n",a);
	end = clock();
	double duration = ((double)end)/CLOCKS_PER_SEC;
	printf("%f\n",duration);
}
