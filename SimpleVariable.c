// 全局静态变量 - 初始化
static int g_s_init_var = 12;
// 全局静态变量 - 未初始化
static int g_s_uninit_var;

// 全局非静态变量 - 初始化
int g_init_var = 13;
// 全局非静态变量 - 未初始化
int g_uninit_var;

// 全局静态常量
static const int g_s_c_init_var = 122;
// 全局常量
const int g_c_init_var = 123;

int main(void) {
	// 非全局静态变量 - 初始化
	static int s_init_var = 14;
	// 非全局静态变量 - 未初始化
	static int s_uninit_var;

	// 非全局常量
	const int c_init_var = 144;

	// 非全局非静态变量 - 初始化
	int init_var = 15;
	// 非全局非静态变量 - 未初始化
	int uninit_var;

	return 0;
}
