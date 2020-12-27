#include<stdio.h>
#include<conio.h>

#define Max 5

struct stud
{
    char Name[20];
    int RollNo,Phy,Chem,Maths,Tot;
    float Per;
};

int main()
{
    struct Stud Std,TStd;
    int i=0;

    printf("\nEnter %d student information to find them= \n",Max);

    for(i=0;i<Max;i++)
    {
        printf("\nEnter %d student detail= ",i+1);

        printf("\nEnter Student Name= ");
        scanf("%[^\n]",&Std.Name);

        printf("\nEnter student Physics marks= ");
        scanf("%d",&Std.Phy);

        printf("\nEnter student Chemistry marks");
        scanf("%d",&Std.Chem);

        printf("\nEnter student Maths marks");
        scanf("%d",&Std.Maths);

        Std.Tot=Std.Phy+Std.Chem+Std.Maths;
        Std.Per=(Std.Tot*100)/300;
        printf("\nRollNo %d student total Marks= %d\n",Std.RollNo,Std.Tot);

        if(i==0||TStd.Tot<Std.Tot)
        {

            TStd.RollNo=Std.RollNo;
            strcpy(TStd.Name,Std.Name);
            TStd.Phy=Std.Phy;
            TStd.Chem=Std.Chem;
            TStd.Maths=Std.Maths;
            TStd.Tot=Std.Tot;
            TStd.Per=StdPer;
        }
    }

    printf("\nTopper Details are=\n");

    printf("\nRoll Number=%d",TRollNo);
    printf("\nName= %s",TName);
    printf("\nPhysics=%d, Chemistry=%d, Maths=%d",TSTd.Phy,TStd.Chem,TStd.Maths);
    printf("\nTotal=%d. Percentage=%0.2f.",TStd.Tot,TStd.Per);

    getch();
    return 0;


}
