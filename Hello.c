#include <unistd.h>

int main()
{
  write(1, "Hello From C.\n", 14);

  return (0);
}
