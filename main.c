/*
 * Name: Shane Easo
 * Project Type: Fun side project :)))
 * Email: shane.easo@ucdconnect.ie
 *
 * Project: Complex Number Calculator
 * Description: Small project to calculate the result of two complex numbers and the associated operator
 *              This project was inspired by my Unix module COMP20200 where we learned about command line arguments!
 * Date: 16/02/24
 * Usage: gcc -o complex main.c funcs.c | ./complex a b + a b in format -> z = a + bi
*/

#include <stdio.h>
#include <stdlib.h>
#include "funcs.h" // import function library

int main(int argc, char *argv[]) {
    struct Complex num1;
    struct Complex num2;
    struct Complex answer;
    char *symbol = argv[3]; // will always be 3rd arg from argv

    //if there is not 6 args altogether, print usage
    if (argc != 6) printUsage(argv[0]);

    // will always be nth arg from argv
    num1.realPart = atof(argv[1]);
    num1.imaginaryPart = atof(argv[2]);
    num2.realPart = atof(argv[4]);
    num2.imaginaryPart = atof(argv[5]);

    // check operator and do associated method
    switch (symbol[0]) {
        case '+' : answer = addComplex(num1, num2); break;
        case '-' : answer = subtractComplex(num1, num2); break;
        case '*' : answer = multiplyComplex(num1, num2); break;
        case '/' : answer = divideComplex(num1, num2); break;
        default: printUsage(argv[0]); break;
    }

    printf("Result: %.0f %s %.0fi\n", answer.realPart, argv[3], answer.imaginaryPart);
    return 0;
}
