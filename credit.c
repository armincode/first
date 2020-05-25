#include <stdio.h>
#include <cs50.h>

int main(void){

     long long card;
     int i;
     int otherdigs;
     int multiply;
     int sum = 0;
     int sumofothers = 0;
     int finaladd;
     int length;                      
     int card_length;                 
     long long get_card;

     get_card = get_long_long(" Enter credit card: ");
     card = get_card;




     for (i = 0; i < 16; i++)
     {

       sumofothers += card % 10;

       card /= 10;
       otherdigs = card % 10;
       card /= 10;


       if (otherdigs*2 < 10)
        {
         multiply = otherdigs * 2;
         sum += multiply;
         }

       else
         {
          otherdigs = otherdigs*2-9;
          sum += otherdigs;
         }

       }

      finaladd = sum + sumofothers;

      if (finaladd % 10 == 0)
      {
        for (length = 0; length < 14; length++)
        {
            get_card /= 10;
        }

        if ( get_card >= 51 && get_card < 56 ) {

            printf("MasterCart\n");
        }

        else if ( get_card >= 3 && get_card < 4)
        {
            printf("AmericanExpress\n");
        }

        else if ( get_card < 0 || (get_card/10 >= 4 && get_card/10 < 5) )
        {
            printf("VIZA\n");
        }

        else {

            printf(" Sorry, We Don't Support This Payment Company\n");
        }
      }

      else
      {
        printf("This credit card is not valid \n");
      }


      return 0;


}
