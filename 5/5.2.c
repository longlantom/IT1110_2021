/*Nhap mang so nguyen tu ban phim. Tinh trung binh cong cac so am, tong
cac so duong va dua ket qua ra man hinh.
Input:
- Dong dau tien cho biet so phan tu mang 𝑛.
- Dong thu 2 chua gia tri cua n phan tu mang, cac phan tu cach nhau mot dau
cach.
Output:
Mot dong gom 2 gia tri cach nhau 1 dau cach:
- Gia tri trung binh cong cac so am. Neu mang chi toan so am, in ra man
hinh Mang khong co so duong.
- Tong cac so duong. Neu mang chi toan so duong in ra man hinh Mang khong
co so am.
*/
#include<stdio.h>

int main(){
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int sa = 0, sd = 0, da = 0, dd = 0;
    for (int i = 0; i < n; i++){
        if (a[i] < 0){
            sa += a[i];
            da++;
        }
        if (a[i] > 0){
            sd += a[i];
            dd++;
        }
    }
    //printf("%f %d", (float)(sa)/da, sd);
    if (da != 0) printf("%f ", (float)(sa)/da); else printf("0");
    if (da == n) printf("Mang khong co so duong");
    printf("\n");

    printf("%d ", sd);
    if (dd == n) printf("Mang khong co so am");
    return 0;
}

