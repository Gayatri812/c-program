#include<stdio.h>
void swap(int a, int b);
main()
{
	int a,b;
	printf("\n enter a and b=");
	scanf("%d%d",&a,&b);
	swap(a,b); //actual arguments
	printf("\n after swapping a=%d and b=%d",a,b);
}
void swap(int a,int b) //formal paramenter
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
	
