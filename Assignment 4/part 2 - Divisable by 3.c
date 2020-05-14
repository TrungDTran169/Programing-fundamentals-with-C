//
//  main.c
//  assignment 4 part 2
//
//  Created by Trung Tran on 5/13/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>

int main()
{
    printf("Give me a natural number n. I'll find out how many natural numbers that are smaller than n and divisable by three.\n");
    int n;
    int cnt=1;
    printf("Enter number n:\n");
    scanf("%d",&n);
    while (n<0) {
        printf("%d is not a natural number. Please enter n again.\n",n);
        scanf("%d",&n);
    }
    n=n-1;
    while (n>0) {
        if (n%3==0) {
            cnt=cnt+1;
            n=n-3;
        } else {
            n=n-1;
        }
    }
    printf("there are %d number(s).\n",cnt);
}
