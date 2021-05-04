//Chuong trinh sau dang co mot vai loi, yeu cau sinh vien tim, sua loi va chay duoc chuong trinh
/*
#include<stdio.h>

int main(){
    float x ;
    scanf("%d",&x);
    scan("%f",&y);
    if (x>y);
    max = x;
    else
    max=y;
    printf("%6.2d",max);
    return 0;
}
*/

#include<stdio.h>

int main(){
    float x, y, max;
    scanf("%f", &x);
    scanf("%f", &y);
    if (x > y) max = x; else max = y;
    printf("%f", max);
    return 0;
}
/*https://github.com/longlantom/IT1110_2021
by longlantom
*/

