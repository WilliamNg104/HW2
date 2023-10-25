//
//  main.c
//  HW 3.33
//
//  Created by William Ng on 2023/10/22.
//

#include <stdio.h>

#include <stdio.h>

void print_rectangle(int n, int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i==1 || i==n || j==1 || j==m)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
 
}
int main()
{
    int rows = 3, columns = 12;
    print_rectangle(rows, columns);
    return 0;
}
