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

// Function: sub_00148358
// Address: 0x148358 - 0x1483e8
void sub_00148358_0x148358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148358_0x148358");
#endif

    switch (ctx->pc) {
        case 0x148374u: goto label_148374;
        case 0x148388u: goto label_148388;
        case 0x14839cu: goto label_14839c;
        case 0x1483b0u: goto label_1483b0;
        case 0x1483c4u: goto label_1483c4;
        case 0x1483d8u: goto label_1483d8;
        default: break;
    }

    ctx->pc = 0x148358u;

    // 0x148358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x148358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14835c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14835cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x148360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148364: 0x24849f70  addiu       $a0, $a0, -0x6090
    ctx->pc = 0x148364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942576));
    // 0x148368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14836c: 0xc0520b8  jal         func_1482E0
    ctx->pc = 0x14836Cu;
    SET_GPR_U32(ctx, 31, 0x148374u);
    ctx->pc = 0x148370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14836Cu;
    // 0x148370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1482E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1482E0u, 0x14836Cu, 0x148374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148374u;
label_148374:
    // 0x148374: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x148374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x148378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14837c: 0x24849f90  addiu       $a0, $a0, -0x6070
    ctx->pc = 0x14837cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942608));
    // 0x148380: 0xc0520b8  jal         func_1482E0
    ctx->pc = 0x148380u;
    SET_GPR_U32(ctx, 31, 0x148388u);
    ctx->pc = 0x148384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148380u;
    // 0x148384: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1482E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1482E0u, 0x148380u, 0x148388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148388u;
label_148388:
    // 0x148388: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x148388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14838c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14838cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148390: 0x24849fb0  addiu       $a0, $a0, -0x6050
    ctx->pc = 0x148390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942640));
    // 0x148394: 0xc0520b8  jal         func_1482E0
    ctx->pc = 0x148394u;
    SET_GPR_U32(ctx, 31, 0x14839Cu);
    ctx->pc = 0x148398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148394u;
    // 0x148398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1482E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1482E0u, 0x148394u, 0x14839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14839Cu;
label_14839c:
    // 0x14839c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14839cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1483a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1483a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483a4: 0x24849fd0  addiu       $a0, $a0, -0x6030
    ctx->pc = 0x1483a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942672));
    // 0x1483a8: 0xc0520b8  jal         func_1482E0
    ctx->pc = 0x1483A8u;
    SET_GPR_U32(ctx, 31, 0x1483B0u);
    ctx->pc = 0x1483ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1483A8u;
    // 0x1483ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1482E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1482E0u, 0x1483A8u, 0x1483B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483B0u;
label_1483b0:
    // 0x1483b0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1483b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1483b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1483b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483b8: 0x24849ff0  addiu       $a0, $a0, -0x6010
    ctx->pc = 0x1483b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942704));
    // 0x1483bc: 0xc0520b8  jal         func_1482E0
    ctx->pc = 0x1483BCu;
    SET_GPR_U32(ctx, 31, 0x1483C4u);
    ctx->pc = 0x1483C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1483BCu;
    // 0x1483c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1482E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1482E0u, 0x1483BCu, 0x1483C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483C4u;
label_1483c4:
    // 0x1483c4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1483c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1483c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1483c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483cc: 0x2484a010  addiu       $a0, $a0, -0x5FF0
    ctx->pc = 0x1483ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942736));
    // 0x1483d0: 0xc0520b8  jal         func_1482E0
    ctx->pc = 0x1483D0u;
    SET_GPR_U32(ctx, 31, 0x1483D8u);
    ctx->pc = 0x1483D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1483D0u;
    // 0x1483d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1482E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1482E0u, 0x1483D0u, 0x1483D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483D8u;
label_1483d8:
    // 0x1483d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1483d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1483dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1483DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1483E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1483DCu;
        // 0x1483e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1483DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1483E4u;
    // 0x1483e4: 0x0  nop
    ctx->pc = 0x1483e4u;
    // NOP
    ctx->pc = 0x1483e8u;
}
