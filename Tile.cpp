#include <string>
#include <vector>
long long arr[81];
long long num[81];
using namespace std;

long long solution(int N) {
    arr[1]=4;
    arr[2]=6;
    num[1]=1;
    num[2]=1;
    for(int i=3; i<=N; i++){
        num[i]=num[i-1]+num[i-2];
        arr[i]=arr[i-1]+num[i]*2;
    }
    long long answer = arr[N];
    return answer;
}

