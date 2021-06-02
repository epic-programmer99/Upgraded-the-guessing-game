#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    int number = 50;
    srand(time(NULL));
    int randomnumber = rand() %50;
    int x = randomnumber * 2;
    printf("guess the number\n");
    printf("Here's a clue %d ÷ 2 =\n", x);
    printf("Enter your guessed number from 0 to %d: ", number);
    int input;
    scanf("%d", &input);

    if (input == randomnumber)
    {
      printf("You win!\n");
printf("Choose your reward from 1 to 5\n");
    printf("1. Gem's\n");
    printf("2. Tresure\n");
    printf("3. Food\n");
    printf("4. Legendary Dragon\n");
    printf("5. Legendary Sword\n");
    printf("Enter the number of your choice: ");
    int reward;
    scanf("%d", &reward);
    if (reward == 1)
   {
      printf("good choice\n");
   }else if (reward == 2)
   {
      printf("Good choice\n");
   }else if (reward == 3)
   {
      printf("Awesome choice\n");
   }else if (reward == 4)
   {
      printf("Fantastic choice\n");
   }else if (reward == 5)
   {
      printf("super good choice\n");
   }
    
    }else
    {
      printf("You lose! Please try again!\n");
    }
    
    return 0;
}
     
    

    

   
    

    
    

  

   
   
   

     
   
   return 0;
}
