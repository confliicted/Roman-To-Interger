#include <string.h>
#include <stdlib.h>

//Header file of the converting functions between integers and roman numerals
// Author: Antonella Sofia Garcia Alvarez
// Github: https://github.com/alu0101227610

char *int_to_roman(int val); //val is guarantied to be a number between 1 and 3999, both included.

int roman_to_int(char *numeral); //like in the last function the number is guarantied to be a number between 1 and 3999, both included.

int value(char r);