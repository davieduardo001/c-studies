#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(4);
  v.push_back(3);
  v.push_back(31);
  v.push_back(13);
  v.push_back(82);

  //PROCURE PELO PRIMEIRO ELEMENTO MAIOR QUE TRES NESSE VECTOR:
  auto u = upper_bound(v.begin(),v.end(), 3);
  //para nao precisar escrever vector<int>::iterator, usamos auto
  //retorna 31 (primeiro elemento maior que 3
  cout << *u << "\n";
  //printf("%i", *u);

  //Retorna o menor elemento
  u = lower_bound(v.begin(), v.end(), 3);
  u--;
  cout << *u << "\n";
}
