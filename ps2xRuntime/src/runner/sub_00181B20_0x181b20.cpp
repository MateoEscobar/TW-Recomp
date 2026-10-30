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

// Function: sub_00181B20
// Address: 0x181b20 - 0x181b68
void sub_00181B20_0x181b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181B20_0x181b20");
#endif

    switch (ctx->pc) {
        case 0x181b34u: goto label_181b34;
        case 0x181b40u: goto label_181b40;
        case 0x181b58u: goto label_181b58;
        default: break;
    }

    ctx->pc = 0x181b20u;

    // 0x181b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181b24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x181b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x181b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181b2c: 0xc051048  jal         func_144120
    ctx->pc = 0x181B2Cu;
    SET_GPR_U32(ctx, 31, 0x181B34u);
    ctx->pc = 0x181B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181B2Cu;
    // 0x181b30: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x181B2Cu, 0x181B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181B34u;
label_181b34:
    // 0x181b34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b38: 0xc051048  jal         func_144120
    ctx->pc = 0x181B38u;
    SET_GPR_U32(ctx, 31, 0x181B40u);
    ctx->pc = 0x181B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181B38u;
    // 0x181b3c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x181B38u, 0x181B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181B40u;
label_181b40:
    // 0x181b40: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x181b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x181b44: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x181b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x181b48: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x181b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x181b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b50: 0xc051052  jal         func_144148
    ctx->pc = 0x181B50u;
    SET_GPR_U32(ctx, 31, 0x181B58u);
    ctx->pc = 0x181B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181B50u;
    // 0x181b54: 0x2405004c  addiu       $a1, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144148u, 0x181B50u, 0x181B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181B58u;
label_181b58:
    // 0x181b58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x181b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181b60: 0x3e00008  jr          $ra
    ctx->pc = 0x181B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B60u;
        // 0x181b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181B68u;
}
