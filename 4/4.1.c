/*Viet chuong trinh
- Nhap vao so nguyen n < 8 bat ky.
- Tinh giai thua cua n (n!).
*/

#include<stdio.h>

int main(){
    int n, s = 1;
    scanf("%d", &n);
    if (n < 8){
        for (int i = 2; i <= n; i++){
            s *= i;
        }
        printf("%d", s);
    } else printf("ERROR");
    return 0;
}
