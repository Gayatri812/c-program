#include<stdio.h>
int prime(int n);
main()
{
	 int n,ans;
	 printf("\n enter n =");
	 scanf("%d",&n);
	 ans=prime(n);
	 printf("\n %d",ans);
}
int prime(int n)
{
	int i,count=0;
	
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
	    }
		}
	if(count==2)
	{
		printf("\n It is a prime number");
	}
	else
	{
		printf("\n It is a not prime number");
}
return 0; 
	
}
