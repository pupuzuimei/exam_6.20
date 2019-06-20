//
//  main.cpp
//  exam_6.20
//
//  Created by s20181106278 on 2019/6/20.
//  Copyright © 2019 s20181106278. All rights reserved.
//

#include <iostream>
#include<fstream>
using namespace std;

int main() {
    int a,b;
    ofstream inf("/Users/s20181106278/Desktop/inf.txt");
    ifstream onf("/Users/s20181106278/Desktop/onf.txt");
    if(onf.is_open())
    {
        cout<<"file OK"<<endl;
        onf>>a>>b;
        cout<<a<<"      "<<b<<endl;
        onf.close();
    }
    if(inf.is_open())
    {
        inf <<"c="<<a+b<<endl;
        cout<< "c="<<a+b<<endl;
        inf.close();
        
    }
    return 0;
}
