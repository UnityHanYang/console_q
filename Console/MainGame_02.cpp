#include "MainGame_02.h"

#define EXAMPLE_TYPE_STRUCT         1
#define EXAMPLE_TYPE_ENUM           2
#define EXAMPLE_TYPE_UNION          3
#define EXAMPLE_TYPE_CLASS          4

#define EXAMPLE_TYPE           EXAMPLE_TYPE_CLASS

MainGame_02::MainGame_02()
{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT

	// ����
	// C ��Ÿ��
	//struct tagFamily Family;
	/*
	1. ����ü�� ���� ������ �������� ������ ������ ���� �����Ѵ�.

	2. ����� �� �ְ� �޸𸮿� �÷��� �ϴ� ����ȭ ��Ų��.

	3. �������δ� �ʱ�ȭ �Ѵ�.
	�� �ɹ� ������ ������ ���� .�� �̿��Ѵ�.

	- ���� ����ü�� �ʱ�ȭ�� �迭�� �ʱ�ȭ�� ���� ������ ���� ������� ����ü �ʵ忡 �Ҵ�ȴ�.

	*/

	// C++
	//tagFamily Family;
	// �� �� ����� ���� ȣȯ�� �� �ȴ�.

	human.name = "�ΰ�";
	human.age = 18;
	human.height = 174;
	human.wedding = false;
	human.weight = 69;

	cout << "�̸�: " << human.name << "\n"
		<< "����: " << human.age << "\n"
		<< "Ű: " << human.height << "\n"
		<< "��ȥ: " << human.wedding << "\n"
		<< "����: " << human.age << "\n"
		<< "������: " << human.weight << "\n";

	cout << '\n';

	// ����ü�� ����: ����꼺�� ����.

	// ����� ������ ��� private�̾ ����� �� �ִ�.
	tagPlayer player;
	player.hp = 100;
	player.mp = 50;
	player.att = 10;
	player.def = 5;
	player.speed = 10.5f;

	// ��µ� ����....

	cout << '\n';

	tagUnit marin;
	marin.name = "����";
	marin.hp = 100;
	marin.att = 5.5f;
	cout << boolalpha;
	// boolalpha:  bool -> 0, 1 -> T / F ��ȯ
	marin.die = false;

	// �� ������ �ƴϾ��� ? -> �迭
	tagUnit zergling = { "���۸�", 50, 50.f, true };

	// ������ �� ����������
	// �� ���������� �� (������ ��������)
	tagPlayer arrPlayer[4] =
	{
		{100, 100, 100, 100, 100},
		{90, 90, 90, 90, 90},
		{80, 80, 80, 80, 80},
		{70, 70, 70, 70 , 70}
	};

	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << "��° �÷��̾�" << endl;

		cout << "ä��: " << arrPlayer[i].hp << endl; // 100, 90, 80, 70�� ����
		cout << "========" << endl;
	}
	

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_ENUM

	// �ſ� ������.
	// �� �̸� �浹 => namespace, class 
	// ���������� class�� �����ϴ�.
	cout << "��: " << BLACK << endl; // ��ü �������� ��Ģ�� ����
	// �����ҳ� �����ؼ� ���� ���, ������ �� �ִ�.
	//	C++11���� enum class�� �� ������ �ذ��� �ش�.

	m_motion = L_WALK;

	switch (m_motion)
	{
	case R_WALK:
		cout << "������ �ȱ�" << endl;
		break;
	case L_WALK:
		cout << "���� �ȱ�" << endl;
		break;
	case R_RUN:
		cout << "������ �ٱ�" << endl;
		break;
	case L_RUN:
		cout << "���� �ٱ�" << endl;
		break;
	}

	if (m_motion == L_WALK)
	{
		m_motion = R_RUN;

		if (m_motion == R_RUN)
		{
			cout << "���������� �ٰ� �ִ�" << endl;
		}
	}

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_UNION
	
/*
����ü vs ����ü

- ����ü�� ����ü�� �����ϴ� ������ �ʵ尡 ���� ������ �޸𸮸� ����ϴ� �ݸ鿡
����ü�� �ϳ��� �޸𸮸� ������ ������ �ʵ尡 ���� �����ϴ� ������ ���Ѵ�.

- ����ü�� ũ��� �ɹ��� �� ���� ū �ɹ� ������ ũ��� ������ �ȴ�.

- �׷��� ������ ����ü������ �� �ʵ��� ���� �Ҵ� �� ��� ���������� �Ҵ��� �ʵ��� ���� ��ȿ�ϴ�.

�� �����͸� �����ϰ� ���� �� �� ���� ���ø����� ����ü

*/

stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_fData = 3.14f;

cout << "== ����ü ==" << endl;

cout << "���� ������: " << stData.m_nDataA << endl; // ������ ��
cout << "���� ������: " << stData.m_nDataB << endl; // ������ ��
cout << "�Ǽ� ������: " << stData.m_fData << endl; // 3.14f
// �� �Ʒ��� �ִ� ���� ���� �ΰ�, �� ���� �ִ� ����� ������ ���� �ȴ�.



#else

// Ŭ������ �⺻������ ��ø�� �����ϴ�.

class Time
{
public:
	int hour, min, sec;

	void setTime(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}

	void outTime()
	{
		printf("�ð��� %d:%d:%d �Դϴ�.\n", hour, min, sec);
	}
};

Time now;
now.setTime(19, 41, 40);
now.outTime();

#endif
}

MainGame_02::~MainGame_02()
{
}