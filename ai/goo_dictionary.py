from urllib2 import urlopen
keyword = raw_input("Enter the keyword for search: ")
print keyword 
null = None
data = urlopen("https://www.google.co.in/webhp?sourceid=chrome-instant&ion=1&espv=2&ie=UTF-8#q"+keyword+"+meaning").read()[25:-1]
print data
