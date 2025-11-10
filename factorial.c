#include <stdio.h>
#include <stdlib.h>

long long factorial(int base ,int step)
{
    if(step < 1){
        fprintf(stderr,"Error! factorial step must be positive.\n");
        exit(1);
    }

    if(base < 1){
        fprintf(stderr,"Error! factorial base must be positive.\n");
        exit(1);
    }

    long long result = 1;
    for(int basevar = base;basevar > 1;result *= basevar,basevar -= step);
    return result;
}