#include "types.h"
#include "user.h"

int
main(void)
{
  int count = getreadcount();
  if (count < 0)
    printf(0, "Error\n");
  else
   printf(1, "Count is: %d", count);

  exit();
}
