from math import sqrt

# country capital coordinates
capital = (832, 500)

# town coordinates
towns = [(832, 500), (523, 832), (676, 218), (731, 739), (803, 858),
 (170, 542), (273, 743), (794, 345), (825, 569), (770, 306),
 (168, 476), (198, 361), (798, 352), (604, 958), (700, 235),
 (791, 661), (37, 424), (393, 815), (250, 719), (400, 183),
 (468, 831), (604, 184), (168, 521), (691, 71), (304, 232),
 (800, 642), (708, 241), (683, 223), (726, 257), (279, 252),
 (559, 827), (832, 494), (584, 178), (254, 277), (309, 772),
 (293, 240), (58, 658), (765, 300), (446, 828), (766, 699),
 (407, 819), (818, 405), (626, 192), (828, 449), (758, 291),
 (333, 788), (124, 219), (443, 172), (640, 801), (171, 452),
 (242, 710), (496, 168), (217, 674), (785, 672), (369, 195),
 (486, 168), (821, 416), (206, 654), (503, 832), (288, 756),
 (789, 336), (170, 464), (636, 197), (168, 496), (832, 515),
 (168, 509), (832, 523), (677, 781), (651, 796), (575, 176),
 (478, 168), (831, 469), (391, 186), (735, 265), (529, 169),
 (241, 292), (235, 700), (220, 321), (832, 481), (806, 629),
 (176, 575), (751, 282), (511, 832), (581, 822), (708, 759),
 (777, 317), (410, 180), (180, 411), (382, 189), (694, 230),
 (327, 784), (177, 421), (797, 650), (742, 272), (719, 250),
 (739, 731), (298, 764), (423, 177), (658, 792), (813, 611),
 (667, 213), (257, 727), (178, 583), (616, 189), (342, 208),
 (817, 600), (348, 205), (344, 793), (968, 541), (700, 766),
 (181, 594), (633, 804), (656, 206), (831, 533), (722, 747),
 (759, 708), (188, 615), (416, 822), (820, 590), (169, 529),
 (172, 445), (424, 824), (687, 775), (229, 692), (597, 182),
 (187, 388), (436, 826), (463, 170), (321, 220), (174, 434),
 (567, 826), (224, 686), (210, 338), (608, 814), (190, 381),
 (538, 170), (332, 938), (265, 735), (195, 367), (173, 562),
 (270, 260), (462, 830), (192, 625), (824, 427), (781, 678),
 (599, 817), (669, 786), (359, 199), (328, 216), (183, 401),
 (815, 393), (827, 559), (830, 460), (215, 329), (311, 227),
 (713, 755), (822, 581), (546, 829), (505, 168), (172, 554),
 (748, 721), (421, 37), (184, 604), (317, 778), (286, 246),
 (648, 202), (201, 645), (281, 750), (453, 171), (356, 800),
 (827, 439), (491, 832), (375, 808), (807, 372), (521, 168),
 (246, 286), (482, 832), (804, 365), (809, 622), (197, 637),
 (232, 303), (227, 310), (362, 802), (592, 819), (533, 831),
 (560, 173), (550, 171), (619, 810), (384, 811), (931, 313),
 (811, 384), (168, 488), (773, 690), (781, 323), (204, 349),
 (213, 667), (829, 547), (431, 175), (754, 714), (263, 267)]

def calcDistance(start,finish):
    dist = sqrt((start[0]-finish[0])*(start[0]-finish[0]) +
                (start[1]-finish[1])*(start[1]-finish[1]))
    return dist

# calculates the distance along a path consisting of a list of town coordinates
def calcPath(path):
    pathLen = 0
    for i in range(1,len(path)):
        pathLen+=calcDistance(path[i],path[i-1])
    return pathLen

def getFlag(permutation):
    enc = b"]V\xa8\x1ef\x91\x02\xde\x1f\x9a\xd1\x8ck_\xdb\x15\xd5\xe3\xb0\xef\xb8\x1e \xa91L\x8d#Q\xd7\xf3\xf5\x9d6\x8f>q2\xf9\xc3R\xda\x11_m\xff\\\xfc\x93\x19c\xf1r\xb1\x80\xde'\xfepk;\xc23\x87\x13\xdf3\xffZtF6\x7f\x88w\xd7\xa9\xd1\xfa,\xf6\xa82\xe1\x01\x1aS\xae\xcf\xb48\xa6\x97|$\xaa\xa9\x05\x86\xa8b\xe6\xbb\xb4\xfc\xd1(WZ,Beg\xe19\x1d\x9a\xa4u\xf2[:4'\xef5\trg\x0eV\x97X\x80\x92\xe0\t\xfd\xa0\x9e\xc6\xa3g\x12\xe9\xfb\x1f\x8a\x05\x116\xdc\x9eI\x9bY\xf9z\x01X\x80U{\x98\xf2@r\t\x9cz\xd8\xcb\x03\xe1\x99\x93\xec\xa7\xdf#\x86\xc90\x90\xc5\xca\xd8\xfa\xd1d\xbbq~ \xce\xa9\xefh\xd5"
    data = [enc[i] for i in permutation]
    flag = [0]*60
    for i in range(len(data)):
        flag[i%60]=flag[i%60]^data[i]
    return bytes(flag)



# Python program for Kruskal's algorithm to find
# Minimum Spanning Tree of a given connected,
# undirected and weighted graph

mst = []
# Class to represent a graph
class Graph:

	def __init__(self, vertices):
		self.V = vertices
		self.graph = []

	# Function to add an edge to graph
	def addEdge(self, u, v, w):
		self.graph.append([u, v, w])

	# A utility function to find set of an element i
	# (truly uses path compression technique)
	def find(self, parent, i):
		if parent[i] != i:

			# Reassignment of node's parent
			# to root node as
			# path compression requires
			parent[i] = self.find(parent, parent[i])
		return parent[i]

	# A function that does union of two sets of x and y
	# (uses union by rank)
	def union(self, parent, rank, x, y):

		# Attach smaller rank tree under root of
		# high rank tree (Union by Rank)
		if rank[x] < rank[y]:
			parent[x] = y
		elif rank[x] > rank[y]:
			parent[y] = x

		# If ranks are same, then make one as root
		# and increment its rank by one
		else:
			parent[y] = x
			rank[x] += 1

	# The main function to construct MST
	# using Kruskal's algorithm
	def KruskalMST(self):

		# This will store the resultant MST
		result = []

		# An index variable, used for sorted edges
		i = 0

		# An index variable, used for result[]
		e = 0

		# Sort all the edges in
		# non-decreasing order of their
		# weight
		self.graph = sorted(self.graph,
							key=lambda item: item[2])

		parent = []
		rank = []

		# Create V subsets with single elements
		for node in range(self.V):
			parent.append(node)
			rank.append(0)

		# Number of edges to be taken is less than to V-1
		while e < self.V - 1:

			# Pick the smallest edge and increment
			# the index for next iteration
			u, v, w = self.graph[i]
			i = i + 1
			x = self.find(parent, u)
			y = self.find(parent, v)

			# If including this edge doesn't
			# cause cycle, then include it in result
			# and increment the index of result
			# for next edge
			if x != y:
				e = e + 1
				result.append([u, v, w])
				self.union(parent, rank, x, y)
			# Else discard the edge

		minimumCost = 0
		print("Edges in the constructed MST")
		for u, v, weight in result:
			minimumCost += weight
			print("%d -- %d == %d" % (u, v, weight))
			mst.append([u,v,weight])
		print("Minimum Spanning Tree", minimumCost)
		return minimumCost



G = Graph(200)
for i in range(200):
    for j in range(i+1,200):
        G.addEdge(i,j,calcDistance(towns[i],towns[j]))


# def bfs(start):
#     visited = [False]*200
#     sobhu_weight = [0] * 200
#     queue = []
#     queue.append(start)
#     visited[start]=True
#     while queue:
#         s = queue.pop(0)
#         for i in range(len(mst)):
#             if mst[i][0]==s and not visited[mst[i][1]]:
#                 queue.append(mst[i][1])
#                 visited[mst[i][1]]=True
#                 sobhu_weight[mst[i][1]]=(sobhu_weight[s] + mst[i][2])
#             elif mst[i][1]==s and not visited[mst[i][0]]:
#                 queue.append(mst[i][0])
#                 visited[mst[i][0]]=True
#                 sobhu_weight[mst[i][0]]=(sobhu_weight[s] + mst[i][2])
#     return max(sobhu_weight)



zz = G.KruskalMST()
# sort mst with first value
mst = sorted(mst,key=lambda item: item[0])

# print the hamiltonian path of a complete graph where coordinates of ith node is towns[i] and edge weight is euclidean distance of 2 nodes

import itertools
# print the hamiltonian cycle of a complete weighted graph
def hamiltonian_cycle(weighted_graph):
    # A shortest path from the first to the last node of the graph
    shortest_path = None
    # The length of the shortest path
    shortest_path_length = float("inf")

    # For every permutation of the nodes of the graph
    for permutation in itertools.permutations(weighted_graph.keys()):
        # The length of the path
        path_length = 0
        # If the path is valid
        if permutation[0] == 0 and permutation[-1] == 0:
            # For every node in the permutation
            for i in range(len(permutation) - 1):
                # The current node
                node = permutation[i]
                # The next node
                next_node = permutation[i + 1]
                # Add the distance between the two nodes to the path length
                path_length += weighted_graph[node][next_node]
            # If the path is shorter than the current shortest path
            if path_length < shortest_path_length:
                # Update the shortest path
                shortest_path = permutation
                # Update the shortest path length
                shortest_path_length = path_length
    # Return the shortest path and the shortest path length
    return shortest_path, shortest_path_length


	
	    

# Driver code
# if __name__ == '__main__':
# 	g = Graph(4)
# 	g.addEdge(0, 1, 10)
# 	g.addEdge(0, 2, 6)
# 	g.addEdge(0, 3, 5)
# 	g.addEdge(1, 3, 15)
# 	g.addEdge(2, 3, 4)

# 	# Function call
# 	g.KruskalMST()

# # This code is contributed by Neelam Yadav
# # Improved by James Graça-Jones
