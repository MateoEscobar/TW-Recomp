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

// Function: sub_00321CD8
// Address: 0x321cd8 - 0x321d80
void sub_00321CD8_0x321cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321CD8_0x321cd8");
#endif

    switch (ctx->pc) {
        case 0x321cf8u: goto label_321cf8;
        case 0x321d0cu: goto label_321d0c;
        case 0x321d1cu: goto label_321d1c;
        case 0x321d3cu: goto label_321d3c;
        case 0x321d54u: goto label_321d54;
        case 0x321d60u: goto label_321d60;
        default: break;
    }

    ctx->pc = 0x321cd8u;

    // 0x321cd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x321cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x321cdc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x321cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x321ce0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x321ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x321ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x321ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ce8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x321ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x321cec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x321cf0: 0xc05959e  jal         func_165678
    ctx->pc = 0x321CF0u;
    SET_GPR_U32(ctx, 31, 0x321CF8u);
    ctx->pc = 0x321CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321CF0u;
    // 0x321cf4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x321CF0u, 0x321CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321CF8u;
label_321cf8:
    // 0x321cf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x321cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321cfc: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x321CFCu;
    {
        const bool branch_taken_0x321cfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CFCu;
        // 0x321d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321cfc) {
            ctx->pc = 0x321D44u;
            goto label_321d44;
        }
    }
    ctx->pc = 0x321D04u;
    // 0x321d04: 0xc088edc  jal         func_223B70
    ctx->pc = 0x321D04u;
    SET_GPR_U32(ctx, 31, 0x321D0Cu);
    ctx->pc = 0x321D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D04u;
    // 0x321d08: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x321D04u, 0x321D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D0Cu;
label_321d0c:
    // 0x321d0c: 0x10520016  beq         $v0, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x321D0Cu;
    {
        const bool branch_taken_0x321d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x321D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D0Cu;
        // 0x321d10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d0c) {
            ctx->pc = 0x321D68u;
            goto label_321d68;
        }
    }
    ctx->pc = 0x321D14u;
    // 0x321d14: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x321D14u;
    SET_GPR_U32(ctx, 31, 0x321D1Cu);
    ctx->pc = 0x321D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D14u;
    // 0x321d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x321D14u, 0x321D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D1Cu;
label_321d1c:
    // 0x321d1c: 0x10520012  beq         $v0, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x321D1Cu;
    {
        const bool branch_taken_0x321d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x321D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D1Cu;
        // 0x321d20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d1c) {
            ctx->pc = 0x321D68u;
            goto label_321d68;
        }
    }
    ctx->pc = 0x321D24u;
    // 0x321d24: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x321d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x321d28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x321D28u;
    {
        const bool branch_taken_0x321d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321d28) {
            ctx->pc = 0x321D4Cu;
            goto label_321d4c;
        }
    }
    ctx->pc = 0x321D30u;
    // 0x321d30: 0xa2120011  sb          $s2, 0x11($s0)
    ctx->pc = 0x321d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 18));
    // 0x321d34: 0xc0c86c0  jal         func_321B00
    ctx->pc = 0x321D34u;
    SET_GPR_U32(ctx, 31, 0x321D3Cu);
    ctx->pc = 0x321D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D34u;
    // 0x321d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321B00u, 0x321D34u, 0x321D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D3Cu;
label_321d3c:
    // 0x321d3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321D3Cu;
    {
        const bool branch_taken_0x321d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321d3c) {
            ctx->pc = 0x321D4Cu;
            goto label_321d4c;
        }
    }
    ctx->pc = 0x321D44u;
label_321d44:
    // 0x321d44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x321D44u;
    {
        const bool branch_taken_0x321d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D44u;
        // 0x321d48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d44) {
            ctx->pc = 0x321D68u;
            goto label_321d68;
        }
    }
    ctx->pc = 0x321D4Cu;
label_321d4c:
    // 0x321d4c: 0xc087502  jal         func_21D408
    ctx->pc = 0x321D4Cu;
    SET_GPR_U32(ctx, 31, 0x321D54u);
    ctx->pc = 0x321D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D4Cu;
    // 0x321d50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x321D4Cu, 0x321D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D54u;
label_321d54:
    // 0x321d54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x321d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321d58: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x321D58u;
    SET_GPR_U32(ctx, 31, 0x321D60u);
    ctx->pc = 0x321D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D58u;
    // 0x321d5c: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x321D58u, 0x321D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D60u;
label_321d60:
    // 0x321d60: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x321d60u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x321d64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x321d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_321d68:
    // 0x321d68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x321d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321d6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x321d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321d70: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x321d70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321d78: 0x3e00008  jr          $ra
    ctx->pc = 0x321D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D78u;
        // 0x321d7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321D80u;
}
