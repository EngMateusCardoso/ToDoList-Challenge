# To Do List

O projeto foi desenvolvido em C++98 e recomendo executá-lo no WSL (utilizei um ambiente Ubuntu).  

O **Makefile** é responsável pela construção do projeto. Para compilar, execute o comando:  (Se não tiver o Makefile, já deixei o executável na pasta. Só executar no shell.)

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

## Adicionando Tarefas
![image](https://github.com/user-attachments/assets/d2591763-17ea-4c38-9567-8e455ac02ee7)

## Listando e concluindo tarefas
![image](https://github.com/user-attachments/assets/65a39fec-325b-4aea-9e8a-17928ea5c964)
![image](https://github.com/user-attachments/assets/7d581e06-cc45-4b2c-b1b6-14fc3a1e1ca3)

