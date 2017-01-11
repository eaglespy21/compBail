class Node:
  def __init__(self, data):
    self.data = data
    self.left = None
    self.right = None
def traverseTree(root):
  if root == None:
    return
  else:
    traverseTree(root.left)
    print root.data
    traverseTree(root.right)
def createBalancedTree(root, array):
  length = len(array)
  count = 0
  mid = len/2
  while count<len/2:
    createBalancedTree(
    
array = [1,2,3]
print array
root = Node(1)
root.left = Node(2)
root.right = Node(3)
traverseTree(root)
