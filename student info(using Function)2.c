#include<stdio.h>
#include<conio.h>
#include<string.h>
#define Max 3

void Accept_Details();
void Display_Topper();
void Display_STopper();


struct stud
{
    char Name[20];
    int RollNo,Phy,Chem,Maths,Tot;
    float Per;
}Std,TStd,Sstd;

int main()
{
    Accept_Details();

    printf("\nPress any key to see Topper Details");
    getch();

    Display_Topper();
    getch();

    Dispaly_STopper();
    getch();

    return 0;


}
void Accept_Details()
{
     int i=0;
     int n=0;
     printf("\nEnter %d student information to find them= \n",Max);

    for(i=0;i<Max;i++)
    {
        for(n=0;n<Max;n++)
        {
                  printf("\nEnter %d student detail= ",i+1);
        Std.RollNo=i+1;

        fflush(stdin);
        printf("\nEnter Student Name= ");
        scanf("%[^\n]",&Std.Name);
        fflush(stdin);

        printf("\nEnter student Physics marks= ");
        scanf("%d",&Std.Phy);

        printf("\nEnter student Chemistry marks");
        scanf("%d",&Std.Chem);

        printf("\nEnter student Maths marks");
        scanf("%d",&Std.Maths);

        Std.Tot=Std.Phy+Std.Chem+Std.Maths;
        Std.Per= (Std.Tot*100)/300;
        printf("\nRollNo %d student total Marks= %d\n",Std.RollNo,Std.Tot);

        }

    }

}

    if(i==0||TStd.Tot<Std.Tot)
        {
            if(Sstd.Tot<TStd.Tot)
            {
                Sstd.RollNo=TStd.RollNo;
                Strcpy(Sstd.Name,TStd.Name);
                Sstd.Phy=TStd.Phy;
                Sstd.Chem=TStd.Chem;
                Sstd.Tot=TStd.Tot;
                Sstd.Per=TStd.Per;
            }

            TStd.RollNo=Std.RollNo;
            strcpy(TStd.Name,Std.Name);
            TStd.Phy=Std.Phy;
            TStd.Chem=Std.Chem;
            TStd.Maths=Std.Maths;
            TStd.Tot=Std.Tot;
            TStd.Per=Std.Per;
        }
        void Display_Topper()
        {
             printf("\nTopper Details are=\n");

    printf("\nRoll Number=%d",Std.RollNo);
    printf("\nName= %s",Std.Name);
    printf("\nPhysics=%d, Chemistry=%d, Maths=%d",Std.Phy,Std.Chem,Std.Maths);
    printf("\nTotal=%d. Percentage=%0.2f.",Std.Tot,Std.Per);

        }
        void Disply_STopper()
        {
             printf("\nTopper Details are=\n");

    printf("\nRoll Number=%d",Sstd.RollNo);
    printf("\nName= %s",Sstd.Name);
    printf("\nPhysics=%d, Chemistry=%d, Maths=%d",Sstd.Phy,Sstd.Chem,Sstd.Maths);
    printf("\nTotal=%d. Percentage=%0.2f.",Sstd.Tot,Sstd.Per);

        }

