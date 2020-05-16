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
    scanf("%d",&n);
    int cnt;
    for (cnt=1; n/10>0; cnt++) {
        n/=10;
    }
    printf("n has %d digit(s).\n",cnt);
}
