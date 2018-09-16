//
//  core.c
//  Week 5 
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#include <stdio.h>

#include "core.h"

int swap(int * a, int * b) {
    if (a == NULL || b == NULL) {
        return FALSE;
    }
    
    int temp = *a;
    *a = *b;
    *b = temp; 

    return TRUE;
}

int to_lower(char * s) {
    if (s == NULL) {
        return FALSE;
    }

    char * temp_s = s;

    while (*temp_s != '\0') {
        *temp_s = (*temp_s) + 32;
        temp_s++; 
    }

    return TRUE;
}

int inc_int_list(int * list, int length) {
    if (list == NULL) {
        return FALSE;
    }
    int * l = list;

    for (int i = 0; i < length; i++)
    {
        *l = *l + 1;
        printf("yeh: %d\n", *l);
        l++;
    }
    
    return TRUE;
}

int core_main(int argc, const char * argv[]) {
    return 0;
}
