//Printing array of 5 student ranks with closure

#include<iostream>
#include<algorithm>
#include<array>
#include<cstdint>
#include<typeinfo>


int main()
{
    //declaring array of 5 units of 32 bit each
    using studentRank=std::array<uint32_t, 5>;
    //define studentRank type array
    studentRank ranks{ 1 ,2 ,3 ,4 ,5 };

    std::cout<<"Five student ranks: "<<std::endl;

    auto myClosure = [](auto&& numb)
    {
        std::cout<<numb<<std::endl;
    };
    //for each element of array
    std::for_each(ranks.begin(),ranks.end(),myClosure);

    return 0;
}


