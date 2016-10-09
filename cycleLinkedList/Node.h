class Node{
public:
  Node();
  Node(int n, Node * prev);
  ~Node();
  const int getNumber() const;
  Node* getNext() const;
  void print(Node *ptr);
private:
  int num;
  Node *next;
};
