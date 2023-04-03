#include <stdio.h>

int main() {
  int num1, num2, num3, num4, num5, num6;
  int max1, max2, max3;
  
  printf("Enter six numbers: ");
  scanf("%d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6);
  
  // Finding the first maximum number
  max1 = num1;
  if (num2 > max1) {
    max1 = num2;
  }
  if (num3 > max1) {
    max1 = num3;
  }
  if (num4 > max1) {
    max1 = num4;
  }
  if (num5 > max1) {
    max1 = num5;
  }
  if (num6 > max1) {
    max1 = num6;
  }
  
  // Finding the second maximum number
  max2 = num1;
  if (num2 > max2 && num2 < max1) {
    max2 = num2;
  }
  if (num3 > max2 && num3 < max1) {
    max2 = num3;
  }
  if (num4 > max2 && num4 < max1) {
    max2 = num4;
  }
  if (num5 > max2 && num5 < max1) {
    max2 = num5;
  }
  if (num6 > max2 && num6 < max1) {
    max2 = num6;
  }
  
  // Finding the third maximum number
  max3 = num1;
  if (num2 > max3 && num2 < max2) {
    max3 = num2;
  }
  if (num3 > max3 && num3 < max2) {
    max3 = num3;
  }
  if (num4 > max3 && num4 < max2) {
    max3 = num4;
  }
  if (num5 > max3 && num5 < max2) {
    max3 = num5;
  }
  if (num6 > max3 && num6 < max2) {
    max3 = num6;
  }
  
  // Calculating the sum of three maximum numbers
  int sum = max1 + max2 + max3;
  
  printf("Sum of the three largest numbers: %d\n", sum);
  
  return 0;
}

