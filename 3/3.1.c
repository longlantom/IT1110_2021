/*Lap chuong trinh thuc hien cac cong viec sau:
- Nhap vao chuong trinh diem 3 mon Toan, Ly, Hoa cua 1 hoc sinh
- Tinh tong diem va diem trung binh 3 mon cua hoc sinh do
*/

#include<stdio.h>

int main(){
    float t, l, h;
    scanf("%f%f%f", &t, &l, &h);
    printf("%f\n%f", t+l+h, (t+l+h)/3);
    return 0;
}
/*https://github.com/longlantom/IT1110_2021
by longlantom
*/

