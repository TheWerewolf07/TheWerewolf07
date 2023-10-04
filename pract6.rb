$global_var="GLOBAl"
class One
    def display
        puts"Global variable in one is #$global_var"
    end
end
class Two
    def display
        puts"Global variable in two is #$global_var"
    end
end

oneobj=One.new
oneobj.display
twoobj=Two.new
twoobj.display