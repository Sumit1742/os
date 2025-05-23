#include <stdio.h>
#include <string.h>
#define SEGMENT_SIZE 8
int calculate_checksum(char segment[]) {
    int checksum = 0;
    for (int i = 0; segment[i]!='\0'; i++) {
        if (segment[i] == '1') {
            checksum += 1; 
        }
    }
    
    return checksum;
}

int main() {
    char binary_str[17];  
    printf("Enter a 16-bit binary number: ");
    scanf("%16s", binary_str);
  
    if (strlen(binary_str) != 16) {
        printf("Please enter exactly 16 bits!\n");
        return 1;
    }
    
    int total_checksum = 0;
    for (int i = 0; i < 16; i += SEGMENT_SIZE) {
        char segment[SEGMENT_SIZE + 1];  
        int j = 0;
        
        for (int k = i; k < i + SEGMENT_SIZE && k < 16; k++) {
            segment[j] = binary_str[k];
            j++;
        }
    
        while (j < SEGMENT_SIZE) {
            segment[j] = '0'; 
            j++;
        }
        
        segment[SEGMENT_SIZE] = '\0'; 
        total_checksum += calculate_checksum(segment);
    }
    printf("The checksum of the binary number is: %d\n", total_checksum);
    
    return 0;
}

