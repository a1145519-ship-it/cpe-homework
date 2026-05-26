#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char keyboard[60] = { "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"};
    char a[1000];
    while (fgets(a,sizeof(a),stdin) != NULL) {
        for (int i = 0; a[i] != '\0'; i++) {
            for (int j = 0; j < 50; j++) {
                if (a[i] == keyboard[j]) {
                    a[i] = keyboard[j - 2];
                    continue;
                }
            }
        }
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] == ' ') {
                printf(" ");
            }
            else {
                printf("%c", a[i]);
            }
        }
    }
    return 0;
}