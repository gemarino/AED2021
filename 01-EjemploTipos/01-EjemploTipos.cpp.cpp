#include<iostream>
#include<cassert>
#define NDBUG

main() {

//bool
assert(true and true);  //and
assert(not false);      //not
assert(true==true);      // ==
assert(false!=true);   // !=


//int

assert(-6==-6);
assert(-5!=1);
assert(7<=10);
assert(9>=-15);
assert(5+5==10);
assert(36-135==-99);
assert(7*8==56);
assert(120/3==40);
assert(126%43==40);


//string

assert("hello"*lenght()==5);
assert("green"=="green");
assert("german"!="mauro");
assert("hola"<="holanda");
assert("ciclopentanoperhidrofenantreno">="ibuprofeno");
assert("ibu"+"profeno"=="ibuprofeno");

//double
assert(3/2==1.5);
assert(1.5+2.2==3.7);
assert(3.5==3.5);
assert(2.8!=5.5);
assert(10.7>=4.7);
assert(2.6<=8.1);
assert(2.5*3.5==8.75);
assert(8.5-4.2==4.3);

//char
assert('$'+'1'=='U');
assert('w'-'='==':');
assert('/'=='/');
assert('M'<='m');
assert('p'>='P');
assert('d'!='D');
assert('@'*0==0);
assert('~'%'+'==40);
assert('x'/'x'==1);

//unsigned 


assert(23+7==30);
assert(50-25==25);
assert(1500/50==30);
assert(500!=499);
assert(550*0==0);
assert(0==0);
assert(6%2==0)
assert(74>=74);
assert(45<=74);


}