1) vertical order->using hashmap & horizontal distamces
2) top view->level order+horizontal distances hashmap
3) bottom view->level order+horizontal distances hashmap(keep on replacing)
4)	level order traversal->add NULL to differentiate between levels in queue
5)zigzag->same thing.at odd/even levels 
6)diameter of tree->1+h(left)+h(right)
7)populating next right pointers in each node->(2 queues,1 for populating,1 for storing nodes to be reversed)
8)LCA(search for the tree in the children)
9)same tree(can use queue)
10)maximum path in binary tree(same as diameter,vvvv clever MUST SEE)
11)flatten tree to linked list(POSTORDER)