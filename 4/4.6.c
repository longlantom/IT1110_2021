//Tinh S1 = (x^n); S2 = (-1)^n*(x^n); S3 = (x^n)/(n!)
#include<stdio.h>

int main(){
    int n;
    float x;
    scanf("%d%f", &n, &x);
    if (n > 0){
        float s1 = 0, s2 = 0, s3 = 0;
        for (int i = 0; i <= n; i++){
            float d = 1;
            int dn = 1;
            for (int j = 1; j <= i; j++){
                d *= x;
                dn *= j;
            }
            s1 += d;
            (i % 2 == 1)?s2 -= d:s2 += d;
            s3 += d/dn;
        }
        printf("%f\n%f\n%f", s1, s2, s3);
    } else printf("ERROR");
    return 0;
}
