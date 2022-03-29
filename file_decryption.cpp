//do it in Linux i think
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstring>

using namespace std;
//program to decrypt a file -use decryption logic
int main()
{
    //declare array to hold filename
    char fileName[30],ch;
    //create objects of fstream type
    fstream fps, fpt;
    cout<<"Enter the name of file: ";
    scanf("%s",fileName);
    //open the file in read mode
    fps.open(fileName, fstream::out);
    if(!fps)
    {
        cout<<"\nError occurred, opening the source file!";
        return 0;
    }
    //open a temporary file to write into it
    fpt.open("tmp.txt", fstream::in);
    //check if the file is not opened , - restriction in directory
    if(!fpt)
    {
        //alert message
        cout<<"\nError occured, opening/creating the tmp file!";
        return 0;
    }
    //read each character from fps object and write it to fpt object by adding encryption logic
    while(fpt>>noskipws>>ch)
    {
        ch = ch - 100;
        fps<<ch;
    }
    //close stream objects
    fps.close();
    fpt.close();

    cout<<"\nFile '"<<fileName<<" ' Decrypted successfully!";
    cout<<endl;
    return 0;
}
