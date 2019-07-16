//Created by Brandon Barnes

//displayMatrix design modified from: https://www.tutorialspoint.com/cplusplus-program-to-implement-adjacency-matrix

#include <iostream>
#include <vector>

using namespace std;

class Edge{
	int rowPosition;
	int columnPosition;
	int weight;
	
	public:
	Edge(int r, int c, int w){
		this->rowPosition = r;
		this->columnPosition = c;
		this->weight = w;
	}
	int getRow(){
		return this->rowPosition;
	}
	int getColumn(){
		return this->columnPosition;
	}
	int getWeight(){
		return this->weight;
	}
};

class Node{
	int value;
	vector<Edge> edges;
	
	public:
	Node(int startingValue){
		this->value = startingValue;
	}
	Node(){
		this->value = 0;
	}
	void addEdge(int rowPosition, int columnPosition, int weight){
		edges.push_back(Edge(rowPosition, columnPosition, weight));
	}
	int getValue(){
		return this->value;
	}
	Edge getEdge(int position){
		return edges[position];
	}
};

void displayMatrix(vector<vector <Node> > adjMatrix,int rows, int columns){
	for(int i = 0; i<rows; i++){
		for(int j = 0; j<columns; j++){
			cout << adjMatrix[i][j].getValue() << ' ';
		}
		cout << endl;
	}
}


int main(){
	
	
	
	
	return 0;
}