open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Progress">
    <Progress percent=75. status=`active />
    <Progress percent=70. status=`error />
    <Progress
      format={(percent, _successPercent) =>
        Js.Float.toString(percent) ++ " days"
      }
      percent=60.
      successPercent=30.
      _type=`dashboard
    />
  </Section>;
};
