//
//  main.cpp
//  revission
// (QUESTION)Write a program that will read a two-dimensional array of 5
//answers (T or F) given in each of 3 students and score each
//student by assigning 5 marks to each correct answer where the
//correct answers are: T T F F T
//  Created by MARTIN on 06/11/2021.
//

#include<iostream>
using namespace std;
int main()
{
    int row=3;
    int column=5;
    char answers[]={'T','T','F','F','T'};
    int grade[row];
    char test[row][column];
    
    for(int i=0;i<row;i++)
    {
        cout<<"enter student"<<i+1<<"grade here:"<<endl;
        {
            for(int j=0; j<column;j++)
            {
                cin>>test[i][j];
            }
        }
    }
    
    for(int i=0; i<row; i++)
    {
        int total=0;
        {
            for(int j=0; j<column; j++)
            {
                if(test[i][j]==answers[j])
                {
                    total=total+5;
                }
            }
        }
        
        grade[i]=total;
    }
    
    for(int i=0; i<column;i++)
    {
        cout<<"grade for student "<<i+1<<"is"<<grade[i]<<endl;
    }
     
}
