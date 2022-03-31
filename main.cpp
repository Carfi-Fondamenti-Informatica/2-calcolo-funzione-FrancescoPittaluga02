#include <iostream>

int main() {
    float a=0,b=0,x=0,y=0,z=0;
    if(x < 0,y > 0){
    z=a*x-b*y;
    std::cout << z <<std::endl;
    }else if(x>=0,y<=0){
    z= a*x*x - b*y;
    std::cout<< z <<std::endl;
    }else if(x>=0,y>0) {
        z = a * x + b * y * y;
        std::cout << z << std::endl;
    }else if(x<0,y>=0){
        z = a * x + b * y * y;
        std::cout << z << std::endl;
    }

    return 0;
}
