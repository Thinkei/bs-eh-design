open Ehd;

let str = ReasonReact.string;

let plainOptions = [|"Apple", "Pear", "Orange"|];
let defaultCheckedList = [|"Apple", "Orange"|];

[@react.component]
let make = () => {
  let (checkedList, setCheckedList) =
    React.useState(() => defaultCheckedList);
  let (indeterminate, setIndeterminate) = React.useState(() => false);
  let (checkAll, setCheckAll) = React.useState(() => false);

  <Section title="Checkbox">
    <div style={ReactDOMRe.Style.make(~borderBottom="1px solid #E9E9E9", ())}>
      <Checkbox
        indeterminate
        checked=checkAll
        onChange={e => {
          let checked = e->ReactEvent.Form.target##checked;
          setCheckedList(_ => checked ? plainOptions : [||]);
          setIndeterminate(_ => false);
          setCheckAll(_ => checked);
        }}>
        {str("Check all")}
      </Checkbox>
    </div>
    <br />
    <Checkbox.Group
      options=plainOptions
      value=checkedList
      onChange={checkedList => {
        let checkedListLength = Array.length(checkedList);
        let plainOptionsLength = Array.length(plainOptions);
        setIndeterminate(_ =>
          checkedListLength > 0 && checkedListLength < plainOptionsLength
        );
        setCheckAll(_ => checkedListLength === plainOptionsLength);
        setCheckedList(_ => checkedList);
      }}
    />
  </Section>;
};
