//
//  main.c
//  Fibonacci
//
//  Created by Trung Tran on 5/16/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>

int main() {
    int fib1=0,fib2=1,fib12=1;
    int n;
    printf(" Enter n: ");
    scanf("%d",&n);
    while (fib12<n) {
        fib1 = fib2;
        fib2 = fib12;
        fib12 = fib1 + fib2;
    }
    printf(" The closest number from Fibonacci sequence that is smaller than %d is %d.\n",n,fib2);
}
