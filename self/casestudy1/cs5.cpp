#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char* argv[])
{
        if(argc != 2)
        {
                cout<<"\nPlease Enter one filename";
                return 0;
        }
        else
        {
                int w_count=1,s_count=0,sen[120],i,j;
                char ch;

                ifstream file;
                file.open(argv[1],ios::in);

                if(!file)
                {
                        printf("File dosen't exist");
                        return 0;
                }

                else
                {
                        while(!file.eof())
                        {
                                file.get(ch);
                                if(ch == ' ')
                                {
                                        ++w_count;
                                }
                                else if(ch == '.')
                                {
                                        sen[s_count] = w_count;
                                        ++s_count;
                                        w_count = 0;
                                }
                                if(ch == '\n')
                                {
                                        w_count = 1;
                                }
                        }
                }
                cout<<"\n\tHISTOGRAM";
                cout<<"\n----------------------------";
                cout<<"\n\nSentence\tWords";
                for(i=0;i<s_count;i++)
                {
                        cout<<"\n"<<i+1<<"\t";
                        for(j=0;j<sen[i];j++)
                        {
                                cout<<"* ";
                        }
                }
        }
        return 0;
}
