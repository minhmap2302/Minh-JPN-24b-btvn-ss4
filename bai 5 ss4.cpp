#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("hay nhap so thu mot: ");
    scanf("%d", &n1);
    printf("hay nhap so thu hai: ");
    scanf("%d", &n2);
    printf("hay nhap so thu ba: ");
    scanf("%d", &n3);
    if ((n3 > n1 && n3 < n2) || (n3 > n2 && n3 < n1)) {
        printf("so thu ba (%d) nam trong khoang giua %d và %d.\n", n3, n1, n2);
    } else {
        printf("so thu ba (%d) khong nam trong khoang giua %d và %d.\n", n3, n1, n2);
    }

    return 0;
}
