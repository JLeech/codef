#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define forn(i,n) for (int i = 0; i < int(n); i++)

int main(){

  int elem_count;
  scanf("%d", &elem_count);

  int elems[elem_count];

  forn(i,elem_count){
    scanf("%d", &elems[i]);
  }

  set<int> elems_in_subseq;
  std::vector<int> vect;

  int left_side = 1;

  forn(i,elem_count){
    int current_elem = elems[i];

    if(elems_in_subseq.find(current_elem) != elems_in_subseq.end()){
      vect.push_back(left_side);
      vect.push_back(i+1);

      left_side = i+2;
      elems_in_subseq.clear();
    }else{
      elems_in_subseq.insert(current_elem);
    }
  }
  if (left_side == 1){
    printf("%d\n", -1 );
    return 0;
  }
  if (vect.back() != elem_count){
    vect.back() = elem_count;
  }
  printf("%ld\n", vect.size()/2 );
  for(int i = 0; i< vect.size(); i+=2){
    printf("%d %d\n",vect[i],vect[i+1] );
  }

  return 0;
}