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

void (*act[4][12]) () = {{F, Fi, B, Bi, L, Li, R, Ri, U, Ui, D, Di},   //front
                         {B, Bi, F, Fi, R, Ri, L, Li, U, Ui, D, Di},   //behind
                         {L, Li, R, Ri, B, Bi, F, Fi, U, Ui, D, Di},   //left
                         {R, Ri, L, Li, F, Fi, B, Bi, U, Ui, D, Di}};  //right

bool bottom_cross_success()
{
    char list[4] = {cube[5][0][1], cube[5][1][0], cube[5][1][2], cube[5][2][1]};
    for (int i = 0; i < 4; i++)
    {
        if (list[i] != center[5])
        {
            return false;
        }
        if (cube[i][2][1] != center[i])
        {
            return false;
        }
    }
    return true;
}

int left_corner(int i)
{
    int list[4] = {2, 3, 1, 0};
    return list[i];
}

int right_corner(int i)
{
    int list[4] = {3, 2, 0, 1};
    return list[i];
}

void bottom_cross()
{
    while (!bottom_cross_success())
    {
        bool sign = false;
        char list1[4] = {cube[4][2][1], cube[4][0][1], cube[4][1][0], cube[4][1][2]};
        for (int i = 0; i < 4; i++)
        {
            if (list1[i] == center[5])
            {
                char target = cube[i][0][1];
                int j = -1;
                for (int k = 0; k < 4; k++)
                {
                    if (target == center[k])
                    {
                        j = k;
                        break;
                    }
                }
                int num = 0;
                while (i != j)
                {
                    i = left_corner(i);
                    num++;
                }
                for (int k = 0; k < num; k++)
                {
                    U();
                }
                act[i][0]();
                act[i][0]();
                sign = true;
                break;
            }
        }
        if (sign)
        {
            continue;
        }
        for (int k = 0; k < 8; k++)
        {
            int i = k / 2;
            int j = k % 2;
            if (cube[i][1][j * 2] == center[5])
            {
                if (j == 0)
                {
                    char target = cube[left_corner(i)][1][2];
                    int goal = -1;
                    for (int l = 0; l < 4; l++)
                    {
                        if (target == center[l])
                        {
                            goal = l;
                            break;
                        }
                    }
                    int num = 0;
                    while (i != goal)
                    {
                        goal = left_corner(goal);
                        num++;
                    }
                    num++;
                    for (int l = 0; l < num; l++)
                    {
                        Di();
                    }
                    act[i][4]();
                    for (int l = 0; l < num; l++)
                    {
                        D();
                    }
                    sign = true;
                    break;
                }
                if (j == 1)
                {
                    char target = cube[right_corner(i)][1][0];
                    int goal = -1;
                    for (int l = 0; l < 4; l++)
                    {
                        if (target == center[l])
                        {
                            goal = l;
                            break;
                        }
                    }
                    int num = 0;
                    while (i != goal)
                    {
                        goal = right_corner(goal);
                        num++;
                    }
                    num++;
                    for (int l = 0; l < num; l++)
                    {
                        D();
                    }
                    act[i][7]();
                    for (int l = 0; l < num; l++)
                    {
                        Di();
                    }
                    sign = true;
                    break;
                }
            }
        }
        if (sign)
        {
            continue;
        }
        char list3[4] = {cube[5][0][1], cube[5][2][1], cube[5][1][0], cube[5][1][2]};
        for (int i = 0; i < 4; i++)
        {
            if (cube[i][0][1] == center[5])
            {
                int j = i;
                while (list3[j] == center[5])
                {
                    U();
                    j = left_corner(j);
                }
                act[j][0]();
                sign = true;
                break;
            }
        }
        if (sign)
        {
            continue;
        }
        for (int i = 0; i < 4; i++)
        {
            if (cube[i][2][1] == center[5])
            {
                act[i][0]();
                sign = true;
                break;
            }
        }
        if (sign)
        {
            continue;
        }
        char list2[4] = {cube[5][0][1], cube[5][2][1], cube[5][1][0], cube[5][1][2]};
        for (int i = 0; i < 4; i++)
        {
            if (list2[i] == center[5] && cube[i][2][1] != center[i])
            {
                act[i][0]();
                sign = true;
                break;
            }
        }
        if (sign)
        {
            continue;
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
    bottom_cross();
    return 0;
}