class Customer
    @@counter=0
    @name=nil
    @age=nil
    @phoneno=nil
    @bill=nil

    def initialize()
       @@counter=@@counter+1
       puts"Enter the information of customer"
       puts"NAME:"
       @name=gets
       puts"AGE:"
       @age=gets.to_i
       puts"PHONENO:"
       @phoneno=gets.to_i
       puts"BILL:"
       @bill=gets.to_f
    end
    def display()
        puts"----------Information of customer-----------"
        puts"NAME:#{@name}"
        puts"AGE:#{@age}"
        puts"PHONENO:#{@phoneno}"
        puts"BILL:#{@bill}"
        puts"------------------------------"
    end
    def count()
        puts"total number of customer:#{@@counter}"
    end
end

cust1=Customer.new
cust2=Customer.new
cust1.count()
cust1.display()
cust2.display()


