/*
 ============================================================================
 Name        : lab1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

#define pi 3.14 //define pi

int main(void) {
	float radius = 0.0;//initialize variables
	float area = 0.0;
	printf("What is the radius of your circle?");
	scanf("%f", &radius);//get radius of circle
	if(radius >= 0) {
		area = 2 * pi * radius; //calculate circumference
		printf("The area of your circle is %f", area);
	} else { //if radius entered is < 0
		printf("Radius cannot be less than zero.");
	}asdfasdf
	return 0;asjdfkljaskldjf
}
