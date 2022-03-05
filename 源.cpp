#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int tep = i, n = 1,sum=0;
		while (tep /= 10 )
		{
			n++;
		}
		tep = i;
		while (tep )
		{
			sum+=pow(tep % 10, n);
			tep /= 10;
		}
		if (sum == i&&i>=100)
			printf("%d ",i); 
	}
	return 0;
}