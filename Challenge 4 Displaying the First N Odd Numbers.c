#include <stdio.h>
int main(){
    int n;
    int i;
    int s=0;
    int k=-1;
printf("entre a numbre:");
scanf("%d",&n);
if(n%2==0){
    for(i=0;i<n;i++){
        s=s+2; // adds 2 each repeat

        printf("ur result is:%d \n",s);
    }
}
if(n%2!=0){

    for(i=1;i<=n;i++){
        k=k+2;
   printf("ur result is %d \n",k);
    }
}

return 0;
}
