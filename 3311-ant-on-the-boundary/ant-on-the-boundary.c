int returnToBoundaryCount(int* nums, int numsSize) {
    int l = 0;
    int count = 0;
    int n = numsSize;
    for(int i = 0; i < n; i++){
        l += nums[i];
        if(l == 0){
            count += 1;
        }
    }
    return count;
}