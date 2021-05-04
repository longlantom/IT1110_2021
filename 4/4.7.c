/*Lap chuong trinh thuc hien cac cong viec sau:
Viet mot chuong trinh yeu cau nguoi dung nhap cac gia tri cua x va n va tinh cac
bieu thuc sau:
*/

#include<stdio.h>

int gt(int n){
    int s = 1;
    for (int i = 2; i <= n; i++){
        s *= i;
    }
    return s;
}

int main(){
    int n;
    float x, k, s = 0;
    scanf("%d %f", &n, &x);
    if (n < 1 && x < 0) printf ("ERROR"); else{
        s = 0;
        for (int i = 0; i < n; i++){
            s = sqrt(x + s);
        }
        printf("%f\n", s);

        s = 1;
        for (int i = 1; i <= n; i++){
            k = 1;
            for (int j = 1; j <= i; j++){
                k *= x;
            }
            s += k/i;
        }
        printf("%f\n", s);

        s = 1;
        for (int i = 1; i <= n; i++){
            k = 1;
            for (int j = 1; j <= i; j++){
                k *= x;
            }
            s += k/gt(i);
        }
        printf("%f\n", s);

        s = 1;
        for (int i = 1; i <= n; i++){
            k = 1;
            for (int j = 1; j <= i; j++){
                k *= x;
            }
            s += ((i%2)?-1:1)*k/gt(i);
        }
        printf("%f\n", s);
    }
}
/*https://github.com/longlantom/IT1110_2021
by longlantom
*/

