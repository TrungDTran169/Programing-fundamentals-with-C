//
//  main.c
//  Classwork
//
//  Created by Trung Tran on 5/12/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Please enter three numbers a, b and c as three sides of a triangle.");
    printf("Please enter side a.\n");
    scanf("%d",&a);
    printf("Now enter side b.\n");
    scanf("%d",&b);
    printf("Finally let's enter side c.\n");
    scanf("%d",&c);
    
    while (a<=0 || b<=0 || c<=0 || a+b<=c || a+c<=b || b+c<=a) {
        printf("Since input you entered are not three valid sides from a triangle, you need to enter those values again.\n");
        printf("Enter side a");
        scanf("%d",&a);
        printf("Enter side b");
        scanf("%d",&b);
        printf("Enter side c");
        scanf("%d",&c);
    }
    printf("They are three sides of a triangle");
}
