let component = props##"Component"

let element = props##element

let y = {"age": 30}
let y = {"age": 30, "name": "steve"}

type propField('a) = Js.t({.})
type propField('a) = Js.t({..} as 'a)
type propField('a) = Js.t({..}) as 'a
type propField('a) = Js.nullable(Js.t({..} as 'a))

type propField('a) = {. "a": b}
type propField('a) = {.. "a": b}
type propField('a) = Js.t(Js.t({. "a": Js.t({. "b": c})}))

let a: {. "a": b} = 1
