#include <stdio.h>
int main(){
int a;
int i;
printf("entre a numbre between 1 and 10:\n");
scanf("%d",&a);
for(i=1;i<=10;i++){
    printf("result is %d\n",a*i);
}

return 0;
}
