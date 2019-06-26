#include <iostream>
#include<fstream>
#include<string>
using namespace std;
	
    double read[10];
    double a[10];
    double pp[10];
    double qq[10];
    double t;
	int i,j;
	char FullName,sex,school;
	double achievement[10];
     double number;
     string str;
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
				onf>>number>>" ">>FullName>>" ">>sex>>" ">>school;
			}
		} 
        onf.close();
    }
    if(enf.is_open())
    {
        int line;
		for(line=2;line<6;line++)
		{
			enf.seekg(0,ios::beg);
			for(int i=0;i<line<i++)
			{
				enf.getline(store,sizeof(store));
				std::istringstream iss(store);
				iss>>number;
				iss>>str;
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
       class score{
	        private:
	          	int k;
	        public:  	
       double  sum(double a[], int k)
        {
            int i;
            double sum = 0;
            for (i = 1; i<k - 1; i++)
            {
                sum = sum + a[i];
            }
            return sum;
        }
        
        double  aver(double a[],int k)
        {
            double sum=0;
            double aver=0;
            if (k<9)
            {
                for (int i = 1; i<k - 1; i++)
                {
                    sum = sum + a[i];
                }
            aver = sum / (k - 2);
            }
        }
        return aver;
        };
        
     for( k=1;k<6;k++)
		{
			inf<<number<<" "<<FullName<<" "<<achievement;
		}
        inf.close();
    }
