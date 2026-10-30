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

// Function: sub_0022DF88
// Address: 0x22df88 - 0x22e020
void sub_0022DF88_0x22df88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DF88_0x22df88");
#endif

    switch (ctx->pc) {
        case 0x22df88u: goto label_22df88;
        case 0x22df8cu: goto label_22df8c;
        case 0x22df90u: goto label_22df90;
        case 0x22df94u: goto label_22df94;
        case 0x22df98u: goto label_22df98;
        case 0x22df9cu: goto label_22df9c;
        case 0x22dfa0u: goto label_22dfa0;
        case 0x22dfa4u: goto label_22dfa4;
        case 0x22dfa8u: goto label_22dfa8;
        case 0x22dfacu: goto label_22dfac;
        case 0x22dfb0u: goto label_22dfb0;
        case 0x22dfb4u: goto label_22dfb4;
        case 0x22dfb8u: goto label_22dfb8;
        case 0x22dfbcu: goto label_22dfbc;
        case 0x22dfc0u: goto label_22dfc0;
        case 0x22dfc4u: goto label_22dfc4;
        case 0x22dfc8u: goto label_22dfc8;
        case 0x22dfccu: goto label_22dfcc;
        case 0x22dfd0u: goto label_22dfd0;
        case 0x22dfd4u: goto label_22dfd4;
        case 0x22dfd8u: goto label_22dfd8;
        case 0x22dfdcu: goto label_22dfdc;
        case 0x22dfe0u: goto label_22dfe0;
        case 0x22dfe4u: goto label_22dfe4;
        case 0x22dfe8u: goto label_22dfe8;
        case 0x22dfecu: goto label_22dfec;
        case 0x22dff0u: goto label_22dff0;
        case 0x22dff4u: goto label_22dff4;
        case 0x22dff8u: goto label_22dff8;
        case 0x22dffcu: goto label_22dffc;
        case 0x22e000u: goto label_22e000;
        case 0x22e004u: goto label_22e004;
        case 0x22e008u: goto label_22e008;
        case 0x22e00cu: goto label_22e00c;
        case 0x22e010u: goto label_22e010;
        case 0x22e014u: goto label_22e014;
        case 0x22e018u: goto label_22e018;
        case 0x22e01cu: goto label_22e01c;
        default: break;
    }

    ctx->pc = 0x22df88u;

label_22df88:
    // 0x22df88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22df88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22df8c:
    // 0x22df8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22df8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22df90:
    // 0x22df90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22df90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22df94:
    // 0x22df94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22df94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22df98:
    // 0x22df98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22df98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22df9c:
    // 0x22df9c: 0xc088ac6  jal         func_222B18
label_22dfa0:
    if (ctx->pc == 0x22DFA0u) {
        ctx->pc = 0x22DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF9Cu;
        // 0x22dfa0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DFA4u;
        goto label_22dfa4;
    }
    ctx->pc = 0x22DF9Cu;
    SET_GPR_U32(ctx, 31, 0x22DFA4u);
    ctx->pc = 0x22DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF9Cu;
    // 0x22dfa0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22DF9Cu, 0x22DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFA4u;
label_22dfa4:
    // 0x22dfa4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22dfa8:
    // 0x22dfa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22dfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22dfac:
    // 0x22dfac: 0xc088ac6  jal         func_222B18
label_22dfb0:
    if (ctx->pc == 0x22DFB0u) {
        ctx->pc = 0x22DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFACu;
        // 0x22dfb0: 0xa4430046  sh          $v1, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DFB4u;
        goto label_22dfb4;
    }
    ctx->pc = 0x22DFACu;
    SET_GPR_U32(ctx, 31, 0x22DFB4u);
    ctx->pc = 0x22DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DFACu;
    // 0x22dfb0: 0xa4430046  sh          $v1, 0x46($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22DFACu, 0x22DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFB4u;
label_22dfb4:
    // 0x22dfb4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x22dfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_22dfb8:
    // 0x22dfb8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22dfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_22dfbc:
    // 0x22dfbc: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22dfbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_22dfc0:
    // 0x22dfc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22dfc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22dfc4:
    // 0x22dfc4: 0x8c8302c0  lw          $v1, 0x2C0($a0)
    ctx->pc = 0x22dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 704)));
label_22dfc8:
    // 0x22dfc8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22dfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22dfcc:
    // 0x22dfcc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x22dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_22dfd0:
    // 0x22dfd0: 0xa4430040  sh          $v1, 0x40($v0)
    ctx->pc = 0x22dfd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 3));
label_22dfd4:
    // 0x22dfd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22dfd8:
    // 0x22dfd8: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22dfd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22dfdc:
    // 0x22dfdc: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x22dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22dfe0:
    // 0x22dfe0: 0x60f809  jalr        $v1
label_22dfe4:
    if (ctx->pc == 0x22DFE4u) {
        ctx->pc = 0x22DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFE0u;
        // 0x22dfe4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DFE8u;
        goto label_22dfe8;
    }
    ctx->pc = 0x22DFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22DFE8u);
        ctx->pc = 0x22DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFE0u;
        // 0x22dfe4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DFE0u, 0x22DFE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22DFE8u;
label_22dfe8:
    // 0x22dfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22dfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22dfec:
    // 0x22dfec: 0xc089988  jal         func_226620
label_22dff0:
    if (ctx->pc == 0x22DFF0u) {
        ctx->pc = 0x22DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFECu;
        // 0x22dff0: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DFF4u;
        goto label_22dff4;
    }
    ctx->pc = 0x22DFECu;
    SET_GPR_U32(ctx, 31, 0x22DFF4u);
    ctx->pc = 0x22DFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DFECu;
    // 0x22dff0: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22DFECu, 0x22DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFF4u;
label_22dff4:
    // 0x22dff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22dff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22dff8:
    // 0x22dff8: 0xc089974  jal         func_2265D0
label_22dffc:
    if (ctx->pc == 0x22DFFCu) {
        ctx->pc = 0x22DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFF8u;
        // 0x22dffc: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E000u;
        goto label_22e000;
    }
    ctx->pc = 0x22DFF8u;
    SET_GPR_U32(ctx, 31, 0x22E000u);
    ctx->pc = 0x22DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DFF8u;
    // 0x22dffc: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22DFF8u, 0x22E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E000u;
label_22e000:
    // 0x22e000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e004:
    // 0x22e004: 0xc089c20  jal         func_227080
label_22e008:
    if (ctx->pc == 0x22E008u) {
        ctx->pc = 0x22E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E004u;
        // 0x22e008: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E00Cu;
        goto label_22e00c;
    }
    ctx->pc = 0x22E004u;
    SET_GPR_U32(ctx, 31, 0x22E00Cu);
    ctx->pc = 0x22E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E004u;
    // 0x22e008: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x22E004u, 0x22E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E00Cu;
label_22e00c:
    // 0x22e00c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22e00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e010:
    // 0x22e010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e014:
    // 0x22e014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e018:
    // 0x22e018: 0x3e00008  jr          $ra
label_22e01c:
    if (ctx->pc == 0x22E01Cu) {
        ctx->pc = 0x22E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E018u;
        // 0x22e01c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E020u;
        goto label_fallthrough_0x22e018;
    }
    ctx->pc = 0x22E018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E018u;
        // 0x22e01c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22e018:
    ctx->pc = 0x22E020u;
}
