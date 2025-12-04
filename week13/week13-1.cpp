//week13-1.cpp聖誕倒數寫程式Advent of Code 2025 第1天第1題
//Moodle 點擊 adventofcode.com 網址可看到黑底白字的題目
//在LeetCode的 My Playground 我的遊戲場,可以寫程式
//LeetCode 幫你把 #include 全都加好了,你不用寫 #include
//右下角 stdin 可以貼上你的程式 Input
//在AdentofCode.com 登入你的Github 帳號後便可以看到妳的專屬謎題Input
//貼到右下角 stdin 後, 在執行, 看你的答案是多少(每個人答案都不一樣
int main() {
    char c; //字母, 對應方向 L左轉 R右轉
    int d; //數字,要轉動幾格
    int now = 50;// 一開始密碼鎖,指向50
    int ans = 0; //轉動時, 有幾次停在 0 的地方?
    while (cin >> c >> d){//一直讀資料:讀自母，讀數字
        //if(c=='L') cout << "往左轉" << d << "格\n";
        //if(c=='R') cout << "往右轉" << d << "格\n";
        //把上面兩行的中文訊息註解掉
        if(c=='L') now = now - d; //減掉
        if(c=='R') now = now + d; //加上

        now = (now%100); //太大的，太小的,都限制在 0~99間
        //cout << "現在的刻度是: " << now << "\n";
        if(now==0) ans++;// 轉動時, 停在 0 的地方 (我們的通關密碼)
    }
    cout << "答案是: " << ans;
}
