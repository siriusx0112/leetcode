int largestAltitude(int* gain, int gainSize) {
   int max, a;
   a = 0;
   max = a;
   for(int i = 0; i < gainSize; i++){
    a += gain[i];
    if(a > max){
        max = a;
    }
   }
   return max;
}