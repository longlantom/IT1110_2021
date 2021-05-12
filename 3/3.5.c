/*Lap chuong trinh thuc hien cac cong viec sau:
- Nhap 3 so thuc bat ki.
- Tinh gia tri bieu thuc: F = ((x + y + z)/(x^2 + y^2 + 1)) − |x − zcos(y)|
*/

#include<stdio.h>
#include<math.h> //using abs() and cos()

int main(){
    double x, y, z;
    scanf("%lf%lf%lf", &x, &y, &z);
    printf("%lf",((x + y + z)/(x*x + y*y + 1)) - fabs(x - z*cos(y)));
    return 0;
}
/*https://github.com/longlantom/IT1110_2021
by longlantom
*/

