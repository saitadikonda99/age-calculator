#include<stdio.h>

int main() {
int birth_year,birth_month,birth_date,present_year,present_month,present_date;
printf("enter your birth year:");
scanf("%d",&birth_year);

printf("enter your birth month[1-12]:");
scanf("%d",&birth_month);

printf("enter your birth date[1-30/31]:");
scanf("%d",&birth_date);

printf("enter the present year:");
scanf("%d",&present_year);

printf("enter the present month[1-12]:");
scanf("%d",&present_month);

printf("enter the present date[1-30/31]:");
scanf("%d",&present_date);
if(birth_month>=12 || birth_date>=32 || present_month>=12 || present_date>=32 ){
printf("----------------------------------------------------------------------------------------------------------------\n");

printf("enter the valid input\n");
}

else if(birth_month>present_month)
{
  int age_years=(present_year-birth_year)-1;
  printf("age is %d years\n",age_years);
 }
 else if(birth_month<present_month)
       {
           int age_years=present_year-birth_year;
   printf("age is %d years\n",age_years);
 }
 else if(birth_month==present_month) {
      if(birth_date<=present_date) {
    int age_years=(present_year-birth_year);
     printf("age is %d years\n",age_years);
}
else {
   int age_years=(present_year-birth_year)-1;
printf("age is %d years\n",age_years);
}
}
else {
printf("enter the valid day/month/year\n");
}

return 0;
}
