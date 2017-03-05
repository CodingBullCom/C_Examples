// File: simple_pointer.c
// Created on: 11th Feb 2017
// Updated on: 5th Mar 2017
// Author: Pawan Kumar Singh [pawan@codingbull.com]
// http://www.codingbull.com   
//
// This source code is the part of tutorial series provided on http://www.codingbull.com and 
// it can be used/ distributed without any restriction.  

#include<stdio.h>

int main(){
   int *ptr, a=10;
   ptr = &a;
   printf("\n Value of 'ptr': %p", ptr);
   printf("\n Address of 'ptr': %p", &ptr);
   printf("\n Address of 'a': %p", &a);
   printf("\n Value of 'a': %d", a);
   printf("\n Value at address stroed in 'ptr': %d\n", *ptr);

}
