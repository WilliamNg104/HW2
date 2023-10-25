//
//  main.c
//  HW 3.19
//
//  Created by William Ng on 2023/10/22.
//

#include <stdio.h>

int main()
{
    float principal_amt, rate_of_interest, days, interest;
    const int yearInDays = 365;
    
    printf( "Enter loan principal (-1 to end): " );
    scanf( "%f", &principal_amt );

    while( (int)principal_amt != 0)
    {
        printf( "Enter interest rate: " );
        scanf( "%f", &rate_of_interest );
        printf( "Enter term of the loan in days: " );
        scanf( "%f", &days );

        interest = (principal_amt * rate_of_interest * days )/ yearInDays;
        printf( "The interest charge is $%.2f\n", interest );

        printf( "\n\nEnter loan principal_amt (0 to quit): " );
        scanf( "%f", &principal_amt );
    }

    return 0;
}
