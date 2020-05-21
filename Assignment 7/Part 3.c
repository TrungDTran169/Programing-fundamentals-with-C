//
//  main.c
//  Transpose a 4 by 3 matrix
//
//  Created by Trung Tran on 5/21/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>

int main() {
    printf(" Please input a 4 by 3 matrix to transpose.\n");
    int ary[4][3];
    int aryTrp[3][4];
    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            printf(" Enter value for element %d %d: ",i,j);
            scanf("%d",&ary[i][j]);
        }
    }
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            aryTrp[i][j] = ary[j][i];
        }
    }
    printf(" The transposed matrix is:\n");
    int *p;
        for (p=&aryTrp[0][0]; p<=&aryTrp[0][3]; p++) {
            printf("%5d   ", *p);
        }
        printf("\n");
        printf("\n");
        for (p=&aryTrp[1][0]; p<=&aryTrp[1][3]; p++) {
            printf("%5d   ", *p);
        }
        printf("\n");
        printf("\n");
        for (p=&aryTrp[2][0]; p<=&aryTrp[2][3]; p++) {
            printf("%5d   ", *p);
        }
        printf("\n");
        printf("\n");
}
