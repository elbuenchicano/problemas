#include <iostream>
#include <vector>

using namespace std;

vector<int> lista;

void decom(int n, int s){
  if (n > 0){
    for (int i = n; i > 0; --i){
      if(i<=s){
        lista.push_back(i);
        decom(n-i,i);
        }
    }
      
  } 
  else{
    cout << lista[0];
    for(size_t i=1;i < lista.size(); ++i)
      cout<< " + " << lista[i];
    cout<<endl;
  }
  lista.pop_back();
}

int main() {

    decom(5,5);
    
    return 0;
}
