class First < Button

	end
	def test
		start_button = Button.new("Start")
	
		ARGF.each_line do |line|
			puts line
		end
	end
end

o = First.new

o.test
