``` Python
class Node:
    def __init__(self, data):
        self.data = data
        self.left = self.right = None

def insert(root, key):
    if not root: return Node(key)
    if key < root.data:
        root.left = insert(root.left, key)
    else:
        root.right = insert(root.right, key)
    return root

def min_val(node):
    curr = node
    while curr.left:
        curr = curr.left
    return curr


def delete_node(root, key):
    if root is None:
        return root
    if key < root.data:
        root.left = delete_node(root.left, key)
    elif key > root.data:
        root.rigght = delete_node(root.right, key)
    else:
        if root.left is None:
            return root.right
        elif root.right is None:
            return root.left
        temp = min_val(root.right)
        root.data = temp.data
        root.right = delete_node(root.right, temp.data)
    return root

def inorder(root):
    if root:
        inorder(root.left)
        print(root.data, end=' ')
        inorder(root.right)

# Example usage
root = None
for x in [50, 30, 70, 20, 40, 60, 80]:
    root = insert(root, x)

print("In-order Traversal of BST:")
inorder(root)

delete_node(root, 60)

print("In-order Traversal of BST:")
inorder(root)

```