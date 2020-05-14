//
//  main.c
//  Assignment 4 part 3
//
//  Created by Trung Tran on 5/14/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>

int main() {
    printf(" The program will calculate the sum of the first thousand natural numbers.\n");
    int S=0,n;
    for (n=1; n<=1000; n++) {
        S=S+n;
    }
    printf(" The sum of the first thousand positive intergers is %d.\n",S);
}
