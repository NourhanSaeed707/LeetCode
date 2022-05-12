problem: https://leetcode.com/problems/binary-tree-right-side-view/


the idea of that problem we need the most right node in each level, so we use BFS (breadth-first traversal) and put the right
node first in queue, and when we iterate over nodes when i == 0 that mean we got the right node so we push in the vector.
