#!/usr/bin/python
import MySQLdb
import os

db = MySQLdb.connect( host="localhost",
		 	user="root",
			passwd="kedar",
			db="entries" )

cursor = db.cursor()

#str=raw_input()
#str="select * from alphabet where alphabet='a'"
#data = cursor.execute( str )  
#row = cursor.fetchone()

#while row is not None:
#	for i in row:
#		print( i )
#		os.system( "notify-send " + i )
#	row = cursor.fetchone()
def create_tokens( input_str ):
	type="n."
	input_str = input_str.split()  # by default it split by white spaces
	for i in input_str:
		print( i + ":")
		data = cursor.execute( "select definition from dictionary where word=\"" + i +"\"" )  
		row = cursor.fetchone()
		while row is not None:
			for row_i in row:
				print( row_i )
				row = cursor.fetchone()












str=raw_input()
#create_tokens( "my name is kedar" )
os.system("clear")
create_tokens( str )


db.close()
