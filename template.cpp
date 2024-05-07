// template.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

using namespace std;
template <typename TYPE,typename TYPEA,typename TYPEB>
TYPE triangleArea(TYPEA hight, TYPEB wide) {
	return (hight * wide) / static_cast<TYPE>(2);
}

int main()
{
	int i_hight = 4;
	int i_wide = 6;
	cout << "三角形の面積は" << triangleArea<int>(i_hight, i_wide) << endl;
	double d_hight = 3.5;
	double d_wide = 4.5;
	cout << "三角形面積:" << triangleArea<double>(d_hight, d_wide) << endl;

	cout << "三角形の面積は" << triangleArea<int, double>(i_hight, d_wide) << endl;

	cout << "三角形面積:" << triangleArea<int>(10.2f, 2.3f) << endl;


}


// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
