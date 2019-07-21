open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Message">
    <Button
      onClick={_ =>
        Message.(
          call(Uncontrolled(`error, str("WTH? You clicked me!"), None))
        )
      }
      _type=`danger
      size=`large>
      {str("Uncontrolled message")}
    </Button>
    <br />
    <br />
    <Button
      onClick={_ => {
        open Message;
        call(Controlled(`error, str("WTH? You clicked me!"), 2., None))
        |> Js.Promise.then_(_ => {
             call(Uncontrolled(`info, str("I won't disappear :D"), None));
             Js.Promise.resolve();
           })
        |> ignore;
        ();
      }}
      _type=`danger
      size=`large>
      {str("Controlled message")}
    </Button>
  </Section>;
};
