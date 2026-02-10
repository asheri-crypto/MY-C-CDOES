#include <stdio.h>
int main() {
    int n1, n2, s;
    printf("Enter any 2 numbers here: ");
    scanf("%d %d", &n1, &n2);
    s = n1 + n2;
    printf("The sum of %d and %d is %d", n1, n2, s);
    return 0;
}
