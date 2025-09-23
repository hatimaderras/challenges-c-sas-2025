#include <stdio.h>
int main (){
    int n;
    int s=0;
    int i;
    int k=1;
printf("enter an integer:");
scanf("%d",&n);
if(n%2==0){
    for(i=0;i<n;i++){
        s=s+2;
        printf(" %d",s);
    }
}
if(n%2!=0){
  for(i=0;i<=n-1;i++){
    k=k+2;
    printf(" %d",k);
  }
}




return 0;
}
