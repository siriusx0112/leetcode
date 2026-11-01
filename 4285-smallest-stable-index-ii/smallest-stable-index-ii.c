int firstStableIndex(int* nums, int numsSize, int k) {
    int n = numsSize;
    int r = -1;
    int max[n], min[n];
    max[0] = nums[0];
    min[n-1] = nums[n-1];
    for(int i = 1; i < n; i++){
        if(nums[i]>max[i-1]){
            max[i] = nums[i];
        }else{
            max[i] = max[i-1];
        }
    }
    for(int i = n-2; i>= 0; i--){
        if(nums[i]<min[i+1]){
            min[i] = nums[i];
        }else{
            min[i] = min[i+1];
        }
        
    }
    for(int i = 0; i<n; i++){
        if(max[i] - min[i] <= k){
            r = i;
            break;
        }
    }
    return r;
}