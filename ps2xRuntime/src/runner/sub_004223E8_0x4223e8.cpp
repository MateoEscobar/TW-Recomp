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

// Function: sub_004223E8
// Address: 0x4223e8 - 0x422430
void sub_004223E8_0x4223e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004223E8_0x4223e8");
#endif

    switch (ctx->pc) {
        case 0x422424u: goto label_422424;
        default: break;
    }

    ctx->pc = 0x4223e8u;

    // 0x4223e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4223e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4223ec: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x4223ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4223f0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x4223f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4223f4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x4223f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4223f8: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x4223f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x4223fc: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x4223fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x422400: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x422400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x422404: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x422404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422408: 0xa7a80000  sh          $t0, 0x0($sp)
    ctx->pc = 0x422408u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x42240c: 0xa7a90002  sh          $t1, 0x2($sp)
    ctx->pc = 0x42240cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x422410: 0xa7a70004  sh          $a3, 0x4($sp)
    ctx->pc = 0x422410u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x422414: 0xa7a20006  sh          $v0, 0x6($sp)
    ctx->pc = 0x422414u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x422418: 0xa7a50008  sh          $a1, 0x8($sp)
    ctx->pc = 0x422418u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x42241c: 0xc108a40  jal         func_422900
    ctx->pc = 0x42241Cu;
    SET_GPR_U32(ctx, 31, 0x422424u);
    ctx->pc = 0x422420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42241Cu;
    // 0x422420: 0xa7a6000a  sh          $a2, 0xA($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422900u, 0x42241Cu, 0x422424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422424u;
label_422424:
    // 0x422424: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x422424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x422428: 0x3e00008  jr          $ra
    ctx->pc = 0x422428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422428u;
        // 0x42242c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422430u;
}
