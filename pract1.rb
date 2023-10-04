puts"Enter the principle amount"
p=Integer(gets.chomp)
puts"Enter the rate of interest"
r=Integer(gets.chomp)
puts"Enter the period in year"
t=Integer(gets.chomp)
i=1
res=0
 while i<=t
     res=res+(p*r*0.01);
     puts"The interest at #{i} is :#{res}"
     i=i+1
 end
 puts"The value is:#[res]"