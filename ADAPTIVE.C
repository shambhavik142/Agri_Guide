#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<process.h>
#include<dos.h>
#include<time.h>

int ans1,ans2,i=0,n=20;
char *a2[20]={"\n* The keyword used to transfer control from a function back to calling function is ?\n1 Switch\n2 goto\n3 go back\n4 return",
"\n* What are the types of linkages? \n1 Internal and External\n2 External,Internal and None\n3 External and none\n4 Internal",
"\n* Which of the following special symbol is aloowed in a variable name? \n1 *\n2 |\n3 -\n4 _",
"\n* Which of the following is the correct order of evaluation for the below expression?\nz = x + y * z / 4 % 2 - 1\n 1.* / % + - =\n 2.= * / % + -\n 3./ * % - + =\n 4.* % / - + =",
 "\n* Which of the following is the correct order if calling functions in the below code?\na = f1(23, 14) * f2(12/4) + f3();\n 1.f1, f2, f3\n 2.f3, f2, f1\n 3.Order may vary from compiler to compiler\n 4.None of above\n",
"\n*Which of the following statement is correct?\n 1.strcmp(s1, s2) returns a number less than 0 if s1>s2\n 2.strcmp(s1, s2) returns a number greater than 0 if s1<s2\n 3.strcmp(s1, s2) returns 0 if s1==s2\n 4.strcmp(s1, s2) returns 1 if s1==s2",
"\n*What do the following declaration signify?\n int (*ptr)[30]';'\n 1.ptr is a pointer to an array of 30 integer pointers.\n 2.ptr is a array of 30 integer function pointer.\n 3.ptr is a array of 30 integer pointers.\n 4.ptr is a array 30 pointers.",
"\n*What do the following declaration signify?\nvoid *cmp()';'\n 1.cmp is a pointer to an void type.\n 2.cmp is a void type pointer variable.\n 3.cmp is a function that return a void pointer.\n 4.cmp function returns nothing.",
"\n*Is there any difference int the following declarations?\n int fun(int arr[])';'\n int fun(int arr[2])';'\n 1.Yes\n 2.No",
"\n* The maximum combined length of the command-line arguments including the spaces between adjacent arguments is\n 1.128 characters\n 2.256 characters\n 3.67 characters\n 4.It may vary from one operating system to another"};


char *a1[20]={"* How would yoy round off a value from 1.66 to 2.0?\n1 ceil\n2 floor\n3 roundto\n4 roundoff",
"\n* A longdouble can be used if range of a double is not enough to accomodate a real number\n1 true\n2 false",
"\n* A pointer is\n 1.A keyword used to create variable\n 2.A variable that stores address of an instruction\n 3.A variable that stores address of other variable\n 4.All of the above",
 "\n*The operator used to get value at address stored in a pointer variable is\n 1.*\n 2.&\n 3.&&\n 4.||\n",
 "\n*In which header file is the NULL macro defined?\n 1.stdio.h\n 2.stddef.h\n 3.stdio.h and stddef.h\n 4.math.h\n",
 "\n*The keyword used to transfer control from a function back to the calling function is\n 1.switch\n 2.goto\n 3.go back\n 4.return\n",
  "\n*How will you print \n on the screen?\n 1.printf('\n')\n 2.echo '\\n'\n 3.printf('\n')\n 4.printf('\\n')",
"\n*What function should be used to free the memory allocated by calloc() ?\n 1.dealloc()\n 2.malloc(variable_name, 0)\n 3.free()\n 4.memalloc(variable_name, 0)",
"\n*What is the similarity between a structure, union and enumeration?\n 1.All of them let you define new values\n 2.All of them let you define new data types\n 3.All of them let you define new pointers\n 4.All of them let you define new structures",
"\n*In the statement expression1 >> expression2. if expression1 is a signed integer with its leftmost bit set to 1 then on right shifting it the result of the statement will vary from computer to computer\n 1.True\ 2.False"};
int b2[20]={4,2,4,1,1,3,1,3,2,4};
int b1[20]={1,2,3,1,3,4,4,3,2,1};


//display highest score

void disp()
{
	char name[20];
	float s;
	FILE *f;
	system("cls");
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&s);
	printf("\n\n\t\t");
	printf("\n\n\t\t%s has secured highest score %2f",name,s);
	printf("\n\n\t\t");
	fclose(f);
	getch();
}

// help page
void help()
{
	system("cls");
	printf("\n\n\tThe game is very easy to play, You will be asked some general questions");
	printf("\n\n\tknowledge Questions  and the correct answer is to be chosen among");
	printf("\n\n\tthe four options provided.Your Score will be calculated at the");
	printf("\n\n\tend.Remember the more quicker you give the answer the more");
	printf("\n\n\tscore you secure.Your score will be calculated and displayed. if you secure highest score' your score");
	printf("\n\n\twill be recorded.so best of luck..!!");
}


void writescore(float score,char plnm[20])
{
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if(score>=sc)
	{
		sc=score;
		fclose(f);
		f=fopen("score.txt","w");
		fprintf(f,"%s\n%2f",plnm,sc);
		fclose(f);
	}
}


//main function
void main()
{

int countq,countr,r,pa,nq[6],w,q;
float score;
char ch;
char playername[20];
time_t initialtime,finaltime;
system("cls");
mainhome:
system("cls");
puts("\n\t\tWELCOME TO I.Q. TEST PROGRAM\n\n");
puts("\n\t\t-----------------------------------------");
puts("\n\t\t Enter `S' to start the game ");
puts("\n\t\tEnter `V' to view high score ");
puts("\n\t\tEnter `H' for help ");
puts("\n\t\tEnter `Q' to quit");
puts("\n\t\t-----------------------------------------\n\n\t");
ch=toupper(getch());

if(ch=='V')
{
	disp();
	goto mainhome;
}

else if(ch=='Q')
	exit(1);
else if(ch=='H')
{
	help();
	getch();
	goto mainhome;
}
else if (ch=='S')


{
printf("\n\n\n\tEnter your name...");
puts("\n\t\t(only one word)\n\n\t\t");
gets(playername);

home:
system("cls");
initialtime=time(NULL);
countq=countr=0;
r=1;
start:
srand(time(NULL));
q=rand()%23+1;
nq[r]=q;
for(w=0;w<r;w++)
if(nq[w]==q)
goto start;

y:
{
while(i<10)


{
printf("You are in level 2\n");
printf("%s ",a2[i]);
printf("\n\tEnter your choice(option)\n");
countq=countq+5;
scanf("%d",&ans2);

if(ans2!=b2[i])

{
	printf("\n\n\tWrong answer\nCorrect answer is %d\n",b2[i]);
	i=i+1;
	x:
	printf("you are in level 1\n");
	printf("%s ",a1[i]);
	printf("\n\tEnter your choice(option)\n");
	countq=countq+2;
	scanf("%d",&ans1);


	if(ans1!=b1[i])
		{
		printf("\n\n\tOops!!!! Wrong answer..... \nCorrect Option is %d\n",b1[i]);
		i=i+1;
		goto x;
		}
	else
		{
		printf("\n\n\tYour answer is correct\n You are going back to level 2\n");
		countr=countr+2;
		i=i+1;


		goto y;

		}

	}
	else
		{
		printf("\n\n\tYour answer is correct\n");
		countr=countr+5;
		i=i+1;
		goto y;

		}
	}//while end
}
 r++;
 if (r<=5) goto start;
// finaltime=time(NULL);
 score=((float)countr/countq)*100;//-difftime(finaltime,initialtime)/3;
 if (score<0)
 { score=0;}
 printf("\n\n\nYour Score: %.2f",score);
 if (score==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
 else if (score>=80 && score<100) printf("\n\nVERY GOOD!!");
 else if (score>=60 &&score<80) printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
 else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");
 else printf("\n\nYOU ARE VERY POOR IN G.K.,WORK HARD");
 puts("\n\nNEXT PLAY?(Y/N)");
 if (toupper(getch())=='Y')
  goto home;
 else
  {
  writescore(score,playername);
  goto mainhome;
  }
 }
else
 {
 printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
 delay(700);
 goto mainhome;
 }
getch();
}
