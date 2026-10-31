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

// Function: sub_0014CA88
// Address: 0x14ca88 - 0x14cab8
void sub_0014CA88_0x14ca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CA88_0x14ca88");
#endif

    switch (ctx->pc) {
        case 0x14ca9cu: goto label_14ca9c;
        default: break;
    }

    ctx->pc = 0x14ca88u;

    // 0x14ca88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14ca88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14ca8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14ca8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca90: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14ca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14ca94: 0xc05420e  jal         func_150838
    ctx->pc = 0x14CA94u;
    SET_GPR_U32(ctx, 31, 0x14CA9Cu);
    ctx->pc = 0x14CA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA94u;
    // 0x14ca98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150838u, 0x14CA94u, 0x14CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA9Cu;
label_14ca9c:
    // 0x14ca9c: 0x93a20012  lbu         $v0, 0x12($sp)
    ctx->pc = 0x14ca9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x14caa0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14caa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14caa4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14caa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x14caa8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14caa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x14caac: 0x3e00008  jr          $ra
    ctx->pc = 0x14CAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAACu;
        // 0x14cab0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CAB4u;
    // 0x14cab4: 0x0  nop
    ctx->pc = 0x14cab4u;
    // NOP
    ctx->pc = 0x14cab8u;
}
