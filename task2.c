#include <stdio.h>

int sym( int *ptr);

int main ()
{
int f[20]={0};
int i,k;
int *ptr;
ptr=f;
printf("enter 20 values\n");
for (i=0;i<20;i++)
{
scanf("%d", &f[i]);
 }
k= sym (ptr);
if (k==1)
 printf("symmetric\n");
 else
printf("not symmetric\n");
return 0;
}

int sym(int *ptr)
{
 int i;
 for(i=0;i<20;i++)
if (*(ptr+i) == *(ptr+(19-i)))
	return 1;
else
return 0;
}
