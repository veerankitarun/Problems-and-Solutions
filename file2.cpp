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

Q6.
	// Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items. Go to the editor
//                 Test Data :
// Weight - Item1: 15
// No. of item1: 5
// Weight - Item2: 25
// No. of item2: 4

//                   Expected Output:
// Average Value = 19.444444

#include <stdio.h>
int main()
{
    double wi1, wi2, ni1, ni2, result;
    printf("Weight - item1:");
    scanf("%lf", &wi1);
    printf("No. of item1: ");
    scanf("%lf", &ni1);
    printf("Weight - Item2:");
    scanf("%lf", &wi2);
    printf("No. of item2:");
    scanf("%lf", &ni2);
    result =((wi1*ni1)+(wi2*ni2))/(ni1+ni2);
    
    
    printf("Average Value = %f \n",result);
    return 0;
  
}

Q7.  // Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month. 

//                           Test Data :
// Input the Employees ID(Max. 10 chars): 0342
// Input the working hrs: 8
// Salary amount/hr: 15000

//                             Expected Output:
// Employees ID = 0342
// Salary = U$ 120000.00

#include <stdio.h>

int main(){
    int id, working, amount;
    float result;
   
    printf("Input the Employees ID: ");
    scanf("%d", &id);
    printf("Input the working hrs: ");
    scanf("%d",&working);
    printf("Salary amount/hr: ");
    scanf("%d", &amount);
    result = working*amount;
    printf("Employees ID = %d \n", id);
    printf("Salary = U$ %f \n",result);
    return 0;
    
}

Q8. //  Write a C program that accepts three integers and find the maximum of three. Go to the editor
// Test Data :
// Input the first integer: 25
// Input the second integer: 35
// Input the third integer: 15
// Expected Output:
// Maximum value of three integers: 35


#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b, c, result, max;
    
    printf("Input the first integer:  ");
    scanf("%d",&a);
    printf("Input the second integer:  ");
    scanf("%d",&b);
    printf("Input the third integer:  ");
    scanf("%d",&c);
     result=(a+b+abs(a-b))/2;
    max=(result+c+abs(result-c))/2;
    printf("Maximum value of three interger: %d", max);
    return 0;
    
}


Q.9 //  Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point). Go to the editor
// Test Data :
// Input total distance in km: 350
// Input total fuel spent in liters: 5
// Expected Output:
// Average consumption (km/lt) 70.000


#include <stdio.h>
int main(){
    int a;
    float b;
    printf("Input total distance in km: ");
    scanf ("%d",&a);
    
    printf("Input total fuel spent in liters: ");
    scanf ("%f",&b);
    
    printf("Average consumption (km/lt): %3f \n",a/b);
   
    return 0;
}

Q10. // Write a C program to calculate the distance between the two points. Go to the editor
// Test Data :
// Input x1: 25
// Input y1: 15
// Input x2: 35
// Input y2: 10
// Expected Output:
// Distance between the said points: 11.1803

#include <stdio.h>
#include <math.h>


int main() {
	float x1, y1, x2, y2, gdistance;
	printf("Input x1: ");
	scanf("%f", &x1);
	printf("Input y1: ");
	scanf("%f", &y1);
              printf("Input x2: ");
	scanf("%f", &x2);
	printf("Input y2: ");
	scanf("%f", &y2);
	gdistance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance between the said points: %.4f", sqrt(gdistance));
	printf("\n");
	return 0;
}

// Q 11 
// Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes. Go to the editor

//                          Test Data :
// Input the amount: 375
//                       Expected Output:
// There are:
// 3 Note(s) of 100.00
// 1 Note(s) of 50.00
// 1 Note(s) of 20.00
// 0 Note(s) of 10.00
// 1 Note(s) of 5.00
// 0 Note(s) of 2.00
// 0 Note(s) of 1.00



#include <stdio.h>
int main() {
	int amt, total;
	printf("Input the amount: ");
	scanf("%d",&amt);     
	
	total = (int)amt/100;
	printf("There are: ");
	
	printf("\n%d Note(s) of 100.00\n", total);
	amt = amt-(total*100);
	
	total = (int)amt/50;
	printf("%d Note(s) of 50.00\n", total);
	amt = amt-(total*50);
	
	total = (int)amt/20;
	printf("%d Note(s) of 20.00\n", total);
	amt = amt-(total*20);
	
	total = (int)amt/10;
	printf("%d Note(s) of 10.00\n", total);
	amt = amt-(total*10);
	
	total = (int)amt/5;
	printf("%d Note(s) of 5.00\n", total);
	amt = amt-(total*5);
	
	total = (int)amt/2;
	printf("%d Note(s) of 2.00\n", total);
	amt = amt-(total*2);
	
	total = (int)amt/1;
	printf("%d Note(s) of 1.00\n", total);
	return 0;
}

Q 12
	// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds. Go to the editor
//                          Test Data :
// Input seconds: 25300
//                       Expected Output:
// There are:
// H:M:S - 7:1:40
#include <stdio.h>
int main() {
	int sec, h, m, s;
	printf("Input seconds: ");
	scanf("%d", &sec);
	
	h = (sec/3600); 
	
	m = (sec -(3600*h))/60;
	
	s = (sec -(3600*h)-(m*60));
	
	printf("H:M:S:h- %d:%d:%d\n",h,m,s);
	
	return 0;
}

	
Q13. // Write a C program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days. 
//                                       Test Data :
// Input no. of days: 2535
//                                   Expected Output:
// 6 Year(s)
// 11 Month(s)
// 15 Day(s)

#include <stdio.h>
int main() {
	int days, y, m, d;	
	
	printf("Input no. of days: ");
	
	scanf("%d", &days);
	
	y =  (int) days/365;
	
	days = days-(365*y);
		
	m = days/30;
	
	d = days-(m*30);
	
	printf(" %d Year(s) \n %d Month(s) \n %d Day(s)", y, m, d);
	return 0;
}

Q14. // Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values". Go to the editor
//                             Test Data :
// Input the second integer: 35
// Input the third integer: 15
// Input the fourth integer: 46
//                      Expected Output:
// Wrong values

#include <stdio.h>
int main(){
    int p, q, r, s;
    printf("Input the first integer :");
    scanf("%d", &p);
    printf("Input the second integer: ");
    scanf("%d", &q);
    printf("Input the third integer:");
    scanf("%d", &r);
    printf("Input the fourth integer :");
    scanf("%d", &s);
    if((q > r) && (s > p) && ((r+s) > (p+q)) && (r > 0) && (s > 0) && (p%2 == 0))
	 {
		printf("\nCorrect values\n");
	} 
	else {
		printf("\nWrong values\n");
	}
	return 0;
}


Q15.
	// Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots. Go to the editor
// Test Data :
// Input the first number(a): 25
// Input the second number(b): 35
// Input the third number(c): 12
// Expected Output:
// Root1 = -0.60000
// Root2 = -0.80000

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, pr;
    printf("\n input the first (a);");
    scanf("%lf" ,&a);
    printf("\n input the second (a);");
    scanf("%lf" ,&b);
    printf("\n input the third (a);");
    scanf("%lf" ,&c);
    
    pr = (b*b) - (4*(a)*(c));
    
    if(pr>0 && a !=0){
        double x, y;
        pr = sqrt(pr);
        x=(-b+pr)/(2*a);
    	y = (-b - pr)/(2*a);
    	printf("Root1 = %.5lf\n", x);
		printf("Root2 = %.5lf\n", y);
    	
    }
    else
	 {
		printf("\nImpossible to find the roots.\n");
	}
	
	return 0;
}

Q16//  Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80. Go to the editor
// Test Data :
// Input an integer: 15
// Expected Output:
// Range [0, 20]
#include <stdio.h>

int main() {
	int x;
	printf("Input an integer: "); 
	scanf("%d", &x);
	if(x >=0 && x <= 20) 
	{
		printf("Range [0, 20]\n");
	} 
	else if(x >=21 && x <= 40) 
	{
		printf("Range (25,50]\n");
	} 
	else if(x >=41 && x <= 60) 
	{
		printf("Range (50,75]\n");
	} 
	else if(x >61 && x <= 80) {
		
		printf("Range (61,80)\n");
	} 
	else printf("Outside the range\n");
		
	return 0;
}

Q17 // Write a C program that read 5 numbers and sum of all odd values between them. Go to the editor
//                               Test Data :
// Input the first number: 11
// Input the second number: 17
// Input the third number: 13
// Input the fourth number: 12
// Input the fifth number: 5
//                                Expected Output:
// Sum of all odd values: 46


#include <stdio.h>
int main(){
    int a, number[5], total=0;
    printf("Input an integer: ");
    scanf("%d", &number[0]);
    printf("\n input the second number: ");
    scanf("%d", &number[1]);
     printf("\n input the second number: ");
    scanf("%d", &number[2]);
     printf("\n input the second number: ");
    scanf("%d", &number[3]);
     printf("\n input the second number: ");
    scanf("%d", &number[4]);
     for(a=0; a<5; a++){
         if((number[a]%2) != 0)
         {
             total += number[a];
         }
     }
        	printf("\nSum of all odd values: %d"  ,total);

	return 0;
     
}


Q18. // Write a C program that reads three floating values and check if it is possible to make a triangle with them. Also calculate the perimeter of the triangle if the said values are valid. Go to the editor
//                                           Test Data :
// Input the first number: 25
// Input the second number: 15
// Input the third number: 35
//                                       Expected Output:
// Perimeter = 75.0
#include <stdio.h>
int main() {
	float  x, y, z, P, A;
    printf("\nInput the first number: "); 
    scanf("%f", &x);
    printf("\nInput the second number: ");
    scanf("%f", &y);
    printf("\nInput the third number: ");
    scanf("%f", &z);

    if(x < (y+z) && y < (x+z) && z < (y+x)) 
     {  
	 P = x+y+z;
	 printf("\nPerimeter  = %.1f\n", P);	 
	 
    }
    else
    {
    	printf("Not possible to create a triangle..!");
	}
}

Q19. // Write a C program that reads two integers and checks whether they are multiplied or not. Go to the editor
//                             Test Data :
// Input the first number: 5
// Input the second number: 15
//                         Expected Output:
// Multiplied!

#include <stdio.h>
int main(){
    int a, b;
    printf(" Input the first number: ");
    scanf("%d", &a);
    printf(" Input the second number: ");
    scanf("%d", &b);
    if(a=1 && b>1){
        printf("multiplied!");
    }
    else {
        printf("no multiplication is done");
    }
}

Q20. // Write a C program that reads an integer between 1 and 12 and print the month of the year in English. Go to the editor
//                                           Test Data :
// Input a number between 1 to 12 to get the month name: 8
//                                  Expected Output:
// August

#include <stdio.h>

int main() {
	int mno;
	printf("\nInput a number between 1 to 12 to get the month name: ");
	scanf("%d", &mno);
	switch(mno) {
		case 1 : printf("January\n"); break;
		case 2 : printf("February\n"); break;
		case 3 : printf("March\n"); break; // it breaks the loop and returns to 0
		case 4 : printf("April\n"); break;
		case 5 : printf("May\n"); break;
		case 6 : printf("June\n"); break;
		case 7 : printf("July\n"); break;
		case 8 : printf("August\n"); break;
		case 9 : printf("September\n"); break;
		case 10 : printf("October\n"); break;
		case 11 : printf("November\n"); break;
		case 12 : printf("December\n"); break;
		default : printf("Input a number between 1 to 12.");
	}
	return 0;
}

Q21. // Write a C program that prints all even numbers between 1 and 50 (inclusive). Go to the editor
//                              Test Data :
// Even numbers between 1 to 50 (inclusive):
//                          Expected Output:
// 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50

#include <stdio.h>
int main(){
    int i;
    printf("Even numbers between 1 to 50 (inclusive): ");
    for (i=0; i<50; i++){
        if( i%2 ==0){
            printf("%d \n", i);
        }
    }
    return 0;
}

Q22.// Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers. Go to the editor
//                              Test Data :
// Input the first number: 5
// Input the second number: -4
// Input the third number: 10
// Input the fourth number: 15
// Input the fifth number: -1
//                            Expected Output:
// Number of positive numbers: 3
// Number of negative numbers: 2

#include <stdio.h>
int main(){
    float numbers[5];
    int j, pctr=0, nctr=0;
	printf("\nInput the first number: "); 
    scanf("%f", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%f", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%f", &numbers[2]);
	printf("\nInput the fourth number: "); 
    scanf("%f", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%f", &numbers[4]);
    
    for(j = 0; j < 5; j++) {
		if(numbers[j] > 0)
		{
			
			pctr++;
		}
		else if(numbers[j] < 0)
		{
			nctr++;
		}
	}
	printf("\nNumber of positive numbers: %d", pctr);
	printf("\nNumber of negative numbers: %d", nctr);
	printf("\n");
	return 0;
        
}

Q23.
	// Write a C program that read 5 numbers and sum of all odd values between them

// Test Data :
// Input the first number: 5
// Input the second number: 7
// Input the third number: 9
// Input the fourth number: 10
// Input the fifth number: 13
// Expected Output:
// Sum of all odd values: 34

#include <stdio.h>
int main(){
    int j, numbers[5], total=0;
    printf("Input the first number: ");
    scanf("%d", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%d", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%d", &numbers[2]);
	printf("\nInput the fourth number: "); 
    scanf("%d", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%d", &numbers[4]);
    for(j=0; j<5; j++){
        if((numbers[j]%2) != 0)
    
     total += numbers[j];
}
printf("\nSum of all odd values: %d", total);
	return 0;
	}


// Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, pr1;
    printf(" enter the first number (a): ");
    scanf("%lf", &a );
    printf("enter the second number (b): ");
    scanf("%lf", &b );
    printf("enter the third number (c): ");
    scanf("%lf", &c);
    
    pr1= (b*b)- (4*(a)*(c));
    
    if (pr1 >0 && pr1 != 0){
        double x, y;
        pr1 = sqrt(pr1);
        x =(-b + pr1)/(2*(a));
        y =(-b-pr1)/(2*(a));
        printf("root1 %lf", x);
        printf("root2 %lf", y);
    }
    else
    {
        printf("impossible to find the roots ");
    }
    return 0;
}

// writing a program for printing the range of given interger

#include <stdio.h>

int main() {
	int x;
	printf("\nInput an integer: "); 
	scanf("%d", &x);
	if(x >=0 && x <= 20) 
	{
		printf("Range [0, 20]\n");
	} 
	else if(x >=21 && x <= 40) 
	{
		printf("Range (25,50]\n");
	} 
	else if(x >=41 && x <= 60) 
	{
		printf("Range (50,75]\n");
	} 
	else if(x >61 && x <= 80) {
		
		printf("Range (61,80]\n");
	} 
	else 
	{
	printf("Outside the range\n");
	}	
	return 0;
}



// Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.
// Test Data :
// Input an integer: 13
// Expected Output:
// Positive Odd
#include <stdio.h>
int main(){
    int x;
    printf("Input an integer: "); // initially it print the funcition
    scanf("%d", &x);  // it will take the value and store it
    
    if (x==0){
        printf("positive \n"); // if x=0 then it will print the function
    }
    else if (x<0 && (x%2) !=0){   // it will check the condition
        printf("Negative Odd \n"); // 
        
    }
    else if (x<0 && (x%2) == 0){ 
        printf("negative even \n");
    }
    else if (x>0 && (x%2 !=0)){
        printf("positive odd \n");
    }
    else if (x>0 && (x%2) == 0){
        printf("positive even \n");
    }
    return 0;  // after it will return to 0
    
}






















