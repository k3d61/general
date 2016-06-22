
N = int ( raw_input() )
weight = map( int, raw_input().split(" ") )

edges = []                                                           
for i in range (0, N-1):                            
	print( "i:"+ str(i) ) 
	new = [0,0]         
	new[0], new[1] =  map( int, raw_input().split(" ") )
	new.append('i')
	new.append('u')
	edges.append(new) 

#print( edges )

def visit( vertex ) {
	
	return ( weight[ vertex ] +  )
}

for i in range ( 0, N-1 ):
	edges[ i ][ 2 ] = 'o'
	ft1 = visit( edges[ i ][ 0 ] )
	ft2 = visit( edges[ i ][ 1 ] )
	
	edges[ i ][ 2 ] = 'i'	
