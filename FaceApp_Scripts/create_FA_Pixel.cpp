#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <utility>

using namespace std;

size_t screen_cnt = 10;
string DEVICE = "HT75T0200795";
string RETURN = "adb -s HT75T0200795 shell input tap 100 160\nsleep 1\n";
string SWIPE_RET = "adb -s HT75T0200795 shell input swipe 200 2000 1250 2000 80\nsleep 1\n";
string APPLY = "adb -s HT75T0200795 shell input tap 1300 2315\nsleep 3\n";
string SAVE = "adb -s HT75T0200795 shell input tap 1360 160\nsleep 2\n";

vector<string> initImgs(){
    vector<string> imgs;
    string GALLARY = "adb -s HT75T0200795 shell input tap 225 2250\nsleep 1\nadb -s HT75T0200795 shell input tap 400 160\nsleep 1\nadb -s HT75T0200795 shell input tap 400 700\nsleep 1\n";
    string SWIPE_GAL = "adb -s HT75T0200795 shell input swipe 700 2000 700 1000 176\nsleep 1\n";
    string IMG0 = "adb -s HT75T0200795 shell input tap 240 353\nsleep 7\n";
    string IMG1 = "adb -s HT75T0200795 shell input tap 720 353\nsleep 7\n";
    string IMG2 = "adb -s HT75T0200795 shell input tap 1200 353\nsleep 7\n";
    string IMG3 = "adb -s HT75T0200795 shell input tap 240 833\nsleep 7\n";
    string IMG4 = "adb -s HT75T0200795 shell input tap 720 833\nsleep 7\n";
    string IMG5 = "adb -s HT75T0200795 shell input tap 1200 833\nsleep 7\n";
    string IMG6 = "adb -s HT75T0200795 shell input tap 240 1313\nsleep 7\n";
    string IMG7 = "adb -s HT75T0200795 shell input tap 720 1313\nsleep 7\n";
    string IMG8 = "adb -s HT75T0200795 shell input tap 1200 1313\nsleep 7\n";
    string IMG9 = "adb -s HT75T0200795 shell input tap 240 1793\nsleep 7\n";
    string IMG10 = "adb -s HT75T0200795 shell input tap 720 1793\nsleep 7\n";
    string IMG11 = "adb -s HT75T0200795 shell input tap 1200 1793\nsleep 7\n";
    string IMG12 = "adb -s HT75T0200795 shell input tap 240 2273\nsleep 7\n";
    string IMG13 = "adb -s HT75T0200795 shell input tap 720 2273\nsleep 7\n";
    string IMG14 = "adb -s HT75T0200795 shell input tap 1200 2273\nsleep 7\n";
    vector<string> img{IMG0, IMG1, IMG2, IMG3, IMG4, IMG5, IMG6, IMG7, IMG8, IMG9, IMG10, IMG11, IMG12, IMG13, IMG14};

    for(size_t i = 1; i < screen_cnt; i++){
        for(size_t j = 0; j < 15; j++){
            // GALLARY + SWIPE_GAL + IMG_n
            img.push_back(SWIPE_GAL + img[(i-1)*15+j]);
        }
    }
    for(size_t i = 0; i < img.size(); i++){
        imgs.push_back(GALLARY + img[i]);
    }
    return imgs;
}

vector<vector<string>> initOpns(){
    
    string OP1_ = "adb -s HT75T0200795 shell input tap 140 2050\nsleep 1\n";
    string OP2_ = "adb -s HT75T0200795 shell input tap 420 2050\nsleep 1\n";
    string OP3_ = "adb -s HT75T0200795 shell input tap 700 2050\nsleep 1\n";
    string OP4_ = "adb -s HT75T0200795 shell input tap 980 2050\nsleep 1\n";
    string OP5_ = "adb -s HT75T0200795 shell input tap 1250 2050\nsleep 1\n";
    string OP6_ = "adb -s HT75T0200795 shell input swipe 1000 2050 300 2050 180\nsleep 1\nadb -s HT75T0200795 shell input tap 140 2050\nsleep 1\n";
    string OP7_ = "adb -s HT75T0200795 shell input swipe 1000 2050 300 2050 180\nsleep 1\nadb -s HT75T0200795 shell input tap 420 2050\nsleep 1\n";
    string OP8_ = "adb -s HT75T0200795 shell input swipe 1000 2050 300 2050 180\nsleep 1\nadb -s HT75T0200795 shell input tap 700 2050\nsleep 1\n";

    string OP_0 = "adb -s HT75T0200795 shell input tap 160 1970\nsleep 3\n";
    string OP_1 = "adb -s HT75T0200795 shell input tap 500 1970\nsleep 3\n";
    string OP_2 = "adb -s HT75T0200795 shell input tap 830 1970\nsleep 3\n";
    string OP_3 = "adb -s HT75T0200795 shell input tap 1170 1970\nsleep 3\n";
    string OP_4 = "adb -s HT75T0200795 shell input tap 1420 1970\nsleep 3\n";
    string OP_5 = "adb -s HT75T0200795 shell input swipe 800 1970 320 1970 100\nsleep 1\nadb -s HT75T0200795 shell input tap 300 1970\nsleep 3\n";
    string OP_6 = "adb -s HT75T0200795 shell input swipe 800 1970 320 1970 100\nsleep 1\nadb -s HT75T0200795 shell input tap 610 1870\nsleep 3\n";
    string OP_7 = "adb -s HT75T0200795 shell input swipe 800 1970 320 1970 100\nsleep 1\nadb -s HT75T0200795 shell input tap 930 1870\nsleep 3\n";
    string OP_8 = "adb -s HT75T0200795 shell input swipe 800 1970 320 1970 100\nsleep 1\nadb -s HT75T0200795 shell input tap 1260 1870\nsleep 3\n";

    string op0_0 = SAVE + RETURN;
    vector<string> op0s{op0_0};

    string op1_0 = OP1_ + SWIPE_RET + OP_0;
    string op1_1 = OP1_ + SWIPE_RET + OP_1;
    string op1_2 = OP1_ + SWIPE_RET + OP_2;
    string op1_3 = OP1_ + SWIPE_RET + OP_3;
    string op1_4 = OP1_ + SWIPE_RET + OP_4;
    vector<string> op1s{op1_0, op1_1, op1_2, op1_3, op1_4};

    string op2_0 = OP2_ + SWIPE_RET + OP_0;
    string op2_1 = OP2_ + SWIPE_RET + OP_1;
    string op2_2 = OP2_ + SWIPE_RET + OP_2;
    string op2_3 = OP2_ + SWIPE_RET + OP_3;
    string op2_4 = OP2_ + SWIPE_RET + OP_4;
    vector<string> op2s{op2_0, op2_1, op2_2, op2_3, op2_4};

    string op3_0 = OP3_ + SWIPE_RET + OP_0;
    string op3_1 = OP3_ + SWIPE_RET + OP_1;
    string op3_2 = OP3_ + SWIPE_RET + OP_2;
    string op3_3 = OP3_ + SWIPE_RET + OP_3;
    string op3_4 = OP3_ + SWIPE_RET + OP_4;
    vector<string> op3s{op3_0, op3_1, op3_2, op3_3, op3_4};

    string op4_0 = OP4_ + SWIPE_RET + OP_0;
    string op4_1 = OP4_ + SWIPE_RET + OP_1;
    string op4_2 = OP4_ + SWIPE_RET + OP_2;
    string op4_3 = OP4_ + SWIPE_RET + OP_3;
    string op4_4 = OP4_ + SWIPE_RET + OP_4;
    string op4_5 = OP4_ + SWIPE_RET + OP_5;
    vector<string> op4s{op4_0, op4_1, op4_2, op4_3, op4_4, op4_5};

    string op5_0 = OP5_ + SWIPE_RET + OP_0;
    string op5_1 = OP5_ + SWIPE_RET + OP_1;
    string op5_2 = OP5_ + SWIPE_RET + OP_2;
    string op5_3 = OP5_ + SWIPE_RET + OP_3;
    string op5_4 = OP5_ + SWIPE_RET + OP_4;
    string op5_5 = OP5_ + SWIPE_RET + OP_5;
    string op5_6 = OP5_ + SWIPE_RET + OP_6;
    string op5_7 = OP5_ + SWIPE_RET + OP_7;
    string op5_8 = OP5_ + SWIPE_RET + OP_8;
    vector<string> op5s{op5_0, op5_1, op5_2, op5_3, op5_4, op5_5, op5_6, op5_7, op5_8};

    string op6_0 = OP6_ + SWIPE_RET + OP_0;
    string op6_1 = OP6_ + SWIPE_RET + OP_1;
    string op6_2 = OP6_ + SWIPE_RET + OP_2;
    vector<string> op6s{op6_0, op6_1, op6_2};

    string op7_0 = OP7_ + SWIPE_RET + OP_0;
    string op7_1 = OP7_ + SWIPE_RET + OP_1;
    string op7_2 = OP7_ + SWIPE_RET + OP_2;
    string op7_3 = OP7_ + SWIPE_RET + OP_3;
    string op7_4 = OP7_ + SWIPE_RET + OP_4;
    vector<string> op7s{op7_0, op7_1, op7_2, op7_3, op7_4};

    string op8_0 = OP8_ + SWIPE_RET + OP_0;
    string op8_1 = OP8_ + SWIPE_RET + OP_1;
    string op8_2 = OP8_ + SWIPE_RET + OP_2;
    string op8_3 = OP8_ + SWIPE_RET + OP_3;
    string op8_4 = OP8_ + SWIPE_RET + OP_4;
    string op8_5 = OP8_ + SWIPE_RET + OP_5;
    string op8_6 = OP8_ + SWIPE_RET + OP_6;
    string op8_7 = OP8_ + SWIPE_RET + OP_7;
    string op8_8 = OP8_ + SWIPE_RET + OP_8;
    vector<string> op8s{op8_0, op8_1, op8_2, op8_3, op8_4, op8_5, op8_6, op8_7, op8_8};
    
    vector<vector<string>> opns{op0s, op1s, op2s, op3s, op4s, op5s, op6s, op7s, op8s};
    return opns;
}

vector<pair<int, int>> rng(vector<int> sizes, int seed){
    srand(seed);
    int i0 = rand() % (sizes.size()-1) + 1;
    int i1 = rand() % (sizes.size()-1) + 1;
    while(i1 == i0) i1 = rand() % (sizes.size()-1) + 1;

    int i2 = rand() % (sizes.size()-1) + 1;
    int i3 = rand() % (sizes.size()-1) + 1;
    while(i3 == i2) i3 = rand() % (sizes.size()-1) + 1;
    int i4 = rand() % (sizes.size()-1) + 1;
    while(i4 == i3 || i4 == i2) i4 = rand() % (sizes.size()-1) + 1;
    int i5 = rand() % (sizes.size()-1) + 1;
    while(i5 == i4 || i5 == i3 || i5 == i2) i5 = rand() % (sizes.size()-1) + 1;
    pair<int, int> p0 (i0, rand() % (sizes[i0]-1) + 1);
    pair<int, int> p1 (i1, rand() % (sizes[i1]-1) + 1);
    pair<int, int> p2 (i2, rand() % (sizes[i2]-1) + 1);
    pair<int, int> p3 (i3, rand() % (sizes[i3]-1) + 1);
    pair<int, int> p4 (i4, rand() % (sizes[i4]-1) + 1);
    pair<int, int> p5 (i5, rand() % (sizes[i5]-1) + 1);
    vector<pair<int, int>> result {p0, p1, p2, p3, p4, p5};
    return result;
}

vector<string> initOps(vector<string> imgs, vector<vector<string>> opns){
    vector<string> ops;
    vector<int> sizes;
    for(size_t i = 0; i < opns.size(); i++){
        sizes.push_back(opns[i].size());
    }
    for(size_t count = 0; count < imgs.size(); count++){
        vector<pair<int, int>> random = rng(sizes, count+15486);
        string op;
        op += opns[0][0];
        op += SWIPE_RET + opns[random[0].first][random[0].second] + APPLY + SAVE + RETURN;
        op += SWIPE_RET + opns[random[0].first][0] + APPLY;
        op += SWIPE_RET + opns[random[1].first][random[1].second] + APPLY + SAVE + RETURN;
        op += SWIPE_RET + opns[random[1].first][0] + APPLY;

        op += SWIPE_RET + opns[random[2].first][random[2].second] + APPLY;
        op += SWIPE_RET + opns[random[3].first][random[3].second] + APPLY;
        op += SWIPE_RET + opns[random[4].first][random[4].second] + APPLY;
        op += SWIPE_RET + opns[random[5].first][random[5].second] + APPLY + SAVE + RETURN;

        ops.push_back(op);
    }
    return ops;
}

int main(){
    vector<string> imgs = initImgs();
    vector<vector<string>> opns = initOpns();
    vector<string> ops = initOps(imgs, opns);

    for(size_t i = 0; i < imgs.size(); i++){
        cout << imgs[i];
        cout << ops[i];
        cout << RETURN;
        cout << "echo " << DEVICE << ": Finished img " << i << endl;
    }
    cout << endl;
}
