// read two separate integers from the user, add them together and output the answer

/* Requirements */
// must be a single file
// The program should use 3 functions
// func readNumber to get and return a single integer from the user
// writeAnswer to output the answer, takes a single param, and have no return value
// main to glue the above functions together

#include "io.h"

int main()
{
  int x{ readNumber() };
  int y{ readNumber() };

  writeAnswer(x + y);

  return 0;
}