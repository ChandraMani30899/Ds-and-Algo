#include<bits/stdc++.h>
using namespace std;

int main()
{
  char a[9][20];
  string dir="lud";
  int flag=-1;

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<20;j++)
         {
              cin>>a[i][j];
         }
    }
  
  int i=8,j=0;
  while(flag<=1)
  {
      cout<<j<<" "<<abs(8-i)<<" "<<dir<<endl;
      if(i==8 && j==0)
        {
            i--;
            j++;
            flag++;
            continue;
        }

     if(a[i][j]=='.' || a[i][j]=='-')
     {
         if(dir=="lud")
         {
             i--;
             j++;
         }
         else if(dir=="rdd")
         {
             i++;
             j--;

         }
         else if(dir=="ldd")
         {
             i++;
             j++;
         }
         else if(dir=="rud")
          {
              i--;
              j--;
          } 
     }
     else if(a[i][j]=='*' && i==0)
     {
         if(dir=="lud")
            {
                dir="ldd";
                   i++;
                   j++;
            }
        else{
              dir="rdd";
              i++;
              j--;
        }    
           flag++;       
     }
    else if(a[i][j]=='*'&&i==8)
     {
         if(dir=="ldd")
           {
               dir="lud";
               i--;
               j++;
           }
         else{
             dir="rud";
             i--;
             j--;
         }  

     }

     else if (a[i][j] == '*' && j == 0)
     {
         if (dir == "rud")
         {
             dir = "lud";
             i--;
             j++;
         }
         else
         {
             dir = "ldd";
             i++;
             j++;
         }
         flag++;
     }
     else if (a[i][j] == '*' && j == 8)
     {
         if (dir == "ldd")
         {
             dir = "rdd";
             i++;
             j--;
         }
         else
         {
             dir = "lud";
             i--;
             j--;
         }
     }

     else if(a[i][j]=='a')
     {
         a[i][j]='-';
          if(dir=="lud")
           {
              dir=="rud";
              i--;
              j--;
           }
         else if(dir=="rud")
         {
             dir="rdd";
             i++;
             j--;

         } 
        else if(dir=="rdd")
        {
            dir="rud";
            i--;
            j--;

        } 
        else{
             i++;
             j--;
        } 
     }
    else{
        a[i][j] = '-';
        if (dir == "lud")
        {

            dir="ldd";
            i++;
            j++;
        }
        else if (dir == "rud")
        {
            dir="lud";
            i--;
            j++;
        }
        else if (dir == "rdd")
        {
            dir="ldd";
            i++;
            j++;
        }
        else
        {
            dir="lud";
            i--;
            j++;
        }
    } 
  }
  return 0;
}