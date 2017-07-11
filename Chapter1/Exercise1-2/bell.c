/**
 * Solution for exercise 1.2
 * Chapter 1
 *
 * experiment what happens when printf
 * arguments contains some character \c
 * - in this example \a gives a bell!
 */

#include <stdio.h>
int main(void) 
{
    printf("hello world\a\n");
    return 0;
}
