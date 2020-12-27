#include<stdio.h>
#include<conio.h>
#define Max 5

int main()
{
    int i=0,RollNo=0,TRollNo=0,Phy=0,TPhy=0,Chem=0,TChem=0,Maths=0,TMaths=0,Tot=0,TTot=0;
    char Name[30]="",TName[20]="";
    float Per=0.0,TPer=0.0;

    printf("\nEnter %d student information to find them= \n",Max);

    for(i=0;i<Max;i++)
    {
        printf("\nEnter %d student detail= ",i+1);

        printf("\nEnter Student Name= ");
        scanf("%[^\n]",&Name);

        printf("\nEnter student Physics marks= ");
        scanf("%d",&Phy);

        printf("\nEnter student Chemistry marks");
        scanf("%d",&Chem);

        printf("\nEnter student Maths marks");
        scanf("%d",&Maths);

        Tot=Phy+Chem+Maths;
        Per= (Tot*100)/300;
        printf("\nRollNo %d student total Marks= %d\n",RollNo,Tot);

        if(i==0||TTot<Tot)
        {

            TRollNo=RollNo;
            strcpy(TName,Name);
            TPhy=Phy;
            TChem=Chem;
            TMaths=Maths;
            TTot=Tot;
            TPer=Per;
        }
    }

    printf("\nTopper Details are=\n");

    printf("\nRoll Number=%d",TRollNo);
    printf("\nName= %s",TName);
    printf("\nPhysics=%d, Chemistry=%d, Maths=%d",TPhy,TChem,TMaths);
    printf("\nTotal=%d. Percentage=%0.2f.",TTot,TPer);

    getch();
    return 0;


}
