#include<stdio.h>
#include<string.h>
#define Q 5

typedef struct{
	char question[100];
	char ans1[100];
	char ans2[100];
	char ans3[100];
	int correctAns;
} choiceExam;

typedef struct{
	char name[31];
	int a; // so cau tra loi dung
	int ans[Q]; //dap an cua cac cau hoi
}Player;
	
void getExam(choiceExam *quest);
int correctAns(choiceExam quest[], Player player);


int main()
{
	int i, j;
	Player player[Q];
	choiceExam quest[Q];
	for(i=0; i<Q; i++){
		printf("Question %d\n", i+1);
		getExam(&quest[i]);
	}

	printf("=====================================================\n");
	for(i=0; i<Q; i++){
		printf("The player %d\n", i+1);
		printf("Your name is: ");
		gets(player[i].name);
		for(j=0; j<Q; j++){
		printf("Question %d:  ", j+1);
		printf("%s\n", quest[j].question );
		printf("\tAnswer 1: %s\n",quest[j].ans1);
		printf("\tAnswer 2: %s\n", quest[j].ans2);
		printf("\tAnswer 3: %s\n", quest[j].ans3);
		printf("\nYour answer is(1 or 2 or 3): ");
		scanf("%d%*c", &player[i].ans[j]);
		}
		player[i].a = correctAns(quest, player[i]);
		printf("=====================================================\n");
	}

	//hien thi bang ket qua cua moi nguoi choi

	printf("STT |%-20s| Result\n", "Player");
	for(i=0; i<Q; i++)
	{
		printf("%3d |%-20s| %d\n", i+1, player[i].name, player[i].a);
	}
	
	return 0;
}

void getExam(choiceExam *quest)
{
	printf("\tEnter question: ");
	gets(quest->question);

	printf("\tEnter Answer 1: ");
	gets(quest->ans1);

	printf("\tEnter Answer 2: ");
	gets(quest->ans2);

	printf("\tEnter Answer 3: ");
	gets(quest->ans3);

	printf("\tEnter the correct answer: ");
	scanf("%d%*c", &quest->correctAns);
}

int correctAns(choiceExam quest[], Player player)
{
	int i, count=0;
	for(i=0; i<Q; i++){
		if(player.ans[i] == quest[i].correctAns)
			count++;
	}
	return count;
}


