//
//  main.c
//  Assignment 5
//
//  Created by Trung Tran on 5/15/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>

int main() {
    printf(" Enter a positive natural number: ");
    int n;
    int digitSum = n%10;
    scanf("%d",&n);
    for (int i=n; i>0; i/=10) {
        digitSum=digitSum+i%10;
    }
    printf(" Sum of all %d's digit(s) is %d.\n",n,digitSum);
}
