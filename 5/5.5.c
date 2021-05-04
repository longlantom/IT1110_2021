/*Viet chuong trinh doc hai chuoi S va T. Dem so lan moi ky tu xuat hien
trong ca hai chuoi.
Chu y: Dau tien xuat mot chuoi cac ky tu rieng biet trong ca hai chuoi. Sau do, doi
voi moi ky tu do hien thi ra so lan xuat hien trong ca hai chuoi.
Input:
- Chuoi S
- Chuoi T
Output:
- Mot chuoi cac ky tu rieng biet xuat hien trong S hoac T. (Sap xep cac ky tu nay
theo thu tu tang dan theo gia tri ASCII cua chung).
- Tren moi dong la so lan xuat hien cua mot ky tu (theo thu tu trong chuoi tren
dong 1)
*/

#include<stdio.h>
#include<string.h>

int main(){
    char s[100], t[100];
    gets(s);
    gets(t);
    int d[128] = {0};
    for (int i = 0; i <  strlen(s); i++){
        d[s[i]]++;
    }
    for (int i = 0; i <  strlen(t); i++){
        d[t[i]]++;
    }
    for (int i = 0; i < 128; i++){
        if (d[i] > 0) printf("%c ", (char)i);
    }
    printf("\n");
    for (int i = 0; i < 128; i++){
        if (d[i] > 0) printf("%d ", d[i]);
    }
}
