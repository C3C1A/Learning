#include <stdio.h>
#include<string.h>

int main(){

    int num;
    scanf("%d",&num);
    while(num>0){
            if(num-1000>=0){
                    printf("M");
                    num -= 1000;
            }
            else if(num-900>=0){
                    printf("CM");
                    num -= 900;
            }
            else if(num-500>=0){
                    printf("D");
                    num -= 500;
            }
            else if(num-400>=0){
                    printf("CD");
                    num -= 400;
            }
            else if(num-100>=0){
                    printf("C");
                    num -= 100;
            }
            else if(num-90>=0){
                    printf("XC");
                    num -= 90;
            }
            else if(num-50>=0){
                    printf("L");
                    num -= 50;
            }
            else if(num-40>=0){
                    printf("XL");
                    num -= 40;
            }
            else if(num-10>=0){
                    printf("X");
                    num -= 10;
            }
            else if(num-9>=0){
                    printf("IX");
                    num -= 9;
            }
            else if(num-5>=0){
                    printf("V");
                    num -= 5;
            }
            else if(num-4>=0){
                    printf("IV");
                    num -= 4;
            }
            else if(num-1>=0){
                    printf("I");
                    num -= 1;
            }
    }


    return 0;
}
