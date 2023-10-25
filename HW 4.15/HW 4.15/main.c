//
//  main.c
//  HW 4.15
//
//  Created by William Ng on 2023/10/22.
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    double princial = 5000.0;
    double rate = .05;
    
    printf("%4s%21s\n", "years", "Amount on deposit" );
    
    for ( int year = 1; year <= 15; ++year )
    {
        double amount = princial * pow(1.0 + rate, year);
        
        printf("%4u%21.2f\n", year, amount);
    }
}
