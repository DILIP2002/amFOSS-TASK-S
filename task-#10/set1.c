//hello world program

#include <stdio.h> //it is library
#include <cs50.h> //only used in cs50 compiler remainig we have to not use cs50
int main(void)
{
    printf("hello, world\n");
}
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//mario less comport 
//non other than right hand semi pyramaid
#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    //Iterate through rows
    for(i=2; i<=rows; i++)   
		\\here i kept rows for just to know more clearly nor we can keep any other name or any other varible 
    {
        // Print spaces in decreasing order of row 
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        // Print star in increasing order or row 
        for(j=1; j<=i; j++)
        {
            printf("#");//the type of character you need while writeing the program
        }

        // \n used to leave that line \t is used to make rows like
        printf("\n");
    }
    
    return 0;
}
//for here i=2 as per given question and we will use row we can use it for reverse it it 
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//MARIO MORE COMFORT
// here we have write tast to be like pyramiar like as per mario less comforat is similary same 
#include <stdio.h>
#include  <cs50.h>
int main()
{
    int i, j, rows;

    // Input rows from user 
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Iterate through rows 
    for(i=2; i<=rows; i++)
    {
        // Print spaces in decreasing order of row 
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        //Print star in increasing order or row 
        for(j=1; j<=i; j++)
        {
            printf("#");//the type of character you need while writeing the program
        }
        printf(" ");

        for (j=1;j<=i;j++)   //then i will will be equal to i if i = 2 then j will compare like 1 <2 so it will print 1 # and then it will 2<=2 then it will print another # like it go upto i=j
        {
            printf("#");
        }

        //  \n is we can use to move to down word 
        printf("\n");
    }

    return 0;
}
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//cash sum in cs50 here we have to convert the change
#include <cs50.h>
#include <stdio.h>
#include <math.h>   // here we are useing new library called math which are use in the time of maths equaltions
int main()
{
   float dollars;  //declaration whether it is int or float or string
   do
   {
         dollars = get_float("change you had=");  //here we use float then i may be like 23.23 so we should use if number 23 is it will not be any problem
   }
   while(dollars < 0);       // i am useing while loop 
   int cents = round(dollars * 100);   //here we are takeing int for rought caluclation or else we can take float in its place
   int coins = 0;                      //we are saying that in starting they are empty
   //75 => 3 quaters, 0,0,0
    while (cents != 0) {           //!=  symbol is use to say not equal or we can use "=" to say it is not equal and == is used to completly equal
       //25 counts
       coins = coins + cents / 25;       //we had sawn in above that coins & cents are Zero so we have use them first
       cents = cents % 25;

       //10 counts
       coins = coins + cents / 10;       // as per above we will get some value for coins and cents so we will use that
       cents = cents % 10;

       //5 counts
       coins = coins + cents/10;
       cents  = cents % 5;

      //1 counts
      coins = coins + cents / 1;
      cents = cents % 1;
   }
   printf("%d\t", coins);  //% will use to creat a empty space as per this the result it will palce if want it in coloumns we will also use  \n to leave that line
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//credit question

#include <stdio.h>
#include <cs50.h>
 //for example we can take 4003600000000014 as the a number
 // take from last before numbers then 1*2+0*2+0*2+0*2+.....+6*2+0*2+4*2
 //then we get 2,12,8
 // now we have to seperate them like 2+1+2+8=13 not it will print visa

int main()
{
    long long cc_number = get_long_long("please enter your credit card Number: ");
    int digit1 = 0, digit2 = 0, num_digits = 0, sum_of_double_odds = 0, sum_of_evens = 0;

    while (cc_number > 0)
    {

        digit2 = digit1;       // for to know clearly i had taken digit1 and digit2 or we can take any other values  like X and Y
        digit1 = cc_number % 10;

        if (num_digits % 2 == 0)
        {
            sum_of_evens += digit1     // += here we can say that sum_of_evens+digits
        }
        else
        {
            int multiple = 2 * digit1;
            sum_of_double_odds += (multiple / 10) + (multiple % 10);
        }

        cc_number /= 10;
        num_digits++;
    }

    bool is_valid = (sum_of_evens + sum_of_double_odds) % 10 == 0;
    int first_two_digits = (digit1 * 10) + digit2;    

    if (digit1 == 4 && num_digits >= 13 && num_digits <= 16 && is_valid)  //   here && were use to be nothing but 
    {
        printf("VISA\n");
    }
    else if (first_two_digits >= 51 && first_two_digits <= 55 && num_digits == 16 && is_valid)
    {
        printf("MASTERCARD\n");
    }
    else if ((first_two_digits == 34 || first_two_digits == 37) && num_digits == 15 && is_valid)
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
