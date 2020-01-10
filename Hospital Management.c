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



/*------------------------------------
                                    Login Form
                                            ---------------------------------------------------*/

void login()
{
    FILE *fp ;
    char pass[15];
    char password[15] ;
    fp = fopen( "password", "r" ) ;
    if ( fp == NULL )
    {

        printf("********************************************************************************\n");
        printf("********************************************************************************\n");
        printf("***\t      ------WELCOME TO DATABASE MANAGEMENT SYSTEM------              ***\n");
        printf("***\t             You Are New On our Software System.                     ***\n");
        printf("***                   You  Must Have to Set a Password.                      ***\n");
        printf("***                                                                          ***\n");
        printf("***     1.Set A New Password                                                 ***\n");
        printf("***     0.Exit                                                               ***\n");
        printf("***                                                                          ***\n");
        printf("********************************************************************************\n");
        printf("********************************************************************************\n");
        choice0();

    }
    while( fgets ( password, 15, fp ) != NULL )
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

    if(strcmp(pass,password)==0)
    {
        printf("Access Graunted!!");
        system("CLS");
        menu1();
    }
    else
    {
        printf("\t\t\t\t\t\tAccess Denied!!\n\n\n\n");
        system("PAUSE");
        system("CLS");
        login();
    }
    fclose(fp);
}


/*----------------------------------
                                    Set A Password:
                                                ----------------------------------------------------*/


void setpass()
{
    FILE *fp ;
    char password[50] ;
    fp = fopen( "password", "w" ) ;
    if ( fp == NULL )
    {
        printf("Error!!");
    }
    else
    {

        printf("********************************************************************************\n");
        printf("********************************************************************************\n");
        printf("***\t      ------WELCOME TO DATABASE MANAGEMENT SYSTEM------              ***\n");
        printf("***\t               NB: Old Password replaced!                            ***\n");
        printf("***                                                                          ***\n");
        printf("***                                                                          ***\n");
        printf("***  Enter New Password: ");
        scanf("%s",password);
        fprintf(fp,"%s",password);
        printf("***                                                                          ***\n");
        printf("***                                                                          ***\n");
        printf("***  your password Successfully Updated!!                                    ***\n");
        printf("***  Please Login Again.                                                     ***\n");
        printf("***                                                                          ***\n");
        printf("***                                                                          ***\n");
        printf("********************************************************************************\n");
        printf("********************************************************************************\n");

    }
    fclose(fp);
    system("PAUSE");
    system("CLS");
    login();
    return 0;
}




/*----------------------------------
                                    Option Menu:
                                                ----------------------------------------------------*/



void menu1()
{
    printf("\n\t      ------WELCOME TO DATABASE MANAGEMENT SYSTEM------                   \n\n");


    printf("********************************************************************************\n");
    printf("********************************************************************************\n");
    printf("***  \t\t\t ENTER YOUR FOLLOWING CHOICE                         ***\n");
    printf("***  1- User's Area                                                          ***\n");
    printf("***  2- Administrator Area                                                   ***\n");
    printf("***  3- Set A Password                                                       ***\n");
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
    printf("***  1- Book A Seat                                                          ***\n");
    printf("***  2- Patient Register                                                     ***\n");
    printf("***  3- Patient Cost                                                         ***\n");
    printf("***  4- Search Details                                                       ***\n");
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
    printf("***  1- Doctor List                                                          ***\n");
    printf("***  2- Add New Doctor                                                       ***\n");
    printf("***  3- Medicine List                                                        ***\n");
    printf("***  4- Total Earn                                                           ***\n");
    printf("***  5- Statistics                                                           ***\n");
    printf("***  6- Total Profit                                                         ***\n");
    printf("***  0- Back To Main                                                         ***\n");
    printf("********************************************************************************\n");
    printf("********************************************************************************\n");

    choice3();

}



/*-------------------------------
                                menu choosen option:
                                                -------------------------------------------*/


void choice0()
{
    int choice;
    printf("Kindly Select Your Operation:  ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        system("CLS");
        setpass();
        break;

    case 0:
        system("CLS");
        printf("\n\n\n\n\n\t\t\t\t\tShuting Down.\n");
        printf("\n\n\n\n\n");
        exit(0);
    }
}

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

    case 3:
        system("CLS");
        setpass();
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
        book_seat();
        break;

    case 2:
        system("CLS");
        patient_register();
        break;

    case 3:
        system("CLS");
        patient_cost();
        break;

    case 4:
        system("CLS");
        patient_details();
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
        FILE *doctor;
        char ch;
        doctor = fopen("doctor", "r");

        if( doctor == NULL)
        {
            printf("No Doctor List!!");
        }
        else
        {
            while ((ch = fgetc(doctor))!= EOF)
            {
                printf("%c", ch);
            }

        }

        fclose(doctor);
        main_menu();
        break;

    case 2:
        system("CLS");
        add_doctor();
        break;

    case 3:
        system("CLS");
        FILE *medicine;
        char chs;
        medicine = fopen("medicine", "r");

        if( medicine == NULL)
        {
            printf("No medicine List!!");
        }
        else
        {
            while ((chs = fgetc(medicine))!= EOF)
            {
                printf("%c", chs);
            }

        }
        fclose(medicine);
        main_menu();
        break;

    case 4:
        system("CLS");
        FILE *earning;
        char serial[10];
        int elecctricity,doctors,nurses,medicines,others,x,y,cost,sum=0,i,n;
        earning = fopen("statistic", "a+");
        if( earning == NULL)
        {
            printf("No earning List!!");
        }
        else
        {
            printf("\nHospital Expenditure: \n\n");
            printf("Enter Date(Ex: 25-02-2000): ");
            scanf("%s",serial);
            printf("Doctors Bill: ");
            scanf("%d",&doctors);
            printf("Nurses Bill: ");
            scanf("%d",&nurses);
            printf("Electricity Bill: ");
            scanf("%d",&elecctricity);
            printf("Medicine Bill: ");
            scanf("%d",&medicines);
            printf("Others Bill: ");
            scanf("%d",&others);
            x=doctors+nurses+elecctricity+medicines+others;
            printf("\n\n");
            printf("\nEarn From Patient:\n\n");
            printf("\nToday Total Patient: ");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                printf("Enter Patient Cost: ");
                scanf("%d",&cost);
                sum+=cost;
            }
            y=sum-x;
            printf("-----------------------\n");
            printf("Total Earn:    %d",y);
            fprintf(earning,"**************************\n");
            fprintf(earning, "\nDate: %s\n",serial);
            fprintf(earning, "\nDoctors Bill: %d",doctors);
            fprintf(earning, "\nNurses Bill: %d",nurses);
            fprintf(earning, "\nELECTRICITY Bill: %d",elecctricity);
            fprintf(earning, "\nMedicine: %d",medicines);
            fprintf(earning, "\nOthers Bill: %d",others);
            fprintf(earning,"\n");
            fprintf(earning, "\nTotal Hospital Expenduture: %d",x);
            fprintf(earning, "\nTotal Earn from Patient   : %d",sum);
            fprintf(earning,"\n------------------------");
            fprintf(earning, "\nTotal Earn: %d\n\n\n",y);
            fprintf(earning,"**************************\n");

        }

        fclose(earning);
        main_menu();
        break;

    case 5:
        system("CLS");
        FILE *statistic;
        char chz;
        printf("\n\n");
        statistic = fopen("statistic","r");
        if( statistic == NULL)
        {
            printf("No statistic List!!");
        }
        else
        {
            while ((chz = fgetc(statistic))!= EOF)
            {
                printf("%c", chz);
            }

        }
        fclose(statistic);
        main_menu();
        break;
        break;
    case 6:
        system("CLS");
        FILE *profit;
        char chp;
        profit = fopen("profit", "r");
        if( profit == NULL)
        {
            printf("No profit List!!");
        }
        else
        {
            printf("Total Profit is: ");
            while ((chp = fgetc(profit))!= EOF)
            {
                printf("%c", chp);
            }
        }

        fclose(profit);



        FILE *profit1;
        int p1,p2,p;
        profit1 = fopen("profit", "w");
        if( profit1 == NULL)
        {
            printf("No profit List!!");
        }
        else
        {
            printf("\n\n");
            printf("Enter Privious Profit Amount: ");
            scanf("%d",&p1);
            printf("Enter Todays Profit Amount: ");
            scanf("%d",&p2);
            p=p1+p2;
            printf("Total Profit Amount is: %d",p);
            printf("\n\n Privious amount will updated!\n Refress or Back Here Next Time!! ");
            fprintf(profit1,"%d",p);
        }

        fclose(profit1);
        main_menu();
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

void prompt_book()
{
    printf("\n\n\t\tDo you want to Add another Patient? Y/N \n");
    char c[1];
    scanf("%s",c);
    if(strcmp(c,"Y")==0)
    {
        system("CLS");
        book_seat();
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
        prompt_book();
    }
}

void prompt_details()
{
    printf("\n\n\t\tDo you want to Find Another Patient Details? Y/N \n");
    char c[1];
    scanf("%s",c);
    if(strcmp(c,"Y")==0)
    {
        system("CLS");
        patient_details();
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
        prompt_details();
    }
}

void prompt_c()
{
    printf("\n\n\t\tDo you want to Add another Details? Y/N \n");
    char c[1];
    scanf("%s",c);
    if(strcmp(c,"Y")==0)
    {
        system("CLS");
        patient_cost();
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
        prompt_c();
    }
}
void main_menu()
{
    printf("\n\n\t\tPress Y Key To Go Priviuous Page! \n");
    char c[1];
    scanf("%s",c);
    if(strcmp(c,"Y")==0)
    {
        system("CLS");
        menu3();
    }
    else
    {
        printf("\t\t\t\t\tError!! Wrong Input!\n\n\t\t\t\tType Correct Input Y/N.\n\n");
        system("CLS");
        main_menu();
    }
}

void prompt_doctor()
{
    printf("\n\n\t\tDo you want to Add another Details? Y/N \n");
    char c[1];
    scanf("%s",c);
    if(strcmp(c,"Y")==0)
    {
        system("CLS");
        add_doctor();
    }
    else if(strcmp(c,"N")==0)
    {
        system("CLS");
        menu3();
    }
    else
    {
        printf("\t\t\t\t\tError!! Wrong Input!\n\n\t\t\t\tType Correct Input Y/N.\n\n");
        system("PAUSE");
        system("CLS");
        prompt_doctor();
    }
}



/*-------------------------------
                                The function are Here:
                                                    --------------------------------*/

void patient_register()
{
    FILE *patientr;
    char serial[10],name3[15];
    char gender[10],name4[15];
    char dept[15];
    int age1;
    char doctor_code[15],doctor_code1[15];

    printf("\n\t\t\t\tEnter Serial No: ");
    scanf("%s",serial);
    printf("\n\n");
    patientr = fopen(("%s",serial), "a");

    if( patientr == NULL)
    {
        printf("Error to Create File!!");
    }
    else
    {
        printf("\n\n");
        printf("Enter Patient Name: ");
        scanf("%s%s",name4,name3);
        printf("Enter Age: ");
        scanf("%d",&age1);
        printf("Problem Type: ");
        scanf("%s",dept);
        printf("Gender: ");
        scanf("%s",gender);
        fprintf(patientr,"\nPatient Problem: %s \t\t\t Gender: %s\n",dept,gender);
        printf("Doctor Name: ");
        scanf("%s%s",doctor_code,doctor_code1);
        fprintf(patientr,"Consulting Doctor: %s %s\n",doctor_code,doctor_code1);
    }

    fclose(patientr);
    prompt_patient();

}

void patient_details()
{
    FILE *patientd;
    char serial[10];
    char ch;
    printf("\n\t\t\t\tEnter Serial No: ");
    scanf("%s",serial);
    printf("\n\n");
    patientd = fopen(("%s",serial), "r");

    if( patientd == NULL)
    {
        printf("No details Founded!!");
    }
    else
    {
        while ((ch = fgetc(patientd))!= EOF)
        {
            printf("%c", ch);
        }

    }

    fclose(patientd);
    prompt_details();
}

void book_seat()
{
    FILE *patientb;
    char name1[10];
    int age;
    char name2[15],serial[15];
    printf("\n\t\t\t\tEnter Serial No: ");
    scanf("%s",serial);
    printf("\n\n");
    patientb=fopen(("%s",serial),"w");
    if(patientb==NULL)
    {
        printf("Error! we will solve the Bug");
    }
    else
    {
        printf("\n\n");
        fprintf(patientb,"-----------------JPO Private Hospital Ltd. Dhaka------------------\n\n");
        printf("Enter Patient Name: ");
        scanf("%s%s",name1,name2);
        fprintf(patientb,"Patient Name: %s %s \t\t\t\t",name1,name2);
        printf("Enter Age: ");
        scanf("%d",&age);
        fprintf(patientb,"Age: %d\n\n",age);
        printf("\n\n");
        printf("Successfully Register A pattient!\n\n");
    }
    fclose(patientb);
    prompt_book();
}

void patient_cost()
{
    FILE *patientc;
    char serial[10];
    int bed,nurse,doctor,medicine,others,x,visit;
    printf("Enter Serial No: ");
    scanf("%s",serial);

    patientc = fopen(("%s",serial), "a");

    if( patientc == NULL)
    {
        printf("Error to Create File!!");
    }
    else
    {
        printf("\n\n");
        printf("Visiting Fee: ");
        scanf("%d",&visit);
        printf("Bed Fee: ");
        scanf("%d",&bed);
        printf("Doctor Fee: ");
        scanf("%d",&doctor);
        printf("Nurse Fee: ");
        scanf("%d",&nurse);
        printf("Medicine Fee: ");
        scanf("%d",&medicine);
        printf("Others: ");
        scanf("%d",&others);
        x=bed+doctor+nurse+medicine+others+visit;
        fprintf(patientc,"\nVisiting Fees: %d TK",visit);
        fprintf(patientc,"\nBed Fees: %d TK",bed);
        fprintf(patientc,"\nDoctor Fees: %d TK",doctor);
        fprintf(patientc,"\nNurse Fees: %d TK",nurse);
        fprintf(patientc,"\nMedicine Fees: %d TK",medicine);
        fprintf(patientc,"\nOther   : %d TK",others);
        fprintf(patientc, "\n--------------------------\n");
        fprintf(patientc,"Total Cost   : %d TK\n",x);

    }

    fclose(patientc);
    prompt_c();
}

void add_doctor()
{
    FILE *doctor;
    char doctors1[50],doctors2[50];
    doctor = fopen("doctor", "a");
    if(doctor==NULL)
    {
        printf("NO Doctor Input");
    }
    else
    {
        printf("Doctor Name: ");
        scanf("%s%s",doctors1,doctors2);
        fprintf(doctor,"MBBS: %s %s\n",doctors1,doctors2);
    }
    fclose(doctor);
    prompt_doctor();
}



/*--------------------------------------
                                  Main Function:
                                        ---------------------------------------------*/


int main()
{
    login();
    return 0;
}


/*----------------------------------------------------END OF CODE-----------------------------------------------------*/
