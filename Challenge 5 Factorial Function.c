#include <stdio.h>
int s=1; // variable global so i can get it in function and main
void facto(int a){
    int i;

    for(i=a;i>=1;i--){ // starting from the number user give -1 each reapitition it it reach 1
        s=s*i;
    }

    printf("ur factorial number is:%d",s);

    }



int main(){
facto(6);


}
