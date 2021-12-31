#include<stdio.h>
int main() {
      double first, second, third, temp;
      printf("Enter first number: ");
      scanf("%lf", &first);
      printf("Enter second number: ");
      scanf("%lf", &second);
      printf("Enter third number: ");
      scanf("%lf", &third);

      // Value of first is assigned to temp
      temp = first;

      // Value of second is assigned to first
      first = second;

      // Value of temp (initial value of first) is assigned to second
      second = third;

      third = temp;

      printf("\nAfter swapping, firstNumber = %.2lf\n", first);
      printf("After swapping, secondNumber = %.2lf", second);
      printf("After swapping, thirdNumber = %.2lf", third);
      return 0;
}
