//
//  1056.cpp
//  C
//
//  Created by Hyun Seo Jung on 2022/08/03.
//

#include "1056.hpp"
#include <stdio.h>

int main(void) {
    int a, b;
    scanf(" %d %d", &a, &b);
    if((a&&!b)||(!a&&b)){
        printf("1");
    }
    else{
        printf("0");
    }
}
