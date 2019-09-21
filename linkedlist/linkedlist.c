#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct test_struct
{
	int val;
	struct test_struct *next;
};

struct test_struct *head = NULL;
struct test_struct *curr = NULL;


void print_list(void)
{
	struct test_struct *ptr = head;

	printf("\n---Printing list Start---\n");
	while(ptr != NULL)
	{
		printf("\n  [%d] \n", ptr->val);
		ptr = ptr->next;
	}

	printf("\n---Printing list End---\n");
}

int main(void)
{
	int i = 0; int ret = 0;
	struct test_struct *ptr = NULL;

	print_list();

	return 0;
}
