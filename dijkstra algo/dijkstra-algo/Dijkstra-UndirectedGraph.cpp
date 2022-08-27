
#include <iostream>
#include <unordered_map>
#include<cmath>
#include<algorithm>
#include <iterator> 

using namespace std;

//Dijkstra algo --> Undirected graph
int V;
char src;
//define infinity for all vertices that are not visite yet;
#define INF  INT_MAX

unordered_map <char, unordered_map<char, int> > mygraph;
unordered_map <char, bool> visit;

char getMin(unordered_map<char, int> dist, unordered_map <char, bool> visit) {
    int Min = INT_MAX, MinIndex = 0;
    char MinVal = NULL;
    for (auto it = dist.begin(); it != dist.end(); it++) {
        if (it->second < Min && visit[it->first] == false) {
            MinVal = it->first;
            Min = it->second;
        }
    }
    return MinVal;
}

int main()
{
    char end, start; 
    int cost, num;
    unordered_map <char, int> mymap;
    //init
    for (char b = 'a'; b <= 'z'; b++) {
        mymap[b] = INT_MAX;
        visit[b] = false;
    }
    
    for (char a = 'a'; a <= 'z'; a++) 
        mygraph[a] = mymap;
   
    mymap.clear();
    cout << "Enter number of Vertices: ";
    cin >> V;
    cout << "Enter graph:" << endl;
    for (int i = 0; i < V; i++) {
        cout << "Enter start vertex: " << endl;
        cin >> start;
        cout << "Enter number of vertex that connected to that node: " << endl;
        cin >> num;
        cout << "Enter distination and cost: " << endl;
        for (int j = 0; j < num; j++) {
            cin >> end >> cost;
            mygraph[start][end] = cost;
       }
    }
    cout << "Enter source vertex: ";
    cin >> src;
    visit[src] = true;
    //init();
    mymap = mygraph[src];
    mymap[src] = 0;
    //get min
    for (auto it = mygraph.begin(); it != mygraph.end(); it++) {
        //mymap = it->second;
        char u = getMin(mymap, visit);
        visit[u] = true;
        auto it2 = mygraph[u];
        for (auto it2 = mymap.begin(); it2 != mymap.end(); it2++) {
            if (visit[it2->first] == false && mygraph[u][it2->first] != INT_MAX &&
                mymap[u] + mygraph[u][it2->first] < mymap[it2->first]) {
                mymap[it2->first] = mymap[u] + mygraph[u][it2->first];
            }
        }
    }
    for (auto it = mymap.begin(); it != mymap.end(); it++)
        cout << "key: " << it->first << " , value: " << it->second << endl;

    return 0;
}

