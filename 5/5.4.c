/*Viet mot chuong trinh nhap mot chuoi S va so nguyen n. Chuong trinh
se cat chuoi do theo so nguyen n.
Chu y: Neu chuoi da ngan hon n, chuong trinh khong nen thay doi chuoi.
Input:
- Dong dau tien la chuoi S
- Dong thu 2 la so nguyen n
Output: Chuoi S da duoc rut gon.
*/

#include<stdio.h>

int main(){
    char s[100];
    int n;
    gets(s);
    scanf("%d", &n);
        for (int i = 0; i < strlen(s); i++){
            if (i % n == 0) printf("\n");
            printf("%c", s[i]);
        }
    return 0;
}
/*https://github.com/longlantom/IT1110_2021
by longlantom
*/

