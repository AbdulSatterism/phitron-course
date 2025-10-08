#include<bits/stdc++.h>
using namespace std;


int romanToInt(char*    s) {
    int result =0;
    int prev = 0;

    int n = strlen(s);

    for (int i = n-1;  i >= 0; --i)
    {
        int current;

        switch (s[i])
        {
        case 'I': current= 1;
            break;
        
        case 'V': current= 5;
            break;
        
        case 'X': current= 10;
            break;
        
        case 'L': current= 50;
            break;
        
        case 'C': current= 100;
            break;
        
        case 'D': current= 500;
            break;
        
        case 'M': current= 1000;
            break;
        
        default: current= 0;

        }
        
      if (current < prev )
      {
        result -=current;
      }
      else {
        result += current;
       
      }
       prev = current;
    }

    return result;
    
}

int main(){
 
    char a[] = "VII";

    cout<<romanToInt(a);
   return 0;
}