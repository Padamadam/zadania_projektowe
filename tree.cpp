// --------- TASK 4 ---------
// Create Tree class which will be able to generate string trees (like folders structure)
// example of usage:
 
// int main(...)
// {
//    Tree* root = new Tree("tree name");
//    Tree* galaz1 = root->AddSub("galaz 1"); // this function creates a child Tree object and returns pointer to it
//    Tree* galaz2 = root->AddSub("galaz 2");
//    Tree* galaz3 = root->AddSub("galaz 3");
//    Tree* galaz1_1 = galaz1->AddSub("galaz 1.1");
//    Tree* galaz2_1 = galaz2->AddSub("galaz 2.1");
//    Tree* galaz2_2 = galaz2->AddSub("galaz 2.2");
//    Tree* galaz2_1_2 = galaz2_1->AddSub("galaz 2.1.2");
   // after execution
//    root->print(0); // in parameter pass initial indent for the object
   // Expected result:
   // tree name
   //    galaz 1
   //       galaz 1.1
   //    galaz 2
   //       galaz 2.1
   //        galaz 2.1.1
   //       galaz 2.2
   //    galaz 3
   // print works recursive, where indent is passed

//    uint32 rootChildrenCnt = root->GetSubCount(); // result shall be 3
//    uint32 galaz1childrenCount = galaz1->GetSubCount(); // result shall be 1
//    uint32 countOfAllChildren = root->GetAllSubCount(); // result shall be 7 (recursive children counting)

//    root->Del(1); // will remove galaz_2 with all it's children (recursive), so in a result only galaz_1 and galaz_3 will stay
//    uint32 rootChildrenCnt _v2 = root->GetSubCount(); // result shall be 2
//    uint32 countOfAllChildren _v2 = root->GetAllSubCount(); // result shall be 3 (recursive children counting)
//    delete(root); // deleting root shall remove all children (recursive) and clean memory
// }

#include <iostream>
#include <vector>
using namespace std;

class Tree{
    private:
        string name;
        vector<Tree*> branches;
        int branches_num = 0;

    public:
        Tree(string n){
            name = n;
        }

        Tree* AddSub(string n){
            Tree* branch = new Tree(n);
            branches_num++;
            branches.push_back(branch);
            return branch;
        }

        void print(int indent){
            if(indent == 0) {
                cout << name << endl;
            }
            cout << "\t";
            Tree temp = *branches[indent];
            cout << temp.name << endl;
            for(int i=0; i < temp.branches_num; i++){
                cout << "\t\t";
                Tree sub_temp = *temp.branches[i];
                cout << sub_temp.name << endl;
            }

            if(indent > this->branches_num) return;

            indent++;
            print(indent);
        }
};

int main(){
    Tree* root = new Tree("tree name");
    Tree* galaz1 = root->AddSub("galaz 1"); // this function creates a child Tree object and returns pointer to it
    Tree* galaz2 = root->AddSub("galaz 2");
    Tree* galaz3 = root->AddSub("galaz 3");
    Tree* galaz1_1 = galaz1->AddSub("galaz 1.1");
    Tree* galaz2_1 = galaz2->AddSub("galaz 2.1");
    Tree* galaz2_2 = galaz2->AddSub("galaz 2.2");
    Tree* galaz2_1_2 = galaz2_1->AddSub("galaz 2.1.2");

    root->print(0);
    cout << "end of print" << endl;
    return 0;
}
