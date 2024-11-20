#include <stdio.h> 

int main() {
    // Khai bao va khoi tao hai bien so nguyen 
    
	// Bien so nguyen thu nhat
	int number1 = 30; 
    
    // Bien so nguyen thu hai
	int number2 = 12; 

    // Tinh tong hai so  
    int total = number1 + number2;

    // Tinh hieu hai so 
    int difference = number1 - number2;
	
	// Tinh tich hai so 
	int product = number1 * number2;
	
	// Thuong thuong hai so  
	int quotient = number1 / number2; 
	
	// Ket qua 
    printf("Tong: %d + %d = %d\n", number1, number2, total);
    printf("Hieu: %d - %d = %d\n", number1, number2, difference);
    printf("Tich: %d * %d = %d\n", number1, number2, product);
    printf("Thuong: %d / %d = %d\n", number1, number2, quotient);

    return 0;
}

