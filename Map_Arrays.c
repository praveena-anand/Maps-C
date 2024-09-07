// PRAVEENA ANAND [CH.SC.U4CSE23044]

#include <stdio.h>
#define MAX 25

int keys[MAX];
int values[MAX];
int size = 0;

void insert()
{
	if (size == MAX)
	{
		printf("Map is Full!\n");
		return;	
	}	
	
	int key, value, i;
	
	printf("Enter the Key : ");
	scanf("%d", &key);
	
	printf("Enter the Value : ");
	scanf("%d", &value);
	
	for (i = 0; i < size; i++)
	{
		if (keys[i] == key)
		{
			values[i] = value;
			return;
		}
	}
	
	keys[size] = key;
	values[size] = value;
	size++;	
}

void get()
{
	if (size == 0)
	{
		printf("No Key-Value Pairs Present!\n");
		return;
	}
	
	int key, i;
	
	printf("Enter the Key : ");
	scanf("%d", &key);
	
	for (i = 0; i < size; i++)
	{
		if (keys[i] == key)
		{
			printf("%d\n", values[i]);
			return;
		}	
	}
	
	printf("No Key Found!\n");
}

void del()
{
	if (size == 0)
	{
		printf("No Key-Value Pairs Present!\n");
		return;
	}
	
	int key, i, j;
	
	printf("Enter the Key : ");
	scanf("%d", &key);
	
	for (i = 0; i < size; i++)
	{
		if (keys[i] == key)
		{
			for (j = i; j < size - 1; j++)
			{
				keys[j] = keys[j + 1];
				values[j] = values[j + 1];
			}
			size--;
			return;
		}
	}
	
	printf("No Key Found!\n");
}

void display()
{
	if (size == 0)
	{
		printf("No Key-Value Pairs Present!\n");
		return;
	}
	
	int i;
	
	printf("The Key-Value Pairs are,\n");
	for (i = 0; i < size; i++)
	{
		printf("%d -> %d\n", keys[i], values[i]);
	}
}

int main()
{
	do
	{
		int ch;
		printf("\nMAIN MENU -\n1. Insert\n2. Search\n3. Delete\n4. Display\n5. Exit\n");
		printf("Enter your choice : ");
		scanf("%d", &ch);
		
		switch (ch)
		{
			case 1:
				insert();
				break;
				
			case 2:
				get();
				break;
				
			case 3:
				del();
				break;
				
			case 4:
				display();
				break;
				
			case 5:
				printf("Thank you!\n");
				return 0;
				
			default:
				printf("Invalid Input!\n");
		}
	}
	while (1);
}
