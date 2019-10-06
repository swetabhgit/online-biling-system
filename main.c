/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "readfile.h"
#include "writefile.h"
#include "delete.h"
int main()
{   char data;
    struct customer c1;
    int option;
    printf("kindly choose the options\n");
    
    do{
    printf("choose from following options 1) for new account 2) search for account 3) to delete file 4) to exit");
    scanf("%d",&option);
    if(option==1)
    {
        printData(c1);
       // f = fopen("data.dat","w");
        //fwrite(&c1,1,sizeof(c1),f);
        //fclose(f);
    }
    else if(option==2)
    {
     readfile(c1);
    }
    else if(option==3)
    {
        if(deletefile("data.dat")==0)
        {
            printf("file deleted successfully");
        }
        else
        {
            printf("unable to delete a file");
        }
    }
    }
    while(option!=4);
    return 0;
}
