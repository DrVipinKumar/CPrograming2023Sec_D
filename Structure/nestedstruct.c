#include <stdio.h>
#include <string.h>
typedef union Card
{
    char PAN[12];
    char Aadhar[15];
} Card;
typedef struct Address
{
    int house_no;
    char streat_name[20];
    char address_location[40];
} Address;
typedef struct Employee
{
    char name[20];
    int eid;
    Address emp_address;
    Card card;
} Emp;
int main()
{
    Emp e1;
    strcpy(e1.name, "emp1");
    e1.eid = 1;
    e1.emp_address.house_no = 20;
    strcpy(e1.card.PAN, "ieirir334emp1");
    printf("Emp Name=%s\n", e1.name);
    printf("Emp Name=%d\n", e1.eid);
    printf("Emp Name=%d\n", e1.emp_address.house_no);
    printf("Emp Name=%s\n", e1.card.PAN);
    return 0;
}