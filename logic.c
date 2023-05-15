//THIS SCRIPT HAS ALL THE MATH/LOGIC WITHIN IT

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
