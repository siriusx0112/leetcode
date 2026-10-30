int countPartitions(int* nums, int numsSize) {
    int t, l, r, c;
    int n = numsSize;
    t = 0;
    l = 0;
    c = 0;
    for(int i = 0; i < n; i++){
        t += nums[i];
    }
    r = t;
    for(int i = 0; i < n - 1; i++){
        l += nums[i];
        r -= nums[i];
        int d = abs(l - r);
        if(d % 2 == 0){
            c += 1;
        }
    }
    return c;
}