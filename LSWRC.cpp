class Solution {
public:
    void showStr(string str)
    {
        for(char cStr : str)
        {
            cout<<cStr<<"-";
        };
        cout<<"end"<<endl;
    };

    int lengthOfLongestSubstring(string s) 
    {
        int max = 0, i = 0;
        string tempStr;
        if (!s.empty())
            {
                cout<<"s :"<<endl;
                showStr(s);

                cout<<"first->"<<s.at(0)<<"<-first\n";

                tempStr = s.at(0); // присваиваем первый элемент строки 
                i = 1; // счетчик делаем 1
                s.erase(0,1);// удаляем первый элемент строки

                cout<<"tempStr :"<<endl;
                showStr(tempStr);

                cout<<"s :"<<endl;
                showStr(s);


                for(char cs : s) // cs - char string (global)
                    {
                        cout<<"->"<<cs<<"<-\n";
                        if (int(tempStr.find(cs)) < 0) // если символ не найден то запоминаем его и увеличиваем счетчик 
                            {
                                cout<<"no one - "<<cs<<endl;
                                tempStr.push_back(cs);
                                i++;
                                showStr(tempStr);
                            } else {cout<<"found - "<<cs<<" on pos "<<tempStr.find(cs)<<endl;};
                    };
            }        
        return max;
    };
};
