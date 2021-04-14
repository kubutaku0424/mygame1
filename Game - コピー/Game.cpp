
#include "Game.h"
#include "SceneMgr.h"
#include "DxLib.h"

static int background;
int count;
int move_x;
int move_y;


//������
void Game_Initialize() {
    background = LoadGraph("image/stone.jpg");    //�摜�̃��[�h

}

//�I������
void Game_Finalize() {
    
}

//�X�V
void Game_Update() {
    if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) { //Esc�L�[��������Ă�����
        SceneMgr_ChangeScene(eScene_Menu);//�V�[�������j���[�ɕύX
    }
    count++;
    if (count % 10 == 0) {
       
        
        
        move_x++;
        



        move_y++;

        count = 0;
    }
}

//�`��
void Game_Draw() {

    DrawModiGraph(0-move_x, 0-move_y, 320-move_x, 240-move_y,320-move_x,240+move_y,0-move_x,480+move_y,background,TRUE);

    DrawBoxAA(300.0f, 220.0f, 340.0f, 260.0f, GetColor(255, 255, 255),false);
    DrawLineAA(0.0f, 0.0f, 300.0f, 220.0f, GetColor(255, 255, 255));
    DrawLineAA(0.0f, 480.0f, 300.0f, 260.0f, GetColor(255, 255, 255));
    DrawLineAA(640.0f, 480.0f, 340.0f, 260.0f, GetColor(255, 255, 255));
    DrawLineAA(640.0f, 0.0f, 340.0f, 220.0f, GetColor(255, 255, 255));
    DrawString(0, 0, "�Q�[����ʂł��B", GetColor(255, 255, 255));
    DrawString(0, 20, "Esc�L�[�������ƃ��j���[��ʂɖ߂�܂��B", GetColor(255, 255, 255));
}