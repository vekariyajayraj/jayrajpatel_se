#include <stdio.h>
int main() {
    char name[100]; 
    int i;
    printf("Enter a name: ");
    scanf("%s", name);

    for (i=0;i<100;++i) {
        printf("%s\t", name);
    }
}
