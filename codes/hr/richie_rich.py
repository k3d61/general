#!/bin/python

import sys

n,k = map( int, raw_input().strip().split(' ') )
string = raw_input()

for i in range( 0, n/2 ):
        print( string[ i ] + string[ n-i-1 ] )
        if string[ i ] == string[ n-i-1 ]:
		continue
	elif string[ i ] > string[ n-i-1 ]:  
		print( string[ i ] + ":is great" )
		
	elif string[ i ] < string[ n-i-1 ]:  
		print( string[ i-i-1 ] + ":is great" )
