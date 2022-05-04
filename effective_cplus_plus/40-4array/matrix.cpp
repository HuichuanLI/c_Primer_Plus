//
// Created by 李汇川 on 2022/5/4.
//

class Mat {
 public:
  int row = 0;
  int col = 0;
  float **mat = nullptr;

 private:
  void init(int row, int col) {
    if (row && col) {
      mat = new float *[row];
      for (int i = 0; i < row; i++) {
        mat[i] = new float[col];
        for (int j = 0; j < col; j++) {
          mat[i][j] = 0;
          if (i == j) {
            mat[i][j] = 1;
          }
        }
      }
    }
  }

 public:
  Mat(int row = 0, int col = 0) {
    this->row = row;
    this->col = col;

    init(row, col);
  }

  Mat(const Mat &m) {
    this->row = m.row;
    this->col = m.col;

    init(row, col);
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        mat[i][j] = m.mat[i][j];
      }
    }
  }

  ~Mat() {
    if (mat != nullptr) {
      for (int i = 0; i < row; i++) {
        if (mat[i]) {
          delete[] mat[i];
          mat[i] = nullptr;
        }
      }
      if (mat) {
        delete[] mat;
      }
      mat = nullptr;
    }
  }

  Mat &operator=(const Mat &m) {
    if (mat != nullptr) {
      for (int i = 0; i < row; i++) {
        if (mat[i]) {
          delete[] mat[i];
          mat[i] = nullptr;
        }
      }
      if (mat) {
        delete[] mat;
      }
      mat = nullptr;
    }

    row = m.row;
    col = m.col;

    init(row, col);
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        mat[i][j] = m.mat[i][j];
      }
    }

    return *this;
  }

  Mat operator*(const Mat &m) {
    EyerMat res(row, m.col);

    for (int i = 0; i < res.row; i++) {
      for (int j = 0; j < res.col; j++) {
        res.mat[i][j] = 0.0f;
      }
    }

    if (m.row != col) {

    } else {
      for (int i = 0; i < res.row; i++) {
        for (int j = 0; j < res.col; j++) {
          for (int k = 0; k < res.row; k++) {
            res.mat[i][j] += mat[i][k] * m.mat[k][j];
          }
        }
      }
    }

    return res;
  }
}