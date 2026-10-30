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

// Function: sub_0017F2C0
// Address: 0x17f2c0 - 0x17f380
void sub_0017F2C0_0x17f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F2C0_0x17f2c0");
#endif

    switch (ctx->pc) {
        case 0x17f2e0u: goto label_17f2e0;
        case 0x17f2f0u: goto label_17f2f0;
        case 0x17f308u: goto label_17f308;
        case 0x17f318u: goto label_17f318;
        case 0x17f328u: goto label_17f328;
        case 0x17f334u: goto label_17f334;
        case 0x17f350u: goto label_17f350;
        case 0x17f36cu: goto label_17f36c;
        default: break;
    }

    ctx->pc = 0x17f2c0u;

    // 0x17f2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17f2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17f2c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17f2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17f2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17f2cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17f2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17f2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17f2d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17f2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f2d8: 0xc065f7c  jal         func_197DF0
    ctx->pc = 0x17F2D8u;
    SET_GPR_U32(ctx, 31, 0x17F2E0u);
    ctx->pc = 0x17F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2D8u;
    // 0x17f2dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197DF0u, 0x17F2D8u, 0x17F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F2E0u;
label_17f2e0:
    // 0x17f2e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x17f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f2e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17f2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f2e8: 0xc11fc7e  jal         func_47F1F8
    ctx->pc = 0x17F2E8u;
    SET_GPR_U32(ctx, 31, 0x17F2F0u);
    ctx->pc = 0x17F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2E8u;
    // 0x17f2ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F1F8u, 0x17F2E8u, 0x17F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F2F0u;
label_17f2f0:
    // 0x17f2f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17f2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2f4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x17f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17f2f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17f2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f300: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x17F300u;
    SET_GPR_U32(ctx, 31, 0x17F308u);
    ctx->pc = 0x17F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F300u;
    // 0x17f304: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x17F300u, 0x17F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F308u;
label_17f308:
    // 0x17f308: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F308u;
    {
        const bool branch_taken_0x17f308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f308) {
            ctx->pc = 0x17F30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F308u;
            // 0x17f30c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F320u;
            goto label_17f320;
        }
    }
    ctx->pc = 0x17F310u;
    // 0x17f310: 0xc11a54a  jal         func_469528
    ctx->pc = 0x17F310u;
    SET_GPR_U32(ctx, 31, 0x17F318u);
    ctx->pc = 0x17F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F310u;
    // 0x17f314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469528u, 0x17F310u, 0x17F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F318u;
label_17f318:
    // 0x17f318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17f318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17f320:
    // 0x17f320: 0xc11fcaa  jal         func_47F2A8
    ctx->pc = 0x17F320u;
    SET_GPR_U32(ctx, 31, 0x17F328u);
    ctx->pc = 0x17F324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F320u;
    // 0x17f324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F2A8u, 0x17F320u, 0x17F328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F328u;
label_17f328:
    // 0x17f328: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x17f328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17f32c: 0xc11a9b6  jal         func_46A6D8
    ctx->pc = 0x17F32Cu;
    SET_GPR_U32(ctx, 31, 0x17F334u);
    ctx->pc = 0x17F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F32Cu;
    // 0x17f330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A6D8u, 0x17F32Cu, 0x17F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F334u;
label_17f334:
    // 0x17f334: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x17f334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17f338: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F338u;
    {
        const bool branch_taken_0x17f338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f338) {
            ctx->pc = 0x17F348u;
            goto label_17f348;
        }
    }
    ctx->pc = 0x17F340u;
    // 0x17f340: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17F340u;
    {
        const bool branch_taken_0x17f340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F340u;
        // 0x17f344: 0x24100050  addiu       $s0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f340) {
            ctx->pc = 0x17F360u;
            goto label_17f360;
        }
    }
    ctx->pc = 0x17F348u;
label_17f348:
    // 0x17f348: 0xc06610a  jal         func_198428
    ctx->pc = 0x17F348u;
    SET_GPR_U32(ctx, 31, 0x17F350u);
    ctx->pc = 0x17F34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F348u;
    // 0x17f34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198428u, 0x17F348u, 0x17F350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F350u;
label_17f350:
    // 0x17f350: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x17f350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17f354: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x17f354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x17f358: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x17f358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x17f35c: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x17f35cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_17f360:
    // 0x17f360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f364: 0xc051052  jal         func_144148
    ctx->pc = 0x17F364u;
    SET_GPR_U32(ctx, 31, 0x17F36Cu);
    ctx->pc = 0x17F368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F364u;
    // 0x17f368: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144148u, 0x17F364u, 0x17F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F36Cu;
label_17f36c:
    // 0x17f36c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17f36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f370: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17f370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f374: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17f374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f378: 0x3e00008  jr          $ra
    ctx->pc = 0x17F378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F378u;
        // 0x17f37c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F380u;
}
