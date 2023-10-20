// Nolzz
// previously dooskingdom, now nolzz
// https://github.com/NolzzBetter
// you dont gotta really give credits to me but still i would appreciate it if you did :)
// dont steal for your liking ( i really dont mind )! I would like for you to read this code and LEARN how to write in C. I want you to make a custom system like this. (use this as refrence)!

#include "stdio.h"
// FRZN SOFTWORKS
int main(void) {
//THIS SESSION IS MADE BY DOOSKINGDOM
// previously dooskingdom, now nolzz
// BV GAME GIVES MORE CREDITS

  //var ints
  int i = 0; //looper_var (change to other number to abandon loop)
  int code = 0;
  int max = 0;
  int chip = 0; //input
  int amount = 1;
  int picker = 0; //choose
  int shoppicker = 0;
  int electratele = 100;
  // syst welcome
//int syst10.1 // not needed due to new update
  printf("Welcome to the BV Portal!\n\n");
  while (i == 0) {
    printf("Current Amount of Battle-Bucks: BB %d\n", max);
    // options
    printf("Options: (1) = Buy Battle-Bucks\n");
    printf("Options: (2) = Shop\n");
    printf("Options: (3) = Play BV\n");
    printf("Options: (4) = About\n");
    printf("Options: (5) = REDEEM\n");
    printf("Choose: ");
    scanf("%d", &picker);
    if (picker == 1) {
      printf("How Much Battle-Bucks Do You Want To Buy? : ");
      scanf("%d", &max);
      if (max > 999) {
        printf(
            "Your Total is More than $%d Are You Sure You Want To Continue?\n",
            amount * 10);
      }
      printf("Please enter chip : ");
      scanf("%d", &chip);
      if (chip == 12345678) {
        printf("SUCCESS! YOU SHOULD RECIVE %d Battle-Bucks in around 5 mins! "
               "If you dont contact BOOMSTERS SUPPORT!\n",
               max);
        printf("England Gold Has Accepted Your process!\n");
        printf("Battle-Bucks Balance: %d\n", max);
      } else {
        printf("England Gold Has Declined Your process by chip, %d\n", chip);
      }
    }
    if (picker == 2) {
      // this doesent even work that well. Dont worry about this part!!
      printf("NEW SHOP ITEMS!!!\n");
      printf("1: ELECTRA TELE, %d BB\n", electratele);
      printf("Choose What You Want To Buy: ");
      scanf("%d", &shoppicker);
      if (shoppicker == 1) {
        printf("Purchasing This Item...");
        printf("BB %d - ", max);
        printf("BB %d\n", electratele);
        printf("Connecting to Boomsters for BB%d purchase...\n", electratele);
        if (max > 99) {
          if (max = max - electratele) {
            printf("---------------Purchase Success!--------------\n");
          } else {
            printf(
                "**************************Purchase Failed, Contact Support "
                "for help or try again. **********************************\n");
          }
        } else {
          printf("**************************Purchase Failed, Contact Support "
                 "for help or try again. **********************************\n");
        }
      }
    }
    if (picker == 3) {
      printf("Created New Server: https://replit.com/@CoderKidTiritru/BV-the-game \n");
    }
    if (picker == 4) {
      printf("-\n\n\nVersion: 12 -\n\n\n");
      printf("-RUNNING: \n\n\n-");
    }
    if (picker == 5) {
    printf("Code: ");
    scanf("%d", &code);
    if(code == 2) {
      printf("\nYour Code Has Been Redeemed!\n\n");
      }else {
      printf("\nThis Code is Invalid!\n\n");
      }
    }
      }
}
// https://github.com/NolzzBetter
// previously dooskingdom, now nolzz
