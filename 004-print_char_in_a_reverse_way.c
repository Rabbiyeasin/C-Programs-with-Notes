/**
* Program Serial : 001
-------
* Program Name : Print characters in a reverse way
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
 int main() 
 {
    char char1 = 'X';
    char char2 = 'M';
    char char3 = 'L';

	printf("The reverse of %c%c%c is %c%c%c\n",
			char1, char2, char3,
			char3, char2, char1);

	return(0);
}