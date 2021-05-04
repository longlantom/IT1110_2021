/*Lap chuong trinh thuc hien cac cong viec sau:
- Nhap 3 so thuc bat ki.
- Giai va bien luan phuong trinh bac 2: ax^2 + bx + c = 0
Luu y tinh ca truong hop va truong hop nghiem phuc.
Chu y:
- Neu phuong trinh vo nghiem thi in ra man hinh: Phuong trinh vo nghiem
- Neu phuong trinh vo so nghiem thi in ra man hinh: Phuong trinh vo so nghiem
- Neu phuong trinh co 2 nghiem phan biet thi hien thi nghiem lon truoc roi moi
den nghiem be.
*/

#include<stdio.h>
#include<math.h> //using sqrt()

int main(){
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0){
        if (b == 0){
            if (c == 0) printf("Phuong trinh vo so nghiem"); else printf("Phuong trinh vo nghiem");
        } else {
            printf("%f", -c/b);
        }
        return 0;
    } else {
        float delta = b*b - 4*a*c;
        if (delta > 0){
            printf("%f %f", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
            return 0;
        } else if (delta == 0){
            printf("%f", (-b)/(2*a));
            return 0;
        } else {
            printf("Phuong trinh vo nghiem");
        }
    }
    return 0;
}
