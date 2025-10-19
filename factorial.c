#include <stdio.h>
#include <stdlib.h>

long long factorial(int base,int step){
    if(step <= 0) {//stepが0orマイナスの時例外を出す
        fprintf(stderr,"step is plus\n");
        exit(1);
    }

    if(base <= 0){//もし0orそれより小さいなら1を返す
        return 1;
    } else {
        return base * factorial(base - step,step);//違えばbaseとbase-stepの階乗を返す
    }
}