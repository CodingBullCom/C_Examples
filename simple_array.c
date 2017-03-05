// File: simple_array.c
// Created on: 11th Feb 2017
// Updated on: 5th Mar 2017
// Author: Pawan Kumar Singh [pawan@codingbull.com]
// http://www.codingbull.com   
//
// This source code is the part of tutorial series provided on http://www.codingbull.com and 
// it can be used/ distributed without any restriction.  

#include<stdio.h>
int main(){
   
   	int array[] = {10,20,30,40,50,60,70,80,90,100};
   	int i = 0;

   	//print values stored in array
   	printf("\nPrinting values stored in array");
   	while(i < 10){
      	printf("\n%p - %d", (void *)&array[i], array[i]);
    	i++;
   	}

   	//modify few values
   	array[3] = 33;
   	array[7] = 7*11;
   	array[8] = array[8]+9;

	//print values stored in array
	i = 0;
	printf("\n\nPrinting values stored in array");
   	while(i < 10){
      printf("\n%p - %d", (void *)&array[i], array[i]);
      i++;
   }

   printf("\n");
}
