#include<stdio.h>
void merge(int a[], int b[], int i, int j, int c[])
{
int i = 0, j = 0, k = 0;

while (i< n1 && j < n2)
{
if (a[i] < b[j])
c[k++] = a[i++];
else
c[k++] = b[j++];
}

while (i < n1)
c[k++] = a[i++];

while (j < n2)
c[k++] = b[j++];
}
int main()
{
 int n,i,step,a[50],b[50],c[50],temp=0,j,m;
 
 printf("enter the elements of the 1st array");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
printf("enter the elements of the 2nd array");
 for(j=0;j<m;j++)
 {
   scanf("%d",&b[j]);
 }
for(step=0;step<n-1;step++)
{
 for(i=0;i<n-step-1;i++)
 {
  if(a[i]>a[i+1])
  {
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
  }
 }
}
printf("1st sorted array is\n");
for(i=0;i<n;i++)
{
  printf("%d",a[i]);
}
for(step=0;step<m-1;step++)
{
 for(i=0;i<m-step-1;i++)
 {
  if(b[j]>b[j+1])  
  {
    temp=b[j];
    b[j]=b[j+1];
    b[j+1]=temp;
  }
 }
}
printf("\n2nd sorted array is\n");
for(j=0;j<n;j++)
{
  printf("%d",b[j]);
}
for(i=0;i<m-n-1;i++)
{
 if(i<n)
  c[i]=a[i];
  else
  c[i]=b[j];
  }
 for(step=0;step<n-1;step++)
{
 for(i=0;i<n-step-1;i++)
 {
  if(c[i]>c[i+1])  
  {
    temp=c[i];
    c[i]=c[i+1];
    c[i+1]=temp;
  }
 }
}
int c[i+j];
merge(a1, b2, i, j, c[]);

printf("\nArray after merging\n");
for (int i=0; i < n1+n2; i++)
printf("%d ", c[i]);

 return 0;
 }
 
