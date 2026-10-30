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

// Function: sub_00329518
// Address: 0x329518 - 0x329558
void sub_00329518_0x329518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329518_0x329518");
#endif

    switch (ctx->pc) {
        case 0x329548u: goto label_329548;
        default: break;
    }

    ctx->pc = 0x329518u;

    // 0x329518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32951c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x32951cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329524: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x329524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329528: 0x84a3000e  lh          $v1, 0xE($a1)
    ctx->pc = 0x329528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x32952c: 0x8ce20060  lw          $v0, 0x60($a3)
    ctx->pc = 0x32952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x329530: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x329530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x329534: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x329534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x329538: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x329538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x32953c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32953cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x329540: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x329540u;
    SET_GPR_U32(ctx, 31, 0x329548u);
    ctx->pc = 0x329544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329540u;
    // 0x329544: 0xace20060  sw          $v0, 0x60($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x329540u, 0x329548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329548u;
label_329548:
    // 0x329548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32954c: 0x3e00008  jr          $ra
    ctx->pc = 0x32954Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32954Cu;
        // 0x329550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32954Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329554u;
    // 0x329554: 0x0  nop
    ctx->pc = 0x329554u;
    // NOP
    ctx->pc = 0x329558u;
}
