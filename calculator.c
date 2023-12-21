#include <stdio.h>

int main() {
    char oper;
    int no1, no2, result;

    printf("Enter the value of no1: ");
    scanf("%d", &no1);

    printf("Enter the value of no2: ");
    scanf("%d", &no2);

    printf("What operation would you like to perform?\n");
    printf("1. for addition type 'a'\n2. for subtraction type 'b'\n");
    
    // Use a space before %c in scanf to skip any whitespace characters (like newline) left in the input buffer.
    scanf(" %c", &oper);

    switch (oper) {
        case 'a':
            result = no1 + no2;
            printf("Result of addition: %d\n", result);
            break;
        case 'b':
            result = no1 - no2;
            printf("Result of subtraction: %d\n", result);
            break;
        default:
            printf("Invalid operation code entered.\n");
    }

    return 0;
}
