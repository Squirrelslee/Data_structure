#include <bits/stdc++.h>
using namespace std;
/*结构体*/
struct Node
{
	double weight[10];
	double wb;
	double values;
	double t;
	double dev;//存每个节点的误差项
}input_layer[4], hidden_layer[10], output_layer[3];
 
struct temp
{
	double element[4];
	int title;
}ele[75];
 
/*全局变量*/
int num_input = 4;
int num_hidden = 10;
int num_output = 3;
double avg = 0;
double space = 0.01;//学习速率
double standard = 0;
int num = 0;//记录训练第几组数据
int num2 = 0;//记录测试数据第几组
int num_eq = 0;//预测值与答案相等的个数
int cmptit[75];//存title
double ans[10];
int snum = 0;
 
void judgement(temp ele[], Node output_layer[]) {
	if (ele[num].title == 0) {
		output_layer[0].t = 1;
		output_layer[1].t = 0;
		output_layer[2].t = 0;
	}
	else if (ele[num].title == 1) {
		output_layer[0].t = 0;
		output_layer[1].t = 1;
		output_layer[2].t = 0;
	}
	else if (ele[num].title == 2) {
		output_layer[0].t = 0;
		output_layer[1].t = 0;
		output_layer[2].t = 1;
	}//根据标签给y1y2y3赋值
}
 
/*初始化函数*/
void init(Node hidden_layer[], Node output_layer[]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 4; j++) {
			hidden_layer[i].weight[j] = (rand() % 200 - 100) / 100.0;
			//hidden_layer[i].weight[j] = 0.1;
		}
		hidden_layer[i].wb = 1;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			//output_layer[i].weight[j] = 0.1;
			output_layer[i].weight[j] = (rand() % 200 - 100) / 100.0;
		}
		output_layer[i].wb = 1;
	}
 
}
/*计算sigmoid*/
void Cnt_sigmoid(Node hidden_layer[], int num_hidden, Node input_layer[], int num_input) {
	double m;
	for (int i = 0; i < num_hidden; i++) {
		m = 0;
		for (int j = 0; j < num_input; j++) {
			m += hidden_layer[i].weight[j] * input_layer[j].values;
		}
		hidden_layer[i].values = 1.0 / (1 + exp(-(m + hidden_layer[i].wb)));
	}
}
 
 
/*计算输出层的误差项*/
void Cnt_Output_deviation(Node output_layer[], int num_output) {
	for (int i = 0; i < num_output; i++) {
		output_layer[i].dev = output_layer[i].values*
			(1 - output_layer[i].values)*
			(output_layer[i].t - output_layer[i].values);
	}
}
 
/*对于隐藏层节点*/
void Cnt_Hidden_deviation(Node hidden_layer[], int num_hidden, Node output_layer[], int num_output) {
	double m;
	for (int i = 0; i < num_hidden; i++) {
		m = 0;
		for (int j = 0; j < num_output; j++) {
			m += output_layer[j].weight[i] * output_layer[j].dev;
		}
		hidden_layer[i].dev = hidden_layer[i].values*
			(1 - hidden_layer[i].values)*m;
	}
}
/*更新权值*/
void re_nodeWeight(Node output_layer[], int num_output, Node hidden_layer[], int num_hidden) {
	for (int i = 0; i < num_output; i++) {
		for (int j = 0; j < num_hidden; j++) {
			output_layer[i].weight[j] = output_layer[i].weight[j] +
				space*output_layer[i].dev*hidden_layer[j].values;
		}
	}
}
 
void re_b_Weight(Node output_layer[], int num_output) {
	for (int i = 0; i < num_output; i++) {
		output_layer[i].wb = output_layer[i].wb + space*output_layer[i].dev;
	}
}
 
/*训练*/
void Train(temp ele[]) {
 
	for (int y = 0; y < 75; y++) {
		judgement(ele, output_layer);
 
		//赋值input_layer层数据
		for (int i = 0; i<4; i++)
			input_layer[i].values = ele[num].element[i];
		//初始化权值和偏置项
		//init(hidden_layer, output_layer);
		//计算隐藏层的a值
		Cnt_sigmoid(hidden_layer, num_hidden, input_layer, num_input);
		//计算输出层的y值
		Cnt_sigmoid(output_layer, num_output, hidden_layer, num_hidden);
		//计算输出层的误差项
		Cnt_Output_deviation(output_layer, num_output);
		//计算隐藏层误差项
		Cnt_Hidden_deviation(hidden_layer, num_hidden, output_layer, num_output);
 
		//更新输出层权重
		re_nodeWeight(output_layer, num_output, hidden_layer, num_hidden);
		//更新隐藏层权重
		re_nodeWeight(hidden_layer, num_hidden, input_layer, num_input);
		//更新偏置
		re_b_Weight(output_layer, num_output);
		re_b_Weight(hidden_layer, num_hidden);
 
		num++;
	}
}
void Cmp_Y(Node output_layer[], int num_output) {
	double max = -1;
	int tit = 0;
	for (int i = 0; i < num_output; i++) {
		if (max <= output_layer[i].values) {
			max = output_layer[i].values;
			tit = i;//标记y最大的位置
		}
	}
	for (int i = 0; i < num_output; i++) {
		if (tit == i)
			output_layer[i].t = 1;
		else
			output_layer[i].t = 0;
	}
	if (output_layer[0].t == 1 && output_layer[1].t == 0 && output_layer[2].t == 0) {
		cmptit[num2] = 0;
	}
	else if (output_layer[0].t == 0 && output_layer[1].t == 1 && output_layer[2].t == 0) {
		cmptit[num2] = 1;
	}
	else if (output_layer[0].t == 0 && output_layer[1].t == 0 && output_layer[2].t == 1) {
		cmptit[num2] = 2;
	}
}
/*测试*/
void Test(temp ele[]) {
	//赋值input_layer层数据
	for (int i = 0; i<4; i++)
		input_layer[i].values = ele[num2].element[i];
	//计算隐藏层的a值
	Cnt_sigmoid(hidden_layer, num_hidden, input_layer, num_input);
	//计算输出层的y值
	Cnt_sigmoid(output_layer, num_output, hidden_layer, num_hidden);
 
	//标记最大的y cmptit中存标签
	Cmp_Y(output_layer, num_output);
 
	num2++;
 
}
void Cmp_num() {
	for (int i = 0; i < 75; i++) {
		if (cmptit[i] == ele[i].title) {
			//cout << "预测=" << cmptit[i] << "  实际值=" << ele[i].title << endl;
			num_eq++;
		}
		//else
		//	cout << "---------------------------------预测=" << cmptit[i] << "  实际值=" << ele[i].title << endl;
	}
	double emmmm = (double)(num_eq) / 75.0;
	cout << "正确率：" << emmmm << endl;
	ans[snum] = emmmm;
	snum++;
	avg += emmmm;
}
 
int main() {
	//初始化权值和偏置项
	for (int y = 0; y < 10; y++) {
		cout << "第" << y + 1 << "次独立训练" << endl;
		freopen("iris-training.csv", "r", stdin);
		for (int i = 0; i < 75; i++) {
			cin >> ele[i].element[0] >> ele[i].element[1] >> ele[i].element[2] >> ele[i].element[3] >> ele[i].title;
		}
		int number = 0;
		init(hidden_layer, output_layer);
 
		for (int i = 0; i < 900; i++) {
			Train(ele);
			num = 0;
		}
 
		//训练测试
		freopen("iris-test.csv", "r", stdin);
		for (int i = 0; i < 75; i++) {
			cin >> ele[i].element[0] >> ele[i].element[1] >> ele[i].element[2] >> ele[i].element[3] >> ele[i].title;
		}//存储训练数据
		for (int i = 0; i<75; i++)
			Test(ele);
		Cmp_num();
		num = 0;//记录训练第几组数据
		num2 = 0;//记录测试数据第几组
		num_eq = 0;//预测值与答案相等的个数
	}
	cout << "平均准确率：" << avg / 10.0 << endl;
	double mm = avg / 10.0;
	for (int i = 0; i < 10; i++) {
		standard += (ans[i] - mm)*(ans[i] - mm);
	}
	cout << "标准差：" << sqrt(standard) << endl;
	return 0;
}