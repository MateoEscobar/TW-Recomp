#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003ADCC0
// Address: 0x3adcc0 - 0x3ae0e8
void sub_003ADCC0_0x3adcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADCC0_0x3adcc0");
#endif

    switch (ctx->pc) {
        case 0x3adcc0u: goto label_3adcc0;
        case 0x3adcc4u: goto label_3adcc4;
        case 0x3adcc8u: goto label_3adcc8;
        case 0x3adcccu: goto label_3adccc;
        case 0x3adcd0u: goto label_3adcd0;
        case 0x3adcd4u: goto label_3adcd4;
        case 0x3adcd8u: goto label_3adcd8;
        case 0x3adcdcu: goto label_3adcdc;
        case 0x3adce0u: goto label_3adce0;
        case 0x3adce4u: goto label_3adce4;
        case 0x3adce8u: goto label_3adce8;
        case 0x3adcecu: goto label_3adcec;
        case 0x3adcf0u: goto label_3adcf0;
        case 0x3adcf4u: goto label_3adcf4;
        case 0x3adcf8u: goto label_3adcf8;
        case 0x3adcfcu: goto label_3adcfc;
        case 0x3add00u: goto label_3add00;
        case 0x3add04u: goto label_3add04;
        case 0x3add08u: goto label_3add08;
        case 0x3add0cu: goto label_3add0c;
        case 0x3add10u: goto label_3add10;
        case 0x3add14u: goto label_3add14;
        case 0x3add18u: goto label_3add18;
        case 0x3add1cu: goto label_3add1c;
        case 0x3add20u: goto label_3add20;
        case 0x3add24u: goto label_3add24;
        case 0x3add28u: goto label_3add28;
        case 0x3add2cu: goto label_3add2c;
        case 0x3add30u: goto label_3add30;
        case 0x3add34u: goto label_3add34;
        case 0x3add38u: goto label_3add38;
        case 0x3add3cu: goto label_3add3c;
        case 0x3add40u: goto label_3add40;
        case 0x3add44u: goto label_3add44;
        case 0x3add48u: goto label_3add48;
        case 0x3add4cu: goto label_3add4c;
        case 0x3add50u: goto label_3add50;
        case 0x3add54u: goto label_3add54;
        case 0x3add58u: goto label_3add58;
        case 0x3add5cu: goto label_3add5c;
        case 0x3add60u: goto label_3add60;
        case 0x3add64u: goto label_3add64;
        case 0x3add68u: goto label_3add68;
        case 0x3add6cu: goto label_3add6c;
        case 0x3add70u: goto label_3add70;
        case 0x3add74u: goto label_3add74;
        case 0x3add78u: goto label_3add78;
        case 0x3add7cu: goto label_3add7c;
        case 0x3add80u: goto label_3add80;
        case 0x3add84u: goto label_3add84;
        case 0x3add88u: goto label_3add88;
        case 0x3add8cu: goto label_3add8c;
        case 0x3add90u: goto label_3add90;
        case 0x3add94u: goto label_3add94;
        case 0x3add98u: goto label_3add98;
        case 0x3add9cu: goto label_3add9c;
        case 0x3adda0u: goto label_3adda0;
        case 0x3adda4u: goto label_3adda4;
        case 0x3adda8u: goto label_3adda8;
        case 0x3addacu: goto label_3addac;
        case 0x3addb0u: goto label_3addb0;
        case 0x3addb4u: goto label_3addb4;
        case 0x3addb8u: goto label_3addb8;
        case 0x3addbcu: goto label_3addbc;
        case 0x3addc0u: goto label_3addc0;
        case 0x3addc4u: goto label_3addc4;
        case 0x3addc8u: goto label_3addc8;
        case 0x3addccu: goto label_3addcc;
        case 0x3addd0u: goto label_3addd0;
        case 0x3addd4u: goto label_3addd4;
        case 0x3addd8u: goto label_3addd8;
        case 0x3adddcu: goto label_3adddc;
        case 0x3adde0u: goto label_3adde0;
        case 0x3adde4u: goto label_3adde4;
        case 0x3adde8u: goto label_3adde8;
        case 0x3addecu: goto label_3addec;
        case 0x3addf0u: goto label_3addf0;
        case 0x3addf4u: goto label_3addf4;
        case 0x3addf8u: goto label_3addf8;
        case 0x3addfcu: goto label_3addfc;
        case 0x3ade00u: goto label_3ade00;
        case 0x3ade04u: goto label_3ade04;
        case 0x3ade08u: goto label_3ade08;
        case 0x3ade0cu: goto label_3ade0c;
        case 0x3ade10u: goto label_3ade10;
        case 0x3ade14u: goto label_3ade14;
        case 0x3ade18u: goto label_3ade18;
        case 0x3ade1cu: goto label_3ade1c;
        case 0x3ade20u: goto label_3ade20;
        case 0x3ade24u: goto label_3ade24;
        case 0x3ade28u: goto label_3ade28;
        case 0x3ade2cu: goto label_3ade2c;
        case 0x3ade30u: goto label_3ade30;
        case 0x3ade34u: goto label_3ade34;
        case 0x3ade38u: goto label_3ade38;
        case 0x3ade3cu: goto label_3ade3c;
        case 0x3ade40u: goto label_3ade40;
        case 0x3ade44u: goto label_3ade44;
        case 0x3ade48u: goto label_3ade48;
        case 0x3ade4cu: goto label_3ade4c;
        case 0x3ade50u: goto label_3ade50;
        case 0x3ade54u: goto label_3ade54;
        case 0x3ade58u: goto label_3ade58;
        case 0x3ade5cu: goto label_3ade5c;
        case 0x3ade60u: goto label_3ade60;
        case 0x3ade64u: goto label_3ade64;
        case 0x3ade68u: goto label_3ade68;
        case 0x3ade6cu: goto label_3ade6c;
        case 0x3ade70u: goto label_3ade70;
        case 0x3ade74u: goto label_3ade74;
        case 0x3ade78u: goto label_3ade78;
        case 0x3ade7cu: goto label_3ade7c;
        case 0x3ade80u: goto label_3ade80;
        case 0x3ade84u: goto label_3ade84;
        case 0x3ade88u: goto label_3ade88;
        case 0x3ade8cu: goto label_3ade8c;
        case 0x3ade90u: goto label_3ade90;
        case 0x3ade94u: goto label_3ade94;
        case 0x3ade98u: goto label_3ade98;
        case 0x3ade9cu: goto label_3ade9c;
        case 0x3adea0u: goto label_3adea0;
        case 0x3adea4u: goto label_3adea4;
        case 0x3adea8u: goto label_3adea8;
        case 0x3adeacu: goto label_3adeac;
        case 0x3adeb0u: goto label_3adeb0;
        case 0x3adeb4u: goto label_3adeb4;
        case 0x3adeb8u: goto label_3adeb8;
        case 0x3adebcu: goto label_3adebc;
        case 0x3adec0u: goto label_3adec0;
        case 0x3adec4u: goto label_3adec4;
        case 0x3adec8u: goto label_3adec8;
        case 0x3adeccu: goto label_3adecc;
        case 0x3aded0u: goto label_3aded0;
        case 0x3aded4u: goto label_3aded4;
        case 0x3aded8u: goto label_3aded8;
        case 0x3adedcu: goto label_3adedc;
        case 0x3adee0u: goto label_3adee0;
        case 0x3adee4u: goto label_3adee4;
        case 0x3adee8u: goto label_3adee8;
        case 0x3adeecu: goto label_3adeec;
        case 0x3adef0u: goto label_3adef0;
        case 0x3adef4u: goto label_3adef4;
        case 0x3adef8u: goto label_3adef8;
        case 0x3adefcu: goto label_3adefc;
        case 0x3adf00u: goto label_3adf00;
        case 0x3adf04u: goto label_3adf04;
        case 0x3adf08u: goto label_3adf08;
        case 0x3adf0cu: goto label_3adf0c;
        case 0x3adf10u: goto label_3adf10;
        case 0x3adf14u: goto label_3adf14;
        case 0x3adf18u: goto label_3adf18;
        case 0x3adf1cu: goto label_3adf1c;
        case 0x3adf20u: goto label_3adf20;
        case 0x3adf24u: goto label_3adf24;
        case 0x3adf28u: goto label_3adf28;
        case 0x3adf2cu: goto label_3adf2c;
        case 0x3adf30u: goto label_3adf30;
        case 0x3adf34u: goto label_3adf34;
        case 0x3adf38u: goto label_3adf38;
        case 0x3adf3cu: goto label_3adf3c;
        case 0x3adf40u: goto label_3adf40;
        case 0x3adf44u: goto label_3adf44;
        case 0x3adf48u: goto label_3adf48;
        case 0x3adf4cu: goto label_3adf4c;
        case 0x3adf50u: goto label_3adf50;
        case 0x3adf54u: goto label_3adf54;
        case 0x3adf58u: goto label_3adf58;
        case 0x3adf5cu: goto label_3adf5c;
        case 0x3adf60u: goto label_3adf60;
        case 0x3adf64u: goto label_3adf64;
        case 0x3adf68u: goto label_3adf68;
        case 0x3adf6cu: goto label_3adf6c;
        case 0x3adf70u: goto label_3adf70;
        case 0x3adf74u: goto label_3adf74;
        case 0x3adf78u: goto label_3adf78;
        case 0x3adf7cu: goto label_3adf7c;
        case 0x3adf80u: goto label_3adf80;
        case 0x3adf84u: goto label_3adf84;
        case 0x3adf88u: goto label_3adf88;
        case 0x3adf8cu: goto label_3adf8c;
        case 0x3adf90u: goto label_3adf90;
        case 0x3adf94u: goto label_3adf94;
        case 0x3adf98u: goto label_3adf98;
        case 0x3adf9cu: goto label_3adf9c;
        case 0x3adfa0u: goto label_3adfa0;
        case 0x3adfa4u: goto label_3adfa4;
        case 0x3adfa8u: goto label_3adfa8;
        case 0x3adfacu: goto label_3adfac;
        case 0x3adfb0u: goto label_3adfb0;
        case 0x3adfb4u: goto label_3adfb4;
        case 0x3adfb8u: goto label_3adfb8;
        case 0x3adfbcu: goto label_3adfbc;
        case 0x3adfc0u: goto label_3adfc0;
        case 0x3adfc4u: goto label_3adfc4;
        case 0x3adfc8u: goto label_3adfc8;
        case 0x3adfccu: goto label_3adfcc;
        case 0x3adfd0u: goto label_3adfd0;
        case 0x3adfd4u: goto label_3adfd4;
        case 0x3adfd8u: goto label_3adfd8;
        case 0x3adfdcu: goto label_3adfdc;
        case 0x3adfe0u: goto label_3adfe0;
        case 0x3adfe4u: goto label_3adfe4;
        case 0x3adfe8u: goto label_3adfe8;
        case 0x3adfecu: goto label_3adfec;
        case 0x3adff0u: goto label_3adff0;
        case 0x3adff4u: goto label_3adff4;
        case 0x3adff8u: goto label_3adff8;
        case 0x3adffcu: goto label_3adffc;
        case 0x3ae000u: goto label_3ae000;
        case 0x3ae004u: goto label_3ae004;
        case 0x3ae008u: goto label_3ae008;
        case 0x3ae00cu: goto label_3ae00c;
        case 0x3ae010u: goto label_3ae010;
        case 0x3ae014u: goto label_3ae014;
        case 0x3ae018u: goto label_3ae018;
        case 0x3ae01cu: goto label_3ae01c;
        case 0x3ae020u: goto label_3ae020;
        case 0x3ae024u: goto label_3ae024;
        case 0x3ae028u: goto label_3ae028;
        case 0x3ae02cu: goto label_3ae02c;
        case 0x3ae030u: goto label_3ae030;
        case 0x3ae034u: goto label_3ae034;
        case 0x3ae038u: goto label_3ae038;
        case 0x3ae03cu: goto label_3ae03c;
        case 0x3ae040u: goto label_3ae040;
        case 0x3ae044u: goto label_3ae044;
        case 0x3ae048u: goto label_3ae048;
        case 0x3ae04cu: goto label_3ae04c;
        case 0x3ae050u: goto label_3ae050;
        case 0x3ae054u: goto label_3ae054;
        case 0x3ae058u: goto label_3ae058;
        case 0x3ae05cu: goto label_3ae05c;
        case 0x3ae060u: goto label_3ae060;
        case 0x3ae064u: goto label_3ae064;
        case 0x3ae068u: goto label_3ae068;
        case 0x3ae06cu: goto label_3ae06c;
        case 0x3ae070u: goto label_3ae070;
        case 0x3ae074u: goto label_3ae074;
        case 0x3ae078u: goto label_3ae078;
        case 0x3ae07cu: goto label_3ae07c;
        case 0x3ae080u: goto label_3ae080;
        case 0x3ae084u: goto label_3ae084;
        case 0x3ae088u: goto label_3ae088;
        case 0x3ae08cu: goto label_3ae08c;
        case 0x3ae090u: goto label_3ae090;
        case 0x3ae094u: goto label_3ae094;
        case 0x3ae098u: goto label_3ae098;
        case 0x3ae09cu: goto label_3ae09c;
        case 0x3ae0a0u: goto label_3ae0a0;
        case 0x3ae0a4u: goto label_3ae0a4;
        case 0x3ae0a8u: goto label_3ae0a8;
        case 0x3ae0acu: goto label_3ae0ac;
        case 0x3ae0b0u: goto label_3ae0b0;
        case 0x3ae0b4u: goto label_3ae0b4;
        case 0x3ae0b8u: goto label_3ae0b8;
        case 0x3ae0bcu: goto label_3ae0bc;
        case 0x3ae0c0u: goto label_3ae0c0;
        case 0x3ae0c4u: goto label_3ae0c4;
        case 0x3ae0c8u: goto label_3ae0c8;
        case 0x3ae0ccu: goto label_3ae0cc;
        case 0x3ae0d0u: goto label_3ae0d0;
        case 0x3ae0d4u: goto label_3ae0d4;
        case 0x3ae0d8u: goto label_3ae0d8;
        case 0x3ae0dcu: goto label_3ae0dc;
        case 0x3ae0e0u: goto label_3ae0e0;
        case 0x3ae0e4u: goto label_3ae0e4;
        default: break;
    }

    ctx->pc = 0x3adcc0u;

label_3adcc0:
    // 0x3adcc0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3adcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_3adcc4:
    // 0x3adcc4: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x3adcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_3adcc8:
    // 0x3adcc8: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x3adcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_3adccc:
    // 0x3adccc: 0x3c108010  lui         $s0, 0x8010
    ctx->pc = 0x3adcccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32784 << 16));
label_3adcd0:
    // 0x3adcd0: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x3adcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_3adcd4:
    // 0x3adcd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3adcd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3adcd8:
    // 0x3adcd8: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x3adcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_3adcdc:
    // 0x3adcdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3adcdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3adce0:
    // 0x3adce0: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x3adce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_3adce4:
    // 0x3adce4: 0x361010ff  ori         $s0, $s0, 0x10FF
    ctx->pc = 0x3adce4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4351);
label_3adce8:
    // 0x3adce8: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x3adce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_3adcec:
    // 0x3adcec: 0x26540010  addiu       $s4, $s2, 0x10
    ctx->pc = 0x3adcecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3adcf0:
    // 0x3adcf0: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x3adcf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3adcf4:
    // 0x3adcf4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3adcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_3adcf8:
    // 0x3adcf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3adcf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3adcfc:
    // 0x3adcfc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3adcfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3add00:
    // 0x3add00: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3add00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3add04:
    // 0x3add04: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3add04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3add08:
    // 0x3add08: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3add08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3add0c:
    // 0x3add0c: 0x40f809  jalr        $v0
label_3add10:
    if (ctx->pc == 0x3ADD10u) {
        ctx->pc = 0x3ADD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD0Cu;
        // 0x3add10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADD14u;
        goto label_3add14;
    }
    ctx->pc = 0x3ADD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ADD14u);
        ctx->pc = 0x3ADD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD0Cu;
        // 0x3add10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADD0Cu, 0x3ADD14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ADD14u;
label_3add14:
    // 0x3add14: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3add14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3add18:
    // 0x3add18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3add18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3add1c:
    // 0x3add1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3add1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3add20:
    // 0x3add20: 0xc1073cc  jal         func_41CF30
label_3add24:
    if (ctx->pc == 0x3ADD24u) {
        ctx->pc = 0x3ADD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD20u;
        // 0x3add24: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADD28u;
        goto label_3add28;
    }
    ctx->pc = 0x3ADD20u;
    SET_GPR_U32(ctx, 31, 0x3ADD28u);
    ctx->pc = 0x3ADD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADD20u;
    // 0x3add24: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3ADD20u, 0x3ADD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADD28u;
label_3add28:
    // 0x3add28: 0x3c0355c9  lui         $v1, 0x55C9
    ctx->pc = 0x3add28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21961 << 16));
label_3add2c:
    // 0x3add2c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3add2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_3add30:
    // 0x3add30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3add30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3add34:
    // 0x3add34: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3add34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_3add38:
    // 0x3add38: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3add38u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3add3c:
    // 0x3add3c: 0x34c6ff00  ori         $a2, $a2, 0xFF00
    ctx->pc = 0x3add3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
label_3add40:
    // 0x3add40: 0x2063024  and         $a2, $s0, $a2
    ctx->pc = 0x3add40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & GPR_U64(ctx, 6));
label_3add44:
    // 0x3add44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3add44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3add48:
    // 0x3add48: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x3add48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_3add4c:
    // 0x3add4c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3add4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3add50:
    // 0x3add50: 0xae4600b0  sw          $a2, 0xB0($s2)
    ctx->pc = 0x3add50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 6));
label_3add54:
    // 0x3add54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3add54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3add58:
    // 0x3add58: 0xc0e858c  jal         func_3A1630
label_3add5c:
    if (ctx->pc == 0x3ADD5Cu) {
        ctx->pc = 0x3ADD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD58u;
        // 0x3add5c: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADD60u;
        goto label_3add60;
    }
    ctx->pc = 0x3ADD58u;
    SET_GPR_U32(ctx, 31, 0x3ADD60u);
    ctx->pc = 0x3ADD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADD58u;
    // 0x3add5c: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3ADD58u, 0x3ADD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADD60u;
label_3add60:
    // 0x3add60: 0xc0ea14c  jal         func_3A8530
label_3add64:
    if (ctx->pc == 0x3ADD64u) {
        ctx->pc = 0x3ADD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD60u;
        // 0x3add64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADD68u;
        goto label_3add68;
    }
    ctx->pc = 0x3ADD60u;
    SET_GPR_U32(ctx, 31, 0x3ADD68u);
    ctx->pc = 0x3ADD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADD60u;
    // 0x3add64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3ADD60u, 0x3ADD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADD68u;
label_3add68:
    // 0x3add68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3add68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3add6c:
    // 0x3add6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3add6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3add70:
    // 0x3add70: 0xc0ea12a  jal         func_3A84A8
label_3add74:
    if (ctx->pc == 0x3ADD74u) {
        ctx->pc = 0x3ADD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD70u;
        // 0x3add74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADD78u;
        goto label_3add78;
    }
    ctx->pc = 0x3ADD70u;
    SET_GPR_U32(ctx, 31, 0x3ADD78u);
    ctx->pc = 0x3ADD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADD70u;
    // 0x3add74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ADD70u, 0x3ADD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADD78u;
label_3add78:
    // 0x3add78: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3add78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3add7c:
    // 0x3add7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3add7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3add80:
    // 0x3add80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3add80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3add84:
    // 0x3add84: 0xc0ea12a  jal         func_3A84A8
label_3add88:
    if (ctx->pc == 0x3ADD88u) {
        ctx->pc = 0x3ADD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD84u;
        // 0x3add88: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADD8Cu;
        goto label_3add8c;
    }
    ctx->pc = 0x3ADD84u;
    SET_GPR_U32(ctx, 31, 0x3ADD8Cu);
    ctx->pc = 0x3ADD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADD84u;
    // 0x3add88: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ADD84u, 0x3ADD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADD8Cu;
label_3add8c:
    // 0x3add8c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3add8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3add90:
    // 0x3add90: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3add90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3add94:
    // 0x3add94: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3add94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3add98:
    // 0x3add98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3add98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3add9c:
    // 0x3add9c: 0xae5000b4  sw          $s0, 0xB4($s2)
    ctx->pc = 0x3add9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 16));
label_3adda0:
    // 0x3adda0: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3adda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3adda4:
    // 0x3adda4: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3adda4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3adda8:
    // 0x3adda8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3adda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3addac:
    // 0x3addac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3addacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3addb0:
    // 0x3addb0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3addb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3addb4:
    // 0x3addb4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3addb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3addb8:
    // 0x3addb8: 0x40f809  jalr        $v0
label_3addbc:
    if (ctx->pc == 0x3ADDBCu) {
        ctx->pc = 0x3ADDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDB8u;
        // 0x3addbc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDC0u;
        goto label_3addc0;
    }
    ctx->pc = 0x3ADDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ADDC0u);
        ctx->pc = 0x3ADDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDB8u;
        // 0x3addbc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADDB8u, 0x3ADDC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ADDC0u;
label_3addc0:
    // 0x3addc0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3addc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3addc4:
    // 0x3addc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3addc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3addc8:
    // 0x3addc8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3addc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_3addcc:
    // 0x3addcc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3addccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3addd0:
    // 0x3addd0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3addd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3addd4:
    // 0x3addd4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3addd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3addd8:
    // 0x3addd8: 0x34840005  ori         $a0, $a0, 0x5
    ctx->pc = 0x3addd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
label_3adddc:
    // 0x3adddc: 0xc0e93a2  jal         func_3A4E88
label_3adde0:
    if (ctx->pc == 0x3ADDE0u) {
        ctx->pc = 0x3ADDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDDCu;
        // 0x3adde0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDE4u;
        goto label_3adde4;
    }
    ctx->pc = 0x3ADDDCu;
    SET_GPR_U32(ctx, 31, 0x3ADDE4u);
    ctx->pc = 0x3ADDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADDDCu;
    // 0x3adde0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3ADDDCu, 0x3ADDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADDE4u;
label_3adde4:
    // 0x3adde4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3adde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3adde8:
    // 0x3adde8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3adde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3addec:
    // 0x3addec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3addecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3addf0:
    // 0x3addf0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3addf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3addf4:
    // 0x3addf4: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x3addf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
label_3addf8:
    // 0x3addf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3addf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3addfc:
    // 0x3addfc: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x3addfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_3ade00:
    // 0x3ade00: 0xc0e8db8  jal         func_3A36E0
label_3ade04:
    if (ctx->pc == 0x3ADE04u) {
        ctx->pc = 0x3ADE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE00u;
        // 0x3ade04: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE08u;
        goto label_3ade08;
    }
    ctx->pc = 0x3ADE00u;
    SET_GPR_U32(ctx, 31, 0x3ADE08u);
    ctx->pc = 0x3ADE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE00u;
    // 0x3ade04: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36E0u, 0x3ADE00u, 0x3ADE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE08u;
label_3ade08:
    // 0x3ade08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ade08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ade0c:
    // 0x3ade0c: 0x16200033  bnez        $s1, . + 4 + (0x33 << 2)
label_3ade10:
    if (ctx->pc == 0x3ADE10u) {
        ctx->pc = 0x3ADE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE0Cu;
        // 0x3ade10: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE14u;
        goto label_3ade14;
    }
    ctx->pc = 0x3ADE0Cu;
    {
        const bool branch_taken_0x3ade0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE0Cu;
        // 0x3ade10: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ade0c) {
            ctx->pc = 0x3ADEDCu;
            goto label_3adedc;
        }
    }
    ctx->pc = 0x3ADE14u;
label_3ade14:
    // 0x3ade14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ade14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ade18:
    // 0x3ade18: 0xc0e911e  jal         func_3A4478
label_3ade1c:
    if (ctx->pc == 0x3ADE1Cu) {
        ctx->pc = 0x3ADE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE18u;
        // 0x3ade1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE20u;
        goto label_3ade20;
    }
    ctx->pc = 0x3ADE18u;
    SET_GPR_U32(ctx, 31, 0x3ADE20u);
    ctx->pc = 0x3ADE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE18u;
    // 0x3ade1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3ADE18u, 0x3ADE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE20u;
label_3ade20:
    // 0x3ade20: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3ade20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3ade24:
    // 0x3ade24: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3ade24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ade28:
    // 0x3ade28: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x3ade28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_3ade2c:
    // 0x3ade2c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3ade2cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3ade30:
    // 0x3ade30: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3ade30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3ade34:
    // 0x3ade34: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3ade34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3ade38:
    // 0x3ade38: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x3ade38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_3ade3c:
    // 0x3ade3c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3ade3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3ade40:
    // 0x3ade40: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ade40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ade44:
    // 0x3ade44: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3ade44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3ade48:
    // 0x3ade48: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3ade48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ade4c:
    // 0x3ade4c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3ade4cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ade50:
    // 0x3ade50: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3ade50u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ade54:
    // 0x3ade54: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3ade54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ade58:
    // 0x3ade58: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3ade58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ade5c:
    // 0x3ade5c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3ade5cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ade60:
    // 0x3ade60: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3ade60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ade64:
    // 0x3ade64: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3ade64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ade68:
    // 0x3ade68: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3ade68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ade6c:
    // 0x3ade6c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3ade6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ade70:
    // 0x3ade70: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3ade70u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ade74:
    // 0x3ade74: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3ade74u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ade78:
    // 0x3ade78: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3ade78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ade7c:
    // 0x3ade7c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3ade7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ade80:
    // 0x3ade80: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3ade80u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3ade84:
    // 0x3ade84: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3ade84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ade88:
    // 0x3ade88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ade88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ade8c:
    // 0x3ade8c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3ade8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ade90:
    // 0x3ade90: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3ade90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ade94:
    // 0x3ade94: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3ade94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ade98:
    // 0x3ade98: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3ade98u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ade9c:
    // 0x3ade9c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3ade9cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3adea0:
    // 0x3adea0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3adea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3adea4:
    // 0x3adea4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3adea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3adea8:
    // 0x3adea8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3adea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3adeac:
    // 0x3adeac: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3adeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3adeb0:
    // 0x3adeb0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3adeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3adeb4:
    // 0x3adeb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3adeb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3adeb8:
    // 0x3adeb8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3adeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3adebc:
    // 0x3adebc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3adebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3adec0:
    // 0x3adec0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3adec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3adec4:
    // 0x3adec4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3adec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3adec8:
    // 0x3adec8: 0xc0e8db8  jal         func_3A36E0
label_3adecc:
    if (ctx->pc == 0x3ADECCu) {
        ctx->pc = 0x3ADECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADEC8u;
        // 0x3adecc: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADED0u;
        goto label_3aded0;
    }
    ctx->pc = 0x3ADEC8u;
    SET_GPR_U32(ctx, 31, 0x3ADED0u);
    ctx->pc = 0x3ADECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEC8u;
    // 0x3adecc: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36E0u, 0x3ADEC8u, 0x3ADED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADED0u;
label_3aded0:
    // 0x3aded0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3aded0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aded4:
    // 0x3aded4: 0x1220006f  beqz        $s1, . + 4 + (0x6F << 2)
label_3aded8:
    if (ctx->pc == 0x3ADED8u) {
        ctx->pc = 0x3ADEDCu;
        goto label_3adedc;
    }
    ctx->pc = 0x3ADED4u;
    {
        const bool branch_taken_0x3aded4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aded4) {
            ctx->pc = 0x3AE094u;
            goto label_3ae094;
        }
    }
    ctx->pc = 0x3ADEDCu;
label_3adedc:
    // 0x3adedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3adedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3adee0:
    // 0x3adee0: 0xc0e8f5c  jal         func_3A3D70
label_3adee4:
    if (ctx->pc == 0x3ADEE4u) {
        ctx->pc = 0x3ADEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADEE0u;
        // 0x3adee4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADEE8u;
        goto label_3adee8;
    }
    ctx->pc = 0x3ADEE0u;
    SET_GPR_U32(ctx, 31, 0x3ADEE8u);
    ctx->pc = 0x3ADEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEE0u;
    // 0x3adee4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3ADEE0u, 0x3ADEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADEE8u;
label_3adee8:
    // 0x3adee8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3adee8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3adeec:
    // 0x3adeec: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x3adeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3adef0:
    // 0x3adef0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3adef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3adef4:
    // 0x3adef4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x3adef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_3adef8:
    // 0x3adef8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3adef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3adefc:
    // 0x3adefc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3adefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3adf00:
    // 0x3adf00: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3adf00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3adf04:
    // 0x3adf04: 0xe4670004  swc1        $f7, 0x4($v1)
    ctx->pc = 0x3adf04u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3adf08:
    // 0x3adf08: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3adf08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3adf0c:
    // 0x3adf0c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x3adf0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3adf10:
    // 0x3adf10: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x3adf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
label_3adf14:
    // 0x3adf14: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x3adf14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_3adf18:
    // 0x3adf18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3adf18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3adf1c:
    // 0x3adf1c: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x3adf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3adf20:
    // 0x3adf20: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3adf20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3adf24:
    // 0x3adf24: 0x46002045  abs.s       $f1, $f4
    ctx->pc = 0x3adf24u;
    ctx->f[1] = FPU_ABS_S(ctx->f[4]);
label_3adf28:
    // 0x3adf28: 0x46142000  add.s       $f0, $f4, $f20
    ctx->pc = 0x3adf28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[20]);
label_3adf2c:
    // 0x3adf2c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3adf2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3adf30:
    // 0x3adf30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3adf30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3adf34:
    // 0x3adf34: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3adf34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3adf38:
    // 0x3adf38: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3adf38u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3adf3c:
    // 0x3adf3c: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x3adf3cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3adf40:
    // 0x3adf40: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3adf40u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3adf44:
    // 0x3adf44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3adf44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3adf48:
    // 0x3adf48: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3adf48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3adf4c:
    // 0x3adf4c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3adf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3adf50:
    // 0x3adf50: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3adf50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3adf54:
    // 0x3adf54: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3adf54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3adf58:
    // 0x3adf58: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3adf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3adf5c:
    // 0x3adf5c: 0x0  nop
    ctx->pc = 0x3adf5cu;
    // NOP
label_3adf60:
    // 0x3adf60: 0x0  nop
    ctx->pc = 0x3adf60u;
    // NOP
label_3adf64:
    // 0x3adf64: 0x46000304  c1          0x304
    ctx->pc = 0x3adf64u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_3adf68:
    // 0x3adf68: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x3adf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3adf6c:
    // 0x3adf6c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x3adf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3adf70:
    // 0x3adf70: 0x46036182  mul.s       $f6, $f12, $f3
    ctx->pc = 0x3adf70u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_3adf74:
    // 0x3adf74: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x3adf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3adf78:
    // 0x3adf78: 0x0  nop
    ctx->pc = 0x3adf78u;
    // NOP
label_3adf7c:
    // 0x3adf7c: 0x0  nop
    ctx->pc = 0x3adf7cu;
    // NOP
label_3adf80:
    // 0x3adf80: 0x460c10c3  div.s       $f3, $f2, $f12
    ctx->pc = 0x3adf80u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[2], ctx->f[12]); }
label_3adf84:
    // 0x3adf84: 0x0  nop
    ctx->pc = 0x3adf84u;
    // NOP
label_3adf88:
    // 0x3adf88: 0x0  nop
    ctx->pc = 0x3adf88u;
    // NOP
label_3adf8c:
    // 0x3adf8c: 0x460c0843  div.s       $f1, $f1, $f12
    ctx->pc = 0x3adf8cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
label_3adf90:
    // 0x3adf90: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3adf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3adf94:
    // 0x3adf94: 0x0  nop
    ctx->pc = 0x3adf94u;
    // NOP
label_3adf98:
    // 0x3adf98: 0x0  nop
    ctx->pc = 0x3adf98u;
    // NOP
label_3adf9c:
    // 0x3adf9c: 0x460c0143  div.s       $f5, $f0, $f12
    ctx->pc = 0x3adf9cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_3adfa0:
    // 0x3adfa0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3adfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3adfa4:
    // 0x3adfa4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_3adfa8:
    if (ctx->pc == 0x3ADFA8u) {
        ctx->pc = 0x3ADFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFA4u;
        // 0x3adfa8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADFACu;
        goto label_3adfac;
    }
    ctx->pc = 0x3ADFA4u;
    {
        const bool branch_taken_0x3adfa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ADFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFA4u;
        // 0x3adfa8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adfa4) {
            ctx->pc = 0x3ADFC8u;
            goto label_3adfc8;
        }
    }
    ctx->pc = 0x3ADFACu;
label_3adfac:
    // 0x3adfac: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3adfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3adfb0:
    // 0x3adfb0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3adfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3adfb4:
    // 0x3adfb4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3adfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3adfb8:
    // 0x3adfb8: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x3adfb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3adfbc:
    // 0x3adfbc: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3adfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3adfc0:
    // 0x3adfc0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3adfc4:
    if (ctx->pc == 0x3ADFC4u) {
        ctx->pc = 0x3ADFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFC0u;
        // 0x3adfc4: 0xe467000c  swc1        $f7, 0xC($v1) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADFC8u;
        goto label_3adfc8;
    }
    ctx->pc = 0x3ADFC0u;
    {
        const bool branch_taken_0x3adfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFC0u;
        // 0x3adfc4: 0xe467000c  swc1        $f7, 0xC($v1) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adfc0) {
            ctx->pc = 0x3ADFDCu;
            goto label_3adfdc;
        }
    }
    ctx->pc = 0x3ADFC8u;
label_3adfc8:
    // 0x3adfc8: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x3adfc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3adfcc:
    // 0x3adfcc: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x3adfccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3adfd0:
    // 0x3adfd0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3adfd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3adfd4:
    // 0x3adfd4: 0xe7a50058  swc1        $f5, 0x58($sp)
    ctx->pc = 0x3adfd4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3adfd8:
    // 0x3adfd8: 0xe7a6005c  swc1        $f6, 0x5C($sp)
    ctx->pc = 0x3adfd8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3adfdc:
    // 0x3adfdc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3adfdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3adfe0:
    // 0x3adfe0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3adfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3adfe4:
    // 0x3adfe4: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x3adfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_3adfe8:
    // 0x3adfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3adfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3adfec:
    // 0x3adfec: 0xc0e8f5c  jal         func_3A3D70
label_3adff0:
    if (ctx->pc == 0x3ADFF0u) {
        ctx->pc = 0x3ADFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFECu;
        // 0x3adff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADFF4u;
        goto label_3adff4;
    }
    ctx->pc = 0x3ADFECu;
    SET_GPR_U32(ctx, 31, 0x3ADFF4u);
    ctx->pc = 0x3ADFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFECu;
    // 0x3adff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3ADFECu, 0x3ADFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADFF4u;
label_3adff4:
    // 0x3adff4: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x3adff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3adff8:
    // 0x3adff8: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x3adff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
label_3adffc:
    // 0x3adffc: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x3adffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_3ae000:
    // 0x3ae000: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ae000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ae004:
    // 0x3ae004: 0x46001885  abs.s       $f2, $f3
    ctx->pc = 0x3ae004u;
    ctx->f[2] = FPU_ABS_S(ctx->f[3]);
label_3ae008:
    // 0x3ae008: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3ae008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3ae00c:
    // 0x3ae00c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ae00cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ae010:
    // 0x3ae010: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ae010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae014:
    // 0x3ae014: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x3ae014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ae018:
    // 0x3ae018: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3ae018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ae01c:
    // 0x3ae01c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x3ae01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ae020:
    // 0x3ae020: 0x46001942  mul.s       $f5, $f3, $f0
    ctx->pc = 0x3ae020u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3ae024:
    // 0x3ae024: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3ae024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3ae028:
    // 0x3ae028: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x3ae028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ae02c:
    // 0x3ae02c: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x3ae02cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3ae030:
    // 0x3ae030: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x3ae030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3ae034:
    // 0x3ae034: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3ae034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3ae038:
    // 0x3ae038: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x3ae038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ae03c:
    // 0x3ae03c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_3ae040:
    if (ctx->pc == 0x3AE040u) {
        ctx->pc = 0x3AE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE03Cu;
        // 0x3ae040: 0xc7a60038  lwc1        $f6, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE044u;
        goto label_3ae044;
    }
    ctx->pc = 0x3AE03Cu;
    {
        const bool branch_taken_0x3ae03c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE03Cu;
        // 0x3ae040: 0xc7a60038  lwc1        $f6, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae03c) {
            ctx->pc = 0x3AE064u;
            goto label_3ae064;
        }
    }
    ctx->pc = 0x3AE044u;
label_3ae044:
    // 0x3ae044: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3ae044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3ae048:
    // 0x3ae048: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ae048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ae04c:
    // 0x3ae04c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ae04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae050:
    // 0x3ae050: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3ae050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ae054:
    // 0x3ae054: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3ae054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3ae058:
    // 0x3ae058: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x3ae058u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
label_3ae05c:
    // 0x3ae05c: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x3ae05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3ae060:
    // 0x3ae060: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x3ae060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ae064:
    // 0x3ae064: 0x46016080  add.s       $f2, $f12, $f1
    ctx->pc = 0x3ae064u;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_3ae068:
    // 0x3ae068: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x3ae068u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_3ae06c:
    // 0x3ae06c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ae06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ae070:
    // 0x3ae070: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ae070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ae074:
    // 0x3ae074: 0x46062800  add.s       $f0, $f5, $f6
    ctx->pc = 0x3ae074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_3ae078:
    // 0x3ae078: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x3ae078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3ae07c:
    // 0x3ae07c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x3ae07cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3ae080:
    // 0x3ae080: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3ae080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3ae084:
    // 0x3ae084: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x3ae084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3ae088:
    // 0x3ae088: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ae088u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ae08c:
    // 0x3ae08c: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3ae08cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3ae090:
    // 0x3ae090: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3ae090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3ae094:
    // 0x3ae094: 0xc0e8f9e  jal         func_3A3E78
label_3ae098:
    if (ctx->pc == 0x3AE098u) {
        ctx->pc = 0x3AE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE094u;
        // 0x3ae098: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE09Cu;
        goto label_3ae09c;
    }
    ctx->pc = 0x3AE094u;
    SET_GPR_U32(ctx, 31, 0x3AE09Cu);
    ctx->pc = 0x3AE098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE094u;
    // 0x3ae098: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3E78u, 0x3AE094u, 0x3AE09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE09Cu;
label_3ae09c:
    // 0x3ae09c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ae09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ae0a0:
    // 0x3ae0a0: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_3ae0a4:
    if (ctx->pc == 0x3AE0A4u) {
        ctx->pc = 0x3AE0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0A0u;
        // 0x3ae0a4: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE0A8u;
        goto label_3ae0a8;
    }
    ctx->pc = 0x3AE0A0u;
    {
        const bool branch_taken_0x3ae0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ae0a0) {
            ctx->pc = 0x3AE0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE0A0u;
            // 0x3ae0a4: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE0B4u;
            goto label_3ae0b4;
        }
    }
    ctx->pc = 0x3AE0A8u;
label_3ae0a8:
    // 0x3ae0a8: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
label_3ae0ac:
    if (ctx->pc == 0x3AE0ACu) {
        ctx->pc = 0x3AE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0A8u;
        // 0x3ae0ac: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE0B0u;
        goto label_3ae0b0;
    }
    ctx->pc = 0x3AE0A8u;
    {
        const bool branch_taken_0x3ae0a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae0a8) {
            ctx->pc = 0x3AE0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE0A8u;
            // 0x3ae0ac: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE0C0u;
            goto label_3ae0c0;
        }
    }
    ctx->pc = 0x3AE0B0u;
label_3ae0b0:
    // 0x3ae0b0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3ae0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3ae0b4:
    // 0x3ae0b4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3ae0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3ae0b8:
    // 0x3ae0b8: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3ae0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3ae0bc:
    // 0x3ae0bc: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x3ae0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_3ae0c0:
    // 0x3ae0c0: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x3ae0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3ae0c4:
    // 0x3ae0c4: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x3ae0c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3ae0c8:
    // 0x3ae0c8: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x3ae0c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3ae0cc:
    // 0x3ae0cc: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x3ae0ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3ae0d0:
    // 0x3ae0d0: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x3ae0d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3ae0d4:
    // 0x3ae0d4: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x3ae0d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ae0d8:
    // 0x3ae0d8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3ae0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_3ae0dc:
    // 0x3ae0dc: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x3ae0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ae0e0:
    // 0x3ae0e0: 0x3e00008  jr          $ra
label_3ae0e4:
    if (ctx->pc == 0x3AE0E4u) {
        ctx->pc = 0x3AE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0E0u;
        // 0x3ae0e4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE0E8u;
        goto label_fallthrough_0x3ae0e0;
    }
    ctx->pc = 0x3AE0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0E0u;
        // 0x3ae0e4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ae0e0:
    ctx->pc = 0x3AE0E8u;
}
