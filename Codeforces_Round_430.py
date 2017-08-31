#
# l, r, x, y, k = map(int, input().split())
#
# found = False
#
# if min(l, r) / max(x, y) <= k <= max(l, r) / min(x, y):
#     for cur_multiplier in range(x, y+1):
#         if cur_multiplier*k >= l and cur_multiplier*k <= r:
#             found = True
#             break
# if found:
#     print("YES")
# else:
#     print("NO")
#
#
# r, d = map(int, input().split())
# n = int(input())
# counter = 0
# for i in range(n):
#     x,y,r_k = map(int, input().split())
#     if (x**2 + y**2)**(1.0/2.0) - r_k >= r-d and (x**2 + y**2)**(1.0/2.0) + r_k <= r:
#         counter += 1
# print(counter)

class Node:
    def __init__(self, value, parent=None):
        self.value = value
        self.parent = parent
        self.childs = []

    def

    def __repr__(self):
        return "V: {0} P:{1} C:{2}".format(self.value, self.parent, self.childs)


tree = []

n = int(input())

for val in map(int, input().split()):
    tree.append(Node(value=val))

for i in range(n-1):
    st, end = map(int, input().split())
    tree[st-1].childs.append(end-1)
    tree[end-1].parent = st-1

for node in tree:
    print(node)

