class Comparison
    def initialize(num1,num2)
        @n1=num1
        @n2=num2
    end

    def check
    @n1>@n2?(puts"#{@n1} is greater than #{@n2}")
    : (puts"#{@n2} is greater than #{@n1}");
    end
end
puts "Enter the First Number:"
num1=gets.chomp.to_i
puts "Enter the second Number:"
num2=gets.chomp.to_i

compare = Comparison.new(num1,num2)
compare.check