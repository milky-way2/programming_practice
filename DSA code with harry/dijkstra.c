#include<stdio.h>
#define inf 1000
#define true 1
#define false 0

int m(int *distance,int *visited,int n){
	int min=inf , index; 
	for(int i=1;i<=n;i++){
		if(min>distance[i] & visited[i]==false) 
			min=distance[i],index = i; 
	}
	return index; 
}

int main(){
	int n; scanf("%d",&n); 
	int adj[n+1][n+1]; 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&adj[i][j]);
		}
	}
	int source; scanf("%d",&source); 
	int distance[n+1],visited[n+1]; 
	for(int i=1;i<=n;i++) visited[i]=0,distance[i]= inf; 
	distance[source]=0;
	for(int i=1;i<n;i++){
		int u=m(distance,visited,n);
		visited[u]=true;
		for(int v=1;v<=n;v++){
			if(distance[u]+adj[u][v]<distance[v] & visited[v]==false){
				distance[v]=distance[u]+adj[u][v];
			}
		}
	}
	for(int i=1;i<=n;i++) printf("%d ",distance[i] );
	return 0; 
}