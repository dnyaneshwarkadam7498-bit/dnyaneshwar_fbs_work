#include <stdio.h>

int main() {
    char str[] = "I Love My India";
    char* res;
    int length = 0;
    int maxLen = 0;
    int i = 0;

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (length > maxLen) {
                maxLen = length;
                res = &str[i - length]; 
            }
            length = 0;
            
            if (str[i] == '\0') break; 
        } else {
            length++;
        }
        i++;
    }

    printf("Longest String was of : %d ", maxLen);
    printf("\nthe String: %.*s\n", maxLen, res); 

    return 0;
}