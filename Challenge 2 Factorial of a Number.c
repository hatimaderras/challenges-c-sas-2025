#include <stdio.h>
int main (){
int a;
int i;
int s=1;
printf("entre number:\n");
scanf("%d",&a);
for(i=1;i<=a;i++){
    s=s*i;

}
printf("ur factorial result is %d:",s);
return 0;
}
