#include <stdio.h>
#include <math.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

float square_root(float a) {
    return sqrt(a);
}

float power(float a, int m) {
    return pow(a, m);
}


int main() {
	
    float num1, num2, result;
    int o;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    
    printf("Choose an operation:\n");
    
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square root\n");
    printf("6. Power\n");
    
    scanf("%d", &o);

    switch(o) {
        case 1:
            result = add(num1, num2);
            printf("%.2f + %.2f = %.2f", num1, num2, result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("%.2f - %.2f = %.2f", num1, num2, result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("%.2f * %.2f = %.2f", num1, num2, result);
            break;
        case 4:
            result = divide(num1, num2);
            printf("%.2f / %.2f = %.2f", num1, num2, result);
            break;
        case 5:
            result = square_root(num1);
            printf("sqrt(%.2f) = %.2f", num1, result);
            break;
        case 6:
            result = power(num1, (int) num2);
            printf("%.2f ^ %d = %.2f", num1, (int) num2, result);
            break;
        default:
            printf("Invalid operation");
    }

    return 0;
}
