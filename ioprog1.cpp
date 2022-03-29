    // put and get functions
//program to accept a sentence as string and to count no.of
//characters in it.
#include<iostream>



int main()
{
    //define variable
    int count=0;
    //declare variable
    char ch;

    //use predefined objects cin and cout
    std::cout<<"Input text: \n";
    std::cin.get(ch);
    //loop through till ch not equal to new line character
    while(ch!='\n')
    {
        std::cout.put(ch);
        count++;
        std::cin.get(ch);
    }
    std::cout<<"\nNumber of characters : "<<count;
    return 0;
}
