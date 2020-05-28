//
//  main.cpp
//  A9p1
//
//  Created by Trung Tran on 5/26/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    printf(" Enter the number of string(s) you want to have in your array: ");
    int n;
    scanf("%d",&n);
    std::string ary[n];
    for (int i=0; i<n; i++) {
        printf("\n Please enter string %d: ",i);
        std::cin >> ary[i];
    }
    printf("\n Please enter the string that you want to check if it exists in the array: ");
    std::string stringToCheck;
    std::cin >> stringToCheck;
    bool checkedStringContained=false;
    for (int i=0; i<n; i++) {
        if (ary[i]==stringToCheck) {
            checkedStringContained=true;
        }
    }
    if (checkedStringContained==true) {
        printf("\n Yes. The string does exist in the array.\n");
    } else {
        printf("\n No. The is not contained in the array.\n");
    }
}
