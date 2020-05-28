//
//  main.c
//  Lab 5
//
//  Created by Trung Tran on 5/14/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,cnt=0;
    printf(" Enter n:\n");
    scanf("%d",&n);
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            cnt++;
        }
    }
    if (cnt>0) {
        printf("%d is not a prime number.\n",n);
    } else {
        printf("%d is a prime number.\n",n);
    }
}
