//
//  main.c
//  Assignment 7
//
//  Created by Trung Tran on 5/21/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>

int main() {
    printf(" Give me a 4x4 matrix I'll calculate the averages of its diagonal lines.\n");
    int ary[4][4];
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf(" Enter %d %d element: ",i,j);
            scanf("%d",&ary[i][j]);
        }
    }
    double avg1,avg2;
    int cnt1=0,sum1=0,cnt2=0,sum2=0;
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            if (i==j) {
                cnt1++;
                sum1+=ary[i][j];
            }
            if (j==3-i) {
                cnt2++;
                sum2+=ary[i][j];
            }
        }
    }
    avg1=(double)sum1/(double)cnt1;
    avg2=(double)sum2/(double)cnt2;
    printf(" The averages of this matrix's diagonal lines are %0.2lf and %0.2lf.\n",avg1,avg2);
}
