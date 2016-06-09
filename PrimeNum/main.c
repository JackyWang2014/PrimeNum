//
//  main.c
//  PrimeNum
//
//  Created by WangQitai on 16/5/21.
//  Copyright © 2016年 WangQitai. All rights reserved.
//

#include <stdio.h>
#include <math.h>
void printPrime(int n)
{
    int a = sqrt(n);
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            break;
        }
        if (i == (int)sqrt(n)) {
            printf("%d ",n);
        }
    }
}

int main(int argc, const char * argv[]) {
//    int n = 9;
//    int a = sqrt(n);
//    printf("n = %d a = %d",n,a);
    
    for (int i = 4; i < 100; i++) {
        printPrime(i);
    }
    
    
    return 0;
}
