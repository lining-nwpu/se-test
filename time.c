/*
This file includes some processes for time data.
Function:
1.transform a string to time.
2.transform time to string.
*/

#include <stdio.h>
#include <time.h>

time_t str2time(const char *str_time){
  struct tm stm;
  strptime(str_time, "%Y-%m-%d %H:%M:%S", &stm);
  long t = mktime(&stm);
  return t;
}

void time2str(time_t t, char *buf)
{
  strftime(buf, 30, "%Y-%m-%d %H:%M:%S", localtime(&t));
}

int se_add(int a, int b)
{
	// add by lining 2021/03/18
	return a+b;
}

float se_multiply(float a, float b)
{
	// multiplication by 2018380115 Wong
	return a*b;
}

int mult (int a, int b)
{
    return a * b; //multiplication by Altynay 2018380120
}

float se_div(int a, int b)
{
    if (b == 0)
    {
    	printf("Invalid division by 0 provides - ");
        return (float)INFINITY;
    }
    return a / (float)b; //division by Adema(2018380126)

}

int se_subtract(int a, int b){
	// subtraction by Amirbek_2018380038
	return a - b;
}

int main()
{
  char szTime[30] = {0};
  sprintf(szTime, "2020-11-15 10:39:30");
  time_t start_t = str2time(szTime);
  printf("%ld\n", start_t);

  char szTime2[30];
  time2str(start_t, szTime2);
  printf("%s\n", szTime2);

  printf("%f", se_div(5, 2));

  printf("%d", mult(10, 5));

  printf("%d", se_subtract(7, 3));
	
  return 0;
}
