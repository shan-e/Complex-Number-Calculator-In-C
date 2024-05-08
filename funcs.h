#ifndef FUNCS_H
#define FUNCS_H

// function prototypes
struct Complex { double realPart; double imaginaryPart; };
void printUsage(char *executable);
struct Complex addComplex(struct Complex num1, struct Complex num2);
struct Complex subtractComplex(struct Complex num1, struct Complex num2);
struct Complex multiplyComplex(struct Complex num1, struct Complex num2);
struct Complex divideComplex(struct Complex num1, struct Complex num2);

#endif //FUNCS_H
