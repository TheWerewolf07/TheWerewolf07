class Large
    @num1=6
    @num2=8
    @large=0
    def initialize(a,b)
        @num1=a
        @num2=b
    end
    def check()
        @num1>@num2?(@Large=@num1):(@Large=@num2)
    end
    def print()
        puts"The large number is: #{@Large}"
    end
end
puts"Enter first number"
n1=Integer(gets.chomp)
puts"Enter second number"
n2=Integer(gets.chomp)

n=Large.new(n1,n2)
n.check()
n.print()