//DRAWS THE TUI

#include <stdlib.h>

int UI()
{

   DrawStartTable();
   DrawDisplayBox();

}


//DRAWS THE NUMBER ONE 1
void DrawOne( short posY, short posX )
{

   move( posY, posX );
   printw( "%s", "  ," );

   move( posY +1, posX );
   printw( "%s", " /|" );

   move( posY +2, posX );
   printw( "%s", "  |" );

   move( posY +3, posX );
   printw( "%s", "  |" );

}

//DRAWS THE NUMBER TWO 2
void DrawTwo( short posY, short posX )
{

   move( posY, posX );
   printw("%s", "  _ " );

   move( posY +1, posX );
   printw("%s", " / )" );

   move( posY +2, posX );
   printw( "%s", "  / " );

   move( posY+ 3, posX );
   printw( "%s", " /__" );

}

//DRAWS THE NUMBER THREE 3
void DrawThree( short posY, short posX )
{

   move( posY, posX );
   printw( "%s", " ___ " );

   move( posY +1, posX );
   printw( "%s", " __/ " );

   move( posY +2, posX );
   printw( "%s", "   \\ " );

   move( posY +3, posX );
   printw( "%s", "\\__/ " );

}

//DRAWS THE NUMBER FOUR 4
void DrawFour( short posY, short posX )
{

   move( posY, posX );
   printw( "%s", " | | " );

   move( posY +1, posX );
   printw( "%s", " |_| " );

   move( posY +2, posX );
   printw( "%s", "   | " );

   move( posY +3, posX );
   printw( "%s", "   | " );
 
}

//DRAWS THE NUMBER FIVE 5
void DrawFive( short posY, short posX )
{

   move( posY, posX );
   printw("%s", " --- ");

   move( posY +1, posX );
   printw("%s", "|__  ");

   move( posY +2, posX );
   printw("%s", "   \\ ");

   move( posY +3, posX );
   printw("%s", "\\__/ ");

}

//DRAWS THE NUMBER SIX 6
void DrawSix( short posY, short posX )
{

   move( posY, posX );
   printw("%s","  /  ");

   move( posY +1, posX );
   printw("%s", " /   ");

   move( posY +2, posX );
   printw("%s", "/ \\ ");

   move( posY +3, posX );
   printw("%s", "\\_/ ");

}

//DRAWS THE NUMBER SEVEN 7
void DrawSeven( short posY, short posX )
{

   move( posY, posX );
   printw("%s", " ___ ");

   move( posY +1, posX );
   printw("%s", "   / ");

   move( posY +2, posX );
   printw("%s", "  /  ");

   move( posY +3, posX );
   printw("%s", " /   ");

}

//DRAWS THE NUMBER EIGHT 8
void DrawEight( short posY, short posX )
{

   move( posY, posX );
   printw("%s", " ___ ");

   move( posY +1, posX );
   printw("%s", "( _ )");

   move( posY +2, posX );
   printw("%s", "/   \\");

   move( posY +3, posX );
   printw("%s", "\\___/");



}

//DRAWS THE NUMBER NINE 9
void DrawNine( short posY, short posX )
{

   move( posY, posX );
   printw("%s", " __  ");

   move( posY +1, posX );
   printw("%s", "/  | ");

   move( posY +2, posX );
   printw("%s", "\\_/| ");

   move( posY +3, posX );
   printw("%s", "   | ");

}

//DRAWS THE NUMBER ZERO 0
void DrawZero( short posY, short posX )
{

   move( posY, posX );
   printw("%s", "  _  ");

   move( posY +1, posX );
   printw("%s", " / \\ ");

   move( posY +2, posX );
   printw( "%s", "  /  ");

   move( posY +3, posX );
   printw("%s", " \\_/ ");

}


//DRAWS THE PLUS SYMBOL +
void DrawPlus( short posY, short posX )
{

   move( posY, posX );
   printw("%s", "  |  ");

   move( posY +1, posX );
   printw("%s", "--+--");

   move( posY +2, posX );
   printw("%s", "  |  ");

}

//DRAWS THE MINUS SYMBOL -
void DrawMinus( short posY, short posX )
{

   move( posY, posX );
   printw("%s", "");

   move( posY +1, posX );
   printw("%s", "-----");

   move( posY +2, posX );
   printw("%s", "");

}

//DRAWS THE MULTIPLICATION SYMBOL *
void DrawMult( short posY, short posX )
{

   move( posY, posX );
   printw("%s", " \\|/ ");

   move( posY +1, posX );
   printw("%s", "--*--");
   
   move( posY +2, posX );
   printw("%s", " /|\\ ");

}

//DRAWS THE DIVISON SYMBOL /
void DrawDivis( short posY, short posX )
{

   move( posY, posX );
   printw("%s", "   /");

   move( posY +1, posX );
   printw("%s", "  / ");

   move( posY +2, posX );
   printw("%s", " /  ");

}


//DRAWS THE STARTING TABLE
void DrawStartTable()
{

   DrawBoxOne();
   DrawBoxTwo();
   DrawBoxThree();
   DrawBoxFour();
   DrawBoxFive();
   DrawBoxSix();
   DrawBoxSeven();
   DrawBoxEight();
   DrawBoxNine();
   DrawBoxZero();

   DrawBoxPlus();
   DrawBoxMinus();
   DrawBoxMult();
   DrawBoxDivis();




   DrawOne( 7, 5 );
   DrawTwo( 7, 13 );
   DrawThree( 7, 21 );
   DrawFour( 13, 5 );
   DrawFive( 13, 13 );
   DrawSix( 13, 21 );
   DrawSeven( 19, 5 );
   DrawEight( 19, 13 );
   DrawNine( 19, 21 );
   DrawZero( 25, 13 );
   
   DrawPlus( 8, 31 );
   DrawMinus( 14, 31 );
   DrawMult( 19, 31 );
   DrawDivis( 25, 31 );

}

//MAKES THE INPUTTED SQUARE BLINK
void BlinkSquare()
{

   char getInput;
   char finalNumber[33] = "0";
   
   double numberOne = 0;
   char operator;
   double numberTwo = 0;
  

 for( int i = 1; i < 4; i++ )
 {


  //RESETS finalNumber STRING
  for( int r = 1; r < 33; r++ )
  { finalNumber[r] = ' '; }


 
  for( int j = 1; j < 33; j++ )
  {
  
   getInput = getch();

   if( getInput != '\n' || getInput != 32 )
      finalNumber[j] = getInput;


   // IF THE USER PRESSES SPACE, EVERYTHING ERASES IN THAT LINE
   if( getInput == 32 )
   {

      for( int k = 1; k < 33; k++ )
         finalNumber[k] = ' ';


      if( i == 1 )
      {
         move( 2, 2 ); 
         printw( "%s", "                                 " );
         move( 2, 2 );
      }

      else if( i == 2 )
      {
         move( 3, 2 ); 
         printw( "%s", "                                 " );
         move( 3, 2 );
      }

      else if( i == 3 )
      {
         move( 4, 2 ); 
         printw( "%s", "                                 " );
         move( 4, 2 );
      }


      j = 0;

   }


   //THESE 3 IF STATEMNTS DRAW THE INPUTTED NUMBERS TO THE DISPLAY BOX
   if( getInput != 32 )
   {

      if( i == 1 )
      {
         move( 2, j +1 );
         printw( "%c", getInput );
      }

      else if( i == 2 )
      {
         move( 3, j +1 );
         printw( "%c", getInput );
      }

      else if( i == 3 )
      {
         move( 4, j +1 );
         printw( "%c", getInput );
      }

   }



   //NUMBER 1
   if( getInput == '1' )
   {

      for( short i = 7; i < 11; i++ )
      {
         move( i, 5 );
         printw("%s", "     "); 
      }

      //DRAWS THE NUMBER ONE AGAIN
      refresh();
      system("sleep 0.10");
      DrawOne( 7, 5 );
       
   }

 
   //NUMBER 2
   else if( getInput == '2' )
   {

      for( short i = 7; i < 11; i++ )
      {
         move( i, 13 );
         printw("%s", "     "); 
      }

      //DRAWS THE NUMBER TWO AGAIN
      refresh();
      system("sleep 0.10");
      DrawTwo( 7, 13 );
       
   }

  
   //NUMBER 3
   else if( getInput == '3' )
   {

      for( short i = 7; i < 11; i++ )
      {
         move( i, 21 );
         printw("%s", "     "); 
      }

      //DRAWS THE NUMBER THREE AGAIN
      refresh();
      system("sleep 0.10");
      DrawThree( 7, 21 );
       
   }

   
   //NUMBER 4
   else if( getInput == '4' )
   {

      for( short i = 13; i < 17; i++ )
      {
         move( i, 5 );
         printw("%s", "     "); 
      }

      //DRAWS THE NUMBER FOUR AGAIN
      refresh();
      system("sleep 0.10");
      DrawFour( 13, 5 );
       
   }


   //NUMBER 5
   else if( getInput == '5' )
   {

      for( short i = 13; i < 17; i++ )
      {
         move( i, 13 );
         printw("%s", "     "); 
      }

      //DRAWS THE NUMBER FIVE AGAIN
      refresh();
      system("sleep 0.10");
      DrawFive( 13, 13 );
       
   }


   //NUMBER 6
   else if( getInput == '6' )
   {

      for( short i = 13; i < 17; i++ )
      {
         move( i, 21 );
         printw("%s", "     "); 
      }

      //DRAWS THE NUMBER SIX AGAIN
      refresh();
      system("sleep 0.10");
      DrawSix( 13, 21 );
       
   }


   //NUMBER 7
   else if( getInput == '7' )
   {

      for( short i = 19; i < 23; i++ )
      {
         move( i, 5 );
         printw("%s", "     "); 
      }

      //DRAWS THE NUMBER SEVEN AGAIN
      refresh();
      system("sleep 0.10");
      DrawSeven( 19, 5 );
       
   }


   //NUMBER 8
   else if( getInput == '8' )
   {

      for( short i = 19; i < 23; i++ )
      {
         move( i, 13 );
         printw("%s", "     "); 
      }

      //DRAWS THE NUMBER EIGHT AGAIN
      refresh();
      system("sleep 0.10");
      DrawEight( 19, 13 );
       
   }


   //NUMBER 9
   else if( getInput == '9' )
   {

      for( short i = 19; i < 23; i++ )
      {
         move( i, 21 );
         printw("%s", "     "); 
      }

      //DRAWS THE NUMBER NINE AGAIN
      refresh();
      system("sleep 0.10");
      DrawNine( 19, 21 );
       
   }


   //NUMBER 0
   else if( getInput == '0' )
   {

      for( short i = 25; i < 29; i++ )
      {
         move( i, 13 );
         printw("%s", "     "); 
      }

      //DRAWS THE NUMBER ZERO AGAIN
      refresh();
      system("sleep 0.10");
      DrawZero( 25, 13 );
       
   }


   
   //PLUS SYMBOL
   else if( getInput == '+' )
   {

      for( short i = 8; i < 11; i++ )
      {
         move( i, 31 );
         printw("%s", "     "); 
      }

      //DRAWS THE PLUS SYMBOL AGAIN
      refresh();
      system("sleep 0.10");
      DrawPlus( 8, 31 );

      if( i == 2 )
         operator = '+';
       
   }


   //MINUS SYMBOL
   else if( getInput == '-' )
   {

      move( 15, 31 );
      printw("%s", "     "); 

      //DRAWS THE MINUS SYMBOL AGAIN
      refresh();
      system("sleep 0.10");
      DrawMinus( 14, 31 );

      if( i == 2 )
         operator = '-';
       
   }


   //MULT SYMBOL
   else if( getInput == '*' )
   {

      for( short i = 19; i < 22; i++ )
      {
         move( i, 31 );
         printw("%s", "     "); 
      }

      //DRAWS THE MULT SYMBOL AGAIN
      refresh();
      system("sleep 0.10");
      DrawMult( 19, 31 );

      if( i == 2 )
         operator = '*';
       
   }


   //DIVIS SYMBOL
   else if( getInput == '/' )
   {

      for( short i = 25; i < 28; i++ )
      {
         move( i, 31 );
         printw("%s", "     "); 
      }

      //DRAWS THE MULT SYMBOL AGAIN
      refresh();
      system("sleep 0.10");
      DrawDivis( 25, 31 );

      if( i == 2 )
         operator = '/';
       
   }

   else if( getInput == '\n' )
   {
      j = 34;

      move( i +1, 38 ); printw( "%c", '|' ); //FIXES LITTLE BUG THAT ERASES THE EDGE OF THE DISPLAY BOX

      move( i +2, 2 );
   }


  }

   if( i == 1 )
      numberOne = atof( finalNumber );


   else if( i == 3 )
      numberTwo = atof( finalNumber );

 }


   if( operator == '+' )
      Sum( numberOne, numberTwo ); 

   else if( operator == '-' )
      Minus( numberOne, numberTwo );

   else if( operator == '*' )
      Mult( numberOne, numberTwo );

   else if( operator == '/' )
      Divis( numberOne, numberTwo );

   else
   {
      ClearDisplayBox();
      move( 2, 2 );
      printw( "%s", "GIVEN OPERATOR IS NOT VALID" );

      getch();
   }


}


//ERASES THE WHOLE DISPLAY BOX
void ClearDisplayBox()
{

   move( 1, 1 );
   printw( "%s", "                                       " );

   move( 2, 1 );
   printw( "%s", "                                       " );

   move( 3, 1 );
   printw( "%s", "                                       " );

   move( 4, 1 );
   printw( "%s", "                                       " );

   DrawDisplayBox();

}
