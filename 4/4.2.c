/*So nguyen to la mot so nguyen duong chi chia het cho 1 va chinh no. Viet
chuong trinh nhap mot so nguyen tu ban phim, kiem tra xem so nguyen do co
phai la so nguyen to hay khong va thong bao ra man hinh.
*/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n < 2){
        printf("Khong phai la so nguyen to");
        return 0;
    }
    for (int i = 2; i < n/2; i++){
        if (n % i == 0){
            printf("Khong phai la so nguyen to");
            return 0;
        }
    }
    printf("La so nguyen to");
    return 0;
}
