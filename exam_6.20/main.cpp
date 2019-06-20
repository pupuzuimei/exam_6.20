//
//  main.cpp
//  exam_6.20
//
//  Created by s20181106278 on 2019/6/20.
//  Copyright © 2019 s20181106278. All rights reserved.
//

#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    char name[20];
    int num=0;
    char sex;
    char sch[20];
    ofstream inf("/Users/s20181106278/Desktop/inf.txt");
    ifstream onf("/Users/s20181106278/Desktop/onf.txt");
    ifstream enf("/Users/s20181106278/Desktop/enf.txt");
    if(onf.is_open())
    {
        cout<<"file OK"<<endl;
        onf>>num>>name>>sex>>sch;
        cout<<num<<"      "<<name<<endl;
        onf.close();
    }
    if(enf.is_open())
    {
        int num1=0;
        enf>>num1;
        char name1[20];
        for(int i=0;i<7;i++)
        {
            enf>>name1[i];
        }
    }
    if(inf.is_open())
    {
        inf <<"c="<<num<<endl;
        cout<< "c="<<num<<endl;
        inf.close();
        
    }
    return 0;
}

