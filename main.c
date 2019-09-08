#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int year;
    int month;
    int day;

}date;

typedef struct{
    char name[20],fname[20];
    int mtrc[15];
    date D1;

}information;

void getInfo(information infor,int x){

    int p=0;

    for(int p=0;p<x;p++){

        printf("entre les information de votre employers : %d\n",p+1);

        printf("le matricule de votre employers num: %d\t",p+1);
        scanf("%d",&infor.mtrc);

        printf("\nle prenom de employers num : %d\t",p+1);
        scanf("%s",&infor.name);

        printf("\nle name de employers num : %d \t",p+1);
        scanf("%s",&infor.fname);

        printf("\nDate de naissance de employers num : %d\t",p+1);
        scanf("%d%d%d",&infor.D1.day,&infor.D1.month,&infor.D1.year);

    }

}///end of getInfor()


int main()
{
    information info1;
    int x;

    printf("donner nombre de votre employers : \t");
    scanf("%d",&x);
    getInfo(info1,x);
    printf("merci");

    return 0;
}
