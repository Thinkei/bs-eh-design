open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  let (loading, setLoading) = React.useState(() => true);
  <Section title="Spin">
    <Switch
      checkedChildren={str("Show skeleton")}
      unCheckedChildren={str("Hide skeleton")}
      defaultChecked=true
      onChange={(value, _) => setLoading(_ => value)}
    />
    <Skeleton
      loading
      avatar={Skeleton.AvatarProp.obj({"size": "large", "shape": "square"})}
      paragraph={Skeleton.ParagraphProp.obj({"rows": 4})}>
      <div>
      <p> {str("EH Design, a design language")} </p>
      <p> {str("EH Design, a design language")} </p>
      <p> {str("EH Design, a design language")} </p>
      <p> {str("EH Design, a design language")} </p>
      </div>
    </Skeleton>
  </Section>;
};
