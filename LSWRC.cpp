class Solution {
public:    
    int lengthOfLongestSubstring(string s) 
    {
        int max = 0;
        string tempStr;
        if (!s.empty())
            {
                tempStr = s.at(0); // присваиваем первый элемент строки 
                s.erase(0,1);// удаляем первый элемент строки
                for(char cs : s) // cs - char of string s 
                    {
                        int pos = tempStr.find(cs); // если символ не уникален запоминаем его позицию в строке если нет то find вернет отрицательное число
                        tempStr.push_back(cs); // сразу запоминаем новй символ. 
                        if (pos >= 0) // если символ не уникален
                            {
                                cout<<"MAX = "<<max<<" lenght = "<<tempStr.size()<<endl;
                                if (max < (tempStr.size() - 1)) max = (tempStr.size() - 1); // запоминаем самую длинную подстроку (-1 потому что уже был выполнен push_back).
                                cout<<"MAX = "<<max<<" lenght = "<<tempStr.size()<<endl; 
                                tempStr.erase(0,pos+1); // оБрезаем строку до повторяющего символа (в памяти остаются только уникальные символы)
                            };
                    };
            };
        if (max < tempStr.size()) max = tempStr.size();  // запоминаем самую длинную подстроку (на случай если последний символ был уникальный)
        return max;
    };
};