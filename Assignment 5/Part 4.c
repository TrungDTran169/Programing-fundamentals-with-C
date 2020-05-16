//
//  main.c
//  Assignment 5
//
//  Created by Trung Tran on 5/15/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b,gcd;
    printf(" Enter positive natural number a: ");
    scanf("%d",&a);
    printf(" Enter positive natural number b: ");
    scanf("%d",&b);
    for (int i=1; i<=a && i<=b; i++) {
        if (a%i==0 && b%i==0) {
            gcd=i;
        }
    }
    printf(" The greatest common divisor of %d & %d is %d.\n",a,b,gcd);
}
