//
//  main.c
//  testing
//
//  Created by Trung Tran on 5/15/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>
int main()
{
    printf(" Please enter two whole numbers a and b satisfying a being smaller than b.\n");
    int a,b;
    printf(" First let's enter a: ");
    scanf("%d",&a);
    printf(" Now enter b: ");
    scanf("%d",&b);
    while (b<=a) {
        printf(" Invalid input. Please make sure that a is smaller than b.\n");
        printf(" Now enter a again: ");
        scanf("%d",&a);
        printf(" Enter b again; ");
        scanf("%d",&b);
    }
    int s=0;
    for (int i=a; i<=b; i++) {
        s+=i;
    }
    printf("The sum of all whole numbers from %d to %d is %d.\n",a,b,s);
}
