module AvatarProp = {
  type t;

  external bool: bool => t = "%identity";
  external obj: Js.t('a) => t = "%identity";
};

module ParagraphProp = {
  type t;

  external bool: bool => t = "%identity";
  external obj: Js.t('a) => t = "%identity";
};

module TitleProp = {
  type t;

  external bool: bool => t = "%identity";
  external obj: Js.t('a) => t = "%identity";
};

[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~active: bool=?,
    ~avatar: AvatarProp.t=?,
    ~loading: bool=?,
    ~paragraph: ParagraphProp.t=?,
    ~title: TitleProp.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Skeleton";
