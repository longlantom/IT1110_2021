//Soan thao chuong trinh sau, yeu cau go chinh xac
#include<stdio.h>

int main(){
    float a, b, max;
    scanf("%f", &a);
    scanf("%f", &b);
    max = a;
    if (max < b) max = b;
    printf("%6.2f", max);
    return 0;
}
/*https://github.com/longlantom/IT1110_2021
by longlantom
*/

