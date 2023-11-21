#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
class main_Calc{
    public:
           
           double add();
           double subt();
           double mult();
           double div();
           double quad_eq();
           double area_triangle();
           double bin_converter();
           

};
 int main()
{ 
    main_Calc obj;  
    int a,n;
    string h;
    string op;
    int a1,a2,a3;
    n=1;
while(n==1){
    cout<<"Welcome to our math help app "<<endl;
    cout<<"Press 1 to view all options or Press 0 to exit "<<endl;
    cin>>a;
    n++;   
}
    
     
    if(a==1){
        cout<<"The available options are "<<endl;
        cout<<"a. Basic Calculator "<<endl;
        cout<<"b. Quadratic Equation Solver "<<endl;
        cout<<"c. Area of triangle calculator"<<endl;
        cout<<"d. Decimal to Binary Calculator"<<endl;
         cout<<"For basic calcultor press 'a'"<<endl;
        cout<<"For Quadratic equation Calculator press 'b' "<<endl;
        cout<<"For Area of triangle calculator press 'c' "<<endl;
        cout<<"For converting decimal to binary press 'd'"<<endl;
        cin>>h;
        
    }
    else if(a==0){
        cout<<"You have exited. GOODBYE"<<endl;
    }
    else{
        cout<<"Invalid Command "<<endl;
    }

    
    
    if(h=="a"){
             cout<<"Welcome to the Basic Calculator section  "<<endl;
         cout<<"Select the operation you want to perform "<<endl;
        cout<<"For addition type (add) "<<endl;
    cout<<"For subtraction type (sub) "<<endl;
    cout<<"For multiplying type (mult) "<<endl;
    cout<<"For division type (div) "<<endl;
    cin>>op;
        if(op=="add"){
        obj.add();
    }
    else if(op=="sub"){
        obj.subt();
    }
    else if(op=="mult"){
        obj.mult();
    }
    else if(op=="div"){
        obj.div();
    }
    }
  

    else if(h=="b"){
        cout<<"Welcome to the Quaratic Equation solver "<<endl;
        obj.quad_eq();  
    }
    else if(h=="c"){
        cout<<"Welcome! This is a area of triangle calculator "<<endl;
        obj.area_triangle();
    }
    else if(h=="d"){
        cout<<"Binary Converter "<<endl;
        obj.bin_converter();
    }
      
}

 double main_Calc:: add(){
        double x,y;
        cout<<"Enter the two numbers that you want to add. After entering each number give a space. "<<endl;
        cin>>x>>y;
        double result;
        result = x + y;
            
        cout<<"The sum is "<<result<<endl;   
           }

double main_Calc::subt(){
       double s,q;
       cout<<"Enter the two numbers that you want to subtract. After entering each number give a space. "<<endl;
       cin>>s>>q;
       double res;
       res = s - q;

       cout<<"The difference is "<<res<<endl;              
} 
double main_Calc:: mult(){
    double no1,no2,fin;
    cout<<"Enter the two number you want to multiply. After entering each number give a space. "<<endl;
    cin>>no1>>no2;
    fin = no1 * no2;

    cout<<"The product is "<<fin<<endl;
}
double main_Calc:: div(){
    double div1,div2,fin_res;
    cout<<"Enter the two numbers you want to divide. After entering each number give a space. "<<endl;
    cin>>div1>>div2;
    fin_res = div1/div2;

    cout<<"The result after dividing first no with second number is "<<fin_res<<endl;


}
double main_Calc::quad_eq(){
    double a1,a2,a3,b1,b2,b3,den;
    cout<<"Enter the three coefficients of your quadratic equation. After each entry give space. "<<endl;
    cin>>a1>>a2>>a3;
    b1 = (a2*a2)- (4*a1*a3);
    den = 2*a1;
    if(b1==0){
        cout<<"The roots are real and equal "<<endl;
        b2 = -a2/den;
        b1 = b2;
        cout<<"Root 1 "<<b2<<endl;
        cout<<"Root 2 "<<b1<<endl;
    }
    else if(b1>0){
        cout<<"The roots are real and unequal "<<endl;
        b2 = (-a2 + sqrt(b1))/den;
        b3 = (-a2 - sqrt(b1))/den;
        cout<<"The 2 real solutions are "<<b2<<"\t"<<b3<<endl; 
    }
    else{
        cout<<"Imaginary Solutions "<<endl;
    }

}
double main_Calc::area_triangle(){
    double base,height,answer;
    cout<<"Enter the base and height of the given triangle "<<endl;
    cin>>base>>height;
    answer = (base*height)/2;
    cout<<"The area of the triangle is "<<answer;
}
double main_Calc::bin_converter(){
    int num,result,rem;
    vector<int> rem_values;
    cout<<"Enter the decimal(type) number to be converted into (binary type). Make sure that the number is without a decimal point "<<endl;
    cin>>num;
    while(true){
        result = num/2;
        rem = num % 2;
        num = result;
        
        
        if(num==0){
                break;
        }
        else{
            rem_values.push_back(rem);
            continue; 
        }
         
    }
    
    cout<<"Binary Value is "<<endl;
    for(auto it = rem_values.rbegin(); it!=rem_values.rend(); ++it){
        cout<<*it;

    }    
}

        
        
     
        
        

        

        


    


