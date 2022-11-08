#include <stdio.h>
int main()
{
int a[10], b[10];
int  flag = 0, size1, size2, i, j;
printf("Enter array1 size : ");
scanf("%d",&size1);
printf("\nEnter array1 element : ");
for(i = 0;i < size1;i++)
scanf("%d",&a[i]);
printf("\nEnter array2 size : ");
scanf("%d",&size2);
printf("\nEnter array2 element : ");
for(i = 0;i < size2;i++)
scanf("%d",&b[i]);
printf("\nUnion:");
for(i = 0;i < size1;i++)
printf("%d, ",a[i]);
for(i = 0;i < size2;i++)
{
for(j = 0;j < size1;j++)
{
if(b[i] == a[j])
{
flag = 1;
}
}
if(flag == 0)
{
printf("%d ",b[i]);
}
flag = 0;
}
return 0;
}