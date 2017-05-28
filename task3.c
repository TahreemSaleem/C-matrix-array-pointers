#include <stdio.h>
#include <math.h>

double distance(int *ptr1,int *ptr2,int *ptr3,int *ptr4);

int main ()
{int x1,x2,y1,y2; 
int *ptrx1; int *ptry1;int *ptrx2; int *ptry2;
	printf("enter the x1 coordinate");
	scanf("%d",&x1);
printf("enter the y1 coordinate");
	scanf("%d",&y1);
	printf("enter the x2 coordinate");
	scanf("%d",&x2);
printf("enter the y2 coordinate");
	scanf("%d",&y2);
	ptrx1 = &x1;
	ptry1 = &y1;
	ptrx2 = &x2;
	ptry2 = &y2;
	printf("the distance is :%.2fl\n", distance(ptrx1,ptry1,ptrx2,ptry2));
return 0;
}
 double distance(int *ptr1,int *ptr2,int *ptr3,int *ptr4)
	{
		double d;double c;
		c=((*ptr3-*ptr1)^2+(*ptr4-*ptr2)^2);
 d= sqrt(c);
	return d;
}
