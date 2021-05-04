/*Lap chuong trinh thuc hien cac cong viec sau:
- Nhap 2 so thuc X, Y
- Tinh gia tri cua bieu thuc F = y^6 + x*y^5 + x^2*y^4 + x^3*y^3 + x^4*y^2 + x^5*y + x^6
*/

#include<stdio.h>
#include<math.h> //using pow()

int main(){
    float x, y;
    double s = 0;
    scanf("%f%f", &x, &y);
    for (int i = 0; i <= 6; i++){
        s += pow(x, i)*pow(y, 6-i);
    }
    printf("%lf", s);
    return 0;
}
/*https://github.com/longlantom/IT1110_2021
by longlantom
*/

