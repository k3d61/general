import os, sys
def display( n, m, edge):
	for i in range( 0, n ):
		listtemp = []
		for j in range( 0, n ):
			listtemp.append ( edge[i][j] )
		print( ' '.join( str(v) for v in listtemp ) )

def ac_gr( current ):
	global visited, n, m, egde, reach
	for i in range( 0, n ):
		if visited[ i ] == 1:
			continue
		if edge[ current ][ i ] == 1:
		#	reach[ current ] = 1
			visited[ current ] = 1
			ac_gr( i )
	for i in range( 0, n ):
		if i != current and edge[ current ][ i ] == 1:
			reach[ current ] += reach[ i ]

inp = raw_input()
inp = [ int(i) for i in inp.split() ]
n = inp[0]
m = inp[1]
edge = [[ 0 for i in range(n) ] for j in range(n) ]
#print( "edges" )

for i in range( 0, m):
	inp = raw_input()
	inp = [ int(i) for i in inp.split() ]
	v1 = inp[0]
	v2 = inp[1]
	edge[ v1-1 ][ v2-1 ] = 1;

#display(n, m, edge)

reach = []
visited = []
for i in range( 0, n ):
	visited.append( 0 )
	reach.append( 1 )

#print("reach")
#print( ' '.join( str(v) for v in reach ) )
#print("visited")
#print( ' '.join( str(v) for v in visited ) )


#ac_gr( 0 )


#print("reach")
#print( ' '.join( str(v) for v in reach ) )
#print("visited")
#print( ' '.join( str(v) for v in visited ) )
for i in range( 0, n):
	if visited[ i ] == 0:
		ac_gr( i )
count = 0
for i in range( 0, n):
	if reach[ i ] * 2 >= n:
		count +=1
print(count)
#print("reach")
#print( ' '.join( str(v) for v in reach ) )
#print("visited")
#print( ' '.join( str(v) for v in visited ) )
