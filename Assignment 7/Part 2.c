//
//  Part 2.c
//  Assignment 7
//
//  Created by Trung Tran on 5/21/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>

int main()
{
    int ary1[4][3],ary2[4][3],arySum[4][3];
    printf(" Please input a 4 by 3 matrix preferably having less than 5 digits.)\n");
    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            printf(" Enter element %d %d: ",i,j);
            scanf("%d",&ary1[i][j]);
        }
    }
    printf(" Now input the second 4 by 3 matrix.\n");
    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            printf(" Enter element %d %d: ",i,j);
            scanf("%d",&ary2[i][j]);
        }
    }
    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            arySum[i][j]=ary1[i][j]+ary2[i][j];
        }
    }
    printf(" The sum of these two matrices is:\n");
    int *p;
    for (p=&arySum[0][0]; p<=&arySum[0][3]; p++) {
        printf("%5d   ", *p);
    }
    printf("\n");
    printf("\n");
    for (p=&arySum[1][0]; p<=&arySum[1][3]; p++) {
        printf("%5d   ", *p);
    }
    printf("\n");
    printf("\n");
    for (p=&arySum[2][0]; p<=&arySum[2][3]; p++) {
        printf("%5d   ", *p);
    }
    printf("\n");
    printf("\n");
    for (p=&arySum[2][0]; p<=&arySum[2][3]; p++) {
        printf("%5d   ", *p);
    }
    printf("\n");
    printf("\n");
}

