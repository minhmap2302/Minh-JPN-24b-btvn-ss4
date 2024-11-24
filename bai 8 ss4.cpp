#include <stdio.h>

int main() {
    float a, b, c;
    printf("hay nhap canh thu nhat: ");
    scanf("%f", &a);
    printf("hay nhap so thu hai: ");
    scanf("%f", &b);
    printf("hay nhap so thu ba: ");
    scanf("%f", &c);
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Là 3 canh tam giac.\n");
    } else {
        printf("khong phai 3 canh cua tam giac.\n");
    }

    return 0;
}
