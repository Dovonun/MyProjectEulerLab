#include <numeric>

#ifndef LIMIT
#define LIMIT 1000
#endif

int problem1(){

  std::vector<int> result;

  for (int i = 1; i < LIMIT; i++) {
    result.push_back(i * 3);
    result.push_back(i * 5);
  }

  for (int i = 0; i < result.size()-1; i++){
    for(int j = 1; i < result.size(); i++){
      if(i = j){
        result.erase(result.begin()+j);
        j--;
      }
    }
  }

  return std::accumulate(result.begin(),result.end(),0);
}
