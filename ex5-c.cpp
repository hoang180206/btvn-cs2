#include <stdio.h> 

int main() {
    // Khai bao v� khoi tao hai bien chieu dai v� chieu rong
    
	// Chieu dai hinh chu nhat 
	int length = 18; 
    
	// Chieu rong hinh chu nhat 
	int width = 9;   

    // T�nh chu vi hinh chu nhat
    int perimeter = 2 * (length + width);

    // T�nh dien t�ch hinh chu nhat
    int area = length * width;

    // Ket qua 
    printf("Chieu dai: %d\n", length);
    printf("Chieu rong: %d\n", width);
    printf("Chu vi hinh chu nhat: %d\n", perimeter);
    printf("Dien tich hinh chu nhat: %d\n", area);

    return 0;
}

