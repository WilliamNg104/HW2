//
//  main.c
//  HW 3.18
//
//  Created by William Ng on 2023/10/22.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sales,salary;
    while (sales!=-1){
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f",&sales);
    if (sales==-1)
        break;
    salary=200+sales*0.09;
    printf("Salary is: %.2f\n",salary);
    }
    return 0;

}
