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

// Function: sub_00180EE0
// Address: 0x180ee0 - 0x180f58
void sub_00180EE0_0x180ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180EE0_0x180ee0");
#endif

    switch (ctx->pc) {
        case 0x180f08u: goto label_180f08;
        case 0x180f1cu: goto label_180f1c;
        case 0x180f34u: goto label_180f34;
        default: break;
    }

    ctx->pc = 0x180ee0u;

    // 0x180ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180ee4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x180ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x180ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180eec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x180eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180ef4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x180ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ef8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x180ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x180efc: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x180efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x180f00: 0xc060500  jal         func_181400
    ctx->pc = 0x180F00u;
    SET_GPR_U32(ctx, 31, 0x180F08u);
    ctx->pc = 0x180F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F00u;
    // 0x180f04: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181400u, 0x180F00u, 0x180F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F08u;
label_180f08:
    // 0x180f08: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x180f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x180f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x180f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f10: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x180f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x180f14: 0xc063ac4  jal         func_18EB10
    ctx->pc = 0x180F14u;
    SET_GPR_U32(ctx, 31, 0x180F1Cu);
    ctx->pc = 0x180F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F14u;
    // 0x180f18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EB10u, 0x180F14u, 0x180F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F1Cu;
label_180f1c:
    // 0x180f1c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x180f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x180f20: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x180F20u;
    {
        const bool branch_taken_0x180f20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x180F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F20u;
        // 0x180f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f20) {
            ctx->pc = 0x180F34u;
            goto label_180f34;
        }
    }
    ctx->pc = 0x180F28u;
    // 0x180f28: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x180f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x180f2c: 0xc063ac4  jal         func_18EB10
    ctx->pc = 0x180F2Cu;
    SET_GPR_U32(ctx, 31, 0x180F34u);
    ctx->pc = 0x180F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F2Cu;
    // 0x180f30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EB10u, 0x180F2Cu, 0x180F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F34u;
label_180f34:
    // 0x180f34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x180f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180f38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180f44: 0x3e00008  jr          $ra
    ctx->pc = 0x180F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F44u;
        // 0x180f48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180F4Cu;
    // 0x180f4c: 0x0  nop
    ctx->pc = 0x180f4cu;
    // NOP
    // 0x180f50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x180f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x180f54: 0x0  nop
    ctx->pc = 0x180f54u;
    // NOP
    ctx->pc = 0x180f58u;
}
