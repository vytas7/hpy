DISCLAIMER = """
/*
   DO NOT EDIT THIS FILE!

   This file is automatically generated by tools/autogen.py from tools/public_api.h.
   Run this to regenerate:
       make autogen

*/

"""

class AutoGenFile:
    LANGUAGE = 'C'
    PATH = None

    def __init__(self, api):
        self.api = api

    def generate(self):
        raise NotImplementedError

    def write(self, root):
        with root.join(self.PATH).open('w') as f:
            if self.LANGUAGE == 'C':
                f.write(DISCLAIMER)
            f.write(self.generate())
            f.write('\n')
