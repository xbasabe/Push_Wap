# Folders and Names
NAME		= push_swap
SRCSDIR		= srcs
OBJSDIR		= objs
EXTLIB		= libft

SRCS		= main_ps.c in_order.c lean_3.c moves_both.c unstack_chunk.c biggest.c first.c\
				lean_5.c init_stack_a.c move_indexed.c order.c convert.c init_stack_b.c lean_chunks.c moves_a.c select_order.c entry.c lean_2.c moves_b.c smallest.c

# Compiler options
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror #-g3 -fsanitize=address

###################################################
# The rest is done by the MakeFile automatically, #
# you should not have to modify it				  #
###################################################
OBJS	= $(SRCS:%.c=$(OBJSDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS) $(EXTLIB)/$(EXTLIB).a
	@echo "Assembling $@"
	@$(CC) $(CFLAGS) -o $@ $^

$(OBJS): $(OBJSDIR)/%.o: $(SRCSDIR)/%.c
	@mkdir -p $(@D)
	@echo Compiling $<
	@$(CC) $(CFLAGS) -I$(EXTLIB)/incs -c $< -o $@

$(EXTLIB)/$(EXTLIB).a:
	@echo "Compiling $@"
	@$(MAKE) -s -C $(EXTLIB) > /dev/null

clean:
	rm -rf $(OBJSDIR)
	@$(MAKE) -s -C $(EXTLIB) clean

fclean: clean
	rm -rf $(NAME)
	@$(MAKE) -s -C $(EXTLIB) fclean

re: fclean all

.PHONY: all clean fclean re test