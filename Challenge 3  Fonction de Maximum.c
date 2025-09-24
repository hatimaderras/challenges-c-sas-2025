#include <stdio.h>

void larger(int a,int b){
    // condition to find whos the bigger number
   if (a>b){
    printf("the larger number is:%d",a);
   }else printf("the larger number is :%d",b);
}
int main (){
    int num1,num2;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter secound number:");
    scanf("%d",&num2);
    // calling the fanction
    larger(num1,num2);

}


