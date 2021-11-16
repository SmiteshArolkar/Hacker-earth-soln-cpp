#include <bits/stdc++.h>
int main()
{

    std::string a;
    std::getline(std::cin,a);
    int pass = 0;
    int z=0,o=0;
    for(unsigned int i = 0 ; i < a.size(); i++)
    {
        if(a[i] == 'z')
        z++;
        else
        o++;
    }
    if(2*z==o)
      std::cout<<"Yes";
     else
       std::cout<<"No";
    return 0;
}
