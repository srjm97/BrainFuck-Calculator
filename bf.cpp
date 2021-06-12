#include<bits/stdc++.h>

using namespace std;
int main()
{
    double x,y;
    char oper;
    char choice;
    do
    {
        int opt;
        cout<<"Choose your option\n 1. Calculator \n 2. BF decoder\n\n ";
        cin>>opt;
        cout<<"\n ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if(opt==1)
        {
          string s;
          getline(cin,s);
          stringstream ss;
          ss<<s;
          ss>>x>>oper>>y;
          double tmp;
          string t;
          switch(oper)
          {
              case '+': tmp=x+y;
                        t=to_string(tmp);
                        for(int i=0;i<t.size();++i)
                        {
                          for(int j=0;j<t[i];++j)
                          {
                            cout<<'+';
                          }
                          cout<<".";
                          for(int j=0;j<t[i];++j)
                          {
                            cout<<'-';
                          }
                        }
                        break;
              case '-': tmp=x-y;
                        t=to_string(tmp);
                        for(int i=0;i<t.size();++i)
                        {
                          for(int j=0;j<t[i];++j)
                          {
                            cout<<'+';
                          }
                          cout<<".";
                          for(int j=0;j<t[i];++j)
                          {
                            cout<<'-';
                          }
                        }
                        break;
              case '*': tmp=x*y;
                        t=to_string(tmp);
                        for(int i=0;i<t.size();++i)
                        {
                          for(int j=0;j<t[i];++j)
                          {
                            cout<<'+';
                          }
                          cout<<".";
                          for(int j=0;j<t[i];++j)
                          {
                            cout<<'-';
                          }
                        }
                        break;
              case '/': tmp=x/y;
                        t=to_string(tmp);
                        for(int i=0;i<t.size();++i)
                        {
                          for(int j=0;j<t[i];++j)
                          {
                            cout<<'+';
                          }
                          cout<<".";
                          for(int j=0;j<t[i];++j)
                          {
                            cout<<'-';
                          }
                        }
                        break;
              default:  cout<<"\n Invalid operator!!!! ";
          }
        }
        else if(opt==2)
        {
          string s;
          getline(cin,s);
          int counter=0;
          for(int i=0;i<s.size();++i)
          {
            if(s[i]=='+')
              ++counter;
            else if(s[i]=='.')
              cout<<(char)counter;
            else
              counter=0;
          }
        }
        else
          cout<<"\n Invalid option ";
        //getchar();
        cout<<"\n Do you wish to continue (y/n): ";
        cin>>choice;
        system("CLS");
    } while (tolower(choice)=='y');
    
}