#include<iostream>
#include<fstream>
#include<sstream>
#include<cstring>
#include<cstdbool>
#include<bits/stdc++.h>

using namespace std;


const int MAXWORD = 30, MAXSENTENCE = 120;

int word_lengths[MAXWORD];
int sentence_lengths[MAXSENTENCE];

void init_arrays()
{
 fill_n(word_lengths,MAXWORD,0);
 fill_n(sentence_lengths,MAXSENTENCE,0);
}

void histo_1 (int values[], int sz)
{
 for(int i = 0; i < sz; i++) {
   for(int k = 0; k < values[i]; k++)
    cout << "*";
    cout << endl;
 }
}

/*void scale_data(int in_data[], int out_data[], int sz, int imax)
{
  int maxval = *max_element(in_data,in_data+sz);
  for(int i = 0; i < sz; i++)
     out_data[i] = (imax*in_data[i])/maxval;
}*/
/*void histo_2 (int values[], int sz)
{
  int level = max_arr(values,sz);   // std method to do this?
  for(; level > 0; level--) {      // leave out 1st part of for-loop
    for(int i = 0; i < sz; i++)
      if (values[i] >= level) cout << "**** ";
                         else cout << "     ";
    cout << endl;
 }
}*/


bool collect_file_stats(string file, int word_lengths[], int sentence_lengths[])
 {
  ifstream in(file.c_str());
  if (! in) return false; // sorry, can't open file!
  int wcount = 0;  // will count no. of words in each sentence
  string word;
  while (in >> word)
    {
        int len = word.length();
        char ech = word[len-1];   // last character of word
        if (ech == '.' || ech == ',' || ech == ';')
        {
           word = word.substr(0,len-1); // chop off punctuation
           -len;
        }
        ++word_lengths[len];
        ++wcount;
        if (ech == '.') {
          ++sentence_lengths[wcount];
          wcount = 0;
    }
  }
 }

int main()
{
    fstream file;
    string lines;
    int i, wordlen=0,wordcount=0,array[100],wordlength[100];
    file.open("fruits.txt", ios::in);
    if (!file)
    {
        cout<<"Error!";
    }
    else
    {
        getline(file,lines,'\0');
        cout<<lines<<endl;
        collect_file_stats(lines,word_lengths,sentence_lengths);
        init_arrays();
       // scale_data()
        histo_1(sentence_lengths,15);
      //  histo_2(sentence_lengths,15);
    }

   // histo_1(sentence_lengths,15);

    file.close();
    return 0;

}
