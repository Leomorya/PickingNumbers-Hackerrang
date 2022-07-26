//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <iterator>
#include <iomanip>
#include <algorithm>
#include<deque>
#include <string>
#include<map>
#include <cstddef>
#include<cmath>
#include <iomanip>

int pickingNumbers(std::vector<int> a) {
    int m0{ 0 }, m1{ 0 }, m{0}, m2{ 0 }, ind{ 0 };
    sort(a.begin(), a.end());  
    for (auto i : a)
        std::cout << i << " ";
    std::cout << "\n\n";
    for (size_t j = 0; j < a.size()-1; j++)
    {
            std::cout <<"indice=" << j << " numero= " << a[j] << "\n";
            for (int i = 0; i < a.size()-j; i++)
            {
                if (abs(a[j] - a[i+j]) ==0)
                {
                    m0 = m0 + 1;     
                }
                else if (abs(a[j] - a[i+j]) == 1)
                {
                    m1 = m1 + 1;
                }
                m = m1 + m0;
                if (m2 < m)
                {
                    m2 = m;
                }            
                if (abs(a[j] - a[i + j]) > 1)
                    break;
            }
            std::cout <<  "longitud del sub array m="<<m << "\n"<<"\n";
            if(m0!=0)
            j = j + m0-1;//genial para saltar el indice
            m0 = 0;
            m1 = 0;
    }
            return m2;
}



int main() {

    // 1 2 2 3 1 2
    std::vector<int> v{ 1 ,2 ,2 ,3 ,1 ,2 };
        
        
        //{ 4 ,2, 3, 4, 4, 9 ,98, 98 ,3 ,3, 3 ,4 ,
        //2 ,98 ,1, 98 ,98, 1, 1, 4 ,98, 2, 98, 3, 9, 9, 3, 1 ,4, 1 ,
        //98, 9, 9 ,2 ,9, 4 ,2 ,2 ,9, 98, 4, 98, 1 ,3, 4 ,9, 1, 98, 98 ,
        //4, 2, 3, 98 ,98, 1, 99, 9 ,98 ,98 ,3 ,98 ,98 ,4, 98, 2 ,
        //98, 4, 2, 1, 1, 9 ,2, 4 }, v2;
   
    //98 ,3, 99, 1, 97, 2,4

    //cin 72 y res 22

    sort(v.begin(), v.end());


    std::cout << pickingNumbers(v);
  
}