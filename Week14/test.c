#include<stdio.h>
#include<string.h>

typedef struct{
	int day;
	int month;
	int year;
} date;

typedef struct{
	char id[8];
	char name[31];
	date birthDate;
	float grade;
	char classment;
} student;

void getDate(date *d){
	printf("\t\tEnter the day: ");
	scanf("%d%*c", &d->day);
	printf("\t\tEnter the month: ");
	scanf("%d%*c", &d->month);
	printf("\t\tEnter the year: ");
	scanf("%d%*c", &d->year);
}

void getStudent(student *s){
	while(getchar() != '\0')
	printf("\tID: ");
	gets(s->id);
		
	printf("\tName: ");
	gets(s->name);
	
	printf("\tBirthDate:\n");
	getDate(&s->birthDate);
	
	printf("\tGrade: ");
	scanf("%f%*c", &s->grade);

//	s->classment = gradeStd(s->grade);
}


int main(){
	student s;
	getStudent(&s);
	printf("%s %s  %f\n", s.id, s.name, s.grade);
	return 0;
}
