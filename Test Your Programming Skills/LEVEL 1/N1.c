#include<stdio.h>

int main(){
    
    float I = 0.0, CM = 0.0;
    printf("Input Inches: ");
    scanf("%f",& I);
    
    CM = I * 2.54;
    
    printf("%.2f inch is %.2f cm",I , CM);
    
    
    
    return 0;
}