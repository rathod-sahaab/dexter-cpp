# Dexter

Dexter is an electronic lock. The way to open and close this lock is what makes it unique is how your password.

Normal pass-code/pin locks use a mechanism where you can activate one key/switch at a time, for this you need a lot more keys/switches for given range.

Example:

```
1   2   3
4   5   6
7   8   9
    0
```

Here you can have 10 keys giving you 0-9 and then you can chain those into some thing like `0-9-1-8-2`. This is waste of resources.

Dexter takes a better approach where you can press multiple keys a once to create a combination. Example with 5 keys your key pad will look like.

```
 1 1 1 1 1
--- or ---
16 8 4 2 1
```

Now you can enter binary number between `1-30` for example

| To enter | Combination |
| -------- | ----------- |
| 10       | `01010`     |
| 15       | `01111`     |
| 27       | `11011`     |

5 bit range is `0-31` Why not 0? You can't press no keys and register it as a key press. To enter 0 you need complex timing mechanism or extra key which you can use better to double the range.

You need significantly less number of keys but more **Dexterity** , hence the name **Dexter**.

So with same number of keys you can achieve more range of number, mathematically.

$$
range\ increased = \frac{\left(2^n - 2\right)}{n}\ times
$$

Which is exponential increase with resp

## Usage


