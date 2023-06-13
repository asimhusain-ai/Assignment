//Program to input and ouput student's details
#include <stdio.h>
struct student {
char firstName[50];
int roll;
float marks;
} s;
int main(){
printf("Enter Information of Students\n");
printf("Enter The Rollno:- ");
scanf("%d", &s.roll);
printf("Enter Name:- ");
scanf("%s", &s.firstName);
printf("Enter Marks:- ");
scanf("%f", &s.marks);
printf("\nDisplaying Information\n");
printf("First Name:- %s\n", s.firstName);
printf("Roll Number:- %d\n", s.roll);
printf("Marks: %2.f", s.marks);
return 0;
}

//For Multiple Students
/*#include <stdio.h>
struct student {
char firstName[50];
int roll;
float marks;
} s[5];
int main(){
printf("Enter Information of Students\n");
for(int i=0; i<5; i++){
printf("Enter The Rollno:- ");
scanf("%d", &s[i].roll);
printf("Enter Name:- ");
scanf("%s", &s[i].firstName);
printf("Enter Marks:- ");
scanf("%f", &s[i].marks);
}
printf("\nDisplaying Information");
for(int i=0; i<5; i++){
printf("\nRoll Number:- %d\n", s[i].roll);
printf("First Name:- %s", s[i].firstName);
printf("Marks: %.f", s[i].marks);
}
return 0;
}
*/