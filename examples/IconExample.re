open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Icon">
    <Icon
      style={ReactDOMRe.Style.make(
        ~width="100px",
        ~height="100px",
        ~color="red",
        ~marginRight="10px",
        ~fontSize="30px",
        (),
      )}
      name=`thankAHero
    />
    <Icon
      style={ReactDOMRe.Style.make(
        ~width="100px",
        ~height="100px",
        ~color="blue",
        ~marginRight="10px",
        ~fontSize="30px",
        (),
      )}
      name=`alignment
      color=`light
      rotate=90
      theme=`outlined
    />
  </Section>;
};
