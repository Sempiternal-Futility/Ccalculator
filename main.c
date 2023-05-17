#include <stdio.h>
#include <curses.h>

int main()
{
   
   initscr();
   noecho();

   //LOOPS THE PROGRAM UNTIL USER ENDS IT WITH "^C"
   while( 1 > 0 )
   {
      UI();
      SolveMath();

      ClearDisplayBox();
   }

   endwin();


   return 0;

}
