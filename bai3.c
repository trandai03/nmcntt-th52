#include<stdio.h>
int dung(int n){
    int so=n;
    int chuc=n/10;
    int dv=n%10;
    int z=0,a=0;
    for(int i=1;;i++){
        z=n%10;
        n=n-z;
        n=n/10;
    if(n<10){
        a=n;
        break;
    }
}
    if(so>=10 && dv%2==0 && dv>3 && a%2!=0){
        return 1;
    }return 0;
}
int main(){
    int n;
    do{
        printf("Hay nhap so n: \n");
        scanf("%d",&n);
    }while(dung(n)!=1);
    printf("So nay thoa man ");

return 0;
}