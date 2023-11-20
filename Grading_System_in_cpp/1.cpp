#include<iostream>
using namespace std;
int main(){

    string name;
    int programming, math, science, english, history;
    int sum = 0;
    int average;

    cout<<"Enter your name: ";
    getline(cin, name);

    cout<<"Enter Grade in C++ Programming: ";
    cin>>programming;
    cout<<"Enter Grade in Math: ";
    cin>>math;
    cout<<"Enter Grade in Science: ";
    cin>>science;
    cout<<"Enter Grade in English: ";
    cin>>english;
    cout<<"Enter Grade in History: ";
    cin>>history;

    sum = programming + math + science + english + history;
    average = sum/5;

    cout<<"Your Average is :" <<average<<endl;

    if(average >= 95 && average <= 100){
        cout<<"You are Excellent"<<endl;
    }else if(average >= 90 && average <= 94){
        cout<<"You are Very Satisfactory"<<endl;
    }else if(average >= 85 && average <= 89){
        cout<<"You are Satisfactory"<<endl;
    }else if(average >= 80 && average <= 84){
        cout<<"You are Very Good "<<endl;
    }else if(average >= 75 && average <= 79){
        cout<<"You are Good"<<endl;
    }else{
        cout<<"You are a Poor"<<endl;
    }
}