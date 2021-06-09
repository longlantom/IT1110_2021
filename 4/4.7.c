/*Lap chuong trinh thuc hien cac cong viec sau:
Viet mot chuong trinh yeu cau nguoi dung nhap cac gia tri cua x va n va tinh cac
bieu thuc sau:
*/

#include<stdio.h>
#include<math.h>

long long gt(long long n){
    long long s = 1;
    for (long long i = 2; i <= n; i++){
        s *= i;
    }
    return s;
}

int main(){
    long long n;
    double x, k, s = 0;
    scanf("%lf %lld", &x, &n);
    if (n < 1 || x < 0) printf ("Error"); else{
        s = 0;
        for (long long i = 0; i < n; i++){
            s = sqrt(x + s);
        }
        printf("%.4lf\n", s);

        s = 1;
        for (long long i = 1; i <= n; i++){
            k = 1;
            for (long long j = 1; j <= i; j++){
                k *= x;
            }
            s += k/i;
        }
        printf("%.4lf\n", s);

        s = 1;
        for (long long i = 1; i <= n; i++){
            k = 1;
            for (long long j = 1; j <= i; j++){
                k *= x;
            }
            s += k/gt(i);
        }
        printf("%.4lf\n", s);

        s = 1;
        for (long long i = 1; i <= n; i++){
            k = 1;
            for (long long j = 1; j <= i; j++){
                k *= x;
            }
            s += ((i%2)?-1:1)*k/gt(i);
        }
        printf("%.4lf", s);
    }
    return 0;
}
/*https://github.com/longlantom/IT1110_2021
by longlantom
*/

