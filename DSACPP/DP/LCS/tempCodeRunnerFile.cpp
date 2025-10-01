int rcrs(string str, string strr, int i, int j)
// {

//     if (i < 0 || j < 0)
//         return 0;
//     if (str[i] == strr[j])
//         return 1 + rcrs(str, strr, i - 1, j - 1);
//     else
//     {
//         return max(rcrs(str, strr, i - 1, j), rcrs(str, strr, i, j - 1));
//     }
// }