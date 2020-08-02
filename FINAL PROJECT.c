#include<stdio.h>
#include<conio.h>
void car();
void bike();
void scooty();
int menu();
int status();
void start();
void login();
void departure();
void collection();

int noc=0,nob=0,nos=0,ac,ab,as,at=0,avc=200,av=300,cc=0,cb=0,cs=0;
void main()
{
	start();
	login();
	while(1)
	{
		system("cls");
		switch(menu())
		{
			case 1:
				car();
				break;
			case 2:
			    bike();
				break;
			case 3:
			    scooty();
				break;
			case 4:
			    status();
				break;
			case 5:
			    collection();
				break;
			case 6:
			    departure();
				break;		
			case 7:
	    	    exit(0);
				break;
			default:
			    printf("\nInvalid choice");
				break;				
		}
		getch();
	}
}

void car()
{
	char vehnum[10];
	printf("\nEnter the car number ");
	scanf("%s",vehnum);
	printf("\n\nCAR parked sucessfully with number %s!!!",vehnum);
	noc++;
	cc++;
	getch();
}
void bike()
{
	char vehnum[10];
	printf("\nEnter the bike number ");
	scanf("%s",vehnum);
	printf("\n\nBIKE parked sucessfully with number %s!!!",vehnum);
	nob++;
	cb++;
	getch();
}
void scooty()
{
	char vehnum[10];
	printf("\nEnter the scooty number ");
	scanf("%s",vehnum);
	printf("\n\nSCOOTY parked sucessfully with number %s!!!",vehnum);
	nos++;
	cs++;
	getch();
}
int menu()
{
	int ch;
	printf("\n\n =======VEHICLE PARKING=======");
	printf("\n\n\n 1>> Entry for car");
	printf("\n 2>> Entry for bike");
	printf("\n 3>> Entry for scooty");
	printf("\n 4>> Status of parking");
	printf("\n 5>> Fare collection");
	printf("\n 6>> Departure of vehicles");
	printf("\n 7>> EXIT");
	printf("\n\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("\n\nEnter your choice: ");
	scanf(" %d",&ch);
	return(ch);
	getch();
}
int status()
{
	printf("\nNumber of cars parked %d",noc);
	printf("\nNumber of bikes parked %d",nob);
	printf("\nNumber of scooty parked %d",nos);
	printf("\nTotal no.of vehicles parked %d",nob+noc+nos);
	avc=avc-noc;
	printf("\nParking left for cars=%d",avc);
	avc=avc+noc;
	av=av-(nob+nos);
	printf("\nParking left for bikes and Scooties=%d",av);
	av=av+(nob+nos);
	getch();
}
void collection()
{
ab=30*cb;
ac=50*cc;
as=20*cs;
at=ab+ac+as;
printf("\nTotal collection from bikes=%d",ab);
printf("\nTotal collection from cars=%d",ac);
printf("\nTotal collection from scooty=%d",as);
printf("\nTotal collection from all=%d",at);
}
void departure()
{
int num;
printf("\nPress 1 for car\nPress 2 for bike\nPress 3 for scooty");
printf("\nEnter your choice");
scanf("\n%d",&num);
if(num==1)
{
noc=noc-1;
printf("\nCar departed sucessfully!!!");
}
else if(num==2)
{
nob=nob-1;
printf("\nBike departed sucessfully!!!");
}
else if(num==3)
{
nos=nos-1;
printf("\nScooty departed sucessfully!!!");
}
else
{
printf("\nwrong input");
}
}

void login()
{
char uname[100],password[100];
int a=0;
do
{
	printf("\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  LOGIN FIRST  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
    printf(" \n\n                       ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n\n                       ENTER PASSWORD:-");
	scanf("%s",&password);
	if(strcmp(uname,"abhi")==0 && strcmp(password,"1234")==0)
	{
		printf("\n WELCOME!! Your Login is sucessful....");
		printf("\n\n\n\t\t\t\t Press any key to continue....");
		break;
	}
	else
	{
		printf("\n Username or Password is incorrect");
		a++;
	}
	getch();
}
while(a<=2);
{
	if(a>2)
	{
	    printf("\n\n\n OOPS!! You have entered the wrong username or password for three times...");
	    exit(0);
	}
	    getch();
}
system("cls");
}

void start()
{
printf("           * * * * * * * * * * * * * * * *  ");
printf("\n           *          VEHICLE            * ");
printf("\n           *     PARKING MANAGEMENT      * ");
printf("\n           *          PORTAL             * ");
printf("\n           *                             * ");
printf("\n           *    ===== ABES-EC =====      * ");
printf("\n           *                             * ");
printf("\n           * * * * * * * * * * * * * * * * ");
printf("\n\n\n Press any key to continue");
getch();
system("cls");
}

