#include <algorithm>
#include <iostream>
#include <string>

using namespace std;


int count(int start, int end){
  int data [] = {6,2,5,5,4,5,6,3,7,6};
  int sum = 0;
  for(int current = start; current <= end; current++){
    int current_processed = current;
    while(current_processed){
     
      int value = current_processed%10;
      current_processed = current_processed/10;   

      sum += data[value];
    }
  }
  return sum;
}

int main(){

  int start;
  int end;
  cin >> start;
  cin >> end;

  int result = count(start,end);

  cout << result << endl;
  return 0;
}
