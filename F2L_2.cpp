#include <iostream>
using namespace std;

char cube[6][3][4];

char center[6];

void F()
{
    char temp, temp2, left, top, right, bottom;
    for (int r = 0; r < 3; r++)
    {
        left = cube[2][r][2];
        top = cube[4][2][2 - r];
        right = cube[3][2 - r][0];
        bottom = cube[5][0][r];

        temp = left;
        left = bottom;
        bottom = right;
        right = top;
        top = temp;

        cube[2][r][2] = left;
        cube[4][2][2 - r] = top;
        cube[3][2 - r][0] = right;
        cube[5][0][r] = bottom;
    }

    //front side
    for (int r = 0; r < 3 / 2; r++)
    {
        for (int c = r; c < 2 - r; c++)
        {
            temp2 = cube[0][r][c];
            cube[0][r][c] = cube[0][2 - c][r];
            cube[0][2 - c][r] = cube[0][2 - r][2 - c];
            cube[0][2 - r][2 - c] = cube[0][c][2 - r];
            cube[0][c][2 - r] = temp2;
        }
    }
    cout << "F ";
}

void Fi()
{
    char temp, temp2, left, top, right, bottom;
    for (int r = 0; r < 3; r++)
    {
        left = cube[2][r][2];
        top = cube[4][2][2 - r];
        right = cube[3][2 - r][0];
        bottom = cube[5][0][r];

        temp = left;
        left = top;
        top = right;
        right = bottom;
        bottom = temp;

        cube[2][r][2] = left;
        cube[4][2][2 - r] = top;
        cube[3][2 - r][0] = right;
        cube[5][0][r] = bottom;
    }

    //front side
    for (int r = 0; r < 3 / 2; r++)
    {
        for (int c = r; c < 2 - r; c++)
        {
            temp2 = cube[0][r][c];
            cube[0][r][c] = cube[0][c][2-r];
            cube[0][c][2-r] = cube[0][2 - r][2 - c];
            cube[0][2 - r][2 - c] = cube[0][2 - c][r];
            cube[0][2 - c][r] = temp2;
        }
    }
    cout << "Fi ";
}

void U()
{
    char temp, temp2, left, back, right, front;
    for (int r = 0; r < 3; r++)
    {
        left = cube[2][0][r];
        back = cube[1][0][r];
        right = cube[3][0][r];
        front = cube[0][0][r];

        temp = left;
        left = front;
        front = right;
        right = back;
        back = temp;

        cube[2][0][r] = left;
        cube[1][0][r] = back;
        cube[3][0][r] = right;
        cube[0][0][r] = front;
    }

    //top side
    for (int r = 0; r < 3 / 2; r++)
    {
        for (int c = r; c < 2 - r; c++)
        {
            temp2 = cube[4][r][c];
            cube[4][r][c] = cube[4][2 - c][r];
            cube[4][2 - c][r] = cube[4][2 - r][2 - c];
            cube[4][2 - r][2 - c] = cube[4][c][2 - r];
            cube[4][c][2 - r] = temp2;
        }
    }
    cout << "U ";
}

void Ui()
{
    char temp, temp2, left, back, right, front;
    for (int r = 0; r < 3; r++)
    {
        left = cube[2][0][r];
        back = cube[1][0][r];
        right = cube[3][0][r];
        front = cube[0][0][r];

        temp = left;
        left = back;
        back = right;
        right = front;
        front = temp;

        cube[2][0][r] = left;
        cube[1][0][r] = back;
        cube[3][0][r] = right;
        cube[0][0][r] = front;
    }

    //bottom side
    for (int r = 0; r < 3 / 2; r++)
    {
        for (int c = r; c < 2 - r; c++)
        {
            temp2 = cube[4][r][c];
            cube[4][r][c] = cube[4][c][2 - r];
            cube[4][c][2-r] = cube[4][2 - r][2 - c];
            cube[4][2 - r][2 - c] = cube[4][2 - c][r];
            cube[4][2 - c][r] = temp2;
        }
    }
    cout << "Ui ";
}

void R()
{
    char temp, temp2, front, back, top, bottom;
    for (int r = 0; r < 3; r++)
    {
        front = cube[0][r][2];
        back = cube[1][2 - r][0];
        top = cube[4][r][2];
        bottom = cube[5][r][2];

        temp = front;
        front = bottom;
        bottom = back;
        back = top;
        top = temp;

        cube[0][r][2] = front;
        cube[1][2 - r][0] = back;
        cube[4][r][2] = top;
        cube[5][r][2] = bottom;
    }

    //right side
    for (int r = 0; r < 3 / 2; r++)
    {
        for (int c = r; c < 2 - r; c++)
        {
            temp2 = cube[3][r][c];
            cube[3][r][c] = cube[3][2 - c][r];
            cube[3][2 - c][r] = cube[3][2 - r][2 - c];
            cube[3][2 - r][2 - c] = cube[3][c][2 - r];
            cube[3][c][2 - r] = temp2;
        }
    }
    cout << "R ";
}

void Ri()
{
    char temp, temp2, front, back, top, bottom;
    for (int r = 0; r < 3; r++)
    {
        front = cube[0][r][2];
        back = cube[1][2 - r][0];
        top = cube[4][r][2];
        bottom = cube[5][r][2];

        temp = front;
        front = top;
        top = back;
        back = bottom;
        bottom = temp;

        cube[0][r][2] = front;
        cube[1][2 - r][0] = back;
        cube[4][r][2] = top;
        cube[5][r][2] = bottom;
    }

    //right side
    for (int r = 0; r < 3 / 2; r++)
    {
        for (int c = r; c < 2 - r; c++)
        {
            temp2 = cube[3][r][c];
            cube[3][r][c] = cube[3][c][2-r];
            cube[3][c][2-r] = cube[3][2 - r][2 - c];
            cube[3][2 - r][2 - c] = cube[3][2 - c][r];
            cube[3][2 - c][r] = temp2;
        }
    }
    cout << "Ri ";
}

void D()
{
    char temp, temp2, front, back, left, right;
    for (int r = 0; r < 3; r++)
    {
        front  = cube[0][2][r];
        back   = cube[1][2][r];
        left   = cube[2][2][r];
        right  = cube[3][2][r];

        temp = front;
        front = left;
        left = back;
        back = right;
        right = temp;

        cube[0][2][r] = front;
        cube[1][2][r] = back;
        cube[2][2][r] = left;
        cube[3][2][r] = right;
    }

    //bottom
    for (int r = 0; r < 3 / 2; r++)
    {
        for (int c = r; c < 2 - r; c++)
        {
            temp2 = cube[5][r][c];
            cube[5][r][c] = cube[5][2 - c][r];
            cube[5][2 - c][r] = cube[5][2 - r][2 - c];
            cube[5][2 - r][2 - c] = cube[5][c][2 - r];
            cube[5][c][2 - r] = temp2;
        }
    }
    cout << "D ";
}

void Di()
{
    char temp, temp2, front, back, left, right;
    for (int r = 0; r < 3; r++)
    {
        front  = cube[0][2][r];
        back   = cube[1][2][r];
        left   = cube[2][2][r];
        right  = cube[3][2][r];

        temp = front;
        front = right;
        right = back;
        back = left;
        left = temp;

        cube[0][2][r] = front;
        cube[1][2][r] = back;
        cube[2][2][r] = left;
        cube[3][2][r] = right;
    }

    //bottom
    for (int r = 0; r < 3 / 2; r++)
    {
        for (int c = r; c < 2 - r; c++)
        {
            temp2 = cube[5][r][c];
            cube[5][r][c] = cube[5][c][2-r];
            cube[5][c][2-r] = cube[5][2 - r][2 - c];
            cube[5][2 - r][2 - c] = cube[5][2 - c][r];
            cube[5][2 - c][r] = temp2;
        }
    }
    cout << "Di ";
}

void L ()
{
    char temp, temp2, front, back, top, bottom;
    for (int r = 0; r < 3; r++)
    {
        front = cube[0][r][0];
        back = cube[1][2 - r][2];
        top = cube[4][r][0];
        bottom = cube[5][r][0];

        temp = front;
        front = top;
        top = back;
        back = bottom;
        bottom = temp;

        cube[0][r][0] = front;
        cube[1][2 - r][2] = back;
        cube[4][r][0] = top;
        cube[5][r][0] = bottom;
    }

    //left side
    for (int r = 0; r < 3 / 2; r++)
    {
        for (int c = r; c < 2 - r; c++)
        {
            temp2 = cube[2][r][c];
            cube[2][r][c] = cube[2][2 - c][r];
            cube[2][2 - c][r] = cube[2][2 - r][2 - c];
            cube[2][2 - r][2 - c] = cube[2][c][2 - r];
            cube[2][c][2 - r] = temp2;
        }
    }
    cout << "L ";
}

void Li ()
{
    char temp, temp2, front, back, top, bottom;
    for (int r = 0; r < 3; r++)
    {
        front = cube[0][r][0];
        back = cube[1][2 - r][2];
        top = cube[4][r][0];
        bottom = cube[5][r][0];

        temp = front;
        front = bottom;
        bottom = back;
        back = top;
        top = temp;

        cube[0][r][0] = front;
        cube[1][2 - r][2] = back;
        cube[4][r][0] = top;
        cube[5][r][0] = bottom;
    }

    //left side
    for (int r = 0; r < 3 / 2; r++)
    {
        for (int c = r; c < 2 - r; c++)
        {
            temp2 = cube[2][r][c];
            cube[2][r][c] = cube[2][c][2-r];
            cube[2][c][2-r] = cube[2][2 - r][2 - c];
            cube[2][2 - r][2 - c] = cube[2][2 - c][r];
            cube[2][2 - c][r] = temp2;
        }
    }
    cout << "Li ";
}

void B ()
{
    char temp, temp2, top, bottom, left, right;
    for (int r = 0; r < 3; r++)
    {
        top  = cube[4][0][r];
        bottom = cube[5][2][2 - r];
        left   = cube[2][2 - r][0];
        right  = cube[3][r][2];

        temp = top;
        top = right;
        right = bottom;
        bottom = left;
        left = temp;

        cube[4][0][r] = top;
        cube[5][2][2 - r] = bottom;
        cube[2][2 - r][0] = left;
        cube[3][r][2] = right;
    }

    //back
    for (int r = 0; r < 3 / 2; r++)
    {
        for (int c = r; c < 2 - r; c++)
        {
            temp2 = cube[1][r][c];
            cube[1][r][c] = cube[1][2 - c][r];
            cube[1][2 - c][r] = cube[1][2 - r][2 - c];
            cube[1][2 - r][2 - c] = cube[1][c][2 - r];
            cube[1][c][2 - r] = temp2;
        }
    }
    cout << "B ";
}

void Bi ()
{
    char temp, temp2, top, bottom, left, right;
    for (int r = 0; r < 3; r++)
    {
        top  = cube[4][0][r];
        bottom = cube[5][2][2 - r];
        left   = cube[2][2 - r][0];
        right  = cube[3][r][2];

        temp = top;
        top = left;
        left = bottom;
        bottom = right;
        right = temp;

        cube[4][0][r] = top;
        cube[5][2][2 - r] = bottom;
        cube[2][2 - r][0] = left;
        cube[3][r][2] = right;
    }

    //bottom
    for (int r = 0; r < 3 / 2; r++)
    {
        for (int c = r; c < 2 - r; c++)
        {
            temp2 = cube[1][r][c];
            cube[1][r][c] = cube[1][c][2-r];
            cube[1][c][2-r] = cube[1][2 - r][2 - c];
            cube[1][2 - r][2 - c] = cube[1][2 - c][r];
            cube[1][2 - c][r] = temp2;
        }
    }
    cout << "Bi ";
}

void (*act[4][12]) () = {{F, Fi, B, Bi, L, Li, R, Ri, U, Ui, D, Di},
                         {B, Bi, F, Fi, R, Ri, L, Li, U, Ui, D, Di},
                         {L, Li, R, Ri, B, Bi, F, Fi, U, Ui, D, Di},
                         {R, Ri, L, Li, F, Fi, B, Bi, U, Ui, D, Di}};

bool middle_layer_success()
{
    for (int i = 0; i < 4; i++)
    {
        if (cube[i][1][0] != center[i] || cube[i][1][2] != center[i])
        {
            return false;
        }
    }
    return true;
}

void middle_layer_left(int i)
{
    act[i][9]();
    act[i][5]();
    act[i][8]();
    act[i][4]();
    act[i][8]();
    act[i][0]();
    act[i][9]();
    act[i][1]();
}

void middle_layer_left_anti(int i)
{
    act[i][0]();
    act[i][8]();
    act[i][1]();
    act[i][9]();
    act[i][5]();
    act[i][9]();
    act[i][4]();
    act[i][8]();
}

void middle_layer_right(int i)
{
    act[i][8]();
    act[i][6]();
    act[i][9]();
    act[i][7]();
    act[i][9]();
    act[i][1]();
    act[i][8]();
    act[i][0]();
}

void middle_layer_right_anti(int i)
{
    act[i][1]();
    act[i][9]();
    act[i][0]();
    act[i][8]();
    act[i][6]();
    act[i][8]();
    act[i][7]();
    act[i][9]();
}

char get_top_middle(int i)
{
    char top_middle[4] = {cube[4][2][1], cube[4][0][1], cube[4][1][0], cube[4][1][2]};
    return top_middle[i];
}

char neighbors(int i, int j)
{
    int list[4][2] = {{2, 3}, {3, 2}, {1, 0}, {0, 1}};
    return center[list[i][j]];
}

void (*middle_act[2][2]) (int) = {{middle_layer_left, middle_layer_right},
                                  {middle_layer_left_anti, middle_layer_right_anti}};

void middle_layer()
{
    while (!middle_layer_success())
    {
        for (int k = 0; k < 8; k++)
        {
            int i = k % 4;
            int tmp = 0;
            while (tmp < 3 && cube[i][0][1] != center[i])
            {
                U();
                tmp++;
            }
            if (tmp == 3)
            {
                continue;
            }
            for (int j = 0; j < 2; j++)
            {
                if (neighbors(i, j) == get_top_middle(i))
                {
                    middle_act[0][j](i);
                    break;
                }
            }
        }
        for (int k = 0; k < 8; k++)
        {
            int i = k / 2;
            int j = k % 2;
            if (cube[i][1][2 * j] != center[i])
            {
                middle_act[1][j](i);
                break;
            }
        }
    }
}

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cin >> cube[i][j][k];
            }
            cube[i][j][3] = 0;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        center[i] = cube[i][1][1];
    }
    middle_layer();
    return 0;
}