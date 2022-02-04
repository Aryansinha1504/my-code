#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{

  // You have decided to watch the best moments of some movie. There are two buttons on your player:

  // Watch the current minute of the movie. By pressing this button, you watch the current minute of the movie and the player automatically proceeds to the next minute of the movie.
  // Skip exactly x minutes of the movie (x is some fixed positive integer). If the player is now at the t-th minute of the movie, then as a result of pressing this button, it proceeds to the minute (t + x).
  // Initially the movie is turned on in the player on the first minute, and you want to watch exactly n best moments of the movie, the i-th best moment starts at the li-th minute and ends at the ri-th minute (more formally, the i-th best moment consists of minutes: li, li + 1, ..., ri).

  // Determine, what is the minimum number of minutes of the movie you have to watch if you want to watch all the best moments?

  // Input
  // The first line contains two space-separated integers n, x (1 ≤ n ≤ 50, 1 ≤ x ≤ 105) — the number of the best moments of the movie and the value of x for the second button.

  // The following n lines contain the descriptions of the best moments of the movie, the i-th line of the description contains two integers separated by a space li, ri (1 ≤ li ≤ ri ≤ 105).

  // It is guaranteed that for all integers i from 2 to n the following condition holds: ri - 1 < li.

  // Output
  // Output a single number — the answer to the problem.

  // Examples
  // inputCopy
  // 2 3
  // 5 6
  // 10 12
  // outputCopy
  // 6
  int n, x;
  int min;
  int minutecounter = 2;

  printf("enter the value of number of best monents and skiptime\n");
  scanf("%d %d", &n, &x);
  int l[n]; // start pf best moments
  int r[n]; // end of best moments
  int a;

  printf("enter the start and end of best moments\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &l[i], &r[i]);
  }
  int watched = 1;
  for (int i = 0; i < n; i++)
  {
    if (minutecounter < l[i])
    {
      a = l[i] - minutecounter; //diff between present moment and next best moment
      if (a >= x)
        minutecounter += (a / x) * x;
      else
      {
        minutecounter += a;        u have to watch diff is less than skip time
        watched += a;
      }
    }
    if (minutecounter < l[i])                    //will execute if diff between present and next moment is not a multiple of x then remaining time is to be watched
    {
      minutecounter += l[i] - minutecounter;
      watched += minutecounter - l[i];
    }
    if (minutecounter == l[i])
    {
      minutecounter += (r[i] - l[i] + 1);
      watched += (r[i] - l[i] + 1);
    }
  }
  printf("total minutes watched is %d\n", watched);
  return 0;
}