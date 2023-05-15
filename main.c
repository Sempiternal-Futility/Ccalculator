#include <stdio.h>
#include <curses.h>

 /*TODO:
  * BE ABLE TO PRESS BACKSPACE TO ERASE
  * ADD A "." ASCII BUTTON AND MAKE IT BLINK WHEN THE USER PRESSES IT
 */

int main()
{
   
   initscr();
   noecho();

   UI();
   BlinkSquare();

   endwin();


   return 0;

}
