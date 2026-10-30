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

// Function: sub_0022EB40
// Address: 0x22eb40 - 0x22ec18
void sub_0022EB40_0x22eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EB40_0x22eb40");
#endif

    switch (ctx->pc) {
        case 0x22eb60u: goto label_22eb60;
        case 0x22eb70u: goto label_22eb70;
        case 0x22eb78u: goto label_22eb78;
        case 0x22eb88u: goto label_22eb88;
        case 0x22eb90u: goto label_22eb90;
        case 0x22eba0u: goto label_22eba0;
        case 0x22eba8u: goto label_22eba8;
        case 0x22ebe0u: goto label_22ebe0;
        case 0x22ebe8u: goto label_22ebe8;
        default: break;
    }

    ctx->pc = 0x22eb40u;

    // 0x22eb40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22eb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22eb44: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22eb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22eb48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22eb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22eb4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22eb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22eb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22eb54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22eb54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb58: 0xc089f66  jal         func_227D98
    ctx->pc = 0x22EB58u;
    SET_GPR_U32(ctx, 31, 0x22EB60u);
    ctx->pc = 0x22EB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB58u;
    // 0x22eb5c: 0xa20003be  sb          $zero, 0x3BE($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 958), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x22EB58u, 0x22EB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB60u;
label_22eb60:
    // 0x22eb60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22EB60u;
    {
        const bool branch_taken_0x22eb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eb60) {
            ctx->pc = 0x22EB70u;
            goto label_22eb70;
        }
    }
    ctx->pc = 0x22EB68u;
    // 0x22eb68: 0xc08bf00  jal         func_22FC00
    ctx->pc = 0x22EB68u;
    SET_GPR_U32(ctx, 31, 0x22EB70u);
    ctx->pc = 0x22EB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB68u;
    // 0x22eb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FC00u, 0x22EB68u, 0x22EB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB70u;
label_22eb70:
    // 0x22eb70: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x22EB70u;
    SET_GPR_U32(ctx, 31, 0x22EB78u);
    ctx->pc = 0x22EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB70u;
    // 0x22eb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x22EB70u, 0x22EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB78u;
label_22eb78:
    // 0x22eb78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22EB78u;
    {
        const bool branch_taken_0x22eb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB78u;
        // 0x22eb7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb78) {
            ctx->pc = 0x22EB90u;
            goto label_22eb90;
        }
    }
    ctx->pc = 0x22EB80u;
    // 0x22eb80: 0xc08c166  jal         func_230598
    ctx->pc = 0x22EB80u;
    SET_GPR_U32(ctx, 31, 0x22EB88u);
    ctx->pc = 0x22EB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB80u;
    // 0x22eb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230598u, 0x22EB80u, 0x22EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB88u;
label_22eb88:
    // 0x22eb88: 0xc08bf92  jal         func_22FE48
    ctx->pc = 0x22EB88u;
    SET_GPR_U32(ctx, 31, 0x22EB90u);
    ctx->pc = 0x22EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB88u;
    // 0x22eb8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x22EB88u, 0x22EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB90u;
label_22eb90:
    // 0x22eb90: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22eb90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22eb94: 0x52df8  dsll        $a1, $a1, 23
    ctx->pc = 0x22eb94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 23);
    // 0x22eb98: 0xc089988  jal         func_226620
    ctx->pc = 0x22EB98u;
    SET_GPR_U32(ctx, 31, 0x22EBA0u);
    ctx->pc = 0x22EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB98u;
    // 0x22eb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22EB98u, 0x22EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EBA0u;
label_22eba0:
    // 0x22eba0: 0xc088b98  jal         func_222E60
    ctx->pc = 0x22EBA0u;
    SET_GPR_U32(ctx, 31, 0x22EBA8u);
    ctx->pc = 0x22EBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EBA0u;
    // 0x22eba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x22EBA0u, 0x22EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EBA8u;
label_22eba8:
    // 0x22eba8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EBA8u;
    {
        const bool branch_taken_0x22eba8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBA8u;
        // 0x22ebac: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eba8) {
            ctx->pc = 0x22EBBCu;
            goto label_22ebbc;
        }
    }
    ctx->pc = 0x22EBB0u;
    // 0x22ebb0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x22ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x22ebb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22EBB4u;
    {
        const bool branch_taken_0x22ebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBB4u;
        // 0x22ebb8: 0xa4460144  sh          $a2, 0x144($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 324), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebb4) {
            ctx->pc = 0x22EBD8u;
            goto label_22ebd8;
        }
    }
    ctx->pc = 0x22EBBCu;
label_22ebbc:
    // 0x22ebbc: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x22ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x22ebc0: 0x62043  sra         $a0, $a2, 1
    ctx->pc = 0x22ebc0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 1));
    // 0x22ebc4: 0x84a20144  lh          $v0, 0x144($a1)
    ctx->pc = 0x22ebc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 324)));
    // 0x22ebc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22ebcc: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x22ebccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22ebd0: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x22ebd0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x22ebd4: 0xa4a20144  sh          $v0, 0x144($a1)
    ctx->pc = 0x22ebd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 324), (uint16_t)GPR_U32(ctx, 2));
label_22ebd8:
    // 0x22ebd8: 0xc087382  jal         func_21CE08
    ctx->pc = 0x22EBD8u;
    SET_GPR_U32(ctx, 31, 0x22EBE0u);
    ctx->pc = 0x22EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EBD8u;
    // 0x22ebdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE08u, 0x22EBD8u, 0x22EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EBE0u;
label_22ebe0:
    // 0x22ebe0: 0xc093290  jal         func_24CA40
    ctx->pc = 0x22EBE0u;
    SET_GPR_U32(ctx, 31, 0x22EBE8u);
    ctx->pc = 0x22EBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EBE0u;
    // 0x22ebe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA40u, 0x22EBE0u, 0x22EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EBE8u;
label_22ebe8:
    // 0x22ebe8: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x22ebe8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ebec: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x22ebecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ebf0: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x22ebf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ebf4: 0xa3a00003  sb          $zero, 0x3($sp)
    ctx->pc = 0x22ebf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ebf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22ebf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ebfc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ec00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22ec00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ec04: 0xae020644  sw          $v0, 0x644($s0)
    ctx->pc = 0x22ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 2));
    // 0x22ec08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22ec08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ec0c: 0x3e00008  jr          $ra
    ctx->pc = 0x22EC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC0Cu;
        // 0x22ec10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EC14u;
    // 0x22ec14: 0x0  nop
    ctx->pc = 0x22ec14u;
    // NOP
    ctx->pc = 0x22ec18u;
}
