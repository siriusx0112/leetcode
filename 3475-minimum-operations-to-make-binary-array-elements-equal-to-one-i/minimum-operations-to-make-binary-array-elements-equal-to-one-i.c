int minOperations(int* nums, int numsSize) {
    int n = numsSize;
    int c = 0;
    int sum = 0;
    for(int i = 2; i < n; i++){
        if(nums[i-2] == 0){
            c += 1;
            nums[i-2] = 1;
            if(nums[i-1] == 0){
                nums[i-1] = 1;
            }
            else{
                nums[i-1] = 0;
            }
            if(nums[i] == 0){
                nums[i] = 1;
            }
            else{
                nums[i] = 0;
            }
        }
    }
    for(int i = 0; i < n; i++){
        sum += nums[i];
    }
    if(sum != n){
        c = -1;
    }
    return c;
}