class First
	def initialize
		puts "\nin \n initialze method\n"
	end
	def test
	
		ARGF.each_line do |line|
			puts line
		end
	end
end

o = First.new

o.test
o.inspect
class Second < First
	def initialize
		puts "second"
	end
end
b = Second.new
b.test
b.inspect
