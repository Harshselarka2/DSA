#include<stdio.h>
float i =3.14 ;
int main(){
    
 int a,b,c;
 
 printf("Enter value for a ");
 scanf("%d",&a);

 printf("\nEnter value for b ");
 scanf("%d",&b);

 printf("\nEnter value for c ");
 scanf("%d",&c);

 printf("Area of traingle for base line  %d & heighr %d is :  ",b,c);
 printf("%d\n",((b*c)/2));

 printf("Area of cicre which have r = %d ",a);
 printf("%3f\n",(i*(a*a)));

 printf("Area of squre which sides is %d ",c);
 printf("%d\n",(c*c*c*c));

return 0;
}