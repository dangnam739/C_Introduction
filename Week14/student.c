#include<stdio.h>
#include<string.h>
#define MAX 100

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

void getStudent(student *s);
void getDate(date *d);
void sort(student s[], int n);
char gradeStd(float grade);
void printStd(student s);

int main(){
	int n, i;
	student std[MAX], tmp;
	printf("Enter the number of student (>0): ");
	scanf("%d%*c", &n);

	for(i=0; i<n; i++){
		printf("Enter the information of the student %d\n", i+1);
		getStudent(&std[i]);
	}

	sort(std, n);
	
	printf("    ID    | Name               |  BirthDate  | Grade | Classment \n");
	for(int i=0; i<n; i++)
		printStd(std[i]);

	return 0;
}


char gradeStd(float grade){
	if(grade>=9 && grade<=10)
		return 'A';
	else if(grade>=8 && grade<9)
		return 'B';
	else if(grade>=6.5 && grade<8)
		return 'C';
	else
		return 'D';
}

void getDate(date *d){
	printf("\t\tEnter the day: ");
	scanf("%d%*c", &d->day);
	printf("\t\tEnter the month: ");
	scanf("%d%*c", &d->month);
	printf("\t\tEnter the year: ");
	scanf("%d%*c", &d->year);
}

void getStudent(student *s){
	printf("\tID: ");
	gets(s->id);
	
	printf("\tName: ");
	gets(s->name);
	
	printf("\tBirthDate:\n");
	getDate(&s->birthDate);
	
	printf("\tGrade: ");
	scanf("%f%*c", &s->grade);

	s->classment = gradeStd(s->grade);
}

void printStd(student s){
	
	printf(" %-8s |%-20s|  %02d/%02d/%4d | %2.2f  |   %-c\n", s.id, s.name, s.birthDate.day,s.birthDate.month, s.birthDate.year, s.grade, s.classment);
}

void swap(student *s1, student *s2){
	student tmp;
	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}


int datecmp(date date_1, date date_2){
	if(date_1.year > date_2.year) return 1;
	else
		if (date_1.year < date_2.year) return -1;
		else
			if(date_1.month > date_2.month) return 1;
	else
		if (date_1.month < date_2.month) return -1;
		else
			if(date_1.day > date_2.day) return 1;
	else
		if (date_1.day < date_2.day) return -1;
		else
			return 0;
 		
}

void sort(student s[], int n){
	int i, j;
	//Sap xep truc tiep InterchangeSort
	for(i=0; i<n-1; i++)
		for(j=i+1; j<n; j++){
			//Sap xep truc tiep InterchangeSort theo Grade
			if(s[i].grade < s[j].grade)
				swap(&s[i], &s[j]);
			else if(s[i].grade = s[j].grade)
				//Sap xep theo birthDate
				if(datecmp(s[i].birthDate, s[j].birthDate) > 0)
					swap(&s[i], &s[j]);
		}
}

