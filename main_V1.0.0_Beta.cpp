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

bool bottom_corner_success()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (cube[5][i][j] != center[5])
            {
                return false;
            }
        }
        if (cube[i][2][0] != center[i] || cube[i][2][2] != center[i])
        {
            return false;
        }
    }
    return true;
}

void bottom_corner_left(int i)
{
    act[i][0]();
    act[i][8]();
    act[i][1]();
}

void bottom_corner_right(int i)
{
    act[i][1]();
    act[i][9]();
    act[i][0]();
}

void bottom_corner_anti(int i)
{
    act[i][1]();
    act[i][8]();
    act[i][0]();
}

void top_to_layer(int i)
{
    act[i][8]();
    act[i][6]();
    act[i][9]();
    act[i][9]();
    act[i][7]();
}

void bottom_layer_to_layer_left(int i)
{
    act[i][5]();
    act[i][8]();
    act[i][4]();
}

void bottom_layer_to_layer_right(int i)
{
    act[i][6]();
    act[i][9]();
    act[i][7]();
}

void (*bottom_layer_to_layer[2])(int) = {bottom_layer_to_layer_left, bottom_layer_to_layer_right};

void bottom_corner()
{
    while (!bottom_corner_success())
    {
        bool sign = false;
        for (int i = 0; i < 4; i++)
        {
            if (cube[i][0][2] == center[5])
            {
                char target = cube[right_corner(i)][0][0];
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
                num++;
                for (int k = 0; k < num; k++)
                {
                    U();
                }
                j = left_corner(j);
                bottom_corner_right(j);
                sign = true;
                break;
            }
            if (cube[i][0][0] == center[5])
            {
                char target = cube[left_corner(i)][0][2];
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
                num--;
                for (int k = 0; k < num; k++)
                {
                    U();
                }
                j = right_corner(j);
                bottom_corner_left(j);
                sign = true;
                break;
            }
        }
        if (sign)
        {
            continue;
        }
        char list[4] = {cube[4][2][2], cube[4][0][0], cube[4][2][0], cube[4][0][2]};
        char list0[4] = {cube[5][0][2], cube[5][2][0], cube[5][0][0], cube[5][2][2]};
        for (int i = 0; i < 4; i++)
        {
            if (list[i] == center[5])
            {
                int j = i;
                while (list0[j] == center[5])
                {
                    U();
                    j = left_corner(j);
                }
                top_to_layer(j);
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
            if (cube[i][2][2 * j] == center[5])
            {
                bottom_layer_to_layer[j](i);
                sign = true;
                break;
            }
        }
        if (sign)
        {
            continue;
        }
        char list1[4] = {cube[5][0][2], cube[5][2][0], cube[5][0][0], cube[5][2][2]};
        for (int i = 0; i < 4; i++)
        {
            if (list1[i] == center[5] && cube[i][2][2] != center[i])
            {
                bottom_corner_anti(i);
                break;
            }
        }
    }
}

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

bool top_cross_success()
{
    return (cube[4][0][1] == center[4] && cube[4][1][0] == center[4] && cube[4][1][2] == center[4] && cube[4][2][1] == center[4]);
}

void top_cross_group1()
{
    F();
    U();
    R();
    Ui();
    Ri();
    Fi();
}

void top_cross_group2()
{
    F();
    R();
    U();
    Ri();
    Ui();
    Fi();
}

void top_cross()
{
    int list[4] = {1, 2, 4, 8};
    while (!top_cross_success())
    {
        char target[4] = {cube[4][2][1], cube[4][0][1], cube[4][1][0], cube[4][1][2]};
        int sign = 0;
        for (int i = 0; i < 4; i++)
        {
            if (target[i] == center[4])
            {
                sign += list[i];
            }
        }
        if (sign == 0 || sign == 6)
        {
            top_cross_group1();
        }
        else if (sign == 3)
        {
            U();
            top_cross_group2();
        }
        else if (sign == 12)
        {
            top_cross_group2();
        }
        else if (sign == 5)
        {
            U();
            top_cross_group1();
        }
        else if (sign == 10)
        {
            Ui();
            top_cross_group1();
        }
        else if (sign == 9)
        {
            U();
            U();
            top_cross_group1();
        }

    }
}

bool top_corner_success()
{
    return (cube[4][0][0] == center[4] && cube[4][0][2] == center[4] && cube[4][2][0] == center[4] && cube[4][2][2] == center[4]);
}

void top_corner_group()
{
    R();
    U();
    Ri();
    U();
    R();
    U();
    U();
    Ri();
}

void top_corner()
{
    while (!top_corner_success())
    {
        char target[4] = {cube[4][0][0], cube[4][0][2], cube[4][2][0], cube[4][2][2]};
        int sign = 0;
        for (int i = 0; i < 4; i++)
        {
            if (target[i] == center[4])
            {
                sign++;
            }
        }
        if (sign == 0)
        {
            while (cube[2][0][2] != center[4])
            {
                U();
            }
            top_corner_group();
        }
        else if (sign == 1)
        {
            while (cube[4][2][0] != center[4])
            {
                U();
            }
            top_corner_group();
        }
        else
        {
            while (cube[0][0][0] != center[4])
            {
                U();
            }
            top_corner_group();
        }
    }
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
    bottom_cross();
    bottom_corner();
    middle_layer();
    top_cross();
    top_corner();
    position_corner();
    position_cross();
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        for (int l = 0; l < 8; l++)
        {
            int j = l / 3;
            int k = l % 3;
            cout << cube[i][j][k];
        }
        cout << cube[i][2][2] << endl;
    }
    return 0;
}