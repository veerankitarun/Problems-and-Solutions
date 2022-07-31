Q1.
// Expected Output:
// Name   : Alexandra Abramov
// DOB    : July 14, 1975
// Mobile : 99-9999999999
program:
#include <stdio.h>
int main(){
    printf("Name: Compiler\n");
    printf("DOB: August 8, 2002\n");
    printf("Mobile: 798138022\n");
    return 0;

}

Q2.  Write a C program to print a block F using hash (#)



#include <stdio.h>

int main(){
    printf("######\n");
    printf("#\n");
    printf("#\n");
    printf("######\n");
    printf("#\n");
    printf("#\n");
    printf("#\n");

   printf("    ######\n");
   printf("  ##      ##\n");
   printf(" #\n");
   printf(" #\n");
   printf(" #\n");
   printf(" #\n");
   printf(" #\n");
   printf("  ##      ##\n");
   printf("    ######\n");

    return 0;
}

Q3. Write a C program to print the following characters in a reverse way
#include <stdio.h>
int main(){
    char char1 = 'X'; // declaring the character
    char char2 = 'M';
    char char3 = 'L';

    printf("The reverse of XML is %c%c%c, %c%c%c", char1, char2, char3, char3, char2, char3); //%c is charater
    return 0;
}


Q4.
//  Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches.
// output
// Perimeter of the rectangle = 24 inches
// Area of the rectangle = 35 square inches
#include <stdio.h>
int height;
int width;

int perimeter;
int area;

int main(){
   height = 7;
   width = 5;

   perimeter= 2*(height+width);
   printf("perimeter of the rectangle is = %d inches \n",perimeter);

    area= height*width;
    printf("Perimeter of the rectangle is= %d square inches \n ", area);
}



Q5.
// Write a C program to compute the perimeter and area of a circle with a given radius

// Expected Output:
// Perimeter of the Circle = 37.680000 inches
// Area of the Circle = 113.040001 square inches

#include <stdio.h>

int radius;
float perimeter;
float area;


int main(){
    radius= 8;
    perimeter= 2*3.141*radius;
    printf("perimeter of the circle = %f inches \n" , perimeter);

    area = 3.14*radius*radius;
	printf("Area of the Circle = %f square inches\n", area);
    return 0;

}




























