#include <iostream>
#include <string>

using namespace std;
int main()
{
    string greeting= "How are you Coder?";
    string userName;

    cout<<"What is your name?";
   // getline(cin,userName);

    string personalizedGreeting= greeting + userName + "!";
    cout<<personalizedGreeting<< "Welcome to my Program."<<endl;

    return 0;
}
