enum EnemyTipes {zombie,vampire,ghost,witch};
struct Enemy
{
	EnemyTipes type;
	char name;
	int health;
};

EnemyTipes randomenmy(EnemyTipes arr[],int length);