import itertools
class Boxing(object):
  def __init__(self):
    self.j1 = []
    self.j2 = []
    self.j3 = []
    self.j4 = []
    self.j5 = []
    #for i in range(0,5):
    #  temp = []
    #  for i in range(0,50):
    #    temp.append(0)
    #  self.scores.append(temp)
    #print self.scores
  def maxCredit(self, j1_arg = [], j2_arg = [], j3_arg = [], j4_arg = [], j5_arg = [], *args):
    self.j1 = j1_arg.split()
    self.j2 = j2_arg.split()
    self.j3 = j3_arg.split()
    self.j4 = j4_arg.split()
    self.j5 = j5_arg.split()
    #print self.scores
    #for i in range(0,):
    #  for j in range(
    #  self.startTime_I = min(self.scores[i][
    #print self.j1,self.j2, self.j3, self.j4, self.j5
    #for i in range(0,5):
    for a,b,c,d,e in itertools.izip_longest(self.j1, self.j2, self.j3, self.j4, self.j5):
      print a,b,c,d,e
       
box = Boxing()
inp = []
for i in range(0,5):
  temp = raw_input()
  inp.append(temp)
box.maxCredit(inp[0], inp[1], inp [2], inp[3], inp[4])
