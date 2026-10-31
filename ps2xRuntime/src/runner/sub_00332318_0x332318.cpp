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

// Function: sub_00332318
// Address: 0x332318 - 0x332368
void sub_00332318_0x332318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332318_0x332318");
#endif

    switch (ctx->pc) {
        case 0x332340u: goto label_332340;
        case 0x332354u: goto label_332354;
        default: break;
    }

    ctx->pc = 0x332318u;

    // 0x332318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x332318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33231c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33231cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x332320: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x332320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x332324: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x332324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x332328: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x332328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33232c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33232cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x332330: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x332330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332334: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x332334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332338: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x332338u;
    SET_GPR_U32(ctx, 31, 0x332340u);
    ctx->pc = 0x33233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332338u;
    // 0x33233c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x332338u, 0x332340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332340u;
label_332340:
    // 0x332340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x332344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332348: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x332348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x33234c: 0xc0cc862  jal         func_332188
    ctx->pc = 0x33234Cu;
    SET_GPR_U32(ctx, 31, 0x332354u);
    ctx->pc = 0x332350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33234Cu;
    // 0x332350: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332188u, 0x33234Cu, 0x332354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332354u;
label_332354:
    // 0x332354: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x332354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332358: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x332358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33235c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33235cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332360: 0x3e00008  jr          $ra
    ctx->pc = 0x332360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332360u;
        // 0x332364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332368u;
}
