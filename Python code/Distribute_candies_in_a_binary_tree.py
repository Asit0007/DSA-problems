class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def distributeCandy(self, root):
        #code here
        def distribute(node):
            if not node:
                return 0
            
            # Post-order traversal
            left_moves = distribute(node.left)
            right_moves = distribute(node.right)
            
            # Calculate excess candies at the current node
            excess = node.data - 1
            
            # Distribute excess candies to left and right children
            left_moves += max(0, excess)
            right_moves += max(0, excess)
            
            # Total moves for the current subtree
            moves[0] += left_moves + right_moves
            
            # Return the number of excess candies at the current node
            return excess
    
        moves = [0]
        distribute(root)
        return moves[0]
