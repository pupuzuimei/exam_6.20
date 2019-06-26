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
	score play(10);
    double read[10];
    double a[10];
    double pp[10];
    double qq[10];
    double t;
	int i,j,number;
	char Full Name,sex,school;
	double achievement[10];
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
        for(i=0;i<7;i++)
		{
			for(j=0;j<5;j++)
			{
				onf>>number>>" ">>Full Name>>" ">>sex>>" ">>school;
			}
		} 
        onf.close();
    }
    if(enf.is_open())
    {
        int line;
		for(line=2;line<6;line++)
		{
			in.seekg(0,ios::beg);
			for(int i=0;i<line<i++)
			{
				in.getline(store,sizeof(store));
				std::istringstream iss(store);
			}
			i=0;
			while (iss >> read[i])
            {
                achievement[i] = read[i];
                i++;
            }
            pp[line]=play.sum(a); 
            qq[line]=play.aver(a); 
		}
        for (int m = 0; m<5; m++)
        {
            for (int n = 0; n<5-m-1; n++)
           {
               if (pp[n]>pp[n+ 1])
              {
                  t = pp[n];
                  pp[n] = pp[n + 1];
                  pp[n + 1] = t;
              } 
           }
        }
       enf.close();
    }
    if(inf.is_open())
    {
       
        inf.close();
        
    }
    return 0;
}

