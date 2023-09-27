#include<stdio.h>
void insert()
{
  int a[50],i=10;
 for(i=0;i<n;i++)
 {
   a[i]=a[value];
   }
   
int main()
{
 int choice,value;
 printf("1.insert\n 2.delete\n 3.display\n");
 printf("enter your choice");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
     printf("enter the value to insert");
     scanf("%d",&value);
     insert(value);
     break;
case 2:
     printf("enter the value to delete");
     scanf("%d",&value);
     value=delete();
     if(value!=-1)
     {
      printf("Popped value: %d\n", value);
      }
     break;      
 case 3:
     printf("enter the array");
     
     display();
     break;  
case 4:
      exit(0);
default:
 printf("Invalid choice!\n");
      }
    }
    return 0;
}

