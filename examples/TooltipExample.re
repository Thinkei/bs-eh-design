open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Tooltip">
    <Tooltip placement=`top title={str("3 done / 3 in progress")}>
      <span> {str("Tooltip will show on mouse enter.")} </span>
    </Tooltip>
  </Section>;
};
