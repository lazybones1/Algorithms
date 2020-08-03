#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

void init(vector<int>& v, vector<int>& tree, int node, int start, int end){
  if(start == end) tree[node] = start; //indexing
  else{
    init(v, tree, node*2, start, (start+end)/2); //왼쪽
    init(v, tree, node*2+1, (start+end)/2+1, end); //오른쪽

    if(v[tree[node*2]] <= v[tree[node*2+1]]) tree[node] = tree[node*2];
    else tree[node] = tree[node*2+1];
  }
}

int query(vector<int>& v, vector<int>& tree, int node, int start, int end, int i, int j){
  if(i>end || j<start) return -1;
  if(i <=start && end<=j) return tree[node];
  int m1 = query(v, tree, node*2, start, (start+end)/2, i, j);
  int m2 = query(v, tree, node*2+1, (start+end)/2+1, end, i, j);
  if (m1==-1) return m2;
  else if (m2 == -1) return m1;
  else{
    if(v[m1] <= v[m2]) return m1;
    else return m2;
  }
}

long long largest(vector<int>& v, vector<int>& tree, int start, int end){
  int n = v.size();
  int m = query(v, tree, 1, 0, n-1, start, end);
  long long area = (long long)(end - start +1)*(long long)v[m];
  if(start<=m-1){
    long long temp = largest(v, tree, start, m-1);
    if(area<temp){
      area = temp;
    }
  }
  if(m+1<=end){
    long long temp = largest(v, tree, m+1, end);
    if(area<temp){
      area = temp;
    }
  }
  return area;
}

int main() {
  while(true){
    int n;
    cin>>n;
    if(n==0) break;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int h = (int)(ceil(log2(n)+1e-9));
    int tree_size = (1<<(h+1));
    vector<int> tree(tree_size);
    init(v, tree, 1, 0, n-1);
    cout<<largest(v, tree, 0, n-1)<<"\n";
  }
  return 0;
}
