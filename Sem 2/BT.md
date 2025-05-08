```python

class Node:
    def __init__(self, data):
        self.data = data
        self.left = self.right = None



def createNonRec():
    from collections import deque
    data = input("Root data: ")
    if not data: return None
    root = Node(data)
    q = deque([root])
    while q:
        node = q.popleft()
        l = input(f"Left of {node.data} (blank for None): ")
        if l:
            node.left = Node(l)
            q.append(node.left)
        r = input(f"Right of {node.data} (blank for None): ")
        if r:
            node.right = Node(r)
            q.append(node.right)
    return root


def create():
    data = input("Enter data (blank for None): ")
    if not data: return None
    node = Node(data)
    node.left = create()
    node.right = create()
    return node

def level_order(root):
    if not root: return
    q = [root]
    while q:
        node = q.pop(0)
        print(node.data, end=' ')
        if node.left: q.append(node.left)
        if node.right: q.append(node.right)


def inorder(root):
    if root:
        inorder(root.left)
        print(root.data, end=' ')
        inorder(root.right)


def count_nodes(root):
    if not root: return 0
    return 1 + count_nodes(root.left) + count_nodes(root.right)


# root = createNonRec()
root = create()
print("Level order traversal:")
level_order(root)
print("In-order Traversal:")
inorder(root)
print("Total nodes:", count_nodes(root))

```