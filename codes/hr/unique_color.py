import sys

N = int( raw_input() )
color = map( int, raw_input().split(" ") )

edges = [ [ 0 for i in range( 0, N ) ] for j in range( 0, N ) ]
distance = [ [ 0 for i in range( 0, N ) ] for j in range( 0, N ) ]
for i in range( 0, N-1 ):
	s,e = map ( int, raw_input().split(" ") )
	s = s-1
	e = e-1
	edges[ s ][ e ] = 1
	edges[ e ][ s ] = 1
for i in range( 0, N):
	edges[ i ][ i ] = 1

def add_uniq_color( col, color_list ): 
	if ( col in color_list ) :
		return len( color_list )
	color_list.append( col )
	return len( color_list )

def visit( node, visited, color_list, fixed ): 
	print( color_list )
	for i in range( 0, N ):
		if visited[ i ] == 'u' and edges[ node ][ i ] == 1:
			visited[ i ] = 'v'
			count = add_uniq_color( color[ i ] , color_list )
			distance[ fixed ][ i ] = count
			if i != fixed:
				visit( i, visited, color_list, fixed )
				color_list.pop()
	print( color_list )
	print( "" )

for i in range( 0, N ):
	visited = [ 'u' for index in range( 0, N ) ]
	color_list = []
	visit( i, visited, color_list, i )

print( distance )	
