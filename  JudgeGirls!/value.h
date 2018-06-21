int gcd(int a, int b);
int gcd(int a, int b)
{
	while(a % b != 0){
		int temp;
		temp = a % b;
		a = b;
		b = temp;
		}
	return b;
	}
int value(int type, int width, int height, int length)
{
	int earness = 0, res_value, temp;
	switch(type){
		case 79:
			res_value = 30;
			break;
		case 47:
			res_value = 10;
			break;
		case 29:
			res_value = 4;
			break;
        case 82:
			res_value = 5;
			break;
        case 26:
			res_value = 3;
			break;
		case 22:
			res_value = 9;
			break;
		default:
			return -1;
		}
	if(width <= 0 || height <= 0 || length <= 0) return -2;
    temp = gcd(width, height);
	temp = gcd(temp, length);
	earness = width * height * length * temp * temp * temp * res_value;
	return earness;
	}

