int pivotInteger(int n) {
    int t, l, r;
    t = ((n*(n + 1))/2);
    l = 0;
    r = t;
    for(int i = 1; i <= n; i++){
        l += i;
        if(l==r){
            return i;
        }
        r -= i;
    }
    return -1;
}