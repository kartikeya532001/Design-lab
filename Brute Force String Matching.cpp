#include <iostream> 
#include<string.h>>
using namespace std; 
  
void search(char* pat, char* txt) 
{ 
    int M = strlen(pat); // finding the length of pattern.
    int N = strlen(txt); // finding the length of text.
  
    
    for (int i = 0; i <= N - M; i++) { 
        int j; 
  
      
        for (j = 0; j < M; j++) 
            if (txt[i + j] != pat[j]) // checking weather text and matches or not.
			    break; 
  
        if (j == M) 
            cout << "Pattern found at index "
                 << i+1 << endl; // printing the positon where text and pattern are same.
    } 
} 
   
int main() // main fuction.
{ 
    char txt[100]; 
    char pat[100]; 
    for(int i=0;i<3;i++) // running the loop for doing the comparison multiple times.
    {
	cout<<"Enter the text:";
    cin>>txt; // taking the input of txt.
	cout<<"Enter the pattern:";
    cin>>pat; // taking the input of pattern.
	search(pat, txt); // calling the function to perform the search.
}
    return 0; 
} 
  

