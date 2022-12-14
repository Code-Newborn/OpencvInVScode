#include <math.h>
#include "Rotmat2Euler.h"

/// @brief 旋转矩阵转欧拉角XYZ 内旋
/// @param rotation_mat 输入旋转矩阵
/// @return XYZ顺序 内旋角度 弧度
Eigen::Vector3f Mat_Rxyz(Eigen::Matrix3f rotation_mat)
{
    Eigen::Vector3f Euler_rad;

    float RotX_Rad = atan2(-rotation_mat(1, 2), rotation_mat(2, 2));
    float RotY_Rad= atan2(rotation_mat(0, 2), sqrtf(1 - powf(rotation_mat(0, 2), 2)));
    float RotZ_Rad= atan2(-rotation_mat(0, 1), rotation_mat(0, 0));

    Euler_rad(0, 0) = RotX_Rad;
    Euler_rad(1, 0) = RotY_Rad;
    Euler_rad(2, 0) = RotZ_Rad;

    return Euler_rad;
}

/// @brief 旋转矩阵转欧拉角YZX 内旋
/// @param rotation_mat 输入旋转矩阵
/// @return YZX顺序 内旋角度 弧度
Eigen::Vector3f Mat_Ryzx(Eigen::Matrix3f rotation_mat)
{
    Eigen::Vector3f Euler_rad;

    float RotY_Rad = atan2(-rotation_mat(2, 0), rotation_mat(0, 0));
    float RotZ_Rad= atan2(rotation_mat(1, 0), sqrtf(1 - powf(rotation_mat(1, 0), 2)));
    float RotX_Rad= atan2(-rotation_mat(1, 2), rotation_mat(1, 1));

    Euler_rad(0, 0) = RotY_Rad;
    Euler_rad(1, 0) = RotZ_Rad;
    Euler_rad(2, 0) = RotX_Rad;

    return Euler_rad;
}

/// @brief 旋转矩阵转欧拉角ZXY 内旋
/// @param rotation_mat 输入旋转矩阵
/// @return ZXY顺序 内旋角度 弧度
Eigen::Vector3f Mat_Rzxy(Eigen::Matrix3f rotation_mat)
{
    Eigen::Vector3f Euler_rad;

    float RotZ_Rad = atan2(-rotation_mat(0, 1), rotation_mat(1, 1));
    float RotX_Rad= atan2(rotation_mat(2, 1), sqrtf(1 - powf(rotation_mat(2, 1), 2)));
    float RotY_Rad= atan2(-rotation_mat(2, 0), rotation_mat(2, 2));

    Euler_rad(0, 0) = RotZ_Rad;
    Euler_rad(1, 0) = RotX_Rad;
    Euler_rad(2, 0) = RotY_Rad;

    return Euler_rad;
}

/// @brief 旋转矩阵转欧拉角ZYX 内旋
/// @param rotation_mat 输入旋转矩阵
/// @return ZYX顺序 内旋角度 弧度
Eigen::Vector3f Mat_Rzyx(Eigen::Matrix3f rotation_mat)
{
    Eigen::Vector3f Euler_rad;

    float RotZ_Rad = atan2(rotation_mat(1, 0), rotation_mat(0, 0));
    float RotY_Rad = atan2(-rotation_mat(2, 0), sqrtf(1 - powf(rotation_mat(2, 0), 2)));
    float RotX_Rad = atan2(rotation_mat(2, 1), rotation_mat(2, 2));

    Euler_rad(0, 0) = RotZ_Rad;
    Euler_rad(1, 0) = RotY_Rad;
    Euler_rad(2, 0) = RotX_Rad;

    return Euler_rad;
}

/// @brief 旋转矩阵转欧拉角YXZ 内旋
/// @param rotation_mat 输入旋转矩阵
/// @return YXZ顺序 内旋角度 弧度
Eigen::Vector3f Mat_Ryxz(Eigen::Matrix3f rotation_mat)
{
    Eigen::Vector3f Euler_rad;

    float RotY_Rad = atan2(rotation_mat(0, 2), rotation_mat(2, 2));
    float RotX_Rad = atan2(-rotation_mat(1, 2), sqrtf(1 - powf(rotation_mat(1, 2), 2)));
    float RotZ_Rad = atan2(rotation_mat(1, 0), rotation_mat(1, 1));

    Euler_rad(0, 0) = RotY_Rad;
    Euler_rad(1, 0) = RotX_Rad;
    Euler_rad(2, 0) = RotZ_Rad;

    return Euler_rad;
}

/// @brief 旋转矩阵转欧拉角XZY 内旋
/// @param rotation_mat 输入旋转矩阵
/// @return XZY顺序 内旋角度 弧度
Eigen::Vector3f Mat_Rxzy(Eigen::Matrix3f rotation_mat)
{
    Eigen::Vector3f Euler_rad;

    float RotX_Rad = atan2(rotation_mat(2, 1), rotation_mat(1, 1));
    float RotZ_Rad= atan2(-rotation_mat(0, 1), sqrtf(1 - powf(rotation_mat(0, 1), 2)));
    float RotY_Rad= atan2(rotation_mat(0, 2), rotation_mat(0, 0));

    Euler_rad(0, 0) = RotX_Rad;
    Euler_rad(1, 0) = RotZ_Rad;
    Euler_rad(2, 0) = RotY_Rad;

    return Euler_rad;
}
