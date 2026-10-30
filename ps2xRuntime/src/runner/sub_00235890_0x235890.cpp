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

// Function: sub_00235890
// Address: 0x235890 - 0x2358c8
void sub_00235890_0x235890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235890_0x235890");
#endif

    switch (ctx->pc) {
        case 0x2358a4u: goto label_2358a4;
        case 0x2358acu: goto label_2358ac;
        default: break;
    }

    ctx->pc = 0x235890u;

    // 0x235890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x235894: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23589c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23589Cu;
    SET_GPR_U32(ctx, 31, 0x2358A4u);
    ctx->pc = 0x2358A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23589Cu;
    // 0x2358a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23589Cu, 0x2358A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2358A4u;
label_2358a4:
    // 0x2358a4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2358A4u;
    SET_GPR_U32(ctx, 31, 0x2358ACu);
    ctx->pc = 0x2358A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2358A4u;
    // 0x2358a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2358A4u, 0x2358ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2358ACu;
label_2358ac:
    // 0x2358ac: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2358ACu;
    {
        const bool branch_taken_0x2358ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2358ac) {
            ctx->pc = 0x2358B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2358ACu;
            // 0x2358b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2358B8u;
            goto label_2358b8;
        }
    }
    ctx->pc = 0x2358B4u;
    // 0x2358b4: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x2358b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_2358b8:
    // 0x2358b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2358b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2358bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2358BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2358C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358BCu;
        // 0x2358c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2358BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2358C4u;
    // 0x2358c4: 0x0  nop
    ctx->pc = 0x2358c4u;
    // NOP
    ctx->pc = 0x2358c8u;
}
