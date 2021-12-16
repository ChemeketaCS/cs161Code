
#include <cstdio>

using namespace std;


int main()
{
    bool authorized = false;

    char name[8];

    printf("Enter your name:");
    //Read in name without any restriction on input size
    scanf("%s", name);

    //Read in name with a limit on characters that will be read
    //scanf("%7s", name);  //7 chars not including null char
    //OR
    //fgets(name, 8, stdin);   //8 chars max - including null char

    if(authorized) {
        printf("Welcome to the system\n");
    }
    else {
        printf("Not authorized\n");
    }

}
