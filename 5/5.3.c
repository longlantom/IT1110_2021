/*Nhap mang 𝑛 so nguyen bat ky tu ban phim. Sap xep day so theo thu tu
tang dan va dua ket qua ra man hinh (Moi phan tu cach nhau mot dau cach).
*/

#include<stdio.h>
#include<alg.h>

int main(){
    int n, a[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

