from skbuild import setup

setup(
    name="example",
    version="1.2.3",
    description="a minimal example package",
    author='skbuild team',
    license="MIT",
    packages=['example'],
    package_dir={'example': 'example'},
)
