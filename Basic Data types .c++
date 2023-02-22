/* task
input - Input consists of the following space-separated values: int, long, char, float, and double, respectively.
output-Print each element on a new line in the same order it was received as input. Note that the floating point 
        value should be correct up to 3 decimal places and the double to 9 decimal places.*/
       
#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>


int main() {
    int a;
    long int b;
    char c;
    float d;
    double e;
    //input
    // scanf("%d %ld %c %f %lf",&a,&b,&c,&d,&e);
    std::cin>>a>>b>>c>>d>>e;
     
    // output
    std::cout<<a<<'\n';
    std::cout<<b<<'\n';
    std::cout<<c<<'\n';
    std::cout<<std::fixed<<std::setprecision(3)<<d<<'\n';
    std::cout<<std::fixed<<std::setprecision(9)<<e;
    
    // printf("%d \n",a);
    // printf("%ld \n",b);
     //printf("%c \n",c);          we can do this in two ways , one is c++ standard input finction cin, cout , which is from c++ library can used as a input output 
    // printf("%.3f \n",d);        fuction,  or we can use include<cstdio> through which we can use pritf and scanf which is from c library can be used in c++.
    // printf("%.9lf",e);          normally printf , scanf faster than cin , cout
    return 0;
}
