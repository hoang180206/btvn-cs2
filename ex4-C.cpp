#include <stdio.h> 

int main() {
    // Khai bao va khoi tao bien canh hinh vuong 

	//Canh hinh vuong 
	int side = 4; 
    // T�nh chu vi hinh vuong
    int perimeter = 4 * side;
    // T�nh dien t�ch hinh vuong
    int area = side * side;
    // Ket qua 
    printf("Canh hinh vuong: %d\n", side);
    printf("Chu vi hinh vuong: %d\n", perimeter);
    printf("Dien tich hinh vuong: %d\n", area);

    return 0;
}
