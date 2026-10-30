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

// Function: sub_00370258
// Address: 0x370258 - 0x370290
void sub_00370258_0x370258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370258_0x370258");
#endif

    switch (ctx->pc) {
        case 0x37026cu: goto label_37026c;
        case 0x370274u: goto label_370274;
        case 0x37027cu: goto label_37027c;
        default: break;
    }

    ctx->pc = 0x370258u;

    // 0x370258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37025c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37025cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370264: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370264u;
    SET_GPR_U32(ctx, 31, 0x37026Cu);
    ctx->pc = 0x370268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370264u;
    // 0x370268: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370264u, 0x37026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37026Cu;
label_37026c:
    // 0x37026c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37026Cu;
    SET_GPR_U32(ctx, 31, 0x370274u);
    ctx->pc = 0x370270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37026Cu;
    // 0x370270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37026Cu, 0x370274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370274u;
label_370274:
    // 0x370274: 0xc06d1b8  jal         func_1B46E0
    ctx->pc = 0x370274u;
    SET_GPR_U32(ctx, 31, 0x37027Cu);
    ctx->pc = 0x370278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370274u;
    // 0x370278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B46E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B46E0u, 0x370274u, 0x37027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37027Cu;
label_37027c:
    // 0x37027c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37027cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370284: 0x3e00008  jr          $ra
    ctx->pc = 0x370284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370284u;
        // 0x370288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37028Cu;
    // 0x37028c: 0x0  nop
    ctx->pc = 0x37028cu;
    // NOP
    ctx->pc = 0x370290u;
}
