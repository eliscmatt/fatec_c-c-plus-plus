#include <stdio.h>

void hanoi(int n, char ori, char dest, char aux){
    if(n == 1){
        printf("Mover disco 1 do pino %c para pino %c\n", ori , dest);
        return;
    }
    hanoi(n-1, ori, aux, dest);
    printf("Mover disco %d do pino %c para pino %c\n", n, ori, dest);
    hanoi(n-1, aux, dest, ori);
}

int main(){
    int n;
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    return 0;
}