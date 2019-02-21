
import unittest

class MyRange():
    
    def __init__(self, first, last, step=1):
        self.my_range = range(first, last, step)

def myrange(*args):
    n_args = len(args)
    if n_args not in [1,2,3]:
        raise TypeError("myrange should have 1, 2 or 3 arguments")
    if n_args==1:
        return MyRange(0,args[0]).my_range
    elif n_args==2:
        return MyRange(args[0],args[1]).my_range
    elif n_args==3:
        return MyRange(args[0],args[1],args[2]).my_range

class TestMyRange(unittest.TestCase):
    def test_range_limits(self):
        self.assertEqual(0, min([i for i in range(5)]))
        self.assertEqual(2, min([i for i in range(2, 7)]))
        self.assertEqual(5, max([i for i in range(6)]))

    def test_range_equivalence(self):
        self.assertEqual(range(5), myrange(5))
        self.assertEqual(range(3,8), myrange(3,8))
        self.assertEqual(range(4, 10, 2), myrange(4, 10, 2))
    
    def test_size(self):
        self.assertEqual(20, len(myrange(0, 20, 1)))
        self.assertEqual(50, len(myrange(1, 101, 2)))

if __name__ == '__main__':
    unittest.main()
