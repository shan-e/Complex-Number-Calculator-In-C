#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.realPart = num1.realPart + num2.realPart;
    result.imaginaryPart = num1.imaginaryPart + num2.imaginaryPart;
    return result;
}

struct Complex subtractComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.realPart = num1.realPart - num2.realPart;
    result.imaginaryPart = num1.imaginaryPart - num2.imaginaryPart;
    return result;
}

struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.realPart = num1.realPart * num2.realPart - num1.imaginaryPart * num2.imaginaryPart;
    result.imaginaryPart = num1.realPart * num2.imaginaryPart + num1.imaginaryPart * num2.realPart;
    return result;
}

struct Complex divideComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    double denominator = num2.realPart * num2.realPart + num2.imaginaryPart * num2.imaginaryPart;
    result.realPart = (num1.realPart * num2.realPart + num1.imaginaryPart * num2.imaginaryPart) / denominator;
    result.imaginaryPart = (num1.imaginaryPart * num2.realPart - num1.realPart * num2.imaginaryPart) / denominator;
    return result;
}

void printUsage(char *executable) { printf("Usage: %s <realNum1> <imaginaryNum1> <+ | - | * | /> <realNum2> <imaginaryNum2> in format -> z = a + bi \n", executable); exit(-1); }