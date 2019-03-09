//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//using namespace std;
//using uint = int;
//void func() {
//    int n;
//    cin >> n;
//    n--;
//
//    map<int,set<int>> graph;
//    graph[1];
//    for (size_t i = 0; i < n; ++i)
//    {
//        int tmp;
//        cin >> tmp;
//        if (graph.find(tmp) == graph.end())
//        {
//            for (auto it = graph.begin(); it != graph.end(); ++it)
//            {
//                set<int>& node_set = it->second;
//                if (node_set.find(tmp) != node_set.end())
//                {
//                    node_set.erase(tmp);
//                }
//            }
//            graph[tmp].insert(i + 2);
//        }
//        else
//        {
//            graph[tmp].insert(i + 2);
//        }
//    }
//    for (auto it = graph.begin(); it != graph.end(); ++it)
//    {
//        if (it->second.size() < 3)
//        {
//            cout << "No\n";
//            return;
//        }
//    }
//    cout << "Yes\n";
//
//}
//    
//int main() {
//    func();
//    //system("pause");
//    return 0;
//}
//
