#include <stdio.h>
#include <stdlib.h>

int main()
{
    char oper,other;
    float num1,num2;
    printf("Enter Your First Num: ");
     scanf("%f",&num1);
      printf("Enter Your Second Num: ");
     scanf("%f",&num2);
   Loop: printf("%s","Enter Your operation (+,-,*,/,%): ");
    scanf("%s",&oper);

   switch(oper){
           printf("%s","Enter Your operation (+,-,*,/,%): ");
    case '+': printf("Sum =%0.2f",num1+num2);
    printf("\n Do you want to do other operation Y/N?: ");
    scanf("%s",&other);
    if (other=='N' || other=='n')
       {
        printf("Thanks for using Calc! \n");break; }
    else if(other=='Y'|| other=='y')
        goto Loop;
    else
        printf("Error ! Unknown Answer \n");
    break;
        case '-': printf("Sub= %0.2f",num1-num2);
        printf("\n Do you want to do other operation Y/N?: ");
    scanf("%s",&other);
    if (other=='N' || other=='n')
       {
        printf("Thanks for using Calc! \n");break; }
    else if(other=='Y'|| other=='y')
        goto Loop;
    else
        printf("Error ! Unknown Answer \n");
    break;
        case '*': printf("Mul= %0.2f",num1*num2);
        printf("\n Do you want to do other operation Y/N?: ");
    scanf("%s",&other);
    if (other=='N' || other=='n')
       {
        printf("Thanks for using Calc! \n");break; }
    else if(other=='Y'|| other=='y')
        goto Loop;
    else
        printf("Error ! Unknown Answer \n");
    break;
        case '/': printf("Div= %0.2f",num1/num2);
        printf("\n Do you want to do other operation Y/N?: ");
    scanf("%s",&other);
    if (other=='N' || other=='n')
       {
        printf("Thanks for using Calc! \n");break; }
    else if(other=='Y'|| other=='y')
        goto Loop;
    else
        printf("Error ! Unknown Answer \n");
    break;

        case '%': printf("Prec= %d",(int)num1%(int)num2);
        printf("\n Do you want to do other operation Y/N?: ");
    scanf("%s",&other);
    if (other=='N' || other=='n')
       {
        printf("Thanks for using Calc! \n");break; }
    else if(other=='Y'|| other=='y')
        goto Loop;
    else
        printf("Error ! Unknown Answer \n");
    break;

        default:
            printf("Error ! incorrect operation!");


    }

    return 0;

}
