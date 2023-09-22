#include<stdio.h>

struct Date
{
    int day ;
    int month ;
    int year ;
};

void initDate(struct Date* ptrDate)
{
     ptrDate  ->  day = 10 ;
     ptrDate -> month = 12 ;
     ptrDate -> year = 2022 ;


}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("enter value of day \n");
    scanf("%d",&ptrDate -> day);

    printf("enter value of month \n");
    scanf("%d",&ptrDate -> day);

    printf("enter value of year \n");
    scanf("%d",&ptrDate -> day);
}


void printDateOnConsole(struct Date* ptrDate)
{
   printf("Date is  %d : %d : %d \n",ptrDate-> day ,ptrDate -> month , ptrDate -> year);
}

int main() 

{    char ch ;
    struct Date d1 ;
    

    while(1)
    {

        printf("Enter CHOICE : ");
        int choice ;
    scanf("%d",&choice);    
    switch (choice)
    {
    case 1 :
         initDate(&d1);
        break;

    case 2 : 
          acceptDateFromConsole(&d1);
          break;
    case 3:
          printDateOnConsole(&d1);
          break;
    case 4:
        return 0;

    
    default:
        break;
    }    
} ;        


}