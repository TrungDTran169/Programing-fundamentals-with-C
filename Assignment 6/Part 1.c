//
//  main.c
//  Assignment 6
//
//  Created by Trung Tran on 5/19/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>

int main()
{
    int n;
    printf(" Enter n as the elements number of the array: ");
    scanf("%d",&n);
    int ary[n];
    for (int i=0; i<n; i++) {
        printf(" Enter the value of elenment number %d: ",i);
        scanf("%d",&ary[i]);
    }
    int lastOddElement=0;
    for (int i=0; i<n; i++) {
        if (ary[i]%2!=0) {
            lastOddElement=ary[i];
        }
    }
    if (lastOddElement==0) {
        printf(" There are no odd elements in this array.\n");
    } else {
        printf(" The final odd element of the array is %d.\n",lastOddElement);
    }
}
