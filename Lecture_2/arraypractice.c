#include <stdio.h>
#include <cs50.h>

const int COUNT = 5;
int getScores(int COUNT, int scores[]);
void chart(int COUNT, int scores[]);

int main(void)
{
	int scores[COUNT];
	getScores(COUNT, scores);
	chart(COUNT, scores);

}

int getScores(int COUNT, int scores[])
{
	for (int i = 0; i < COUNT; i++)
	{
		scores[i] = get_int("Score %i: ", i + 1);
	}
	return scores[COUNT];
}

void chart(int COUNT, int scores[])
{
	for (int i = 0; i < COUNT; i++)
	{
		for (int j = 0; j < scores[i]; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

