//
//  main.c
//  HW 4.28
//
//  Created by William Ng on 2023/10/22.
//

#include <stdio.h>
#include <stdio.h>




int main(int argc, const char * argv[]) {


double hours; /*hours worked*/
double pay1; /*hourly wage*/
double pay2; /*overtime pay (1.5 the pay1)*/
double overtime; /*amount acounted with overtime hours*/
    double overtimepay;



printf("Enter in the amount of hours you've worked this week");
    scanf("%lf", &hours);



    pay1 = (hours * 9);
    pay2 = (9 + (9 / 2));



    overtimepay = (hours - 40) * pay2;

    overtime = pay1 + overtimepay;

    if (hours <= 40)
    {
printf("Your weekly pay is %f\n", pay1);
    }
    else
    {
printf("Your weekly pay is %f\n", overtime);
    }
    return 0;
}

