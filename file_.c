#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pc;

    pc=fopen("ticrevising.txt","w");

    while(pc==NULL){
        printf("Erreur");
        exit(1);
    }

    fprintf(pc,"its a new file created to process and understand things\n");

    char s[100];

    printf("what do you wanna write in your file : ");
    scanf("%s",&s);

    fprintf(pc,"%s",s);

    fclose(pc);

    return 0;

}
