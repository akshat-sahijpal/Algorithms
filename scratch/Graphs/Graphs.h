//
// Created by Akshat on 07-03-2022.
//

#ifndef STRUCTURES_GRAPHS_H
#define STRUCTURES_GRAPHS_H
#include <stack>
#include <map>
#include <queue>
#include<iostream>
#include<string>
#include <vector>
using namespace std;
class Graphs {

public:
    map<string, vector<string>> generateRandomGraph() {
        map<string, vector<string>> graph;
        graph.insert({{"a", {"c", "b"}},{"b", {"d"}},{"c", {"e"}},{"d", {"f"}},{"e", {}},{"f", {}}});
        return graph;
    }
    /**
     * It uses stack for operations
     * */
    void depthFirstTraversalGraph(map<string, vector<string>> graph,
                                  string source){
        stack<string> observations;
        observations.push(source);
        string current;
        while (observations.size()!=0){
            current = observations.top();
            observations.pop();
            cout << current;
            for (auto i : graph[current]){
                observations.push(i);
            }
        }
    }
    /**
     * It uses queues for operations
     * */
     void breadthFirstTraversalGraph(map<string, vector<string>> graph, string source){
        queue<string> observations;
        observations.push(source);
        string current;
        while (observations.size()!=0){
            current = observations.front();
            observations.pop();
            cout << current;
            for (auto i : graph[current]){
                observations.push(i);
            }
        }
    }
};

#endif //STRUCTURES_GRAPHS_H