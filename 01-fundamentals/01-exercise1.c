/* 
Conversion of temperature from Fahrenheit to Centigrade 
C = (5 / 9) * (F - 32)
*/

#include<stdio.h>

int main() {
    float fahr;
    int cent;

    printf("Enter the temp(F): \n");
    scanf("%f", &fahr);

    cent = (5.0 / 9.0) * (fahr - 32);

    printf("The temp in centigrade: %d\n", cent);

    return 0;
}