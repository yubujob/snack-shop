#include <stdio.h>
#include <stdlib.h>
void menu();
int main()
{

    printf("tWelcome to zetech c snack shop!\n");
    return 0;
}

void menu() {
int item;
printf("\tToday's menu\n");
printf("1. hamburger - ksh.50\n");
printf("2. samosa - ksh.50\n");
printf("3. coffee - ksh.40\n");
printf("Enter item No:");
scanf("%d",&item);
if(item > 0 && item <= 3) {
    printf("item added to cart\n");
}
else {
    printf("invalid item\n");
    menu();
}
return item;
}
