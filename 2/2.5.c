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
#include<conio.h>

main(){
    int a, b, c, tong;
    printf("Nhap a:");scanf("%d", &a);
    printf("Nhap b:");scanf("%d", &b);
    printf("Nhap c:");scanf("%d", &c);
    tong = a + b + c;
    printf("%d\n", tong);
    printf("%6.2f", (float)tong/3);
    getch();
}
/*https://github.com/longlantom/IT1110_2021
by longlantom
*/

