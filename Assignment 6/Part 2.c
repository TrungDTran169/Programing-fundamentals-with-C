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
        printf(" Enter the interger value of elenment number %d: ",i);
        scanf("%d",&ary[i]);
    }
    int firstPositive=0;
    for (int i=0; i<n; i++) {
        if (ary[i]>0) {
            firstPositive=ary[i];
            break;
        }
    }
    if (firstPositive==0) {
        printf(" There are no positive elements in this array.\n");
        return 0;
    }
    int smallestPositive=firstPositive;
    for (int i=0; i<n; i++) {
        if (ary[i]>0 && ary[i]<=smallestPositive) {
            smallestPositive=ary[i];
        }
    }
    printf(" The smallest positive element of this array is %d.\n",smallestPositive);
}
