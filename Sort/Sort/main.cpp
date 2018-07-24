//
//  main.cpp
//  Sort
//  Run and test basic sorting algos.
//
//  Created by Nipun Asthana on 24/07/18.
//  Copyright © 2018 Nipun Asthana. All rights reserved.
//

#include <iostream>
#include "basicsorting.h"

int main(int argc, const char * argv[]) {
    int arr[] = {1,2,3,4,5,4,3,2,1,-1,0,22,33};
    std::vector<int> items(arr, arr+sizeof(arr)/sizeof(arr[0]));
    bubble(items);
    for(int i=0; i<items.size(); i++)
        std::cout<<items[i]<<' ';
    std::cout<<'\n';
    return 0;
}

void bubble(std::vector<int> &items) {
    int i,j, size = (int)items.size();
    for(i=0; i<size-1; i++) {
        for(j=0; j<size-i-1; j++){
            if(items[j]>items[j+1]) {
                int temp = items[j];
                items[j] = items[j+1];
                items[j+1] = temp;
            }
        }
    }
}
