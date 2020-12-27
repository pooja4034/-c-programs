#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
   int Roll_No;
   char Name[12];
   char City[8];
   float per;

};
int main()

{
    struct student std1,std2,std3= {20,"Pooja Kadam","Peth",75.89897};

    std1.Roll_No= 35;
    strcpy(std1.Name,"Riya More");
    strcpy(std1.City,"Sangli");
    std1.per=85.874593;

    printf("\nEnter Roll_No= ");
    scanf("%d",&std2.Roll_No);

    printf("\nEnter Name= ");
    scanf("%[^\n]",&std2.Name);

    printf("\nEnter City= ");
    scanf("%[^\n]",&std2.City);

    printf("\nEnter Percentage= ");
    scanf("%f",&std2.per);

    printf("\n 1st Student Details Given are= \n\nRoll_NO-%d.\nName-%s.\nCity-%s\nPercentage-%0.2f.\n",std1.Roll_No,std1.Name,std1.City,std1.per);
    printf("\n 2nd Student Details Given are= \n\n Roll_No-%d.\nName-%s.\nCity-%s\nPercentage-%0.4f\n",std2.Roll_No,std2.Name,std2.City,std2.per);
    printf("\n 3rd Student Details Given are= \n\n Roll_No-%d.\nName=%s.\nCity-%s\nPercentage-%0.3f\n",std3.Roll_No,std3.Name,std3.City,std3.per);

    getch();
    return 0;

}
