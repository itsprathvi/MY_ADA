#include<iostream>
using namespace std;
#define MAX 500

int 
t[MAX];

void shift(string pattern){
    int m = pattern.length();
    for(int i=0;i<MAX;i++)
        t[i]=m;
    for(int j=0;j<m-2;j++)
        t[pattern[j]]= m-1-j;
}

int horspool(string text,string pattern){
    int i,j,m,n,k;
    n = text.length();
    m = pattern.length();
    i=m-1;
    while(i<n){
        k=0;
        while((k<m) && (pattern[m-1-k]==text[i-k]))
            k=k+1;
        if(k == m)
            return (i-m+1);
        else
            i= i+t[text[i]];
    }
    return -1;
}

int main(){
    string text,pattern;
    cout<<"Enter the String : ";
    getline(cin,text);
    cout<<"Enter the Pattern : ";
    getline(cin,pattern);

    shift(pattern);

    int pos = horspool(text,pattern);

    cout<<"String Matched at Position : "<<pos+1<<endl;

}