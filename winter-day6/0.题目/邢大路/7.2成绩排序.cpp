#include<iostream>
#include<cstring>
using namespace std;
#define maxSize 21
struct student
{
    char name[maxSize];
    int score;
};
int main()
{
    struct student s[maxSize],temp;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>s[i].name>>s[i].score;
    //ð������  
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(s[j].score<s[j+1].score){
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
            if(s[j].score==s[j+1].score && strcmp(s[j].name,s[j+1].name)>0){
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
        cout<<s[i].name<<" "<<s[i].score<<endl;
    return 0;
}

