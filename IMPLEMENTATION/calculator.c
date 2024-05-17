# include <stdio.h>
# include<math.h>
int main() {
  int a,b;
  printf("enter a :");
  scanf("%d",&a);

  printf("enter the value of b :");
  scanf("%d",&b);

  printf("sum is : %d",a + b);
  printf("sub is : %d\n",a - b);
  printf("multiply is : %d\n",a * b);
  printf("Power of a and b is :\n",pow(b,a));

  return 0;
}