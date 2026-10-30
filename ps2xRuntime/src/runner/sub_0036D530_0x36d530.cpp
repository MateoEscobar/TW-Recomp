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

// Function: sub_0036D530
// Address: 0x36d530 - 0x36d5a8
void sub_0036D530_0x36d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D530_0x36d530");
#endif

    switch (ctx->pc) {
        case 0x36d54cu: goto label_36d54c;
        case 0x36d560u: goto label_36d560;
        case 0x36d574u: goto label_36d574;
        case 0x36d588u: goto label_36d588;
        default: break;
    }

    ctx->pc = 0x36d530u;

    // 0x36d530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36d534: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x36d534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x36d538: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36d538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36d53c: 0x24a590d8  addiu       $a1, $a1, -0x6F28
    ctx->pc = 0x36d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938840));
    // 0x36d540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d544: 0xc1026b2  jal         func_409AC8
    ctx->pc = 0x36D544u;
    SET_GPR_U32(ctx, 31, 0x36D54Cu);
    ctx->pc = 0x36D548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D544u;
    // 0x36d548: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AC8u, 0x36D544u, 0x36D54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D54Cu;
label_36d54c:
    // 0x36d54c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36d54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d554: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d558: 0xc10311e  jal         func_40C478
    ctx->pc = 0x36D558u;
    SET_GPR_U32(ctx, 31, 0x36D560u);
    ctx->pc = 0x36D55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D558u;
    // 0x36d55c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x36D558u, 0x36D560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D560u;
label_36d560:
    // 0x36d560: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36D560u;
    {
        const bool branch_taken_0x36d560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D560u;
        // 0x36d564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d560) {
            ctx->pc = 0x36D578u;
            goto label_36d578;
        }
    }
    ctx->pc = 0x36D568u;
    // 0x36d568: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x36d568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x36d56c: 0xc10241a  jal         func_409068
    ctx->pc = 0x36D56Cu;
    SET_GPR_U32(ctx, 31, 0x36D574u);
    ctx->pc = 0x36D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D56Cu;
    // 0x36d570: 0x24a59118  addiu       $a1, $a1, -0x6EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x36D56Cu, 0x36D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D574u;
label_36d574:
    // 0x36d574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36d578:
    // 0x36d578: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d57c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36d57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d580: 0xc1024a0  jal         func_409280
    ctx->pc = 0x36D580u;
    SET_GPR_U32(ctx, 31, 0x36D588u);
    ctx->pc = 0x36D584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D580u;
    // 0x36d584: 0x3c10005a  lui         $s0, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x36D580u, 0x36D588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D588u;
label_36d588:
    // 0x36d588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36d588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36d58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d590: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d594: 0xae038690  sw          $v1, -0x7970($s0)
    ctx->pc = 0x36d594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936208), GPR_U32(ctx, 3));
    // 0x36d598: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36d598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d59c: 0x3e00008  jr          $ra
    ctx->pc = 0x36D59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D59Cu;
        // 0x36d5a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D5A4u;
    // 0x36d5a4: 0x0  nop
    ctx->pc = 0x36d5a4u;
    // NOP
    ctx->pc = 0x36d5a8u;
}
