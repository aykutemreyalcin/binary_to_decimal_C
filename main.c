#include <stdio.h>
#include <math.h>
#include <string.h>

int binary_to_decimal(const char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        } else if (binary[i] != '0') {
            printf("Invalid binary number.\n");
            return -1;
        }
    }
    return decimal;
}

int main() {
    char binary[33];
    
    printf("Enter a binary number: ");
    scanf("%32s", binary);
    
    int decimal = binary_to_decimal(binary);
    if (decimal != -1) {
        printf("Decimal equivalent: %d\n", decimal);
    }
    
    return 0;
}
