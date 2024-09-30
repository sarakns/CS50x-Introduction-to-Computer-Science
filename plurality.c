#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

int candidate_count;

candidate_count = argc - 1;
if (candidate_count > MAX)
{
    printf("Maximum number of candidates is %i\n", MAX);
    return 2;
}
for (int i = 0; i < candidate_count; i++)
{
    candidates[i].name = argv[i + 1];
    candidates[i].votes = 0;
}
int voter_count = get_int("Number of voters: ");

bool vote(string name)
{
    return false;
}
 void print_winner(void)
 {
    return;

 }
