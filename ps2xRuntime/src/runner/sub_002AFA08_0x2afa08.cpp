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

// Function: sub_002AFA08
// Address: 0x2afa08 - 0x2afa48
void sub_002AFA08_0x2afa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFA08_0x2afa08");
#endif

    switch (ctx->pc) {
        case 0x2afa20u: goto label_2afa20;
        case 0x2afa2cu: goto label_2afa2c;
        default: break;
    }

    ctx->pc = 0x2afa08u;

    // 0x2afa08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2afa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2afa0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2afa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2afa10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2afa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2afa14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2afa14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa18: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2AFA18u;
    SET_GPR_U32(ctx, 31, 0x2AFA20u);
    ctx->pc = 0x2AFA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFA18u;
    // 0x2afa1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2AFA18u, 0x2AFA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA20u;
label_2afa20:
    // 0x2afa20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2afa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2afa24: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x2AFA24u;
    SET_GPR_U32(ctx, 31, 0x2AFA2Cu);
    ctx->pc = 0x2AFA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFA24u;
    // 0x2afa28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2AFA24u, 0x2AFA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA2Cu;
label_2afa2c:
    // 0x2afa2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2afa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2afa30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2afa30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afa34: 0xa2020039  sb          $v0, 0x39($s0)
    ctx->pc = 0x2afa34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 2));
    // 0x2afa38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2afa38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA3Cu;
        // 0x2afa40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFA44u;
    // 0x2afa44: 0x0  nop
    ctx->pc = 0x2afa44u;
    // NOP
    ctx->pc = 0x2afa48u;
}
