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

// Function: sub_0028DF30
// Address: 0x28df30 - 0x28e1e0
void sub_0028DF30_0x28df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DF30_0x28df30");
#endif

    switch (ctx->pc) {
        case 0x28df30u: goto label_28df30;
        case 0x28df34u: goto label_28df34;
        case 0x28df38u: goto label_28df38;
        case 0x28df3cu: goto label_28df3c;
        case 0x28df40u: goto label_28df40;
        case 0x28df44u: goto label_28df44;
        case 0x28df48u: goto label_28df48;
        case 0x28df4cu: goto label_28df4c;
        case 0x28df50u: goto label_28df50;
        case 0x28df54u: goto label_28df54;
        case 0x28df58u: goto label_28df58;
        case 0x28df5cu: goto label_28df5c;
        case 0x28df60u: goto label_28df60;
        case 0x28df64u: goto label_28df64;
        case 0x28df68u: goto label_28df68;
        case 0x28df6cu: goto label_28df6c;
        case 0x28df70u: goto label_28df70;
        case 0x28df74u: goto label_28df74;
        case 0x28df78u: goto label_28df78;
        case 0x28df7cu: goto label_28df7c;
        case 0x28df80u: goto label_28df80;
        case 0x28df84u: goto label_28df84;
        case 0x28df88u: goto label_28df88;
        case 0x28df8cu: goto label_28df8c;
        case 0x28df90u: goto label_28df90;
        case 0x28df94u: goto label_28df94;
        case 0x28df98u: goto label_28df98;
        case 0x28df9cu: goto label_28df9c;
        case 0x28dfa0u: goto label_28dfa0;
        case 0x28dfa4u: goto label_28dfa4;
        case 0x28dfa8u: goto label_28dfa8;
        case 0x28dfacu: goto label_28dfac;
        case 0x28dfb0u: goto label_28dfb0;
        case 0x28dfb4u: goto label_28dfb4;
        case 0x28dfb8u: goto label_28dfb8;
        case 0x28dfbcu: goto label_28dfbc;
        case 0x28dfc0u: goto label_28dfc0;
        case 0x28dfc4u: goto label_28dfc4;
        case 0x28dfc8u: goto label_28dfc8;
        case 0x28dfccu: goto label_28dfcc;
        case 0x28dfd0u: goto label_28dfd0;
        case 0x28dfd4u: goto label_28dfd4;
        case 0x28dfd8u: goto label_28dfd8;
        case 0x28dfdcu: goto label_28dfdc;
        case 0x28dfe0u: goto label_28dfe0;
        case 0x28dfe4u: goto label_28dfe4;
        case 0x28dfe8u: goto label_28dfe8;
        case 0x28dfecu: goto label_28dfec;
        case 0x28dff0u: goto label_28dff0;
        case 0x28dff4u: goto label_28dff4;
        case 0x28dff8u: goto label_28dff8;
        case 0x28dffcu: goto label_28dffc;
        case 0x28e000u: goto label_28e000;
        case 0x28e004u: goto label_28e004;
        case 0x28e008u: goto label_28e008;
        case 0x28e00cu: goto label_28e00c;
        case 0x28e010u: goto label_28e010;
        case 0x28e014u: goto label_28e014;
        case 0x28e018u: goto label_28e018;
        case 0x28e01cu: goto label_28e01c;
        case 0x28e020u: goto label_28e020;
        case 0x28e024u: goto label_28e024;
        case 0x28e028u: goto label_28e028;
        case 0x28e02cu: goto label_28e02c;
        case 0x28e030u: goto label_28e030;
        case 0x28e034u: goto label_28e034;
        case 0x28e038u: goto label_28e038;
        case 0x28e03cu: goto label_28e03c;
        case 0x28e040u: goto label_28e040;
        case 0x28e044u: goto label_28e044;
        case 0x28e048u: goto label_28e048;
        case 0x28e04cu: goto label_28e04c;
        case 0x28e050u: goto label_28e050;
        case 0x28e054u: goto label_28e054;
        case 0x28e058u: goto label_28e058;
        case 0x28e05cu: goto label_28e05c;
        case 0x28e060u: goto label_28e060;
        case 0x28e064u: goto label_28e064;
        case 0x28e068u: goto label_28e068;
        case 0x28e06cu: goto label_28e06c;
        case 0x28e070u: goto label_28e070;
        case 0x28e074u: goto label_28e074;
        case 0x28e078u: goto label_28e078;
        case 0x28e07cu: goto label_28e07c;
        case 0x28e080u: goto label_28e080;
        case 0x28e084u: goto label_28e084;
        case 0x28e088u: goto label_28e088;
        case 0x28e08cu: goto label_28e08c;
        case 0x28e090u: goto label_28e090;
        case 0x28e094u: goto label_28e094;
        case 0x28e098u: goto label_28e098;
        case 0x28e09cu: goto label_28e09c;
        case 0x28e0a0u: goto label_28e0a0;
        case 0x28e0a4u: goto label_28e0a4;
        case 0x28e0a8u: goto label_28e0a8;
        case 0x28e0acu: goto label_28e0ac;
        case 0x28e0b0u: goto label_28e0b0;
        case 0x28e0b4u: goto label_28e0b4;
        case 0x28e0b8u: goto label_28e0b8;
        case 0x28e0bcu: goto label_28e0bc;
        case 0x28e0c0u: goto label_28e0c0;
        case 0x28e0c4u: goto label_28e0c4;
        case 0x28e0c8u: goto label_28e0c8;
        case 0x28e0ccu: goto label_28e0cc;
        case 0x28e0d0u: goto label_28e0d0;
        case 0x28e0d4u: goto label_28e0d4;
        case 0x28e0d8u: goto label_28e0d8;
        case 0x28e0dcu: goto label_28e0dc;
        case 0x28e0e0u: goto label_28e0e0;
        case 0x28e0e4u: goto label_28e0e4;
        case 0x28e0e8u: goto label_28e0e8;
        case 0x28e0ecu: goto label_28e0ec;
        case 0x28e0f0u: goto label_28e0f0;
        case 0x28e0f4u: goto label_28e0f4;
        case 0x28e0f8u: goto label_28e0f8;
        case 0x28e0fcu: goto label_28e0fc;
        case 0x28e100u: goto label_28e100;
        case 0x28e104u: goto label_28e104;
        case 0x28e108u: goto label_28e108;
        case 0x28e10cu: goto label_28e10c;
        case 0x28e110u: goto label_28e110;
        case 0x28e114u: goto label_28e114;
        case 0x28e118u: goto label_28e118;
        case 0x28e11cu: goto label_28e11c;
        case 0x28e120u: goto label_28e120;
        case 0x28e124u: goto label_28e124;
        case 0x28e128u: goto label_28e128;
        case 0x28e12cu: goto label_28e12c;
        case 0x28e130u: goto label_28e130;
        case 0x28e134u: goto label_28e134;
        case 0x28e138u: goto label_28e138;
        case 0x28e13cu: goto label_28e13c;
        case 0x28e140u: goto label_28e140;
        case 0x28e144u: goto label_28e144;
        case 0x28e148u: goto label_28e148;
        case 0x28e14cu: goto label_28e14c;
        case 0x28e150u: goto label_28e150;
        case 0x28e154u: goto label_28e154;
        case 0x28e158u: goto label_28e158;
        case 0x28e15cu: goto label_28e15c;
        case 0x28e160u: goto label_28e160;
        case 0x28e164u: goto label_28e164;
        case 0x28e168u: goto label_28e168;
        case 0x28e16cu: goto label_28e16c;
        case 0x28e170u: goto label_28e170;
        case 0x28e174u: goto label_28e174;
        case 0x28e178u: goto label_28e178;
        case 0x28e17cu: goto label_28e17c;
        case 0x28e180u: goto label_28e180;
        case 0x28e184u: goto label_28e184;
        case 0x28e188u: goto label_28e188;
        case 0x28e18cu: goto label_28e18c;
        case 0x28e190u: goto label_28e190;
        case 0x28e194u: goto label_28e194;
        case 0x28e198u: goto label_28e198;
        case 0x28e19cu: goto label_28e19c;
        case 0x28e1a0u: goto label_28e1a0;
        case 0x28e1a4u: goto label_28e1a4;
        case 0x28e1a8u: goto label_28e1a8;
        case 0x28e1acu: goto label_28e1ac;
        case 0x28e1b0u: goto label_28e1b0;
        case 0x28e1b4u: goto label_28e1b4;
        case 0x28e1b8u: goto label_28e1b8;
        case 0x28e1bcu: goto label_28e1bc;
        case 0x28e1c0u: goto label_28e1c0;
        case 0x28e1c4u: goto label_28e1c4;
        case 0x28e1c8u: goto label_28e1c8;
        case 0x28e1ccu: goto label_28e1cc;
        case 0x28e1d0u: goto label_28e1d0;
        case 0x28e1d4u: goto label_28e1d4;
        case 0x28e1d8u: goto label_28e1d8;
        case 0x28e1dcu: goto label_28e1dc;
        default: break;
    }

    ctx->pc = 0x28df30u;

label_28df30:
    // 0x28df30: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x28df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_28df34:
    // 0x28df34: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x28df34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_28df38:
    // 0x28df38: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x28df38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_28df3c:
    // 0x28df3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28df3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28df40:
    // 0x28df40: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x28df40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_28df44:
    // 0x28df44: 0x267101a4  addiu       $s1, $s3, 0x1A4
    ctx->pc = 0x28df44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 420));
label_28df48:
    // 0x28df48: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x28df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_28df4c:
    // 0x28df4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28df4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28df50:
    // 0x28df50: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x28df50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_28df54:
    // 0x28df54: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x28df54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28df58:
    // 0x28df58: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x28df58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_28df5c:
    // 0x28df5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28df5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28df60:
    // 0x28df60: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x28df60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_28df64:
    // 0x28df64: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x28df64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_28df68:
    // 0x28df68: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x28df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_28df6c:
    // 0x28df6c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28df6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_28df70:
    // 0x28df70: 0xc13b6ce  jal         func_4EDB38
label_28df74:
    if (ctx->pc == 0x28DF74u) {
        ctx->pc = 0x28DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF70u;
        // 0x28df74: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DF78u;
        goto label_28df78;
    }
    ctx->pc = 0x28DF70u;
    SET_GPR_U32(ctx, 31, 0x28DF78u);
    ctx->pc = 0x28DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF70u;
    // 0x28df74: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDB38u, 0x28DF70u, 0x28DF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF78u;
label_28df78:
    // 0x28df78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28df78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28df7c:
    // 0x28df7c: 0xc0a3792  jal         func_28DE48
label_28df80:
    if (ctx->pc == 0x28DF80u) {
        ctx->pc = 0x28DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF7Cu;
        // 0x28df80: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DF84u;
        goto label_28df84;
    }
    ctx->pc = 0x28DF7Cu;
    SET_GPR_U32(ctx, 31, 0x28DF84u);
    ctx->pc = 0x28DF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF7Cu;
    // 0x28df80: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x28DF7Cu, 0x28DF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF84u;
label_28df84:
    // 0x28df84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28df84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28df88:
    // 0x28df88: 0x10430088  beq         $v0, $v1, . + 4 + (0x88 << 2)
label_28df8c:
    if (ctx->pc == 0x28DF8Cu) {
        ctx->pc = 0x28DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF88u;
        // 0x28df8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DF90u;
        goto label_28df90;
    }
    ctx->pc = 0x28DF88u;
    {
        const bool branch_taken_0x28df88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x28DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF88u;
        // 0x28df8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df88) {
            ctx->pc = 0x28E1ACu;
            goto label_28e1ac;
        }
    }
    ctx->pc = 0x28DF90u;
label_28df90:
    // 0x28df90: 0xc136b80  jal         func_4DAE00
label_28df94:
    if (ctx->pc == 0x28DF94u) {
        ctx->pc = 0x28DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF90u;
        // 0x28df94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DF98u;
        goto label_28df98;
    }
    ctx->pc = 0x28DF90u;
    SET_GPR_U32(ctx, 31, 0x28DF98u);
    ctx->pc = 0x28DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF90u;
    // 0x28df94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x28DF90u, 0x28DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF98u;
label_28df98:
    // 0x28df98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28df98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28df9c:
    // 0x28df9c: 0x8e6201e4  lw          $v0, 0x1E4($s3)
    ctx->pc = 0x28df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 484)));
label_28dfa0:
    // 0x28dfa0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x28dfa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28dfa4:
    // 0x28dfa4: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
label_28dfa8:
    if (ctx->pc == 0x28DFA8u) {
        ctx->pc = 0x28DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DFA4u;
        // 0x28dfa8: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DFACu;
        goto label_28dfac;
    }
    ctx->pc = 0x28DFA4u;
    {
        const bool branch_taken_0x28dfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dfa4) {
            ctx->pc = 0x28DFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DFA4u;
            // 0x28dfa8: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E100u;
            goto label_28e100;
        }
    }
    ctx->pc = 0x28DFACu;
label_28dfac:
    // 0x28dfac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x28dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28dfb0:
    // 0x28dfb0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x28dfb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_28dfb4:
    // 0x28dfb4: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x28dfb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_28dfb8:
    // 0x28dfb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28dfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28dfbc:
    // 0x28dfbc: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x28dfbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_28dfc0:
    // 0x28dfc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28dfc4:
    // 0x28dfc4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x28dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_28dfc8:
    // 0x28dfc8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_28dfcc:
    // 0x28dfcc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x28dfccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_28dfd0:
    // 0x28dfd0: 0xc13b748  jal         func_4EDD20
label_28dfd4:
    if (ctx->pc == 0x28DFD4u) {
        ctx->pc = 0x28DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DFD0u;
        // 0x28dfd4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DFD8u;
        goto label_28dfd8;
    }
    ctx->pc = 0x28DFD0u;
    SET_GPR_U32(ctx, 31, 0x28DFD8u);
    ctx->pc = 0x28DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DFD0u;
    // 0x28dfd4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDD20u, 0x28DFD0u, 0x28DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFD8u;
label_28dfd8:
    // 0x28dfd8: 0x2685ffff  addiu       $a1, $s4, -0x1
    ctx->pc = 0x28dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_28dfdc:
    // 0x28dfdc: 0xc137826  jal         func_4DE098
label_28dfe0:
    if (ctx->pc == 0x28DFE0u) {
        ctx->pc = 0x28DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DFDCu;
        // 0x28dfe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DFE4u;
        goto label_28dfe4;
    }
    ctx->pc = 0x28DFDCu;
    SET_GPR_U32(ctx, 31, 0x28DFE4u);
    ctx->pc = 0x28DFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DFDCu;
    // 0x28dfe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28DFDCu, 0x28DFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFE4u;
label_28dfe4:
    // 0x28dfe4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28dfe8:
    // 0x28dfe8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28dfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_28dfec:
    // 0x28dfec: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x28dfecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28dff0:
    // 0x28dff0: 0xc0e409a  jal         func_390268
label_28dff4:
    if (ctx->pc == 0x28DFF4u) {
        ctx->pc = 0x28DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DFF0u;
        // 0x28dff4: 0xafa30070  sw          $v1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DFF8u;
        goto label_28dff8;
    }
    ctx->pc = 0x28DFF0u;
    SET_GPR_U32(ctx, 31, 0x28DFF8u);
    ctx->pc = 0x28DFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DFF0u;
    // 0x28dff4: 0xafa30070  sw          $v1, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28DFF0u, 0x28DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFF8u;
label_28dff8:
    // 0x28dff8: 0x84470092  lh          $a3, 0x92($v0)
    ctx->pc = 0x28dff8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_28dffc:
    // 0x28dffc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28dffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28e000:
    // 0x28e000: 0x86e60092  lh          $a2, 0x92($s7)
    ctx->pc = 0x28e000u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 146)));
label_28e004:
    // 0x28e004: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x28e004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_28e008:
    // 0x28e008: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x28e008u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_28e00c:
    // 0x28e00c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x28e00cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_28e010:
    // 0x28e010: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x28e010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_28e014:
    // 0x28e014: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x28e014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_28e018:
    // 0x28e018: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x28e018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_28e01c:
    // 0x28e01c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x28e01cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_28e020:
    // 0x28e020: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x28e020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_28e024:
    // 0x28e024: 0xc0cdb38  jal         func_336CE0
label_28e028:
    if (ctx->pc == 0x28E028u) {
        ctx->pc = 0x28E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E024u;
        // 0x28e028: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E02Cu;
        goto label_28e02c;
    }
    ctx->pc = 0x28E024u;
    SET_GPR_U32(ctx, 31, 0x28E02Cu);
    ctx->pc = 0x28E028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E024u;
    // 0x28e028: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x28E024u, 0x28E02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E02Cu;
label_28e02c:
    // 0x28e02c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28e02cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_28e030:
    // 0x28e030: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28e030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28e034:
    // 0x28e034: 0xc0cdb38  jal         func_336CE0
label_28e038:
    if (ctx->pc == 0x28E038u) {
        ctx->pc = 0x28E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E034u;
        // 0x28e038: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E03Cu;
        goto label_28e03c;
    }
    ctx->pc = 0x28E034u;
    SET_GPR_U32(ctx, 31, 0x28E03Cu);
    ctx->pc = 0x28E038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E034u;
    // 0x28e038: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x28E034u, 0x28E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E03Cu;
label_28e03c:
    // 0x28e03c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28e03cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28e040:
    // 0x28e040: 0x0  nop
    ctx->pc = 0x28e040u;
    // NOP
label_28e044:
    // 0x28e044: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_28e048:
    if (ctx->pc == 0x28E048u) {
        ctx->pc = 0x28E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E044u;
        // 0x28e048: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E04Cu;
        goto label_28e04c;
    }
    ctx->pc = 0x28E044u;
    {
        const bool branch_taken_0x28e044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28e044) {
            ctx->pc = 0x28E048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E044u;
            // 0x28e048: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E04Cu;
            goto label_28e04c;
        }
    }
    ctx->pc = 0x28E04Cu;
label_28e04c:
    // 0x28e04c: 0x12400057  beqz        $s2, . + 4 + (0x57 << 2)
label_28e050:
    if (ctx->pc == 0x28E050u) {
        ctx->pc = 0x28E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E04Cu;
        // 0x28e050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E054u;
        goto label_28e054;
    }
    ctx->pc = 0x28E04Cu;
    {
        const bool branch_taken_0x28e04c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E04Cu;
        // 0x28e050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e04c) {
            ctx->pc = 0x28E1ACu;
            goto label_28e1ac;
        }
    }
    ctx->pc = 0x28E054u;
label_28e054:
    // 0x28e054: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x28e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_28e058:
    // 0x28e058: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x28e058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_28e05c:
    // 0x28e05c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x28e05cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e060:
    // 0x28e060: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x28e060u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e064:
    // 0x28e064: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x28e064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_28e068:
    // 0x28e068: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x28e068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_28e06c:
    // 0x28e06c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28e06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28e070:
    // 0x28e070: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x28e070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_28e074:
    // 0x28e074: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28e074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_28e078:
    // 0x28e078: 0x0  nop
    ctx->pc = 0x28e078u;
    // NOP
label_28e07c:
    // 0x28e07c: 0x0  nop
    ctx->pc = 0x28e07cu;
    // NOP
label_28e080:
    // 0x28e080: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
label_28e084:
    if (ctx->pc == 0x28E084u) {
        ctx->pc = 0x28E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E080u;
        // 0x28e084: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E088u;
        goto label_28e088;
    }
    ctx->pc = 0x28E080u;
    {
        const bool branch_taken_0x28e080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x28E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E080u;
        // 0x28e084: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e080) {
            ctx->pc = 0x28E070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e070;
        }
    }
    ctx->pc = 0x28E088u;
label_28e088:
    // 0x28e088: 0x8e6301e4  lw          $v1, 0x1E4($s3)
    ctx->pc = 0x28e088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 484)));
label_28e08c:
    // 0x28e08c: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x28e08cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_28e090:
    // 0x28e090: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x28e090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_28e094:
    // 0x28e094: 0x282900b  movn        $s2, $s4, $v0
    ctx->pc = 0x28e094u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 20));
label_28e098:
    // 0x28e098: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_28e09c:
    if (ctx->pc == 0x28E09Cu) {
        ctx->pc = 0x28E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E098u;
        // 0x28e09c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E0A0u;
        goto label_28e0a0;
    }
    ctx->pc = 0x28E098u;
    {
        const bool branch_taken_0x28e098 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E098u;
        // 0x28e09c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e098) {
            ctx->pc = 0x28E0D0u;
            goto label_28e0d0;
        }
    }
    ctx->pc = 0x28E0A0u;
label_28e0a0:
    // 0x28e0a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28e0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e0a4:
    // 0x28e0a4: 0xc137826  jal         func_4DE098
label_28e0a8:
    if (ctx->pc == 0x28E0A8u) {
        ctx->pc = 0x28E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0A4u;
        // 0x28e0a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E0ACu;
        goto label_28e0ac;
    }
    ctx->pc = 0x28E0A4u;
    SET_GPR_U32(ctx, 31, 0x28E0ACu);
    ctx->pc = 0x28E0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0A4u;
    // 0x28e0a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28E0A4u, 0x28E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0ACu;
label_28e0ac:
    // 0x28e0ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e0b0:
    // 0x28e0b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28e0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e0b4:
    // 0x28e0b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28e0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28e0b8:
    // 0x28e0b8: 0xc137826  jal         func_4DE098
label_28e0bc:
    if (ctx->pc == 0x28E0BCu) {
        ctx->pc = 0x28E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0B8u;
        // 0x28e0bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E0C0u;
        goto label_28e0c0;
    }
    ctx->pc = 0x28E0B8u;
    SET_GPR_U32(ctx, 31, 0x28E0C0u);
    ctx->pc = 0x28E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0B8u;
    // 0x28e0bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28E0B8u, 0x28E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0C0u;
label_28e0c0:
    // 0x28e0c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28e0c4:
    // 0x28e0c4: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x28e0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_28e0c8:
    // 0x28e0c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_28e0cc:
    if (ctx->pc == 0x28E0CCu) {
        ctx->pc = 0x28E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0C8u;
        // 0x28e0cc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E0D0u;
        goto label_28e0d0;
    }
    ctx->pc = 0x28E0C8u;
    {
        const bool branch_taken_0x28e0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0C8u;
        // 0x28e0cc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0c8) {
            ctx->pc = 0x28E0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e0a0;
        }
    }
    ctx->pc = 0x28E0D0u;
label_28e0d0:
    // 0x28e0d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28e0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28e0d4:
    // 0x28e0d4: 0xc13b69a  jal         func_4EDA68
label_28e0d8:
    if (ctx->pc == 0x28E0D8u) {
        ctx->pc = 0x28E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0D4u;
        // 0x28e0d8: 0x266401a4  addiu       $a0, $s3, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E0DCu;
        goto label_28e0dc;
    }
    ctx->pc = 0x28E0D4u;
    SET_GPR_U32(ctx, 31, 0x28E0DCu);
    ctx->pc = 0x28E0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0D4u;
    // 0x28e0d8: 0x266401a4  addiu       $a0, $s3, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDA68u, 0x28E0D4u, 0x28E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0DCu;
label_28e0dc:
    // 0x28e0dc: 0xc0e409a  jal         func_390268
label_28e0e0:
    if (ctx->pc == 0x28E0E0u) {
        ctx->pc = 0x28E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0DCu;
        // 0x28e0e0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E0E4u;
        goto label_28e0e4;
    }
    ctx->pc = 0x28E0DCu;
    SET_GPR_U32(ctx, 31, 0x28E0E4u);
    ctx->pc = 0x28E0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0DCu;
    // 0x28e0e0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28E0DCu, 0x28E0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0E4u;
label_28e0e4:
    // 0x28e0e4: 0xc087502  jal         func_21D408
label_28e0e8:
    if (ctx->pc == 0x28E0E8u) {
        ctx->pc = 0x28E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0E4u;
        // 0x28e0e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E0ECu;
        goto label_28e0ec;
    }
    ctx->pc = 0x28E0E4u;
    SET_GPR_U32(ctx, 31, 0x28E0ECu);
    ctx->pc = 0x28E0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0E4u;
    // 0x28e0e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28E0E4u, 0x28E0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0ECu;
label_28e0ec:
    // 0x28e0ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28e0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e0f0:
    // 0x28e0f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28e0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e0f4:
    // 0x28e0f4: 0xc0a33f8  jal         func_28CFE0
label_28e0f8:
    if (ctx->pc == 0x28E0F8u) {
        ctx->pc = 0x28E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0F4u;
        // 0x28e0f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E0FCu;
        goto label_28e0fc;
    }
    ctx->pc = 0x28E0F4u;
    SET_GPR_U32(ctx, 31, 0x28E0FCu);
    ctx->pc = 0x28E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E0F4u;
    // 0x28e0f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x28E0F4u, 0x28E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0FCu;
label_28e0fc:
    // 0x28e0fc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x28e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_28e100:
    // 0x28e100: 0x267001a4  addiu       $s0, $s3, 0x1A4
    ctx->pc = 0x28e100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 420));
label_28e104:
    // 0x28e104: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28e104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e108:
    // 0x28e108: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28e108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28e10c:
    // 0x28e10c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28e110:
    // 0x28e110: 0x40f809  jalr        $v0
label_28e114:
    if (ctx->pc == 0x28E114u) {
        ctx->pc = 0x28E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E110u;
        // 0x28e114: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E118u;
        goto label_28e118;
    }
    ctx->pc = 0x28E110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E118u);
        ctx->pc = 0x28E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E110u;
        // 0x28e114: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E110u, 0x28E118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E118u;
label_28e118:
    // 0x28e118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e11c:
    // 0x28e11c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x28e11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_28e120:
    // 0x28e120: 0xc13786a  jal         func_4DE1A8
label_28e124:
    if (ctx->pc == 0x28E124u) {
        ctx->pc = 0x28E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E120u;
        // 0x28e124: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E128u;
        goto label_28e128;
    }
    ctx->pc = 0x28E120u;
    SET_GPR_U32(ctx, 31, 0x28E128u);
    ctx->pc = 0x28E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E120u;
    // 0x28e124: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE1A8u, 0x28E120u, 0x28E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E128u;
label_28e128:
    // 0x28e128: 0xc087502  jal         func_21D408
label_28e12c:
    if (ctx->pc == 0x28E12Cu) {
        ctx->pc = 0x28E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E128u;
        // 0x28e12c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E130u;
        goto label_28e130;
    }
    ctx->pc = 0x28E128u;
    SET_GPR_U32(ctx, 31, 0x28E130u);
    ctx->pc = 0x28E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E128u;
    // 0x28e12c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28E128u, 0x28E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E130u;
label_28e130:
    // 0x28e130: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x28e130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_28e134:
    // 0x28e134: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x28e134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28e138:
    // 0x28e138: 0xc088ed2  jal         func_223B48
label_28e13c:
    if (ctx->pc == 0x28E13Cu) {
        ctx->pc = 0x28E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E138u;
        // 0x28e13c: 0x8c70002c  lw          $s0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E140u;
        goto label_28e140;
    }
    ctx->pc = 0x28E138u;
    SET_GPR_U32(ctx, 31, 0x28E140u);
    ctx->pc = 0x28E13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E138u;
    // 0x28e13c: 0x8c70002c  lw          $s0, 0x2C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x28E138u, 0x28E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E140u;
label_28e140:
    // 0x28e140: 0x1451000c  bne         $v0, $s1, . + 4 + (0xC << 2)
label_28e144:
    if (ctx->pc == 0x28E144u) {
        ctx->pc = 0x28E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E140u;
        // 0x28e144: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E148u;
        goto label_28e148;
    }
    ctx->pc = 0x28E140u;
    {
        const bool branch_taken_0x28e140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x28E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E140u;
        // 0x28e144: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e140) {
            ctx->pc = 0x28E174u;
            goto label_28e174;
        }
    }
    ctx->pc = 0x28E148u;
label_28e148:
    // 0x28e148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e14c:
    // 0x28e14c: 0xc059132  jal         func_1644C8
label_28e150:
    if (ctx->pc == 0x28E150u) {
        ctx->pc = 0x28E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E14Cu;
        // 0x28e150: 0x8c44caa8  lw          $a0, -0x3558($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E154u;
        goto label_28e154;
    }
    ctx->pc = 0x28E14Cu;
    SET_GPR_U32(ctx, 31, 0x28E154u);
    ctx->pc = 0x28E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E14Cu;
    // 0x28e150: 0x8c44caa8  lw          $a0, -0x3558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1644C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1644C8u, 0x28E14Cu, 0x28E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E154u;
label_28e154:
    // 0x28e154: 0x9265014b  lbu         $a1, 0x14B($s3)
    ctx->pc = 0x28e154u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 331)));
label_28e158:
    // 0x28e158: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28e158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e15c:
    // 0x28e15c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28e15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e160:
    // 0x28e160: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x28e160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_28e164:
    // 0x28e164: 0xc0a4478  jal         func_2911E0
label_28e168:
    if (ctx->pc == 0x28E168u) {
        ctx->pc = 0x28E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E164u;
        // 0x28e168: 0xc2280b  movn        $a1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E16Cu;
        goto label_28e16c;
    }
    ctx->pc = 0x28E164u;
    SET_GPR_U32(ctx, 31, 0x28E16Cu);
    ctx->pc = 0x28E168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E164u;
    // 0x28e168: 0xc2280b  movn        $a1, $a2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x28E164u, 0x28E16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E16Cu;
label_28e16c:
    // 0x28e16c: 0x1000000f  b           . + 4 + (0xF << 2)
label_28e170:
    if (ctx->pc == 0x28E170u) {
        ctx->pc = 0x28E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E16Cu;
        // 0x28e170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E174u;
        goto label_28e174;
    }
    ctx->pc = 0x28E16Cu;
    {
        const bool branch_taken_0x28e16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E16Cu;
        // 0x28e170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e16c) {
            ctx->pc = 0x28E1ACu;
            goto label_28e1ac;
        }
    }
    ctx->pc = 0x28E174u;
label_28e174:
    // 0x28e174: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e178:
    // 0x28e178: 0xc059126  jal         func_164498
label_28e17c:
    if (ctx->pc == 0x28E17Cu) {
        ctx->pc = 0x28E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E178u;
        // 0x28e17c: 0x8c44caa8  lw          $a0, -0x3558($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E180u;
        goto label_28e180;
    }
    ctx->pc = 0x28E178u;
    SET_GPR_U32(ctx, 31, 0x28E180u);
    ctx->pc = 0x28E17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E178u;
    // 0x28e17c: 0x8c44caa8  lw          $a0, -0x3558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164498u, 0x28E178u, 0x28E180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E180u;
label_28e180:
    // 0x28e180: 0x9265014a  lbu         $a1, 0x14A($s3)
    ctx->pc = 0x28e180u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 330)));
label_28e184:
    // 0x28e184: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28e184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e188:
    // 0x28e188: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x28e188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28e18c:
    // 0x28e18c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28e18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e190:
    // 0x28e190: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x28e190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_28e194:
    // 0x28e194: 0xa2300a  movz        $a2, $a1, $v0
    ctx->pc = 0x28e194u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
label_28e198:
    // 0x28e198: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x28e198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_28e19c:
    // 0x28e19c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28e19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e1a0:
    // 0x28e1a0: 0xc0a4476  jal         func_2911D8
label_28e1a4:
    if (ctx->pc == 0x28E1A4u) {
        ctx->pc = 0x28E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1A0u;
        // 0x28e1a4: 0xc3280b  movn        $a1, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E1A8u;
        goto label_28e1a8;
    }
    ctx->pc = 0x28E1A0u;
    SET_GPR_U32(ctx, 31, 0x28E1A8u);
    ctx->pc = 0x28E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E1A0u;
    // 0x28e1a4: 0xc3280b  movn        $a1, $a2, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D8u, 0x28E1A0u, 0x28E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E1A8u;
label_28e1a8:
    // 0x28e1a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e1ac:
    // 0x28e1ac: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x28e1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_28e1b0:
    // 0x28e1b0: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x28e1b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_28e1b4:
    // 0x28e1b4: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x28e1b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_28e1b8:
    // 0x28e1b8: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x28e1b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_28e1bc:
    // 0x28e1bc: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x28e1bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_28e1c0:
    // 0x28e1c0: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x28e1c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_28e1c4:
    // 0x28e1c4: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x28e1c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_28e1c8:
    // 0x28e1c8: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x28e1c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28e1cc:
    // 0x28e1cc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x28e1ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28e1d0:
    // 0x28e1d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28e1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_28e1d4:
    // 0x28e1d4: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x28e1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28e1d8:
    // 0x28e1d8: 0x3e00008  jr          $ra
label_28e1dc:
    if (ctx->pc == 0x28E1DCu) {
        ctx->pc = 0x28E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1D8u;
        // 0x28e1dc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E1E0u;
        goto label_fallthrough_0x28e1d8;
    }
    ctx->pc = 0x28E1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1D8u;
        // 0x28e1dc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28e1d8:
    ctx->pc = 0x28E1E0u;
}
