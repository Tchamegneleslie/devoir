#include<iostream>
int factoriel(unsigned int n);
float puis(float nbre,int exp);
float cosinus(float xi);
float sinus(float xi);
float tangente(float xi);
float angle,x,cos,sin,tan;
const float pi=3.14;
int main(int argc,char** argv){
    std::cout<<"entrer la valeur de l'angle en degre"<<std::endl;
    std::cin>>angle;
    x=angle*pi/180;
    cos=cosinus(x);
    sin=sinus(x);
    tan=sinus(x)/cosinus(x);
    std::cout<<"le cosinus de"<<angle<<"="<<cos<<std::endl;
        std::cout<<"le sinus de"<<angle<<"="<<sin<<std::endl;
            std::cout<<"la tangente de"<<angle<<"="<<tan<<std::endl;
            return 0;
}
int factoriel(unsigned int n){
    int s=1;
    while ( n>1) {
      s=s*n;
      n=n-1;}
    
    return s;
}
float puis(float nbre,int exp){
    float nbrexp =1.0f;
    for(int i=0;i<exp;i++){
        nbrexp=nbrexp*nbre;
    }
    return nbrexp;
}
float cosinus(float xi){
    float de;
    float a=0.0f;
    for(int i=0;i<10;i++){
        
        int ch=2*i;
        de = puis(xi,ch)/factoriel(ch);
        if(i%2==0){
            
            a=a+de;}
            else{
                a=a-de;
            }
        }
        return a;
    }
    float sinus(float xi){
        float de;
        float e=0.0f;
        for(int i=0;i<10;i++){
            int sh=2*i+1;
            de =puis(xi,sh)/factoriel(sh);
            if(i%2==0){
                e=e+de;
            }else{
                e=e-de;
            }
        }
        return e;
    }
