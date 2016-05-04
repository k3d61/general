import os, sys
def taw():
	inp = raw_input()
	inp = [ int(i) for i in inp.split() ]
	inp1 = inp[0]
	inp2 = inp[1]
	
	name = [ '', 'Yakk', 'Doh', 'Seh', 'Ghar', 'Bang', 'Sheesh' ]
	if inp1 < inp2:
		temp = inp1
		inp1 = inp2
		inp2 = temp
	if inp1 == 6 and inp2 == 5:
		#print("Sheesh Beesh")
		return (" Sheesh Beesh")
	if inp1 > inp2:
		#print( name[ inp1 ] + ' ' + name[ inp2 ] )
		return ( ' ' + name[ inp1 ] + ' ' + name[ inp2 ] )
	if inp1 == 1:
		#print("Habb Yakk")
		return (" Habb Yakk")
	if inp1 == 2:
		#print('Dobara')
		return (' Dobara')
	if inp1 == 3:
		#print('Dousa')
		return (' Dousa')
	if inp1 == 4:
		#print('Dorgy')
		return (' Dorgy')
	if inp1 == 5:
		#print('Dabash')
		return (' Dabash')
	if inp1 == 6:
		#print('Dosh')
		return (' Dosh')

if __name__ == "__main__":
	T = input()
	#T = int(t)
	for i in range(T):
		a = "Case " + str(i+1) + ":" + taw()
		print(''.join(a) )
		
