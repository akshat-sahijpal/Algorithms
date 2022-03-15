# Nodes + Edges = Graphs
from collections import deque

graph = {
    'a': ['c', 'b'],
    'b': ['d'],
    'c': ['e'],
    'd': ['f'],
    'e': [],
    'f': [],
}

dq = deque()


# Stack
def depthFirstTraversal(graph, sourceNode):
    dq.append(sourceNode)
    while len(dq) != 0:
        current = dq.pop()
        print(current)
        for neighbor in graph[current]:
            dq.append(neighbor)


def depthFirstRecur(graph, sn):
    print(sn)
    for i in graph[sn]:
        depthFirstRecur(graph, i)


# depthFirstTraversal(graph, 'a')
dq.clear()


# Queue
def breadthFirstTraversal(graph, sourceNode):
    dq.append(sourceNode)
    while len(dq) != 0:
        current = dq.popleft()
        print(current)
        for neighbor in graph[current]:
            dq.append(neighbor)


breadthFirstTraversal(graph, 'a')
