import os, sys

def captcha_cracker():
	print( "captcha cracker" )




r,c = [ int(i) for i in raw_input().split(' ') ]
image = [[ 0 for i in range( c )] for j in range( r ) ]

#print ( str(r) + " " + str(c) )

for i in range( r ):
	for j in range( c ):
		R, G, B =  [ int(i) for i in raw_input().split(',') ]
		#print ( str(R) + " " + str(G) + " " + str(B) )
		image[ i ][ j ] = B + ( G * 256 ) + ( R * 256 * 256 )
		print ( str( image[ i ][ j ] ) )
		
