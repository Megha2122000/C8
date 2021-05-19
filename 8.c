#include<stdio.h>
#include<conio.h>
typedef struct
{
	int id;
	char name[30];
	int age;
	char dept[100];
	int salary;
}Employee;

int main()
{
	int i , n=2;
	Employee employees[n];
	//Taking each employee detail as input
	printf("Enter %d Employee Details \n\n" , n);
	for(i=0; i<n ; i++)
	{
		printf("Employee %d" , i+1); //Name
		printf("Id :");
		scanf("%d", &employees[i].id);
		printf("Name:");
		scanf("%s", &employees[i].name);
		printf("Age :");
		scanf("%d", &employees[i].age);
		printf("Department :");
		scanf("%s", &employees[i].dept);
		printf("Salary :");
		scanf("%d", &employees[i].salary);
		printf("\n\n");
	}
	
	//Displaying Employee Details
	printf("-----All Employees Details-------\n");
		for(i=0; i<n ; i++)
	{
		printf("Employee %d" ,i+1); //Name
		printf("\n\n\tId  : %d" , employees[i].id);
	//	scanf("%d", &employees[i].id);
		printf("\n\n\tName: %s" , employees[i].name);
		//scanf("%s", &employees[i].name);
		printf("\n\n\tAge : %d" , employees[i].age);
	//	scanf("%d", &employees[i].age);
		printf("\n\n\tDepartment : %s" , employees[i].dept);
	//	scanf("%s", &employees[i].dept);
		printf("\n\n\tSalary : %d" , employees[i].salary);
	//	scanf("%d", &employees[i].salary);
		printf("\n\n");
	}
	return 0;
}
