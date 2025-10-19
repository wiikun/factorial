long long factorial(int base,int step){
    if(base <= 0){
        return 1;
    } else {
        return base * factorial(base - step,step);
    }
}