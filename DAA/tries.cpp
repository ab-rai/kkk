//search and insert operations on Trie
#include <bits/stdc++.h>
#define SIZE 26
using namespace std;
struct TrieNode
{
    struct TrieNode *children[SIZE];
    bool isEndOfWord;
};
struct TrieNode *getNode(void)
{
    struct TrieNode *pNode =  new TrieNode;
    pNode->isEndOfWord = false;
    for (int i = 0; i < SIZE; i++)
        pNode->children[i] = NULL;
    return pNode;
}
void insert(struct TrieNode *root, string key)
{
    struct TrieNode *temp = root;
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!temp->children[index])
            temp->children[index] = getNode();
        temp = temp->children[index];
    }
    temp->isEndOfWord = true;
}
bool search(struct TrieNode *root, string key)
{
    struct TrieNode *temp = root;
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!temp->children[index])
            return false;
        temp = temp->children[index];
    }
    return (temp != NULL && temp->isEndOfWord);
}
int main()
{
    string keys[] = {"them", "a", "the",
                    "answer", "anything", "by",
                     "bye", "those" };
    int n = sizeof(keys)/sizeof(keys[0]);
    struct TrieNode *root = getNode();
    for (int i = 0; i < n; i++)
        insert(root, keys[i]);
    search(root, "those")? cout << "Yes Found\n" :
                         cout << "Not Found\n";
    search(root, "these")? cout << "Yes Found\n" :
                           cout << "Not Found\n";
    return 0;
}
