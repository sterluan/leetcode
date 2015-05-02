struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if (!headA || !headB) return NULL;
		ListNode *p1 = headA, *p2 = headB, *last_p1 = NULL, *last_p2 = NULL;
		while (p1 != p2) {
			if (last_p1 && last_p2 && last_p1 != last_p2) return NULL;
			if (!p1->next) {
				last_p1 = p1;
				p1 = headB;
			}
			else p1 = p1->next;
			if (!p2->next) {
				last_p2 = p2;
				p2 = headA;
			}
			else p2 = p2->next;
		}
		return p1;
	}
};