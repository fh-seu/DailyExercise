/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
#include<stack>

using namespace std;

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        stack<ListNode*> nodes;
        
        vector<int> Res;
        
        ListNode* pNode = head;
        
        while (pNode != nullptr)
        {
            nodes.push(pNode);
            pNode = pNode -> next;
        }
        
        while (!nodes.empty())
        {
        pNode = nodes.top();
        Res.push_back(pNode -> val);
        nodes.pop();
        }
        
        return Res;
    }
};