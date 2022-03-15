class Node:

    def __init__(self, data=0, nextLink=None):
        self.data = data
        self.next = nextLink

    def getData(self):
        return self.data

    def getNextNode(self):
        return self.next

    def setCurrentData(self, data):
        self.data = data

    def setNextNode(self, next):
        self.next = next
