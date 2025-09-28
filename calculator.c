#include <stdio.h>
#include <math.h>

double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);
int modulus(int a, int b);
double power(double a, double b);
unsigned long long factorial(int a);
void calculator_menue();


int main(){
    double a, b;
    char operator;
    printf("Welcom to the APP. \n");
    while(1){
        printf("Enter the first number : ");
        scanf("%lf",&a);
        printf("\n");
        printf("Enter the second number : ");
        scanf("%lf",&b);
        printf("\n");
        printf("Please select the operation you want to apply \nplease keep in mind that if you first enter 3 , and then enter 5 and select plus sign,\nthe answer will be the result of : 3 + 5");
        printf("\nand for factorial, the answer will be the result of the first number factorial: \n");
        calculator_menue();
        //operator = getchar();
        scanf(" %c", &operator);
        switch(operator){
            case 'q':
            case 'Q':
                printf("Goodby.\n");
                return 0;
            case '+':
                printf("The result is : %.2lf \n", addition(a,b));
                break;
            case '-':
                printf("The result is : %.2lf \n", subtraction(a,b));
                break;
            case '*':
                printf("The result is : %.2lf \n", multiplication(a,b));
                break;
            case '/':
                printf("The result is : %.2lf \n", division(a,b));
                break;
            case '%':
                printf("The result is : %d \n", modulus((int)a, (int)b));
                break;
            case '^':
                printf("The result is : %.2lf \n", power(a,b));
                break;
            case '!':
                printf("The result is : %llu \n", factorial((int)a));
                break;
            default: 
               printf("The unvalid operator is entered.");
        }
        printf("--------------------------------------------------\n");
    }
    return 0;
}

void calculator_menue(){
    printf("+ for addition\n");
    printf("- for subtraction\n");
    printf("* for multiplication\n");
    printf("/ for devision\n");
    printf("%% for modulus\n");
    printf("^ for power\n");
    printf("! for factorial\n");
    printf("q or Q for quiting the app\n");
}
double addition(double a, double b){
    return a + b;
};
double subtraction(double a, double b){
    return a - b;
};
double multiplication(double a, double b){
    return a * b;
};
double division(double a, double b){
    if(b == 0 ) {
        printf("ERROR: division by 0 .\n");
        return 0;
    }
    return a / b;
};
int modulus(int a, int b){
    return a % b;
};
double power(double a, double b){
    if(b == 0 ) return 1;
    return pow(a,b);
};
unsigned long long factorial(int a){
    if(a < 0) return 0;
    if(a == 1 || a == 0) return 1;
    return a * factorial(a - 1);
};
