'''
# define the graph
a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z = range(26)
graph=[[a,b,2],[a,c,3],[a,d,4],[b,d,1],[b,e,5],[c,d,3],[d,e,2],[e,f,4]]
count=len(graph)

#,[f,g,1],[f,h,2],[g,h,3],[h,i,4],[i,j,5],[j,k,1],[k,l,2],[l,m,3],[m,n,4],[n,o,5],[o,p,1],[p,q,2],[q,r,3],[r,s,4],[s,t,5],[t,u,1],[u,v,2],[v,w,3],[w,x,4],[x,y,5],[y,z,1]]

#source,destination, edge weight
#define the adjacency matrix

def adjmatrix(V,G):
    adj=[[0 for i in range(V)]for j in range(V)]
    for i in range(len(G)):
        adj[G[i][0]][G[i][1]]=G[i][2]
        adj[G[i][1]][G[i][0]]=G[i][2]
    return adj
def prims(V,G):
    adj=adjmatrix(V,G)
    vertex=0
    edges=[]
    visited=set()
    midedge=[None,None,float('inf') ]
    MST=[]
    while(len(MST)!=V-1):
        visited.append(vertex)
        for ed in range(0,V):
            if adj[vertex][ed]!=0:
                edges.append([vertex,ed,adj[vertex][ed]])
        
        for ed in range(len(edges)):
            if(edges[ed][2]<midedge[2] and edges[ed][1] not in visited):
                midedge=edges[ed]
        
        MST.append(midedge)
        vertex=midedge[1]
        midedge=[None,None,float('inf')]

    return MST
print(prims(count,graph))'''
# define the graph
a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z = range(26)
graph = [
    [a, b, 2], [a, c, 3], [a, d, 4], [b, d, 1], [b, e, 5],
    [c, d, 3], [d, e, 2], [e, f, 4]
]
# Number of vertices is the highest index used + 1
count = max(max(edge[0], edge[1]) for edge in graph) + 1

# source, destination, edge weight
# define the adjacency matrix
def adjmatrix(V, G):
    adj = [[0 for _ in range(V)] for _ in range(V)]
    for u, v, w in G:
        adj[u][v] = w
        adj[v][u] = w
    return adj

def prims(V, G):
    adj = adjmatrix(V, G)
    visited = set()
    MST = []
    edges = []
    vertex = 0
    visited.add(vertex)
    while len(MST) < V - 1:
        # Add all edges from the current vertex to the edge list
        for to in range(V):
            if adj[vertex][to] != 0 and to not in visited:
                edges.append([vertex, to, adj[vertex][to]])
        # Find the minimum edge that connects to an unvisited vertex
        min_edge = None
        min_weight = float('inf')
        for edge in edges:
            if edge[2] < min_weight and edge[1] not in visited:
                min_edge = edge
                min_weight = edge[2]
        if min_edge is None:
            break  # No more edges to add
        MST.append(min_edge)
        vertex = min_edge[1]
        visited.add(vertex)
    return MST

print(prims(count, graph))