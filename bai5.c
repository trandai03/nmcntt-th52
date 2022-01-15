#include<stdio.h>
int dung(int n){
    int tram=n/100;
    int chuc=(n-100*tram)/10;
    int dv=n%10;
    
    if(dv==chuc+tram){
        return 1;
    }else return 0;
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