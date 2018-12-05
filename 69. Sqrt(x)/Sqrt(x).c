// O(1) time
#include <stdio.h>

int mySqrt(int x); // declaration

int main(){
  int num0 = 4, num1 = 8;
  printf("%d %d", mySqrt(num0), mySqrt(num1)); // 2 2

  return 0;
}

int mySqrt(int x) { // definition
  if (x < 0){
    return -1;
  }

  if (x == 0 || x == 1){
    return x;
  }

  float tmp = x;
  float xhalf = 0.5f * tmp;
  int i = *(int *)&tmp;

  i = 0x5f375a86 - (i >> 1);

  tmp = *(float *)&i;
  tmp = tmp * (1.5f - xhalf * tmp * tmp);
  tmp = tmp * (1.5f - xhalf * tmp * tmp);
  tmp = tmp * (1.5f - xhalf * tmp * tmp);

  int ret = 1 / tmp;
  if (ret * ret > x){
    return ret - 1;
  }

  return ret;
}