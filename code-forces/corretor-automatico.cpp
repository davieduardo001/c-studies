#include<bits/stdc++.h>
using namespace std;

int main(){
  int i, questoes;
  char marcada, correta;
  float nota;

  cin >> questoes;

  for(i=0; i<questoes; i++){
    cin >> marcada >> correta;

    if(marcada == correta)
      nota++;
  }

  nota = nota*10/i;
  cout << nota << endl;
}
