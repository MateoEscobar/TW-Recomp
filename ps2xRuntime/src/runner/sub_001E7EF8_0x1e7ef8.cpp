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

// Function: sub_001E7EF8
// Address: 0x1e7ef8 - 0x1e7f50
void sub_001E7EF8_0x1e7ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7EF8_0x1e7ef8");
#endif

    switch (ctx->pc) {
        case 0x1e7f10u: goto label_1e7f10;
        case 0x1e7f20u: goto label_1e7f20;
        case 0x1e7f30u: goto label_1e7f30;
        default: break;
    }

    ctx->pc = 0x1e7ef8u;

    // 0x1e7ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7efc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e7efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e7f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f08: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1E7F08u;
    SET_GPR_U32(ctx, 31, 0x1E7F10u);
    ctx->pc = 0x1E7F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7F08u;
    // 0x1e7f0c: 0x8e050324  lw          $a1, 0x324($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1E7F08u, 0x1E7F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7F10u;
label_1e7f10:
    // 0x1e7f10: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E7F10u;
    {
        const bool branch_taken_0x1e7f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F10u;
        // 0x1e7f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f10) {
            ctx->pc = 0x1E7F3Cu;
            goto label_1e7f3c;
        }
    }
    ctx->pc = 0x1E7F18u;
    // 0x1e7f18: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1E7F18u;
    SET_GPR_U32(ctx, 31, 0x1E7F20u);
    ctx->pc = 0x1E7F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7F18u;
    // 0x1e7f1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1E7F18u, 0x1E7F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7F20u;
label_1e7f20:
    // 0x1e7f20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7F20u;
    {
        const bool branch_taken_0x1e7f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F20u;
        // 0x1e7f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f20) {
            ctx->pc = 0x1E7F3Cu;
            goto label_1e7f3c;
        }
    }
    ctx->pc = 0x1E7F28u;
    // 0x1e7f28: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1E7F28u;
    SET_GPR_U32(ctx, 31, 0x1E7F30u);
    ctx->pc = 0x1E7F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7F28u;
    // 0x1e7f2c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1E7F28u, 0x1E7F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7F30u;
label_1e7f30:
    // 0x1e7f30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e7f30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f34: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7F34u;
    {
        const bool branch_taken_0x1e7f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F34u;
        // 0x1e7f38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f34) {
            ctx->pc = 0x1E7F40u;
            goto label_1e7f40;
        }
    }
    ctx->pc = 0x1E7F3Cu;
label_1e7f3c:
    // 0x1e7f3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e7f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7f40:
    // 0x1e7f40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e7f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7f48: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F48u;
        // 0x1e7f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7F50u;
}
