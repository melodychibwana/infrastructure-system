#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<ctype.h>

// global variables
// registration variables 

void checkLength(char field[]);
void checkAlpha(char Field[]);
void checkemail(char Field[]);
void checkphonenumber(int Field);
void checkdigits(int Field[]);

struct melody{
	char r_username[45];
	char r_password[67];
    char email[20];
	int phonenumber;
	
}m;

struct vitu{
	
};


struct vitu n;

struct customersInfo{
	char location[20];
	int  lphonenumber[10];
	char lname[20];
	char lsurname[20];
	char design[20];
} customer;

void login();
void regi();
void bookings();


struct bookings ;

void swimming_pools();
void houses();
void townhouse();
void singlefamily_home();
void multifamily_house();
void condo();
void olympic_pool();
void lap_pool();
void indoor_pool();
void infinity_pool();
void yes();
void no();
void cancel();
void operations();
void view();

int main()
{
	
	system("color 70");
	time_t t;
	time(&t);
	int option;
     printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\t\t\t\t\t\t\n");
	printf("\t\t\t\t\t\xdb\tMELO CONSTRUCTIONS LTD \t \xdb\n");
	printf("\t\t\t\t\t\xdb\t                       \t \xdb\n");
    printf("\t\t\t\t\t\xdb\t                       \t \xdb\n");
    printf("\t\t\t\t\t\xdb\t                       \t \xdb\n");
    printf("\t\t\t\t\t\xdb\t                       \t \xdb\n");
    printf("\t\t\t\t\t\xdb\t [1].Register          \t \xdb\n");
    printf("\t\t\t\t\t\xdb\t [2].Login             \t \xdb\n");
    printf("\t\t\t\t\t\xdb\t                       \t \xdb\n");
    printf("\t\t\t\t\t\xdb\t                       \t \xdb\n");
    printf("\t\t\t\t\t\xdb\tplease select an option\t \xdb\n");
	printf("\t\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\t\t\t\t\t\t\n");
	printf("\n\n");
    printf("\t\t\t\t\t%s ",ctime(&t));
	scanf("%d",&option);
	system("cls");
	switch(option)
	{
		case 1:
			regi();
			break;
		case 2:
			login();
			break;
	   default:
			break;
	}
	
	
}

void regi()
{
	FILE* fp;
	fp=fopen("registration.txt","a+");
	system("color 72");
	system("cls");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\t\t\t welcome to the registration page");
	printf("\n");

	printf("\n please enter your information below:\n");
	
	printf("\n enter username\n");
	scanf("%s",m.r_username);
	checkLength(m.r_username);
	checkAlpha (m.r_username);
	
	printf("enter password\n");
	scanf("%s",m.r_password);
	checkLength(m.r_password);
	checkAlpha (m.r_password);

	printf("enter your email(PLEASE ADD @):\n");
	scanf("%s",m.email);
	checkemail(m.email);
	 
	 
	printf("enter users phonenumber(DIGITS ONLY):\n");
	scanf("%d",&m.phonenumber);
	checkphonenumber(m.phonenumber);
	//checkdigits(m.phonenumber);
	
	if (fp == NULL)
    	{
		printf("ERROR opening the file\n");
		Sleep(2000);
    	system("cls");
    	regi();
		}
	fwrite(&m,sizeof(struct melody),1,fp);

	if (fwrite != 0)
     	{
     	puts("info written.");
     	 printf ("you have sucessfully registerd");
    	Sleep(2000);
    	system("cls");
    	fclose(fp);
    	login();
		}
    	else 
    	  {
		  
			puts ("error writting content to file");
			Sleep(2000);
        	system("cls");
         	main();
          }

}
void login(){
	char l_username[20];
	char l_password[20];
//	FILE*fp;
	//fp=fopen("registration.txt","r");
	system("color 80");
	system("cls");
	printf("\n");
	printf("\n");
	printf("\t\t\twelcome to the log in page\t\t\t\t \n");
	printf("\n");
	printf("please enter your login information below\n\n ");
  	printf("enter username:\n");
  	scanf("%s",l_username);
	
  	printf("enter password:\n");
  	scanf("%s",l_password);
  
  	//while(fread(&m,sizeof(struct melody),1,fp)){
	if(strcmp(m.r_password,l_password)==0 && strcmp(m.r_username,l_username)==0)
		  {
		  	printf("login sucesseful");
		  	Sleep(1000);
		  	system("cls");
			operations();
		  	
			  }
	else
		{
		printf("check username or password\a\a\a\a\a\a\a\a\a\n");
		Sleep(100);
		login();
		
		}	
	//}
}
  

	
void operations()
{
	int choice;
	printf("please select preferred option below\n\n");
	printf("\t===============================================\n");
	printf("\t\t[1].bookings\n",1);
	printf("\t\t[2].cancel\n",2);
	printf("\t\t[3].view\n",3);
	printf("\t\t[4].logout\n",4);
	printf("\t===============================================\n");
	printf("enter your choice:\n");
	scanf("%d",&choice);
	system("cls");
	system("color 70");
		
	switch(choice)
	{
		case 1:
			bookings();
			break;
		case 2:
		    printf("still working on it");
			break;
		case 3:
			view();
			break;
		case 4:
			main();
			break;
		default:
			break;
	}
}
void bookings()
		{
     	int option;
      
     	printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("\t\t|         MENU         |\n");
		printf("\t\t|         BAR          |\n");
		printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("\t<1>.houses\n");
		printf("\t<2>.swimming_pools\n");
		printf("\t<3>.go back\n\n");
		printf ("\tplease enter your option:\n");
		scanf("%d",&option);
		system("cls");
		system("color 70");
		
	switch(option)
	{
		case 1:
			houses();
			break;
		case 2:
		    swimming_pools();
			break;
		case 3:
			operations();
			break;
		default:
			break;
	}
}

void houses()
{
	   	
    	int choice;
    	
		printf("please select the type of house you want from the menu\n\n");
		printf("\t  [MENU BAR]            \n");
		printf("___________________________\n");
		printf("1.townhouse               \n",1);
		printf("2.multifamily_house        \n",2);
		printf("3.singlefamily_home        \n",3);
		printf("4.condo                    \n",4);
		printf("5.go back to menu          \n",5);
		printf("__________________________\n");
		printf("enter your choice:\n");
		scanf("%d",&choice);
		system("cls");
		switch(choice)
	{
		case 1:
			townhouse();
			break;
		case 2:
			multifamily_house();
			break;
		case 3:
	    	singlefamily_home();
			break;
	    case 4:
	    	condo();
	    	break;
	    case 5:
	      bookings();
	      break;
		default:
			break;
	}
	  }
	  
	    
void swimming_pools()
		{
			int choice;
			
			printf("please select the type of pool you want from the the menu\n\n");
			printf("\t [MENU BAR]              \n");
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("[1].olympic_pool              \n",1);
			printf("[2].indoor_pool               \n",2);
			printf("[3].lap_pool                  \n",3);
			printf("[4].infinity_pool			  \n",4);
			printf("[5].go back to menu           \n",5);
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
			printf ("enter your choice:\n");
	    	scanf("%d",&choice);
	    	system("cls");
	    	switch(choice)
	{
		case 1:
			olympic_pool();
			break;
		case 2:
			indoor_pool();
			break;
		case 3:
			lap_pool();
			break;
	    case 4:
	    	infinity_pool();
	    	break;
	    case 5:
	    	 bookings();
	    	 break;
		default:
			break;
	}
}

void townhouse()
	{
		int option;
		char location;
    	printf("do you like the design?\n");
    	printf("1.yes\n");
   	 	printf("2.no\n");
    	printf("enter your option:\n");
    	scanf("%d",&option);
    	system("cls");
     	switch(option)
	{
		case 1:
		   yes();
			break;
		case 2:
			no();
			break;
		default:
			break;
	}
}

void yes()
    {
	 char location[20];
	 int  lphonenumber;
	 char lname[20];
	 char lsurname[20];
	 char design[20];
	 
	    FILE*z;
		z=fopen("location.txt","w");
	    system("color 72");
     	printf("enter your name:\n");
     	scanf("%s",customer.lname);
     	
        printf("enter your surname below:\n");
        scanf("%s",customer.lsurname);
        
        printf ("please add your location:\n");
     	scanf("%s",customer.location);
     	
        printf("enter your phonenumber below:\n");
        scanf("%d",&customer.lphonenumber);
        
        printf("please re-enter the design:\n");
        scanf("%s",customer.design);
        
        printf("\t\t........booked sucessfully\n\n");
        printf("\t ___________________________________________________________________________________________________\n");
        printf("\t|note if it is out of lilongwe price will increase due to transportation                            |\n");
		printf("\t|increase due to transportthat if no then price will increase since we are the ones buying the land |\n");
        printf("\t|please note that the final amount is charged after work is done both labour and commodities needed.|\n");
        printf("\t|are you comfortable with this?if no please call 0990105234|                                        |\n");
        printf("\t|___________________________________________________________________________________________________|\n");
        fwrite(&n,sizeof(struct melody),1,z);
        int option;
        do{
        	printf("Enter 0 to go back <--\n");
        	scanf("%d", &option);
        	
        	if(option==0){
        		system("cls");
        		operations();
			}
			
			printf("Invalid option\n");
			
		}while(option !=0);
    }
        

void no()
       {
	   printf("go choose another design");
	   Sleep(2000);
       	bookings();
		}


void view()
{
	 
	printf("name:%s\n",customer.lname);
	printf("surname:%s\n",customer.lsurname);
	printf("phonenumber:%d\n",&customer.lphonenumber);
	printf("location:%s\n",customer.location);
	printf("design:%s\n",customer.design);
	getch();
    printf("click enter");
    system ("cls");
    operations();
}

	
void multifamily_house()
	{
	
	    int option;
		char location;
    	printf("do you like the design?\n");
    	printf("1.yes\n",1);
   	 	printf("2.no\n",2);
    	printf("enter your option:\n");
    	scanf("%d",&option);
    	   	system("cls");
     	switch(option)
	{
		case 1:
		   yes();
			break;
		case 2:
			no();
			break;
		default:
			break;
	}
     
     
		
	}
	
void singlefamily_home()
	{
		int option;
		char location;
    	printf("do you like the design?\n");
    	printf("1.yes\n",1);
   	 	printf("2.no\n",2);
    	printf("enter your option:\n");
    	scanf("%d",&option);
        	system("cls");
     	switch(option)
	{
		case 1:
		   yes();
			break;
		case 2:
			no();
			break;
		default:
			break;
	}
    
	}

	
void condo()
	{
		int option;
		char location;
		
    	printf("do you like the design?\n");
    	printf("1.yes\n",1);
   	 	printf("2.no\n",2);
    	printf("enter your option:\n");
    	scanf("%d",&option);
    	   	system("cls");
     	switch(option)
	{
		case 1:
		   yes();
			break;
		case 2:
			no();
			break;
		default:
			break;
	}
     
     
	}
	
	
	void olympic_pool()
	{
		
		int option;
		char location;
    	printf("do you like the design?\n");
    	printf("1.yes\n",1);
   	 	printf("2.no\n",2);
    	printf("enter your option:\n");
    	scanf("%d",&option);
    	   	system("cls");
     	switch(option)
	{
		case 1:
		   yes();
			break;
		case 2:
			no();
			break;
		default:
			break;
	}
     
    
	}
	
	void lap_pool()
	{
	
		int option;
		char location;
    	printf("do you like the design?\n");
    	printf("1.yes\n",1);
   	 	printf("2.no\n",2);
    	printf("enter your option:\n");
        scanf("%d",&option);
        	system("cls");
     	switch(option)
	{
		case 1:
		   yes();
			break;
		case 2:
			no();
			break;
		default:
			break;
	}
	}
	
	void indoor_pool()
	{
		
		int option;
		char location;
    	printf("do you like the design?\n");
    	printf("1.yes\n",1);
   	 	printf("2.no\n",2);
    	printf("enter your option:\n");
        scanf("%d",&option);
        	system("cls");
     	switch(option)
	{
		case 1:
		   yes();
			break;
		case 2:
			no();
			break;
		default:
			break;
	}
	}
	
	void infinity_pool()
	{
		
		int option;
		char location;
    	printf("do you like the design?\n");
    	printf("1.yes\n",1);
   	 	printf("2.no\n",2);
    	printf("enter your option:\n");
    	scanf("%d",&option);
        	system("cls");
     	switch(option)
		{
			case 1:
			   yes();
				break;
			case 2:
				no();
				break;
			default:
				break;
		}
	}


	
void checkLength(char field[]){
	
	int len = strlen(field);
	
	do{
		if(len < 6){
			if(len < 8)
			printf("Should not contain less than 8 chars\n");
			Sleep(2000);
			system("cls");
			regi();
		}
		
		else if(len > 20){
			printf("Should not contain more than 20 chars\n");
			Sleep(2000);
			system("cls");
			regi();
		}
		
		else{
			break;
		}
		
		
	}while(len < 6 || len > 20);	
}	

void checkAlpha(char Field[]){
	
	do{
		if (isdigit(*Field))
		{
	     	printf ("should not contain numbers or symbols\n");
	     	Sleep(2000);
	     	system("cls");
	     	regi();
		}
		else{
			break;	
		}
		
	}while(isdigit(*Field));

}

void checkemail(char Field[]){
	
	do{
		if(strchr(Field,'@')==NULL)
		{
			printf("invalid email");
			Sleep(2000);
			system("cls");
			regi();
		}
		else 
		{
			break;
		}
		 
	}while(strchr(Field,'@')==NULL);
}
		
		
		
void checkphonenumber(int Field){
	
	char phoneString[10];
	sprintf(phoneString, "%d", Field);
	
	do{
		if(strlen(phoneString) < 10 && strlen(phoneString) > 10){
			
			printf("Invalid phone number, 10 digits allowed\n");
			Sleep(2000);
			system("cls");
			regi();
		}
		
		else{
			break;
		}
		
	}while(strlen(phoneString) < 10 || strlen(phoneString) > 10);
}

void checkdigits(int Field[]){
	
	do{
			if(isdigit(*Field)==0)
		{
	     	printf ("should not cointain letters\n");
	     	Sleep(2000);
	     	system("cls");
	     	regi();
		}
		else{
			break;	
		}
		
	}while(isdigit(*Field)==0);

}

