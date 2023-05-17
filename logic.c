// THIS SCRIPT HAS ALL THE MATH/LOGIC WITHIN IT

#include <stdlib.h>

void Sum( double numOne, double numTwo )
{

   double result = numOne + numTwo;

   ClearDisplayBox();
   move( 2, 2 );
   printw( "%.2f", result );

   getch();

}

void Minus( double numOne, double numTwo )
{

   double result = numOne - numTwo;

   ClearDisplayBox();
   move( 2, 2 );
   printw( "%.2f", result );

   getch();

}

void Mult( double numOne, double numTwo )
{

   double result = numOne * numTwo;

   ClearDisplayBox();
   move( 2, 2 );
   printw( "%.2f", result );

   getch();

}

void Divis( double numOne, double numTwo )
{

   double result = numOne / numTwo;

   ClearDisplayBox();
   move( 2, 2 );
   printw( "%.2f", result );

   getch();

}


// GETS INPUT FROM THE USER, ASSIGNS THIS INPUT, AND PUTS ALL THE LOGIC TOGETHER
void SolveMath()
{

   char getInput;
   char finalNumber[33] = "0";
   
   double numberOne = 0;
   char operator;
   double numberTwo = 0;
  

   for( int i = 1; i < 4; i++ )
   {


      // RESETS finalNumber STRING
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


         // THESE 3 IF STATEMNTS DRAW THE INPUTTED NUMBERS TO THE DISPLAY BOX
         // ( AS LONG AS getInput IS DIFFERENT FROM THE SPACEBAR ( a.k.a ERASE BUTTON )
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


         // BLINKS THE SQUARE AND ASSIGN THE OPERATOR
         if( i == 2 && getInput != '\n' )
            operator = BlinkInput( getInput );

         else
            BlinkInput( getInput );


         // IF THE USER PRESSES ENTER
         if( getInput == '\n' )
         {
            j = 34;
            move( i +1, 38 ); printw( "%c", '|' ); // FIXES LITTLE BUG THAT ERASES THE EDGE OF THE DISPLAY BOX ONCE A NEW LINE IS PRINTED
            move( i +2, 2 );
         }

      }


      if( i == 1 )
         numberOne = atof( finalNumber );


      else if( i == 3 )
         numberTwo = atof( finalNumber );

   }


   // PERFORMS THE APPRORIATE EQUATION DEPENDING ON THE OPERATOR'S VALUE
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
