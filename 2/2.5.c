//Chuong trinh sau dang co mot vai loi, yeu cau sinh vien tim, sua loi va chay duoc chuong trinh
/*
#include <stdio.h>
#include <conio.h>
main(){
int b,c;
    printf("Nhap a:");scanf("%d",a);
    printf("Nhap a:");scanf("%f",b);
    printf("Nhap a:");scanf("%d",c);
    tong=a+b+c;
    printf("%f",tong);
    printf("%f",tong/3);
    getch();
}
*/

#include<stdio.h>

int main(){
    int a, b, c, tong;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    tong = a + b + c;
    printf("%d\n", tong);
    printf("%f", (float)tong/3);
    return 0;
}
/*https://github.com/longlantom/IT1110_2021
by longlantom
*/
