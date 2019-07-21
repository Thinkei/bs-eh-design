open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Typography">
    <Typography.Title level=3> {str("This is a title")} </Typography.Title>
    <Typography.Paragraph code=true>
      {str(
         {|
Js.log('Hello ReasonML World');
Js.log('Byebye ... World');
          |},
       )}
    </Typography.Paragraph>
  </Section>;
};
