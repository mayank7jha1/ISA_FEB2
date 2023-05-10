

// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *deleteEnd(ListNode *head) {

    auto tail = head;
    auto prev_tail = head;

    while (tail->next != nullptr) {
      prev_tail = tail;
      tail = tail->next;
    }

    prev_tail = tail->next;

    return head;
  }
};
