#include<stdio.h>
void main()
{    int days,years,months,weeks;
     days=1329;
     printf("convert days to years,weeks,months");
     years=days/365;
     weeks=(days %365)/7;
     days=days-((years*365)+(weeks*7));
     months=(days %360)/60;
     printf("years: %d\n",years);
     printf("weeks: %d\n",weeks);
     printf("days: %d\n",days);
}
