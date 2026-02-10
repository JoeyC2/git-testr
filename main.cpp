 #include <iostream>
 #include <iomanip>

 using namespace std;

 void sum(int var2, int var1){
  double add = var2 + var1;
  double ave = add / 2;
  cout<<ave;
 }

 int main() {
  int var2 = 0;
  int var1 = 0;
  cout<<fixed<<setprecision(2);
  cout<<"enter the numbers to be averaged"<<endl;
  cin>>var1;
  cout<<endl<<"enter the second number"<<endl;
  cin>>var2;
  cout<<endl;
  sum(var2, var1);
}

