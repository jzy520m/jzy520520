#include<stdio.h>
int main()
{
	char a[33];
	int b,c,d;
	scanf("%s %d %d %d",&a,&b,&c,&d);
	printf("%d:", b);
	for (int i = 0; i < d; i++)
	{
		printf("%s", a);


	}
	printf(" %d", c);





	return 0;
}