#include <stdio.h> //Intersection_set  (2104920100109)
int main()
{
int a[10], b[10];
int size1, size2;
int present = 0;

printf("Enter array1 size : ");
scanf("%d",&size1);
printf("\nEnter array1 element : ");
for(int i = 0;i < size1;i++)
scanf("%d",&a[i]);
printf("\nEnter array2 size : ");
scanf("%d",&size2);
printf("\nEnter array2 element : ");
for(int i = 0;i < size2;i++)
scanf("%d",&b[i]);
printf("Intersections elements are: ");
for(int i = 0;i < size1;i++)
{
for(int j = 0;j < size2;j++)
{
if(a[i] == b[j]){
    present = 1;
 }

}
if(present)
{
printf("%d ", a[i]);
}
present = 0;
}
return 0;
}