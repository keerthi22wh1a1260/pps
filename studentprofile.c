#include<stdio.h>
struct student
{
     char NAME[20];	
     int rollno,marks,age,st;
}s;
void main()
{  
struct student st1,st2,st3,st4;
printf("\n enter name of first student");
gets(st1.NAME);
printf("\n enter rollno,marks,age of first student");
scanf(" %d %d %d", &st1.rollno,&st1.marks,&st1.age);
printf("\n enter details of first student");
puts(st1.NAME);
printf("\n %d  %d  %d", st1.rollno,st1.marks,st1.age);
}
