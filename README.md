# To Do List

O projeto foi desenvolvido em C++98 e recomendo executá-lo no WSL (utilizei um ambiente Ubuntu).  

O **Makefile** é responsável pela construção do projeto. Para compilar, execute o comando:  

```bash
make
```

Isso gerará o executável `./todolist`, que pode ser executado diretamente:  

```bash
./todolist
```

A aplicação funciona como uma lista de tarefas (**To-Do List**) e é bastante intuitiva. Você pode adicionar tarefas, que são classificadas em três categorias: **PERSONAL**, **WORK** e **STUDY**.  

- As categorias **WORK** e **STUDY** têm prioridade padrão **HIGH**.  
- Para tarefas da categoria **PERSONAL**, o usuário deve definir a prioridade manualmente.  

Além disso, é possível listar todas as tarefas. Após listar, você pode selecionar uma tarefa para visualizar seus detalhes e alterar seu status de conclusão.
