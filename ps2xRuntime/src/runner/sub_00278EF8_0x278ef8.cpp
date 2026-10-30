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

// Function: sub_00278EF8
// Address: 0x278ef8 - 0x278fa0
void sub_00278EF8_0x278ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278EF8_0x278ef8");
#endif

    switch (ctx->pc) {
        case 0x278f14u: goto label_278f14;
        case 0x278f24u: goto label_278f24;
        case 0x278f30u: goto label_278f30;
        case 0x278f58u: goto label_278f58;
        case 0x278f68u: goto label_278f68;
        case 0x278f78u: goto label_278f78;
        default: break;
    }

    ctx->pc = 0x278ef8u;

    // 0x278ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278efc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x278efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x278f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x278f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x278f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278f0c: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x278F0Cu;
    SET_GPR_U32(ctx, 31, 0x278F14u);
    ctx->pc = 0x278F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F0Cu;
    // 0x278f10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x278F0Cu, 0x278F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F14u;
label_278f14:
    // 0x278f14: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x278F14u;
    {
        const bool branch_taken_0x278f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278f14) {
            ctx->pc = 0x278F50u;
            goto label_278f50;
        }
    }
    ctx->pc = 0x278F1Cu;
    // 0x278f1c: 0xc087502  jal         func_21D408
    ctx->pc = 0x278F1Cu;
    SET_GPR_U32(ctx, 31, 0x278F24u);
    ctx->pc = 0x278F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F1Cu;
    // 0x278f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x278F1Cu, 0x278F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F24u;
label_278f24:
    // 0x278f24: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x278f24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x278f28: 0xc087502  jal         func_21D408
    ctx->pc = 0x278F28u;
    SET_GPR_U32(ctx, 31, 0x278F30u);
    ctx->pc = 0x278F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F28u;
    // 0x278f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x278F28u, 0x278F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F30u;
label_278f30:
    // 0x278f30: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x278f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x278f34: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x278F34u;
    {
        const bool branch_taken_0x278f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x278f34) {
            ctx->pc = 0x278F50u;
            goto label_278f50;
        }
    }
    ctx->pc = 0x278F3Cu;
    // 0x278f3c: 0x922200e1  lbu         $v0, 0xE1($s1)
    ctx->pc = 0x278f3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 225)));
    // 0x278f40: 0x21678  dsll        $v0, $v0, 25
    ctx->pc = 0x278f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
    // 0x278f44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x278f44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x278f48: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x278F48u;
    {
        const bool branch_taken_0x278f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F48u;
        // 0x278f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f48) {
            ctx->pc = 0x278F88u;
            goto label_278f88;
        }
    }
    ctx->pc = 0x278F50u;
label_278f50:
    // 0x278f50: 0xc088edc  jal         func_223B70
    ctx->pc = 0x278F50u;
    SET_GPR_U32(ctx, 31, 0x278F58u);
    ctx->pc = 0x278F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F50u;
    // 0x278f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x278F50u, 0x278F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F58u;
label_278f58:
    // 0x278f58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x278F58u;
    {
        const bool branch_taken_0x278f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F58u;
        // 0x278f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f58) {
            ctx->pc = 0x278F88u;
            goto label_278f88;
        }
    }
    ctx->pc = 0x278F60u;
    // 0x278f60: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x278F60u;
    SET_GPR_U32(ctx, 31, 0x278F68u);
    ctx->pc = 0x278F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F60u;
    // 0x278f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x278F60u, 0x278F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F68u;
label_278f68:
    // 0x278f68: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x278F68u;
    {
        const bool branch_taken_0x278f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278f68) {
            ctx->pc = 0x278F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278F68u;
            // 0x278f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278F88u;
            goto label_278f88;
        }
    }
    ctx->pc = 0x278F70u;
    // 0x278f70: 0xc089f86  jal         func_227E18
    ctx->pc = 0x278F70u;
    SET_GPR_U32(ctx, 31, 0x278F78u);
    ctx->pc = 0x278F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F70u;
    // 0x278f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x278F70u, 0x278F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F78u;
label_278f78:
    // 0x278f78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x278f78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f7c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x278F7Cu;
    {
        const bool branch_taken_0x278f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F7Cu;
        // 0x278f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f7c) {
            ctx->pc = 0x278F88u;
            goto label_278f88;
        }
    }
    ctx->pc = 0x278F84u;
    // 0x278f84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x278f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278f88:
    // 0x278f88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x278f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278f8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x278f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278f94: 0x3e00008  jr          $ra
    ctx->pc = 0x278F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F94u;
        // 0x278f98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278F9Cu;
    // 0x278f9c: 0x0  nop
    ctx->pc = 0x278f9cu;
    // NOP
    ctx->pc = 0x278fa0u;
}
