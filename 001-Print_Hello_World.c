/**
* Program Serial : 001
* Program Name : Print Hello World
* Program Type : C Program
* Programmer : Rabbi Islam Yeasin
*              B.Sc. in Computer Science and Engineering,UIU
*              CS50 Certified, Harvard University
*              rabbi.yeasin-arena.com
* Program Created : 13.02.2023
* Program Updated : 13.02.2023
*/

#include<stdio.h>

/**
    #include <stdio.h> – This statement tells compiler to include this stdio.h file in the program.
    This is a standard input output file that contains the definitions of common input output functions
    such as scanf() and printf(). In the above program we are using printf() function.*/

int main()
/** int main() – Here main() is the function name and int is the return type of this function.
    Every C program must have this function because the execution of program begins with the main() function.
    The 0 return value of this function represents successful execution of program while the return
    value 1 represents the unsuccessful execution of program. This is the reason we have return 0;
    statement at the end of this main function.*/

{
     printf("Hello World");

     //printf("Hello World"); – This function displays the content within double quotes as it is on the screen.

    return 0 ;
    //return 0; – As mentioned above, the value 0 means successful execution of main() function.


}


// program in a short
/**
    #include<stdio.h>
    int main()
    {

        printf("Hello World");

        return 0 ;
    }


*/
