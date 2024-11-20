#include <stdio.h> 

int main() {

    // Khai bao hang so PI và khoi tao bán kinh hinh tron
    float radius = 6.0; 
    const float PI = 3.14;
    // Tính chu vi va dien tich hinh tron
    float circumference = 2 * PI * radius;
    float area = PI * radius * radius;

    // Ket qua 
    printf("Ban kinh hinh tron: %.2f\n", radius);
    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;
}

