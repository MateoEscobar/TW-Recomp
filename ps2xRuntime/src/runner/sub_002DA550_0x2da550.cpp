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

// Function: sub_002DA550
// Address: 0x2da550 - 0x2da588
void sub_002DA550_0x2da550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA550_0x2da550");
#endif

    switch (ctx->pc) {
        case 0x2da568u: goto label_2da568;
        case 0x2da574u: goto label_2da574;
        default: break;
    }

    ctx->pc = 0x2da550u;

    // 0x2da550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2da550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2da554: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2da554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2da558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da55c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2da55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da560: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2DA560u;
    SET_GPR_U32(ctx, 31, 0x2DA568u);
    ctx->pc = 0x2DA564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA560u;
    // 0x2da564: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2DA560u, 0x2DA568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA568u;
label_2da568:
    // 0x2da568: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2da568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2da56c: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2DA56Cu;
    SET_GPR_U32(ctx, 31, 0x2DA574u);
    ctx->pc = 0x2DA570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA56Cu;
    // 0x2da570: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2DA56Cu, 0x2DA574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA574u;
label_2da574:
    // 0x2da574: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2da574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da57c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA57Cu;
        // 0x2da580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA584u;
    // 0x2da584: 0x0  nop
    ctx->pc = 0x2da584u;
    // NOP
    ctx->pc = 0x2da588u;
}
