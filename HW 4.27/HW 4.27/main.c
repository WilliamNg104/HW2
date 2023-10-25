//
//  main.c
//  HW 4.27
//
//  Created by William Ng on 2023/10/22.
//

#include <stdio.h>
int power(int base, int power);

int main(){
    int N;
    
    printf("INput the Num: ");
    scanf("%d", &N);
    
    int a, b;
    for(a = 0; a < N ; a++) {
        for(b = 0; b< N; b++) {
            if ((a < b) && (b < N - a - b)) {
                if (power(a, 2) + power(b, 2) == power(N - a - b, 2)) {
                    printf("%d^2 + %d^2 = %d^2 \n", a, b, N-a-b);
                }
            }
        }
    }
}


int power(int base, int power) {
    int result = 1;
    for(int i = 0; i < power ; i++) {
        result *= base;
    }
    return  result;
    
}
