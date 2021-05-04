/*Lap chuong trinh thuc hien cac cong viec sau:
- Nhap so thuc r > 0  bat ki
- Tinh chu vi M, dien tich S cua hinh tron
Neu gia tri dau vao khong thoa man dieu kien, chuong trinh in ra man hinh chu ERROR va ket thuc
*/
#include<stdio.h>
#define pi 3.14159

int main(){
    float r;
    scanf("%f", &r);
    if (r > 0) printf("%f\n%f", 2*r*pi, r*r*pi); else printf("ERROR");
    return 0;
}
/*https://github.com/longlantom/IT1110_2021
by longlantom
*/


