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
        for (int k=0; k<i; k++) {
            while (ary[i]==ary[k]) {
                printf(" The value %d already exists, pleas enter another: ", ary[i]);
                scanf("%d",&ary[i]);
            }
        }
    }
}
