import os, sys
def display( n, m, edge):
	for i in range( 0, n ):
		listtemp = []
		for j in range( 0, n ):
			listtemp.append ( edge[i][j] )
		print( ' '.join( str(v) for v in listtemp ) )

def ac_gr( n, m, edge):
	print( "edges" )
	display(n, m, edge)
	visited = []
	stack = []
	reach = []
	for i in range( 0, n ):
		visited.append( 0 )
		reach.append( 0 )
	for i in range( 0, n ):
		if visited[ i ] == 1:
			continue
		all_visit = 0
		next_i = 0
		while all_visit < n:
			all_zero = 0
			for j in range( 0 ,n):
		 		i = next_i
				if visited[i] == 1:
					break
				if edge[ i ][ j ] == 1:
					all_zero = 1
					visited[ i ] = 1
					all_visit += 1
					reach[ i ] =  1
					stack.append( i )
					next_i = j
			if all_zero == 0:
				next_i = stack.pop()
				reach[ next_i ] = next_i + 1
	print("reach")
	for i in reach:
		print(i)
	
n = int(raw_input())
m = int(raw_input())
edge = [[ 0 for i in range(n) ] for j in range(n) ]
for i in range( 0, m):
	v1 = int(raw_input())
	v2 = int(raw_input())
	edge[ v1-1 ][ v2-1 ] = 1;

ac_gr( n, m, edge)

