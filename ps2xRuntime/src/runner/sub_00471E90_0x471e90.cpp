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

// Function: sub_00471E90
// Address: 0x471e90 - 0x471ed8
void sub_00471E90_0x471e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471E90_0x471e90");
#endif

    switch (ctx->pc) {
        case 0x471ec8u: goto label_471ec8;
        default: break;
    }

    ctx->pc = 0x471e90u;

    // 0x471e90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x471e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471e94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x471e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x471e98: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x471e98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471e9c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x471e9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471ea0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x471ea0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471ea4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x471ea4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471ea8: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x471ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x471eac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x471eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x471eb0: 0x2484e768  addiu       $a0, $a0, -0x1898
    ctx->pc = 0x471eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961000));
    // 0x471eb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x471eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471eb8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x471eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471ebc: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x471ebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471ec0: 0xc11feb2  jal         func_47FAC8
    ctx->pc = 0x471EC0u;
    SET_GPR_U32(ctx, 31, 0x471EC8u);
    ctx->pc = 0x471EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471EC0u;
    // 0x471ec4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FAC8u, 0x471EC0u, 0x471EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471EC8u;
label_471ec8:
    // 0x471ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x471ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x471ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x471ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471ECCu;
        // 0x471ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x471ED4u;
    // 0x471ed4: 0x0  nop
    ctx->pc = 0x471ed4u;
    // NOP
    ctx->pc = 0x471ed8u;
}
