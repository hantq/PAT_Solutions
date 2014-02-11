#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Nodes {
	int data;
	struct Nodes *next;
} Node;

Node* init()
{
	Node *node = malloc(sizeof(Node));
	node->next = NULL;
	return node;
}

void insert(Node *pos, int key)
{
	Node *node = malloc(sizeof(Node));
	node->data = key;
	node->next = NULL;
	pos->next = node;
}

void print(Node *List)
{
	if(List->next == NULL)
	{
		printf("NULL\n");
		return ;
	}
	Node *node = List->next;
	printf("%d", node->data);
	node = node->next;
	while(node != NULL)
	{
		printf(" %d", node->data);
		node = node->next;
	}
	printf("\n");
}

Node* intersection(Node *L1, Node *L2)
{
	Node* L3 = init();
	Node* pos1 = L1->next;
	Node* pos2 = L2->next;
	Node* pos3 = L3;
	while(pos1 && pos2)
	{
		if(pos1->data < pos2->data)
			pos1 = pos1->next;
		else if(pos1->data > pos2->data)
			pos2 = pos2->next;
		else
		{
			insert(pos3, pos1->data);
			pos3 = pos3->next;
			pos1 = pos1->next;
			pos2 = pos2->next;
		}
	}
	return L3;
}


int main()
{
	Node *L1 = init();
	Node *L2 = init();
	Node *pos1 = L1;
	Node *pos2 = L2;
	int num;
	scanf("%d", &num);
	while(num != -1)
	{
		insert(pos1, num);
		pos1 = pos1->next;
		scanf("%d", &num);
	}
	scanf("%d", &num);
	while(num != -1)
	{
		insert(pos2, num);
		pos2 = pos2->next;
		scanf("%d", &num);
	}
	print(intersection(L1, L2));
	return 0;
}
