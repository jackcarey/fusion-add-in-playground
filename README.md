# fusion-add-in-playground

⚠️ this is very much unfinished and likely never will be, it's merely to demonstrate some customizations. 

Making a Fusion add-in for ... _something?_

## Python

Steps taken:

0. Following the docs for [Fusion API UI Customization](https://help.autodesk.com/view/fusion360/ENU/?guid=GUID-F31C76F0-8C74-4343-904C-68FDA9BB8B4C).

1. copied `CommandSample` add-in directly from Fusion. Utilities > Add-ins menu. ![CommandSample in the UI](docs/CommandSampleSelection.png)
2. renamed it to `JacksAddinPlayground`
3. moved the existing scripts to a custom tab ![custom tab](docs/custom%20toolbar%20tab.png)
4. added a custom command called 'SomethingDifferent' that copies 'Browser', but displays jackcarey.co.uk instead of the local HTML. ![external content](docs/external%20HTML%20content.png)
5. ???

To-do: 

1. Each `entry` file could be refactored such that duplicated code in `start()` and `stop()` is put into `general_utils`.
2. Something actually useful with the Fusion API...

## C++

1. ???
