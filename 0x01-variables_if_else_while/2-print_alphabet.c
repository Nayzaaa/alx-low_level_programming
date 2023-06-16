#include <stdlib.h>
#include <time.h>
#include <studio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/using namespace std;

int main() {
srand(time(0));
int n = rand();
int last_digit = n % 10;
cout << "Last digit of " << n << " is ";
if (last_digit > 5) {
cout << last_digit << " and is greater than 5" << endl;
} else if (last_digit == 0) {
cout << last_digit << " and is 0" << endl;
} else {
cout << last_digit << " and is less than 6 and not 0" << endl;
}
return 0;
}

