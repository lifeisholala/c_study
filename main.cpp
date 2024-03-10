#include <stdio.h>
int main() {
    int decimal = 0;
    scanf("%d", &decimal);
    int binary[100] = {0,};
    int position = 0;
    while(1){
        binary[position] = decimal % 2;
        decimal = decimal / 2;
        position++;
        if (decimal == 0)
            break;
    }
    for (int i = position - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}
