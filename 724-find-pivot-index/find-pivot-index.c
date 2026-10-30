int pivotIndex(int* nums, int numsSize) {
    int l, r, t = 0;
    l = 0;
    int n = numsSize;
    for(int i = 0; i < n; i++){
        t += nums[i];
    }
    r = t;
    for(int i = 0; i < n; i++){
        l += nums[i];
        if(l == r){
            return i;
        }
        r -= nums[i];
    }
    return -1;
}