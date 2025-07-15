#include <iostream>

int main()
{
    int x { 32767 };        // x may be 16-bits or 32-bits
    x = x + 1;              // 32768 overflows if int is 16-bits, okay if int is 32-bits
    std::cout << x << '\n'; // what will this print?

	// unsigned int u{ 2 };
	// signed int s{ 3 };

	// std::cout << u - s << '\n'; // 2 - 3 = 4294967295
    // unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
    // std::cout << "x was: " << x << '\n';

    // x = 65536; // 65536 is out of our range, so we get modulo wrap-around
    // std::cout << "x is now: " << x << '\n';

    // x = 65537; // 65537 is out of our range, so we get modulo wrap-around
    // std::cout << "x is now: " << x << '\n';


    // x = -1; // -1 is out of our range, so we get modulo wrap-around
    // std::cout << "x is now: " << x << '\n';

    // x = -2; // -2 is out of our range, so we get modulo wrap-around
    // std::cout << "x is now: " << x << '\n';

    return 0;
}