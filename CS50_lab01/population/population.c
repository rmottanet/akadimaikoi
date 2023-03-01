#include <stdio.h>

int main(void)
{
  int startSize, endSize, years, g;

  // TODO: Prompt for start size

  do
  {
    printf("Start size: ");
    scanf ("%i", &startSize);
  }
  while (startSize < 9);

  // TODO: Prompt for end size

  do
  {
    printf("End size: ");
    scanf ("%i", &endSize);
  }
  while (endSize < startSize);

  // TODO: Calculate number of years until we reach threshold
  
  g = startSize;

  do
  {
	g = g + (g / 3) - (g / 4);
	years = years + 1;
  }
  while (g < endSize);
  
  // TODO: Print number of years
  
  printf ("Years: %i \n", years);
  
  return 0;
    
}
