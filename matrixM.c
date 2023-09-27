#include<stdio.h>
void addition(int a[][],int b[][])
{
 int s[10][10];
 printf("sum of the matrix")
 for(i=0;i<n;i++)
 {
   for(j=0;j<m;j++)
   {
    s[i][j]=a[i][j]+b[i][j];
    printf("%d",s[i][j]);
   }
  printf("\n");
 }
 }
 

int main()
{
 int a[10][10],b[10][10]i,j,m,n,choice;
 printf("enter the order of the  matrix");
 scanf("%d%d",&m,&n);
 printf("enter the elements of the 1st matrix");
 for(i=0;i<n;i++)
 { 
   for(j=0;j<m;j++)
   {
     scanf("%d",&a[i][j]);
   }
 }
 printf("enter the elements of the 2nd matrix");
 for(i=0;i<n;i++)
 { 
   for(j=0;j<m;j++)
   {
     scanf("%d",&b[i][j]);
   }
 }
        printf("1. addition\n2. multiplication\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                
                addition(a[10][10],b[10][10]);
                break;

            case 2:
                multiplication();
                break;

            case 3:
                transpose();
                break;
           case 4:
                 exit(0);
                 break;
             

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
