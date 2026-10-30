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

// Function: sub_00422718
// Address: 0x422718 - 0x422758
void sub_00422718_0x422718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422718_0x422718");
#endif

    switch (ctx->pc) {
        case 0x422738u: goto label_422738;
        case 0x422744u: goto label_422744;
        default: break;
    }

    ctx->pc = 0x422718u;

    // 0x422718: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x422718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42271c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x42271cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x422720: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x422720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x422724: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x422724u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x422728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x422728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42272c: 0x2610e490  addiu       $s0, $s0, -0x1B70
    ctx->pc = 0x42272cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960272));
    // 0x422730: 0xc0e409a  jal         func_390268
    ctx->pc = 0x422730u;
    SET_GPR_U32(ctx, 31, 0x422738u);
    ctx->pc = 0x422734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422730u;
    // 0x422734: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x422730u, 0x422738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422738u;
label_422738:
    // 0x422738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x422738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42273c: 0xc108a5c  jal         func_422970
    ctx->pc = 0x42273Cu;
    SET_GPR_U32(ctx, 31, 0x422744u);
    ctx->pc = 0x422740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42273Cu;
    // 0x422740: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422970u, 0x42273Cu, 0x422744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422744u;
label_422744:
    // 0x422744: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x422744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x422748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x422748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42274c: 0x3e00008  jr          $ra
    ctx->pc = 0x42274Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42274Cu;
        // 0x422750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42274Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422754u;
    // 0x422754: 0x0  nop
    ctx->pc = 0x422754u;
    // NOP
    ctx->pc = 0x422758u;
}
