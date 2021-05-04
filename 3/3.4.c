/*Viet chuong trinh yeu cau nguoi dung nhap gia chua co thue cua mot kg
ca chua, so kg ban muon mua va thue theo don vi phan tram. Chuong trinh phai
tinh tong gia da bao gom thue.
*/

#include<stdio.h>

int main(){
    int k;
    float m, t;
    scanf("%d %f %f", &k, &m, &t);
    printf("%9.2f", (k*m)*(1 + t/100));
    return 0;
}
