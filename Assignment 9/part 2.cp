//
//  main.cpp
//  ass9cpp
//
//  Created by Trung Tran on 5/25/20.
//  Copyright © 2020 Trung Tran. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdbool.h>
    int main()
{
        std::cout << " Please enter the first string: ";
        std::string firstString;
        std::cin >> firstString;
        int firstStringLength;
        firstStringLength = (int)firstString.size();
        printf("\n The length of the first string is: %d\n",firstStringLength);
        
        std::string secondString;
        std::cout << "Please enter the second string: ";
        std::cin >> secondString;
        int secondStringLength;
        secondStringLength = (int)secondString.size();
        printf("\n The length of the second string is: %d.\n",secondStringLength);
        bool stringContained=false;
        for (int i=0; i<firstStringLength-secondStringLength; i++) { // skimming through the first array
            if (firstString[i]==secondString[0]) { // to find out if any element from the first array matches the first element from the second array
                bool stringStillContained=true; // a boolean variable is created to indicate whether the sample array taken from the first array is still contained in the second array
                for (int j=i+1,k=1; j<firstStringLength && stringStillContained==true && k<secondStringLength; k++,j++) {
                    if (firstString[j]!=secondString[k]) {
                        stringStillContained=false;
                    }
                } if (stringStillContained==true) {
                    stringContained=stringStillContained; // The status only turns into true when the skimming finishes and the whole sample array still smatches the second array
                }
            }
        }
        if (stringContained==true) {
            printf("\n The second string is contained in the first string.\n");
        } else {
            printf("\n The second string is not contained in the first string.\n");
        }
}
