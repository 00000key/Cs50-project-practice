#include <stdio.h>

void print_row(int bricks, int spaces);

int main(void)
{
    int height;
    // prompt the user for pyramid height
    do
    {
        printf("Height: ");
        scanf("%i", &height);
    } 
    while (height < 1);
    
    //print the pyramid on that height 
    for (int i = 0; i < height; i++)
    {
        //print row of bricks
        
        print_row(i + 1, height - i);
        
    }
}

void print_row(int bricks, int spaces) 
{
 
    //print spaces
    for (int f = 0; f < spaces; f++) 
    {
        printf(" ");
    }
    
    //print bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
        
    }
    
    printf("\n");
    
    
}
