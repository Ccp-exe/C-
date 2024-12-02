Section CoqLab01.
Context (A B C D : Prop).
(* Question 1 *)
(* Implication is transitive. *)
Goal (A -> B) -> (B -> C) -> (A -> C).
Proof.
  intros a_impl_b b_impl_c a_impl_c.
  apply b_impl_c. 
  apply a_impl_b. (* To prove B, we apply A -> B *)
  exact a_impl_c .
  
Qed.



(* Question 2*)
(* Anything implies itself. *)
Goal A -> A.
Proof.
 intro a_impl_a. (* Assume A *)
  exact a_impl_a. 
Qed.
(* Extra hypotheses can be introduced without affecting
 * provability. *)

(* Question 3 *)
Goal A -> (B -> A).
Proof.
  intro a_impl_a. (* Assume A *)
  intro b_impl_a . (* Assume B, but we don't use it *)
  exact a_impl_a. (* We return the assumption A *)
Qed.




(* Question 4 *)
Goal (A -> B -> C) -> B -> A -> C.
Proof.
 intros a_impl_b_impl_c b c. 
  apply a_impl_b_impl_c. 
  exact c. 
  exact b. 
Qed.

(* Question 6 *)
(* Duplicate hypotheses can be merged. *)
Goal (A -> A -> B) -> A -> B.
Proof.
  intros a_impl_a_impl_b a_impl_b. 
  apply a_impl_a_impl_b. (* Apply (A -> A -> B) *)
  exact a_impl_b. (* Apply A *)
  exact a_impl_b. (* Apply A again (duplicate) *)
Qed.
(* Question 7 *)
(* Duplicate hypotheses can be introduced. *)
Goal (A -> B) -> A -> A -> B.
Proof.
 intros a_impl_b a_impl_a_impl_b _ . 
  apply a_impl_b. 
  exact a_impl_a_impl_b . 
Qed.

(* Diamond lemma:
 *        A
 *      ↙   ↘           A
 *     B     C    ~>    ↓
 *      ↘   ↙           D
 *        D
 *)

(* Question 8 *)
Goal (A -> B) -> (A -> C) -> (B -> C -> D) -> A -> D.
Proof.
  intros a_impl_b a_impl_c b_impl_c_impl_d a_impl_d. (* Introduce the assumptions: A -> B, A -> C, and B -> C -> D *)
  apply  b_impl_c_impl_d. 
  apply  a_impl_b. (* Apply (A -> B) *)
  exact a_impl_d. (* Apply A *)
  apply a_impl_c. (* Apply (A -> C) *)
  exact a_impl_d. (* Apply A *)
Qed.

(* Question 9 *)
Goal ((((A -> B) -> A) -> A) -> B) -> B.
Proof.
 intro H1. (* Introduce the assumption ((((A -> B) -> A) -> A) -> B) *)
  apply H1. (* Apply the hypothesis *)
  intro H2.
  apply H2 .
  intro H3.
  apply H1.
  intro H4.
  exact H3. (* Assume (A -> B) -> A *)
 
Qed.

End CoqLab01.