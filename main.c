#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mlx.h"
#include "mlx_int.h"
#include "mlx_new_window.h"
#include "mlx_opengl.h"
#include "mlx_png.h"

typedef struct    data_s
{
    void          *mlx_ptr;
    void          *mlx_win;
}                 data_t;

int main(void)
{
    data_t        data;

    if ((data.mlx_ptr = mlx_init()) == NULL)
        return (EXIT_FAILURE);
    if ((data.mlx_win = mlx_new_window(data.mlx_ptr, 400, 200, ":|")) == NULL)
        return (EXIT_FAILURE);
    mlx_loop(data.mlx_ptr);
    return (EXIT_SUCCESS);
}
