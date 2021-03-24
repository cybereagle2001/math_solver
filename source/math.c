//coded by cybereagle2001

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void firstdegree(){
	system("clear");
	float alpha,betta,gama,result;
	char x;
	printf("\e[0;33m");
	printf("=======================================\n");
	printf("         first degree solver        \n");
	printf("=======================================\n");
	printf("\e[0;37m");
	printf("please write below the coefficients: \n");
	printf("write a: ");
	scanf("%f",&alpha);
	printf("\n");
	printf("write b: ");
	scanf("%f",&betta);
	printf("\n");
	printf("write c: ");
	scanf("%f",&gama);
	if(alpha != 0){
		result= (gama-betta)/alpha;
		printf("the solution of this first degree equation is %f",result);
	}
	else {
		printf("there is no solution");
	}
	printf("\n");
	printf("press a and enter to leave ");
	scanf("%s",&x);
	exitc();
}

void seconddegree(){
	float alpha, betta, gama,result;
	double delta;
	double sqrt1,firstsolution,secondsolution;
	char x;
	system("clear");
	printf("\e[0;36m");
	printf("====================================\n");
	printf("      Second degree solver \n");
	printf("====================================\n");
	printf("\e[0;37m");
	printf("please write bellow the coefficients: \n");
	printf("write a: ");
	scanf("%f",&alpha);
	printf("\n");
	printf("write b: ");
	scanf("%f",&betta);
	printf("\n");
	printf("write c: ");
	scanf("%f",&gama);
	printf("\n");
	if (alpha==0){
		if (betta == 0){
			if(gama == 0){
				printf("all real numbers are solutions to this equation");
			}
		}
		else {
			printf("the solution for this equation is: %f", -gama/betta);
		}
	}
	else{
		delta= (betta * betta)-(4* alpha* gama);
		if (delta <0){
			printf("there is no real solution");
		}
		else{
			if(delta ==0){
				printf("there is only one solution: %f", -betta/(2*alpha));
			}
			else{
				sqrt1 = sqrt(delta);
				firstsolution = (-betta+sqrt1)/(2*alpha);
				secondsolution = (-betta -sqrt1)/ (2*alpha);
				printf("the first solution is %f and the second solution is %f\n",firstsolution,secondsolution);
			}
		}
	}
	printf("\n");
	printf("press a and enter to leave ");
	scanf("%s",&x);
	exitc();
}

void exitc()
{
    system("clear");
    printf("\033[1;94m");
    printf("                 ////////////////////////////////////////////////\n");
    printf("                /                                              /\n");
    printf("                /                                              /\n");
    printf("                /   ///////// //////////  ////     //////      /\n");
    printf("                /   ////          ///     ////    //// ///     /\n");
    printf("                /     //////      ///     ////    ///  ////    /\n");
    printf("                /         ///     ///     ////   ///////////   /\n");
    printf("                /   ////////      ///     ////  ////     ////  /\n");
    printf("                /                                              /\n");
    printf("                /                                              /\n");
    printf("                ////////////////////////////////////////////////\n");
    printf("                      Secret Tunisian Information Agency\n");
    printf("\033[0m");
    printf("thanks for useing ");
    printf("\033[1;31m");
    printf("math solver");
    printf("\033[0m");
    printf(" by @cybereagle2001. If you had any problem please contact us on");
    printf("\033[0;33m");
    printf(" cybereagle592@gmail.com");
    printf("\033[0m");
    printf(" or on github");
    printf("\033[0;33m");
    printf(" github.com/cybereagle2001. ");
}


void main()
{
	int menu;
	system("clear");
	printf("\e[0;37m");
	printf("©All Right Reserved to cybereagle2001\n");
	printf("\e[0;31m");
	printf("==============================\n");
	printf("  hello user in math solver \n");
	printf("==============================\n");
	printf("\e[0;37m");
	printf("please choose one option: \n");
	printf("      1* ax+b\n");
	printf("      2* ax²+bx+c \n");
	printf("user$ (choose the number): ");
	scanf("%d",&menu);
	switch(menu)
	{
		case 1: firstdegree(); break;
		case 2: seconddegree(); break;
	}
}
