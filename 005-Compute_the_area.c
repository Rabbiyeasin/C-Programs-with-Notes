/**
* Program Serial : 001
-------
* Program Name : Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
-------
* Program Type : C Program
* Programmer : Rabbi Islam Yeasin
*              B.Sc. in Computer Science and Engineering,UIU
*              CS50 Certified, Harvard University
*              rabbi.yeasin-arena.com
* Program Created : 15.02.2023
* Program Updated : 15.02.2023
*/

#include <stdio.h> 
/* height and width of a rectangle in inches */
int width;          
int height;         

int area;           
int perimeter;      

int main() {
	height = 7;
	width = 5;

    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);

return(0);
}