int linear_search(int A[],int n,int x){
  for(int i=0;i<n;i++){
        if(A[i]==x){
          return i;
        }
  }
  return -1;
}
