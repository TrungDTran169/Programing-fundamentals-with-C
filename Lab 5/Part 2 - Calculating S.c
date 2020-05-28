//
//  main.c
//  Lab 5
//
//  Created by Trung Tran on 5/14/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;
    double S=0;
    printf(" Enter n:\n");
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        S = S + 1/(double)i;
    }
    printf("Result is %lf.\n",S);
}
