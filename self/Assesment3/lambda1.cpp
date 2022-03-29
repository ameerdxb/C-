//Printing array of 5 student ranks with lambda

#include<iostream>
#include<algorithm>
#include<array>
#include<cstdint>


int main()
{
    //declaring array of 5 units of 32 bit each
    using studentRank=std::array<uint32_t,5>;
    //define studentRank type array
    studentRank ranks{ 1, 2, 3, 4, 5 };

    std::cout<<"Five student ranks: "<<std::endl;

    //for each element of array
    std::for_each(ranks.cbegin(), ranks.cend(), [](auto&& numb)
    {
        std::cout<<numb<<std::endl;
    });

    return 0;

}
