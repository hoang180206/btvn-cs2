#include <stdio.h> 

int main() {
    // Khai bao v� khoi tao cac bien voi c�c kieu du lieu co ban trong C 

    // Kieu du lieu int (so nguyen)
    int num1 = 60;  

    // Kieu du lieu float (so thuc)
    float num2 = 3.14;  

    // Kieu du lieu double (so thuc co do chinh xac cao hon float)
    double num3 = 5.55555555;  

    // Kieu du lieu char (ky tu)
    char letter = 'A';  

    // Ket qua 
    printf("So nguyen int: %d\n", num1);
    printf("So thuc float: %.2f\n", num2);
    printf("So thuc double: %.5f\n", num3);
    printf("Ky tu char: %c\n", letter);
    
    return 0;
}

