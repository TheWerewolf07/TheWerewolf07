class Student
    @name="Sumit"
    @gender="Male"
    @s1=0
    @s2=0
    @s3=0
    @phone=0
    def initialize()
       puts"Enter the informationn of student"
       puts"NAME:"
       @name=gets.chomp
       puts"GENDER:"
       @gender=gets.chomp
       puts"SCORE:"
       puts"Enter the first subject marks"
       @s1=Float(gets.chomp)
       puts"Enter the second subject marks"
       @s2=Float(gets.chomp)
       puts"Enter the third subject marks"
       @s3=Float(gets.chomp)
       puts"PHONE:"
       @phone=Integer(gets.chomp)
    end
    def display()
        puts"---------------------------------"
        puts"NAME:#{@name}"
        puts"SCORE:#{@score}"
        puts"GENDER:#{@gender}"
        puts"PHONE_NO:#{@phone}"
        puts"---------------------------------"
    end
    def accu()
        x=@s1+@s2+@s3
        puts"SUM:#{x}" 
        v=x/3
        puts"AVERAGE:#{v}"
    end
end
s=Student.new
s.display()
s.accu()
