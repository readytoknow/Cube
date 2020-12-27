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

bool position_corner_success()
{
    for (int i = 0; i < 4; i++)
    {
        if (cube[i][0][0] != cube[i][0][2])
        {
            return false;
        }
    }
    return true;
}

void position_corner_group()
{
    Ri();
    F();
    Ri();
    B();
    B();
    R();
    Fi();
    Ri();
    B();
    B();
    R();
    R();
    Ui();
}

void position_corner()
{
    while (!position_corner_success())
    {
        int sign = 0;
        for (int i = 0; i < 4; i++)
        {
            if (cube[i][0][0] == cube[i][0][2])
            {
                sign++;
            }
        }
        if (sign == 0)
        {
            position_corner_group();
        }
        else if (sign == 1)
        {
            while (cube[1][0][0] != cube[1][0][2])
            {
                U();
            }
            position_corner_group();
        }
    }
}

bool position_cross_success()
{
    for (int i = 0; i < 4; i++)
    {
        if (cube[i][0][1] != center[i])
        {
            return false;
        }
    }
    return true;
}

void position_cross_group()
{
    F();
    F();
    U();
    L();
    Ri();
    F();
    F();
    Li();
    R();
    U();
    F();
    F();
}

void position_cross_group_anti()
{
    F();
    F();
    Ui();
    L();
    Ri();
    F();
    F();
    Li();
    R();
    Ui();
    F();
    F();
}

void position_cross()
{
    while (!position_cross_success())
    {
        int sign = 0;
        for (int i = 0; i < 4; i++)
        {
            if (cube[i][0][0] == cube[i][0][1])
            {
                sign++;
            }
        }
        if (sign == 0)
        {
            position_cross_group();
        }
        else if (sign == 1)
        {
            while (cube[1][0][0] != cube[1][0][1])
            {
                U();
            }
            if (cube[0][0][1] == cube[2][0][0])
            {
                position_cross_group();
            }
            else if (cube[0][0][1] == cube[3][0][0])
            {
                position_cross_group_anti();
            }
        }
        sign = 0;
        for (int i = 0; i < 4; i++)
        {
            if (cube[i][0][0] == cube[i][0][1])
            {
                sign++;
            }
        }
        if (sign == 4)
        {
            while (!position_cross_success())
            {
                U();
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
    position_corner();
    position_cross();
    return 0;
}