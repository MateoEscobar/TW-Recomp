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

// Function: sub_00430248
// Address: 0x430248 - 0x430298
void sub_00430248_0x430248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430248_0x430248");
#endif

    switch (ctx->pc) {
        case 0x43026cu: goto label_43026c;
        case 0x430284u: goto label_430284;
        default: break;
    }

    ctx->pc = 0x430248u;

    // 0x430248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x430248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43024c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x43024cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x430250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x430250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x430254: 0x8c625a70  lw          $v0, 0x5A70($v1)
    ctx->pc = 0x430254u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715A70u));
    // 0x430258: 0x24705a70  addiu       $s0, $v1, 0x5A70
    ctx->pc = 0x430258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23152));
    // 0x43025c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43025Cu;
    {
        const bool branch_taken_0x43025c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43025Cu;
        // 0x430260: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43025c) {
            ctx->pc = 0x430284u;
            goto label_430284;
        }
    }
    ctx->pc = 0x430264u;
    // 0x430264: 0xc10bd76  jal         func_42F5D8
    ctx->pc = 0x430264u;
    SET_GPR_U32(ctx, 31, 0x43026Cu);
    ctx->pc = 0x42F5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F5D8u, 0x430264u, 0x43026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43026Cu;
label_43026c:
    // 0x43026c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x43026cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x430270: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x430270u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x430274: 0x24a5c4e8  addiu       $a1, $a1, -0x3B18
    ctx->pc = 0x430274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952168));
    // 0x430278: 0x24c671d0  addiu       $a2, $a2, 0x71D0
    ctx->pc = 0x430278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29136));
    // 0x43027c: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x43027Cu;
    SET_GPR_U32(ctx, 31, 0x430284u);
    ctx->pc = 0x430280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43027Cu;
    // 0x430280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x43027Cu, 0x430284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430284u;
label_430284:
    // 0x430284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x430284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x430288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43028c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43028cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x430290: 0x3e00008  jr          $ra
    ctx->pc = 0x430290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430290u;
        // 0x430294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430298u;
}
