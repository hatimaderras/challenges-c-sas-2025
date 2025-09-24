#include <stdio.h>


void sum(int a,int b){

   printf("%d",a+b);

}
int main(){
    int a,b;
printf("enter first number:");
scanf("%d",&a);
printf("enter secound number:");
scanf("%d",&b);
// passing the user inputs in parametre
sum(a,b);




return 0;
}
