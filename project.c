/*---
        Title: Hospital Management System
        Programming Language: C Programming
        Version: v-0.0.1
        Concept: Pallab Majumdar(50) & Joy Adhikary(62)
        Design: Oleraj Hossin(72)
        Code Write: Everyone Coded Different Function Seperately, Then Added the code on main fucntion Together.
        Link: https://github.com/Oleraj09/Hospital-Management
---*/



#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>


/*------------------------------
                                login Menu:
                                        -----------------------------------------*/
int login()
{
    char pass[15];
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t This DataBase Is Password Protected");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t\tEnter Password: ");
    gets(pass);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    if(strcmp(pass,"Bad")==0)
    {
        printf("Access Graunted!!");
        system("CLS");
    }
    else
    {
        printf("\t\t\t\t\t\tAccess Denied!!\n\n\n\n");
        system("PAUSE");
        system("CLS");
        login();
    }
}

/*----------------------------------
                                    Option Menu:
                                                ----------------------------------------------------*/

void menu1()
{
    printf("\n\t      ------WELCOME TO DATABASE MANAGEMENT SYSTEM------                           \n\n");


    printf("********************************************************************************\n");
    printf("********************************************************************************\n");
    printf("***  \t\t\t ENTER YOUR FOLLOWING CHOICE                         ***\n");
    printf("***  1- User's Area                                                          ***\n");
    printf("***  2- Administrator Area                                                   ***\n");
    printf("***  0- Exit                                                                 ***\n");
    printf("********************************************************************************\n");
    printf("********************************************************************************\n");
    choice1();

}

void menu2()
{
    printf("********************************************************************************\n");
    printf("********************************************************************************\n");
    printf("***  \t\t\t ENTER YOUR FOLLOWING CHOICE                         ***\n");
    printf("***  1- Patient Register                                                     ***\n");
    printf("***  2- Search Details                                                       ***\n");
    printf("***  3- Book A seat                                                          ***\n");
    printf("***  4- Medicine Cost                                                        ***\n");
    printf("***  0- Back To Main                                                         ***\n");
    printf("********************************************************************************\n");
    printf("********************************************************************************\n");
    choice2();

}

void menu3()
{
    printf("********************************************************************************\n");
    printf("********************************************************************************\n");
    printf("***  \t\t\t ENTER YOUR FOLLOWING CHOICE                         ***\n");
    printf("***  1- All the List                                                         ***\n");
    printf("***  2- Total Earn                                                           ***\n");
    printf("***  3- Total Expense                                                        ***\n");
    printf("***  0- Back To Main                                                         ***\n");
    printf("********************************************************************************\n");
    printf("********************************************************************************\n");

    choice3();

}


/*-------------------------------
                                menu choosen option:
                                                -------------------------------------------*/

void choice1()
{
    int choice;
    printf("Kindly Select Your Operation:  ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        system("CLS");
        menu2();
        break;
    case 2:
        system("CLS");
        menu3();
        break;
    case 0:
        system("CLS");
        printf("\n\n\n\n\n\t\t\t\t\tShuting Down.\n");
        printf("\t\t\t\t\tShuting Down..\n");
        printf("\t\t\t\t\tShuting Down...\n");
        printf("\t\t\t\t\tShuting Down....\n");
        printf("\n\n\t\t\t\t\tSHUT DOWNED!!\n\n\n\n\n");
        exit(0);
    }
}

void choice2()
{
    int choice;
    printf("Kindly Select Your Operation:  ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        system("CLS");
        patient_register();
        break;
    case 2:
        system("CLS");
        menu3();
        break;
    case 3:
        system("CLS");
        menu2();
        break;
    case 4:
        system("CLS");
        menu3();
        break;
    case 0:
        system("CLS");
        menu1();
        break;
    }
}


void choice3()
{
    int choice;
    printf("Kindly Select Your Operation:  ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        system("CLS");
        menu2();
        break;
    case 2:
        system("CLS");
        menu3();
        break;
    case 3:
        system("CLS");
        menu2();
        break;
    case 4:
        system("CLS");
        menu3();
        break;
    case 0:
        system("CLS");
        menu1();
        break;
    }
}

/*---------------------------------
                                prompt for enter or Exit:
                                                        ---------------------------------------*/
void prompt_patient()
{
    printf("\n\n\t\tDo you want to Add another Patient? Y/N \n");
    char c[1];
    scanf("%s",c);
    if(strcmp(c,"Y")==0)
    {
        system("CLS");
        patient_register();
    }
    else if(strcmp(c,"N")==0)
    {
        system("CLS");
        menu2();
    }
    else
    {
        printf("\t\t\t\t\tError!! Wrong Input!\n\n\t\t\t\tType Correct Input Y/N.\n\n");
        system("PAUSE");
        system("CLS");
        prompt_patient();
    }
}




/*-------------------------------
                                The function are Here:
                                                    --------------------------------*/
void patient_registers()
{
    FILE *patient;
    char serial[10];
    char name[20];
    char gender[10];
    char dept[10];
    char doctor[15];
    int fees;
    char age[5];

    printf("Enter Serial No: ");
    scanf("%s",serial);

    patient= fopen(("%s",serial), "w+");

    printf("\n\n");

    printf("Patient Name: ");
    scanf("%s",name);

    printf("Age: ");
    scanf("%d",&age);

    printf("Gender: ");
    scanf("%s",gender);

    printf("Problem type: ");
    scanf("%s",dept);

    printf("Consultant Doctor: ");
    scanf("%s",doctor);

    printf("Fees: ");
    scanf("%s",fees);

    fprintf(patient,"\t\t\t JPO Hospital Limited\n");
    fprintf(patient,"\t\t---------------------------------------------------------");
    fprintf(patient,"\n\nSerial No: %s\n\n",serial);
    fprintf(patient,"Name: %s\t\t\t\t\t\t",name);
    fprintf(patient,"Age: %d\n",age);
    fprintf(patient,"Gender: %s",gender);
    fprintf(patient,"\nProblem Type: %s",dept);
    fprintf(patient,"\nConsultant Doctor: %s",doctor);
    fprintf(patient,"\nFees: %s",fees);
    fprintf(patient,"\n\n\nAll rights reserved at JPO limited,Sponsored Mordern Hospitally Technology");


    fclose(patient);

}

void patient_register()
{
    patient_registers();
    prompt_patient();
}




/*--------------------------------------
                                  Main Function:
                                        ---------------------------------------------*/

int main()
{
    login();
    menu1();
}


/*----------------------------------------------------END OF CODE-----------------------------------------------------*/
