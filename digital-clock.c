#include <stdio.h>
#include <windows.h>

int main(void)
{
  int h, m, s;

  void setTimeUser(void)
  {
    printf("Set time : \n");
    scanf("%d%d%d", &h, &m, &s);

    if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59)
    {
      printf("Please enter a valid time.\n");
      setTimeUser();
    }
  }

  int clock(void)
  {
    while (1)
    {
      s++;

      if (s > 59)
      {
        s = 0;
        m++;

        if (m > 59)
        {
          m = 0;
          h++;

          if (h > 23)
          {
            h = 0;
          }
        }
      }

      printf("%02d : %02d : %02d", h, m, s);
      Sleep(1000);
      system("cls");
    }
  }

  setTimeUser();
  clock();
}