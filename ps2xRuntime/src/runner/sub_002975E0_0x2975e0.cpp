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

// Function: sub_002975E0
// Address: 0x2975e0 - 0x297620
void sub_002975E0_0x2975e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002975E0_0x2975e0");
#endif

    switch (ctx->pc) {
        case 0x297604u: goto label_297604;
        case 0x297614u: goto label_297614;
        default: break;
    }

    ctx->pc = 0x2975e0u;

    // 0x2975e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2975e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2975e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2975e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2975e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2975ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2975ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2975f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2975f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2975f4: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x2975f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2975f8: 0xa045000e  sb          $a1, 0xE($v0)
    ctx->pc = 0x2975f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 5));
    // 0x2975fc: 0xc0a5a72  jal         func_2969C8
    ctx->pc = 0x2975FCu;
    SET_GPR_U32(ctx, 31, 0x297604u);
    ctx->pc = 0x297600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2975FCu;
    // 0x297600: 0xa040000f  sb          $zero, 0xF($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x2975FCu, 0x297604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297604u;
label_297604:
    // 0x297604: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x297604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29760c: 0xc0a67bc  jal         func_299EF0
    ctx->pc = 0x29760Cu;
    SET_GPR_U32(ctx, 31, 0x297614u);
    ctx->pc = 0x297610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29760Cu;
    // 0x297610: 0x24840284  addiu       $a0, $a0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EF0u, 0x29760Cu, 0x297614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297614u;
label_297614:
    // 0x297614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297618: 0x3e00008  jr          $ra
    ctx->pc = 0x297618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297618u;
        // 0x29761c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297620u;
}
