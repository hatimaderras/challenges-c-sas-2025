#include <stdio.h>

void larger(int a,int b){
    // condition to find whos the smallest number
   if (a>b){
    printf("the smallest number is:%d",b);
   }else printf("the smallest number is :%d",a);
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
