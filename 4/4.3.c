/*Lap chuong trinh thuc hien cac cong viec sau:
- Nhap mot so nguyen duong bat ky nho hon 1000
- Tinh tong cac chu so cua so do. Vi du: so 123 co tong cac chu so la 1+2+3=6.
- Thong bao ket qua ra man hinh.
Chu y:
- Su dung vong lap while de lam
- Neu gia tri nhap vao lon hon hoac bang 1000 thi in ra man hinh ERROR
*/

#include<stdio.h>

int main(){
    int n, s = 0;
    scanf("%d", &n);
    if (n < 1000){
        while (n != 0){
            s += (n % 10);
            n /= 10;
        }
        printf("%d", s);
    } else printf("ERROR");
    return 0;
}
/*https://github.com/longlantom/IT1110_2021
by longlantom
*/

