#include <stdio.h>
int main(){
    int a;
    int i;
    int s=0;
printf("entre a number:");
scanf("%d", &a);
for(i=1;i<=a;i++){
    s=s+i;
    // each repeat it add 1 till it meet user input
}
printf("ur result is %d",s);

return 0;
}
