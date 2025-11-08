#include <stdio.h>
#include <string.h>

#define maxlen 100

char str1[maxlen + 1];
char str2[maxlen + 1];

int main() {
    scanf("%100s", str1);
    scanf("%100s", str2);
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int prefix_len = 0;
    for (int i = 0; i < len1 && i < len2; i++) {
        if (str1[i] == str2[i]) {
            prefix_len++;
        } else {
            break;
        }
    }

    int suffix_len = 0;
    for (int i = 0; i < len1 && i < len2; i++) {
        int pos1 = len1 - 1 - i;
        int pos2 = len2 - 1 - i;
        
        if (str1[pos1] == str2[pos2]) {
            suffix_len++;
        } else {
            break;
        }
    }
    
    printf("%d %d\n", prefix_len, suffix_len);
    
    return 0;
}