///Write a program that accepts a student details from user and gives various choices to users for Student Details and create a function that searches a student using their Roll_Number and finds topper by using Roll_No.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stud
{
    int RNo;
    char Name[40];
    long long int MobNo;
    int Phy, Chem, Maths;
    int Tot;
    float Per;
};

void Accept_Student_Details(struct Stud *, int);
void Display_Student_Details(struct Stud *, int);
void Search_By_Roll(struct Stud *, int);
void Find_Topper(struct Stud *, int);

int main()
{
    int SCount = 0;
    struct Stud *StdPtr = NULL;

    printf("\n Enter How Many Student Details Do You Have : ");
    scanf("%d",&SCount);

    StdPtr = (struct Stud*) malloc(SCount * sizeof(struct Stud));

    Accept_Student_Details(StdPtr, SCount);

    printf("\n\n ===== ALL STUDENT DETAILS =====\n");
    Display_Student_Details(StdPtr, SCount);

    Search_By_Roll(StdPtr, SCount);
    printf("\n\n Enter any key to see the Topper Details: ");
    getch();
    system("cls");

    Find_Topper(StdPtr, SCount);

    free(StdPtr);
    return 0;
}

void Accept_Student_Details(struct Stud *SPtr, int SCnt)
{
    int i;

    for(i = 0; i < SCnt; i++)
    {
        printf("\n\n Enter Student Roll No %d Details =>\n", i+101);
        SPtr[i].RNo = i + 101;

        while(getchar() != '\n');   // Clear buffer

        printf(" Enter Students Name : ");
        fgets(SPtr[i].Name, sizeof(SPtr[i].Name), stdin);

        printf(" Enter Students Mobile Number : ");
        scanf("%lld",&SPtr[i].MobNo);

        printf(" Enter Physics Marks : ");
        scanf("%d",&SPtr[i].Phy);

        printf(" Enter Chemistry Marks : ");
        scanf("%d",&SPtr[i].Chem);

        printf(" Enter Mathematics Marks : ");
        scanf("%d",&SPtr[i].Maths);

        SPtr[i].Tot = SPtr[i].Phy + SPtr[i].Chem + SPtr[i].Maths;
        SPtr[i].Per = SPtr[i].Tot / 3.0;
    }
}

void Display_Student_Details(struct Stud *SPtr, int SCnt)
{
    int i;

    for(i = 0; i < SCnt; i++)
    {
        printf("\n Roll No       : %d", SPtr[i].RNo);
        printf("\n Name          : %s", SPtr[i].Name);
        printf(" Mobile No     : %lld", SPtr[i].MobNo);

        printf("\n Marks => Physics = %d, Chemistry = %d, Maths = %d",
               SPtr[i].Phy, SPtr[i].Chem, SPtr[i].Maths);

        printf("\n Total = %d", SPtr[i].Tot);
        printf("\n Percentage = %.2f", SPtr[i].Per);

        printf("\n ---------------------------------------------------\n");
    }
}

void Search_By_Roll(struct Stud *SPtr, int SCnt)
{
    int roll_no, i, found = 0;

    printf("\n\n Enter Roll Number To Search : ");
    scanf("%d",&roll_no);

    for(i = 0; i < SCnt; i++)
    {
        if(SPtr[i].RNo == roll_no)
        {
            printf("\n Student Found!\n");
            printf(" Name : %s", SPtr[i].Name);
            printf(" Percentage : %.2f\n", SPtr[i].Per);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\n Student Not Found!\n");
}

void Find_Topper(struct Stud *SPtr, int SCnt)
{
    int i, maxIndex = 0;

    for(i = 1; i < SCnt; i++)
    {
        if(SPtr[i].Per > SPtr[maxIndex].Per)
        {
            maxIndex = i;
        }
    }

    printf("\n\n ===== TOPPER DETAILS =====\n");
    printf(" Roll No : %d\n", SPtr[maxIndex].RNo);
    printf(" Name    : %s", SPtr[maxIndex].Name);
    printf(" Percentage : %.2f\n", SPtr[maxIndex].Per);

    printf("\n\n Congratulations %s ",SPtr[maxIndex].Name);
}
