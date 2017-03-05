// File: palindrom.c
// Created on: 5th Mar 2017
// Updated on: 5th Mar 2017
// Author: Pawan Kumar Singh [pawan@codingbull.com]
// http://www.codingbull.com   
//
// This source code is the part of tutorial series provided on http://www.codingbull.com and 
// it can be used/ distributed without any restriction.  

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int const true = 1; 
int const false = 0;

int is_palindrom(char *string, int length){
    
    int result = true;
    
    for(int i=0; i < length/2; i++){

        if (string[i] != string[length-i-1]){
            result = false;
            break;
        }
    }
    return result;
}

int main() {

    char *test_strings[] = {"aba", //a palindrom
                            "abacdadcaba", //a palindrom
                            "abacadcba",//not a palindrom 
                            "abacacba", //not a palindrom
                            "madam", //a palindrom
                            "eye", //a palindrom
                            "noon", //a palindrom
                            "radar", //a plindrom
                            "step on no pets" //a palindrom
                        };  

    int tests = sizeof(test_strings)/sizeof(test_strings[0]);
    while(tests-- > 0){
        char *test_string = test_strings[tests];
        int string_length = strlen(test_string);
        printf("%s :: %s\n", test_string, is_palindrom(test_string, string_length) == true ? "YES, IT'S A PALINDROM": "NO, IT'S NOT A PALINDROM");
    }
    
    return 0;
}