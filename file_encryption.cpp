//do it in Linux i think
#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;
//program to encrypt a file - its contents
int main()
{
    //declare array, variable
    char fileName[30],ch;
    //create objects of fstream type
    fstream fps, fpt;
    cout<<"Enter the name of file: ";
    scanf("%s",fileName);
    //open the file in read mode
    fps.open(fileName, fstream::in);
    if(!fps)
    {
        cout<<"\nError occurred, opening the source file (to read)!";
        return 0;
    }
    //open a temporary file to write into it
    fpt.open("tmp.txt", fstream::out);
    //check if the file is not opened , - restriction in directory
    if(!fpt)
    {
        //alert message
        cout<<"\nError occured, opening/creating the tmp file!";
        return 0;
    }
    //read each character from fps object and write it to fpt object by adding encryption logic
    while(fps>>noskipws>>ch)
    {
        ch = ch + 100;
        fpt<<ch;
    }
    //close stream objects
    fps.close();
    fpt.close();
    fps.open(fileName, fstream::out);
    if(!fpt)
    {
        cout<<"\nError occured, opening the source file (to write)!";
        return 0;
    }
    fpt.open("tmp.txt", fstream::in);
    if(!fpt)
    {
        cout<<"\nError occured, opening the tmp file!";
        return 0;
    }
    while(fpt>>noskipws>>ch)
        fps<<ch;
    //close file stream objects
    fps.close();
    fpt.close();

    cout<<"\nFile '"<<fileName<<" ' Encrypted successfully!";
    cout<<endl;
    return 0;
}
