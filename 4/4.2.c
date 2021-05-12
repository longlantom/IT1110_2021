/*So nguyen to la mot so nguyen duong chi chia het cho 1 va chinh no. Viet
chuong trinh nhap mot so nguyen tu ban phim, kiem tra xem so nguyen do co
phai la so nguyen to hay khong va thong bao ra man hinh.
*/

#include<stdio.h>
#include<math.h>

int main(){
    long long n;
    scanf("%lld", &n);
    if (n < 2){
        printf("Khong phai so nguyen to");
        return 0;
    }
    for (long long i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            printf("Khong phai so nguyen to");
            return 0;
        }
    }

    printf("La so nguyen to");
    return 0;
}
/*https://github.com/longlantom/IT1110_2021
by longlantom
*/

//La so nguyen to -> 40
//Khong phai so nguyen to -> 60
