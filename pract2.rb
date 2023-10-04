class Television
      def initialize(color,name,size)
        @c=color
        @n=name
        @s=size
      end
      def display()
        puts"----------------------------"
        puts"The information of television is: "
        puts"NAME:#{@n}"
        puts"COLOR:#{@c}"
        puts"PRICE:#{@s}"
        puts"-----------------------------"
      end
    end
class Speaker
     def initialize(name,type,topic)
        @name=name
        @type=type
        @topic=topic
     end
     def display()
        puts("the information of speaker is: ")
        puts"------------------------------"
        puts"NAME:#{@name}"
        puts"TYPE:#{@type}"
        puts"PRICE:#{@topic}"
        puts"-------------------------------"
     end
    end
    t1=Television.new("Black","LG","300000")
    t1.display()
    s1=Speaker.new("Boat","Round","15000")
    s1.display()


