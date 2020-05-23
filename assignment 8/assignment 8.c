//
//  main.c
//  assignment 8
//
//  Created by Trung Tran on 5/23/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>

int main() {
    printf(" Let me know how many element(s) you want to have in your array: ");
    int n;
    scanf("%d",&n);
    int ary[n];
    for (int i=0; i<n; i++) {
        printf(" Please enter element number %d: ",i);
        scanf("%d",&ary[i]);
    }
    int currentLength=0,maxLength=0;
    for (int i=0; i<n; i++) {
        if (ary[i]>0) {
            currentLength++;
            if (currentLength>maxLength) {
                maxLength=currentLength;
            }
        } else {
            currentLength=0;
        }
    }
    if (maxLength==0) {
        printf(" There are no positive element(s) for calculating the sequence's length.\n");
    } else {
        printf("\n The longest positive-element sequence takes %d place(s).\n",maxLength);
    }
    int currentSum=0,maxSum=0;
    for (int i=0; i<n; i++) {
        if (ary[i]>0) {
            currentSum+=ary[i];
            if (currentSum>maxSum) {
                maxSum=currentSum;
            }
        } else {
            currentSum=0;
        }
    }
    if (maxSum==0) {
        printf("\n There are no positive element(s) to calculate the sequence's sum.\n");
    } else {
        printf("\n The positive-element sequence that has the largest sum is %d.\n",maxSum);
    }
}
