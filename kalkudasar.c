#include <stdio.h>

int main() {
    int angka1;
    int angka2;
    char tanda;

    printf("Masukkan angka yang anda inginkan : ");
    scanf("%d", &angka1);

    printf("Masukkan operasi yang anda inginkan (+, -, *, /) : ");
    scanf(" %c", &tanda);

    printf("Masukkan angka yang anda inginkan : ");
    scanf("%d", &angka2);

    if (tanda == '+') {
        printf("Hasilnya adalah %d\n", angka1 + angka2);
    } 
    else if (tanda == '-') {
        printf("Hasilnya adalah %d\n", angka1 - angka2);
    } 
    else if (tanda == '*') {
        printf("Hasilnya adalah %d\n", angka1 * angka2);
    } 
    else if (tanda == '/') {
        if (angka2 != 0) {
            printf("Hasilnya adalah %d\n", angka1 / angka2);
        } else {
            printf("Error: Tidak bisa membagi dengan nol!\n");
        }
    } 
    else {
        printf("Mohon maaf operasi yang anda inginkan tidak tersedia.\n");
    }

    return 0;
}
