#include <stdio.h>

int main() {

int x, y, z;

printf("Insira um valor inteiro para x: \n");
scanf("%d", &x);

printf("Insira um valor inteiro para y: \n");
scanf("%d", &y);

printf("Insira um valor inteiro para z: \n");
scanf("%d", &z);

if ((x>=y)&&(x>=z)) {
    printf("Entre %d, %d e %d, o maior valor é %d", x, y, z, x);
}

if ((y>=x)&&(y>=z)) {
    printf("Entre %d, %d e %d, o maior valor é %d", x, y, z, y);
}

if ((z>=x)&&(z>=y)) {
    printf("Entre %d, %d e %d, o maior valor é %d", x, y, z, z);
}

return 0;
}

