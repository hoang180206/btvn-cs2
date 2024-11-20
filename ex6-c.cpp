#include <stdio.h> 

int main() {

    // Khai bao hang so PI v� khoi tao b�n kinh hinh tron
    float radius = 6.0; 
    const float PI = 3.14;
    // T�nh chu vi va dien tich hinh tron
    float circumference = 2 * PI * radius;
    float area = PI * radius * radius;

    // Ket qua 
    printf("Ban kinh hinh tron: %.2f\n", radius);
    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;
}

