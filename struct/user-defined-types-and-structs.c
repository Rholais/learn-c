#include <stdio.h>
#include <stdalign.h>

///////////////////////////////////////
// 用户自定义类型和结构
///////////////////////////////////////

// Typedefs可以创建类型别名
typedef int my_type;
my_type my_type_var = 0;

// struct是数据的集合，成员依序分配，按照
// 编写的顺序
struct rectangle 
{
	int width;
	int height;
};

struct X
{
	short s;	/* 2 bytes */
			/* 2 padding bytes */
	int i;		/* 4 bytes */
	char c;	/* 1 byte */
			/* 3 padding bytes */
};

struct Y
{
	int i;		/* 4 bytes */
	char c;	/* 1 byte */
			/* 1 padding byte */
	short s;	/* 2 bytes */
};

struct Z
{
	int i;		/* 4 bytes */
	short s;	/* 2 bytes */
	char c;	/* 1 byte */
			/* 1 padding byte */
};

int main()
{

	printf("sizeof(struct X) = %lu\n", sizeof(struct X));
	printf("alignof(struct X) = %lu\n", alignof(struct X));
	printf("sizeof(struct Y) = %lu\n", sizeof(struct Y));
	printf("alignof(struct Y) = %lu\n", alignof(struct Y));
	printf("sizeof(struct Z) = %lu\n", sizeof(struct Z));
	printf("alignof(struct Z) = %lu\n", alignof(struct Z));

	struct rectangle my_rec;

	// 通过 . 来访问结构中的数据
	my_rec.width = 10;
	my_rec.height = 20;

	// 你也可以声明指向结构体的指针
	struct rectangle *my_rec_ptr = &my_rec;

	// 通过取消引用来改变结构体的成员...
	(*my_rec_ptr).width = 30;

	// ... 或者用 -> 操作符作为简写提高可读性
	my_rec_ptr->height = 10; // Same as (*my_rec_ptr).height = 10;

	return 0;
}

// 你也可以用typedef来给一个结构体起一个别名
typedef struct rectangle rect;

int r_area(rect r)
{
	return r.width * r.height;
}

// 如果struct较大，你可以通过指针传递，避免
// 复制整个struct。
int pr_area(const rect *r)
{
	return r->width * r->height;
}
