#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector<string> word ; 
string input; 
int num; 
// cout<< "Enter number of words : "; 
cin>>num;
 
for (int i =0 ; i< num; i++) //loop to get user input 
{
// cout<< "Enter a word : "; 
cin>>input;  //receive an input from user
word.push_back(input);  // push back that input into the vector we created called word
}

for (int i = 0; i < word.size(); i++) // write a loop that will check if the words in the vector 
{
    if (word[i].length() > 10)  // if the length of that word we are checking is more than 4
    {
      cout << word[i][0]<< word[i].length() - 2 << word[i].back() <<  endl;   // we will print only the first and 
    }                                                                        // last letter and put a number in the middle that will represent the the numbers in the middle
   
    else
    {
      cout<< word[i]<<endl; 
    }

} 

return 0; 
}
