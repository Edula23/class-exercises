#include <iostream>

using namespace std;

int main()
{
    struct student{
        string id, name;
        float finall[5], gpa=0;
        string grade[5];
    }s1;
    cout<<"Enter Id: ";
    cin>>s1.id;
    cout<<"Enter name: ";
    cin>>s1.name;
    cout<<"Enter final result: ";
    for(int i=0; i<5; i++){
        cin>>s1.finall[i];
    }
    for(int i=0; i<5; i++){
        if(s1.finall[i]>=90){
            s1.grade[i]="A+";
            s1.gpa += 3*4;
        }
        else if(s1.finall[i]>=85){
            s1.grade[i]="A";
            s1.gpa += 3*4;
        }
        else if(s1.finall[i]>=80){
            s1.grade[i]="A-";
            s1.gpa += 3*3.75;
        }
        else if(s1.finall[i]>=75){
            s1.grade[i]="B+";
            s1.gpa += 3*3.5;
        }
        else if(s1.finall[i]>=70){
            s1.grade[i]="B";
            s1.gpa += 3*3;
        }
        else if(s1.finall[i]>=65){
            s1.grade[i]="B-";
            s1.gpa += 3*2.75;
        }
    }
    cout<<"ID\t"<<"Name\t"<<"Grade1\t"<<"Grade2\t"<<"Grade3\t"<<"Grade4\t"<<"Grade5\t"<<"GPA"<<endl;
    cout<<s1.id<<'\t'<<s1.name<<'\t';
    for(int i=0; i<5; i++){
        cout<<s1.grade[i]<<'\t';
    }
    cout<<s1.gpa/15;

    return 0;
}
