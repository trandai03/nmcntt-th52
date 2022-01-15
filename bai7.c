#include<stdio.h>
int max(int n){
    
    int nghin=n/1000;
    int tram=(n-nghin*1000)/100;
    int chuc=(n-100*tram-nghin*1000)/10;
    int dv=n%10;
    int max=nghin;
    if(tram>max){
        max=tram;
    } if(chuc>max){
        max=chuc;
    } if(dv>max){
        max=dv;
    }
    return max;
}
int main(){
    int n;
    do{
        printf("Hay nhap n:\n");
    scanf("%d",&n);
    }while(n<0);
    printf("Max = %d",max(n));
    
    return 0;
}