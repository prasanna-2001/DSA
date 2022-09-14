#include<iostream>
  using namespace std;
  
  struct graph{
      int v;                                // Number of nodes in the Graph
      int edges[20][20];
      bool visited[20];
      int answer[20];
      int count;
      void addEdge(int p,int q){
          edges[p][q]=1;                    // An edge between and p and q is also
          edges[q][p]=1;                    // an edge between q and p
      }
      void prep(){
          for (int i = 0; i < v; i++){
              visited[i]= false;
          }
          count = 0;
      }

      void DFS(int n){                     // DFS - Depth First Search
          answer[count] = n;
          visited[n]=true;
          count++;
          for (int i = 0; i < v; i++){
              if(edges[n][i]==1 && visited[i]==false){
                  DFS(i);
              }
          }
      }

      void BFS(int n){                     // BFS - Breadth First Search 
          answer[0]= n;
          visited[n] = true;
          for (int i = 0; i <= count; i++){
              int node = answer[i];
                  for(int j =0; j < v; j++){
                      if(edges[node][j]==1 && visited[j]==false){
                      answer[count+1] = j;
                      count++;
                      visited[j] = true;
                  }
              }
          }
      }
  };

  int main(){
      int number = 8;
      graph myGraph;
      myGraph.v = number;
      for (int i = 0; i < 20; i++){
          for (int j = 0; j < 20; j++){
              myGraph.edges[i][j]=0;
          }
      }
      
      int first[8] = {2, 0, 4, 2, 7, 6, 6, 7};
      int second[8] = {0, 5, 2, 1, 1, 4, 1, 3};
      
      for (int i = 0; i < 8; i++){
          myGraph.addEdge(first[i],second[i]);
      }
      int kl;
      myGraph.prep();
      myGraph.DFS(3);
      kl = myGraph.answer[2];
      cout<<kl<<endl;  // First Output
      
      myGraph.prep();
      myGraph.BFS(4);
      kl = myGraph.answer[3];
      cout<<kl<<endl;  // Second Output
      return 0;
  }