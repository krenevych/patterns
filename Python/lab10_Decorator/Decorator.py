def make_blink(function):

    def decorator():
        ret = function()
        return f"<blink>{ret}</blink>"

    return decorator

@make_blink
def hello_world():
    return "Hello, World!"

print(hello_world())