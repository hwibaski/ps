#include <bits/stdc++.h>
using namespace std;

vector<int> v;

void printV(vector<int> &v) {
  for (unsigned long i = 0; i < v.size() - 1; i++){
    cout << v[i] << " ";
  }
  cout << "\n";
}



void makePermutation(unsigned long n, unsigned long r, unsigned long depth) {
  cout << n << " : " << r << " : " << depth << '\n';

  if (r == depth) {
    printV(v);
    return;
  }

  for (unsigned long i = depth; i < n; i++) {
    swap(v[i], v[depth]);
    makePermutation(n , r, depth + 1);
    swap(v[i], v[depth]);
  } 
}

int main() {
  for (int i = 1; i <= 3; i++) v.push_back(i);

  do{
    printV(v);
  } while(next_permutation(v.begin(), v.end()));

  // next_permutation() 출력값 //
  // 1 2 3
  // 1 3 2
  // 2 1 3
  // 2 3 1
  // 3 1 2
  // 3 2 1

  // 이 코드에서 next_permutation(start, end); 에 어떤 값을 넣어야지 4P2의 값을 출력할 수 있는지 궁금합니다.
  // 31번째 줄에 for문의 조건은 i <= 4로 수정했다는 가정하에 질문드립니다! 벡터의 값은 {1, 2, 3, 4} 일 경우
  // 4개의 요소 중 2개의 요소를 뽑을 때 "순서"가 있는 경우의 수를 구하고 싶습니다.
  // 제가 원하는 출력 코드
  // 1 2
  // 1 3
  // 1 4
  // 2 1
  // 2 3
  // 2 4
  // 3 1
  // 3 2
  // 3 4
  // 4 1
  // 4 2
  // 4 3

  return 0;
}