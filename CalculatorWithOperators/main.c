#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char op;
    printf("Enter any number: ");
    scanf("%lf", &num1);
    printf("Enter Operator: ");
    scanf(" %c", &op);//don't forget space before %c here/
    printf("Enter any number: ");
    scanf("%lf", &num2);

   if(op == '+'){
        printf("%f", num1 + num2);
   }

   else if(op == '-'){
    printf("%f", num1 - num2);
   }
   else if(op == '*'){
    printf("%f", num1 * num2);
   }
   else if(op == '/'){
    printf("%f", num1 / num2);
   }

   else{
    printf("ERROR. INVALID OPERATOR!");
   }
      return 0;
}
