import os, sys
def main():
	str = raw_input()
	new = ''
	j = ''
	for i  in str:
		if j == ' ' and i != ' ' :
			new = new + ' '
			new = new + i.upper()
		else:
			new = new + i
		j = i
	new.capitalize()
	print(new)

if __name__ == '__main__':
	main()
