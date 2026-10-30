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

// Function: sub_00370600
// Address: 0x370600 - 0x370630
void sub_00370600_0x370600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370600_0x370600");
#endif

    switch (ctx->pc) {
        case 0x370614u: goto label_370614;
        case 0x37061cu: goto label_37061c;
        default: break;
    }

    ctx->pc = 0x370600u;

    // 0x370600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370604: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37060c: 0xc102488  jal         func_409220
    ctx->pc = 0x37060Cu;
    SET_GPR_U32(ctx, 31, 0x370614u);
    ctx->pc = 0x370610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37060Cu;
    // 0x370610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37060Cu, 0x370614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370614u;
label_370614:
    // 0x370614: 0xc106bc8  jal         func_41AF20
    ctx->pc = 0x370614u;
    SET_GPR_U32(ctx, 31, 0x37061Cu);
    ctx->pc = 0x370618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370614u;
    // 0x370618: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AF20u, 0x370614u, 0x37061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37061Cu;
label_37061c:
    // 0x37061c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37061cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370624: 0x3e00008  jr          $ra
    ctx->pc = 0x370624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370624u;
        // 0x370628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37062Cu;
    // 0x37062c: 0x0  nop
    ctx->pc = 0x37062cu;
    // NOP
    ctx->pc = 0x370630u;
}
