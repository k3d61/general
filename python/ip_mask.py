import os, sys
import subprocess

def keyValue( inputArray, keyToSearch ):
	for iterator in inputArray.split():
		inputKey = iterator.split(":")
		a,b = inputKey[0] , keyToSearch
		if a == b :
			return inputKey[1]

MINIpOctate = 0
MAXIpOctate= 255

ret = subprocess.check_output("ifconfig wlp18s0 | grep Mask", shell=True )
mask = keyValue( ret, "Mask")
mask = mask.split(".")
print( mask )

ret = subprocess.check_output("ifconfig wlp18s0 | grep addr", shell=True )
ip = keyValue( ret, "addr")
ip = ip.split(".")
print( ip ) 

networkIP = ["0","0","0","0"]
print( networkIP )
i = 0
countOfHostOctate = 0
for iterator in mask:
	if int(iterator) == MAXIpOctate:
		networkIP[ i ] = ip[ i ]
	elif int(iterator) == MINIpOctate:
		networkIP[ i ] = 0
		countOfHostOctate += 1
	
	
	i += 1

print( networkIP )
print( countOfHostOctate )
