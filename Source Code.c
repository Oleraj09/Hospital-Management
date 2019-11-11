#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

//------------------------------login Menu:
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

//----------------------------------Option Menu:
void show()
{
    printf("\n\t\t      ------WELCOME TO DATABASE MANAGEMENT SYSTEM------                           \n\n\n\n\n");


    printf("********************************************************************************\n");
    printf("********************************************************************************\n");
    printf("***  \t\t\t ENTER YOUR FOLLOWING CHOICE                         ***\n");
    printf("***  1- Patient Register                                                     ***\n");
    printf("***  2- Input Medicine Details                                               ***\n");
    printf("***  3- All Patient Details                                                  ***\n");
    printf("***  4- List of Available Medicine                                           ***\n");
    printf("***  0- Exit                                                                 ***\n");
    printf("********************************************************************************\n");
    printf("********************************************************************************\n");
    choice();

}

//------------------------------prompt for enter or Exit:
void prompt()
{
    printf("\n\n\t\tDo you want to go Privious Operation? Y/N ");
    char a[1];
    scanf("%s",a);
    if(strcmp(a,"Y")==0)
    {
        system("CLS");
        show();
    }
    else
    {
        system("CLS");
        printf("\n\n\n\t\t\t\tThank You For Using Our Apps!\n\n\n\n\n");
    }
}

//------------------------------prompt for Medicine:
void promptm()
{
    printf("\n\n\t\tDo you want to Add another Medicine? Y/N ");
    char b[1];
    scanf("%s",b);
    if(strcmp(b,"Y")==0)
    {
        system("CLS");
        medicine();
    }
    else
    {
        system("CLS");
        show();
    }
}

//-------------------prompt for patient:
void promptn()
{
    printf("\n\n\t\tDo you want to Add another Patient? Y/N ");
    char c[1];
    scanf("%s",c);
    if(strcmp(c,"Y")==0)
    {
        system("CLS");
        patient();
    }
    else
    {
        system("CLS");
        show();
    }
}




//----------------------The function are Here:


void medicine()
{
    FILE *medic;
    char medicine[100];
    int price,quantity;
    medic=fopen("Medicine.txt","a");

    if(medic==NULL)
    {
        printf("File Doesn't Exist!");
    }
    else
    {


        printf("Enter Medicine Name: ");
        scanf("%s",&medicine);

        printf("Enter Price: ");
        scanf("%d",&price);

        printf("Enter Quantity in pices: ");
        scanf("%d",&quantity);
        printf("\n");

        fprintf(medic,"Medicine Name: %s     Price: %d TK     Quantity: %d pices\n",medicine,price,quantity);
        fclose(medic);

    }
    promptm();

}

void patient()
{
    FILE *patient;
    char name[100];
    char gender[10];
    int age;
    patient=fopen("Patient.txt","a");

    if(patient==NULL)
    {
        printf("File Doesn't Exist!");
    }
    else
    {
        printf("Enter Patient Name: ");
        gets(name);

        printf("Enter Age: ");
        scanf("%d",&age);

        printf("Write Male/Female/Others: ");
        gets(gender);
        printf("\n");

        fprintf(patient,"Patient Name: %s     Age: %d year     Gender: %s \n",name,age,gender);
        fclose(patient);

    }
    promptn();
}




//-----------------------menu choosen option:
void choice()
{
    int choice;
    printf("Kindly Select Your Operation:  ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        system("CLS");
        patient();
        promptn();
        break;
    case 2:
        system("CLS");
        medicine();
        promptm();
        break;
    case 3:
        system("CLS");
        FILE *patient1;
        char ch;
        patient1=fopen("Patient.txt","r");
        if(patient1==NULL)
        {
            printf("File Doesn't Exist!");
        }
        else
        {

            while(!feof(patient1))
            {
                ch=fgetc(patient1);
                printf("%c",ch);
            }
            fclose(patient1);
        }
        prompt();
        break;

    case 4:
        system("CLS");
        FILE *medic1;
        char ch1;
        medic1=fopen("Medicine.txt","r");
        if(medic1==NULL)
        {
            printf("File Doesn't Exist!");
        }
        else
        {

            while(!feof(medic1))
            {
                ch1=fgetc(medic1);
                printf("%c",ch1);
            }
            fclose(medic1);
        }
        prompt();
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



//---------------------Main Function:

int main()
{
    login();
    show();
}
