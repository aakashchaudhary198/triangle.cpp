#include<stdio.h>
int main()
{
	
	int a1,a2,a3,sum;
	printf("enter the angles of the triangle");
	scanf("%d%d%d",&a1,&a2,&a3);
	sum=a1+a2+a3;
	printf("%d",sum);
	if(a1+a2+a3==180)
	{
		printf("triangle in valid");
		
}
	else
	{
	
	
		printf("triangle is invalid");
}
	return 0;
}
