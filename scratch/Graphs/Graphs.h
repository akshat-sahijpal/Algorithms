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

class Graphs {

public:
    std::map<std::string, std::vector<std::string>> generateRandomGraph() {
        std::map<std::string, std::vector<std::string>> graph;
        graph.insert({{"a", {"c", "b"}},{"b", {"d"}},{"c", {"e"}},{"d", {"f"}},{"e", {}},{"f", {}}});
        return graph;
    }
    /**
     * It uses stack for operations
     * */
    void depthFirstTraversalGraph(std::map<std::string, std::vector<std::string>> graph,
                                  std::string source){
        std::stack<std::string> observations;
        observations.push(source);
        std::string current;
        while (observations.size()!=0){
            current = observations.top();
            observations.pop();
            std::cout << current;
            for (auto i : graph[current]){
                observations.push(i);
            }
        }
    }
    /**
     * It uses queues for operations
     * */
    void breadthFirstTraversalGraph(std::map<std::string, std::vector<std::string>> graph,
                                    std::string source){

        std::queue<std::string> observations;
        observations.push(source);
        std::string current;
        while (observations.size()!=0){
            current = observations.front();
            observations.pop();
            std::cout << current;
            for (auto i : graph[current]){
                observations.push(i);
            }
        }
    }

};

#endif //STRUCTURES_GRAPHS_H