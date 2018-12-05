// O(n) time
#include <stdio.h>

int singleNumber(int *nums, int numsSize); // declaration

int main(){
  int arr0[] = {2, 2, 1}, arr1[] = {4, 1, 2, 1, 2};
  unsigned long arr0_size = sizeof(arr0) / sizeof(int), arr1_size = sizeof(arr1) / sizeof(int);

  printf("%d %d", singleNumber(arr0, arr0_size), singleNumber(arr1, arr1_size)); // 1 4

  return 0;
}

int singleNumber(int *nums, int numsSize){ // definiton
  int returnValue = 0;
  while (numsSize > 0) {
    returnValue ^= *nums;
    nums++; numsSize--;
  }
  return returnValue;
}