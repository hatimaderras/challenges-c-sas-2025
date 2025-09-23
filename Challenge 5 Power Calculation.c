#include <stdio.h>
int main(){
int base;
int expo;
int c=1;
int i;
// get user inputs
printf("entre integer:");
scanf("%d",&base);
printf("enter exposant:");
scanf("%d",&expo);
// for loop to multiply base by itseld exposant times
   for(i=0;i<expo;i++){
      c=c*base;
   }

  printf("ur result %d", c);


return 0;
}
