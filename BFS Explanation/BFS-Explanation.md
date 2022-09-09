# What is BFS?
- BFS stands for  **Breadth First Search**. It is also known as **level order traversal**. The **Queue data structure** is used for the Breadth First Search traversal. When we use the BFS algorithm for the traversal in a graph, we can consider any node as a root node.

## BFS example
- Let's see how the Breadth First Search algorithm works with an example. We use an undirected graph with 5 vertices.

![Illustrations-with-traversals-step-1](https://user-images.githubusercontent.com/64387352/189248107-bfde90c6-c5df-47c3-a313-e5fe51149425.png)

Let 0 be the starting node or source node. First, we enqueue it in the visited queue and all its adjacent nodes in the queue.

![Illustrations-with-traversals-step-2](https://user-images.githubusercontent.com/64387352/189248245-1236e568-9535-405e-a148-384dcc38a9ab.png)

Next, we take one of the adjacent nodes to process i.e. 1. We mark it as visited by removing it from the queue and put its adjacent nodes in the queue (2 and 3 already in queue). As 0 is already visited, we ignore it.

![Illustrations-with-traversals-step-3](https://user-images.githubusercontent.com/64387352/189248308-7244b1fe-260d-4378-9b07-8247967ad235.png)

Next, we dequeue node 2 and mark it as visited. Then, its adjacent node 4 is added to the queue.

![Illustrations-with-traversals-step-4](https://user-images.githubusercontent.com/64387352/189248346-068adf52-141f-42ad-ae56-a0c51f153443.png)

Next, we dequeue 3 from the queue and mark it as visited. Node 3 has only one adjacent node i.e. 0 which is already visited. Hence, we ignore it.

![Illustrations-with-traversals-step-5](https://user-images.githubusercontent.com/64387352/189248381-092130e2-1cdf-4692-95e1-eaea101a9d92.png)

At this stage, only node 4 is present in the queue. Its adjacent node 2 is already visited, hence we ignore it. Now we mark 4 as visited.


![Illustrations-with-traversals-step-6](https://user-images.githubusercontent.com/64387352/189248459-cd87803a-27ce-4821-b73a-a680b86f98e9.png)


