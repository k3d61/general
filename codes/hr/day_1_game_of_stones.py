import os, sys

def create_status( status ):
	for i in range ( 6, 101 ):
		if ( status [ i-2 ] == 's' ) and ( status [ i-3 ] == 's' ) and ( status [ i-5 ] == 's' ):
#			print ( str(i) +"is unsafe" )
			status [ i ] = 'u'
			continue

status = [ 's' for i in range(101) ]
status [ 1 ] = 'u'
status [ 2 ] = 's'
status [ 3 ] = 's'
status [ 4 ] = 's'
status [ 5 ] = 's'

create_status( status )

T = int(raw_input())
for i in range( 0, T ):
	N = int(raw_input())
	if status[ N ] == 'u':
		print("Second")
	if status[ N ] == 's':
		print("First")

