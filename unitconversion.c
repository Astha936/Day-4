#include<stdio.h>
int main()
{
    int choice;
    float value,result;
    // display the menu
   
 printf("1.Centimeter to Meter:\n");
  printf("2.Meter to Centimeter:\n");
   printf("3.Kilogram to Gram:\n");
    printf("4.Gram to Kilogram:\n");
     printf("5.Exit:\n");
     printf("Enter choice(1-5):");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1: // centimeter to meter
        printf("Enter the value in centimeter:\n");
        scanf("%f",&value);
        result = value/100.0;
        printf("%fcm = %fm\n",value,result);
        break;
        case 2: // meter to centimeter
        printf("Enter the value in meter:\n");
        scanf("%f",&value);
        result = value*100.0;
        printf("%fm = %fcm\n",value,result);
        break;
        case 3: // gram to kilogram
        printf("Enter the value in gram:\n");
        scanf("%f",&value);
        result = value/1000.0;
        printf("%fg = %fkg\n",value,result);
        break;
        case 4: // kilogram to gram
        printf("Enter the value in kilogram:\n");
        scanf("%f",&value);
        result = value*1000.0;
        printf("%fkg = %fg\n",value,result);
        break; 
        case 5:
        printf("Exit:\n");
        break;
        default:
        printf("Invalid choice:\n"); 
     }
         return 0;
}