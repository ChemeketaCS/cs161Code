
#include <cstdio>

using namespace std;

int main()
{
    //Limited space to hold these c-strings
    char name[10];

    printf("Enter your name:");

    //Read into name up to 10 chars including terminating null
    //  from stdin (the console)
    fgets(name, 10, stdin);


    printf("Hello %s\n", name);

    return 0;
}
