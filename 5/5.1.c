/*Nhap mang n so nguyen tu ban phim, in ra man hinh cac gia tri tu cuoi
den gia tri dau, sau do tinh tong cac phan tu cua mang.
Chu y:
Neu n <= 0 in "Error"
Input:
- Dong dau tien chua so nguyen duong n va la do dai cua mang dau vao.
- Dong thu hai chua n so nguyen.
Output:
- Dong dau tien la cac phan tu cua mang duoc in theo thu tu dao nguoc.
- Dong dau ra thu hai la tong cac phan tu cua mang
*/

#include<stdio.h>

int main(){
    int n, a[10000], s = 0;
    scanf("%d", &n);
    if (n <= 0) printf("ERROR"); else {
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            s += a[i];
        }
        for (int i = n - 1; i >= 0; i--){
            printf("%d ", a[i]);
        }
        printf("\n%d", s);
    }
}
