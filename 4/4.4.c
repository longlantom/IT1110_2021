/*Viet chuong trinh thuc hien cac cong viec sau:
- Nhap 2 so nguyen duong bat ky
- Tim uoc so chung lon nhat va boi so chung nho nhat cua 2 so do
- Hien thi ket qua ra man hinh
Chu y:
- Su dung vong lap while de lam
- Kiem tra du lieu dau vao cua chuong trinh, neu khong dung thi ket thuc chuong
trinh va in ra man hinh ERROR.
*/

#include<stdio.h>
#include<alg.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > 0 && b > 0){
        int s = a * b;
        while (a * b != 0){
            if (a > b) a %= b; else b %= a;
        }
        //printf("%d", s);
        printf("%d\n%d", max(a,b), s/max(a,b));
    } else printf("ERROR");
    return 0;
}
/*https://github.com/longlantom/IT1110_2021
by longlantom
*/

