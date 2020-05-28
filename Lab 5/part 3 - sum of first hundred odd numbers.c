//
//  main.c
//  Lab 5
//
//  Created by Trung Tran on 5/14/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>

int main() {
    int sum=0,cnt=1;
    for (int i=1; cnt<101; i=i+2) {
        sum = sum + i;
        cnt = cnt +1;
    }
    printf("The sum of the first hundred odd numbers is %d.\n",sum);
}
