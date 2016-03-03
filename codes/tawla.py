import os, sys

def taw():
	inp1 = int(raw_input())
	inp2 = int(raw_input())
	name = [ '', 'Yakk', 'Doh', 'Seh', 'Ghar', 'Bang', 'Sheesh' ]
	if inp1 < inp2:
		temp = inp1
		inp1 = inp2
		inp2 = temp
	if inp1 == 6 and inp2 == 5:
		print("Sheesh Beesh")
		exit()
	if inp1 > inp2:
		print( name[ inp1 ] + ' ' + name[ inp2 ] )
		exit()
	inp1 += 1
	if inp1 == 1:
		print("Habb Yakk")
	if inp1 == 2:
		print('Dobara')
	if inp1 == 3:
		print('Dousa')
	if inp1 == 4:
		print('Dorgy')
	if inp1 == 5:
		print('Dabash')
	if inp1 == 6:
		print('Dosh')

if __name__ == "__main__":
	T = int(raw_input())
	while T > 0:
		taw()
		T -= -1
