#include<stdio.h>
#include<conio.h>
int strong(int a);

int main()
{
 int n, r;
 printf("enter num");
 scanf("%d",&n);
 r=strong(n);
 if(r==0)
 {printf("strong");
}
 else
 {printf("not strong");
 }
 getch();
 return 0;
 
 int strong(int a)
 {
 	int d,i,sum=0,f=1,x=a;
 	{
	
 	while(a>0)
 	{
 		d=a%10;
 		while(d>=10)
 		{
 			f=f*d;
 			d--;
 		}
 		sum=sum=f;
 		f=1;
 	}
 	a=a/10;
 }if (sum==x)
 {return 0;
 }else
 return 1;
 }
		 
