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

// Function: sub_00280068
// Address: 0x280068 - 0x2800b8
void sub_00280068_0x280068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280068_0x280068");
#endif

    switch (ctx->pc) {
        case 0x28007cu: goto label_28007c;
        case 0x280084u: goto label_280084;
        case 0x280090u: goto label_280090;
        case 0x2800a4u: goto label_2800a4;
        default: break;
    }

    ctx->pc = 0x280068u;

    // 0x280068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x280068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28006c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28006cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x280070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280074: 0xc0a002e  jal         func_2800B8
    ctx->pc = 0x280074u;
    SET_GPR_U32(ctx, 31, 0x28007Cu);
    ctx->pc = 0x280078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280074u;
    // 0x280078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2800B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2800B8u, 0x280074u, 0x28007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28007Cu;
label_28007c:
    // 0x28007c: 0xc08c050  jal         func_230140
    ctx->pc = 0x28007Cu;
    SET_GPR_U32(ctx, 31, 0x280084u);
    ctx->pc = 0x280080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28007Cu;
    // 0x280080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x28007Cu, 0x280084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280084u;
label_280084:
    // 0x280084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280088: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x280088u;
    SET_GPR_U32(ctx, 31, 0x280090u);
    ctx->pc = 0x28008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280088u;
    // 0x28008c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x280088u, 0x280090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280090u;
label_280090:
    // 0x280090: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x280090u;
    {
        const bool branch_taken_0x280090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280090) {
            ctx->pc = 0x280094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280090u;
            // 0x280094: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2800A8u;
            goto label_2800a8;
        }
    }
    ctx->pc = 0x280098u;
    // 0x280098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28009c: 0xc089974  jal         func_2265D0
    ctx->pc = 0x28009Cu;
    SET_GPR_U32(ctx, 31, 0x2800A4u);
    ctx->pc = 0x2800A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28009Cu;
    // 0x2800a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x28009Cu, 0x2800A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2800A4u;
label_2800a4:
    // 0x2800a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2800a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2800a8:
    // 0x2800a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2800a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2800ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2800ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2800B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2800ACu;
        // 0x2800b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2800ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2800B4u;
    // 0x2800b4: 0x0  nop
    ctx->pc = 0x2800b4u;
    // NOP
    ctx->pc = 0x2800b8u;
}
