
#include "Game.h"
#include "SceneMgr.h"
#include "DxLib.h"

static int background;
int count;
int move_x;
int move_y;


//初期化
void Game_Initialize() {
    background = LoadGraph("image/stone.jpg");    //画像のロード

}

//終了処理
void Game_Finalize() {
    
}

//更新
void Game_Update() {
    if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) { //Escキーが押されていたら
        SceneMgr_ChangeScene(eScene_Menu);//シーンをメニューに変更
    }
    count++;
    if (count % 10 == 0) {
       
        
        
        move_x++;
        



        move_y++;

        count = 0;
    }
}

//描画
void Game_Draw() {

    DrawModiGraph(0-move_x, 0-move_y, 320-move_x, 240-move_y,320-move_x,240+move_y,0-move_x,480+move_y,background,TRUE);

    DrawBoxAA(300.0f, 220.0f, 340.0f, 260.0f, GetColor(255, 255, 255),false);
    DrawLineAA(0.0f, 0.0f, 300.0f, 220.0f, GetColor(255, 255, 255));
    DrawLineAA(0.0f, 480.0f, 300.0f, 260.0f, GetColor(255, 255, 255));
    DrawLineAA(640.0f, 480.0f, 340.0f, 260.0f, GetColor(255, 255, 255));
    DrawLineAA(640.0f, 0.0f, 340.0f, 220.0f, GetColor(255, 255, 255));
    DrawString(0, 0, "ゲーム画面です。", GetColor(255, 255, 255));
    DrawString(0, 20, "Escキーを押すとメニュー画面に戻ります。", GetColor(255, 255, 255));
}