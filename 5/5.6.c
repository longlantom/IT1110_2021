/*Lap chuong trinh thuc hien cac cong viec sau:
- Nhap vao tu ban phim mot cau tieu de bai bao bat ky.
- Chuan hoa xau da nhap bang cach xoa cac dau cach thua o dau, cuoi, giua de
dam bao chi co 1 dau cach phan tach giua cac tu va chuyen cac chu cai thuong
thanh chu hoa tuong ung.
- Dua cau tieu de da duoc chuan hoa ra man hinh.
Input: Cau tieu de duoc nhap thanh 1 dong tu ban phim.
Output: Cau da chuan hoa va do dai tuong ung duoc in ra thanh 1 dong voi quy
cach <noi dung>:<do dai>
*/

#include<stdio.h>
#include<string.h>

int main(){
    char s[100], b[100];
    fflush(stdin);
    gets(s);

    int i = 0, l = strlen(s) - 1;
    while (s[i] == ' '){
        i++;
    }
    while (s[l] == ' '){
        l--;
    }
    int d = 0;
    while (i <= l){
        while (s[i] != ' ' && i <= l){
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
            b[d] = s[i];
            d++;
            i++;
        }
        b[d] = ' ';
        d++;
        while (s[i] == ' ' && s[i+1] == ' ') i++;
        i++;
    }
    for (int i = 0; i < d-1; i++){
        printf("%c", b[i]);
    }
    printf(":%d", d-1);
    return 0;
}
