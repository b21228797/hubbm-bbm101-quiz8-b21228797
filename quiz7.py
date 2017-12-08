try:
    assert False, "Hello!"
except AssertionError as e:
    e.args += ('some other', 'important', 'information', 42)
    raise
  try:
    z = x / y
except ZeroDivisionError:
    z = 0
    n = 0
y = len(list1)-1
found = 0
while n < y:
    for k in list1:
        if list1[n]+ k == g:
            print("The 2 prime numbers that add up to ",g,"are ", list1[n]," and ",k,".")
            found = 1
            break # for loop
    if found:
       break # while loop
    n = n + 1
    try:
    ...
except SomeException:
    tb = sys.exc_info()[2]
    raise OtherException(...).with_traceback(tb)
    def lines_to_dict(lines):
    return_dict = {}
    for ll in lines:

            [key, value] = ll.split()
            return_dict[key] = value

    return return_dict