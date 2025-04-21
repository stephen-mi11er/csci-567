#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

int main(int argc, char* argv[])
{
    char    file_name[65];
    char   *temp;

    temp = argv[1] ? argv[1] : "";
    strcpy(file_name, temp);
}
