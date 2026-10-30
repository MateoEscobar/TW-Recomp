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

// Function: sub_00325068
// Address: 0x325068 - 0x3250a8
void sub_00325068_0x325068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325068_0x325068");
#endif

    switch (ctx->pc) {
        case 0x325088u: goto label_325088;
        case 0x325094u: goto label_325094;
        default: break;
    }

    ctx->pc = 0x325068u;

    // 0x325068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x325068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32506c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32506cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325070: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x325070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x325074: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x325074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325078: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x325078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32507c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32507cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325080: 0xc0c91b0  jal         func_3246C0
    ctx->pc = 0x325080u;
    SET_GPR_U32(ctx, 31, 0x325088u);
    ctx->pc = 0x325084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325080u;
    // 0x325084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3246C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3246C0u, 0x325080u, 0x325088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325088u;
label_325088:
    // 0x325088: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x325088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32508c: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x32508Cu;
    SET_GPR_U32(ctx, 31, 0x325094u);
    ctx->pc = 0x325090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32508Cu;
    // 0x325090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x32508Cu, 0x325094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325094u;
label_325094:
    // 0x325094: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x325094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325098: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x325098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32509c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32509cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3250a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3250A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3250A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250A0u;
        // 0x3250a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3250A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3250A8u;
}
