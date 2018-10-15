#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int b[],int size);
void main()
{
int a[50],n,i;
printf("enter the number of elements    ");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
   scanf("%d",&a[i]);
bubble_sort(a,n);
printf("sorted elements are\n");
for(i=0;i<n;i++)
   printf("%d  ",a[i]);
}
void bubble_sort(int b[],int size)
{
 int i,j,temp,flag;
 for(i=0;i<size;i++)
   {
     flag=0;
     for(j=0;j<size-1;j++)
        {
          if(b[j]>b[j+1])
            {  
              temp=b[j];
              b[j]=b[j+1];
              b[j+1]=temp;
              flag=1;
            }
        }
     if(flag==0)
       break;
    }
}
