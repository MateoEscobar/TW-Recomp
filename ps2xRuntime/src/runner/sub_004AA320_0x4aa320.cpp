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

// Function: sub_004AA320
// Address: 0x4aa320 - 0x4aa3c0
void sub_004AA320_0x4aa320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA320_0x4aa320");
#endif

    switch (ctx->pc) {
        case 0x4aa344u: goto label_4aa344;
        case 0x4aa360u: goto label_4aa360;
        case 0x4aa37cu: goto label_4aa37c;
        case 0x4aa390u: goto label_4aa390;
        case 0x4aa39cu: goto label_4aa39c;
        default: break;
    }

    ctx->pc = 0x4aa320u;

    // 0x4aa320: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x4aa320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x4aa324: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4aa324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4aa328: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x4aa328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x4aa32c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4aa32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aa330: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x4aa330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x4aa334: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x4aa334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x4aa338: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x4aa338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x4aa33c: 0xc110644  jal         func_441910
    ctx->pc = 0x4AA33Cu;
    SET_GPR_U32(ctx, 31, 0x4AA344u);
    ctx->pc = 0x4AA340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA33Cu;
    // 0x4aa340: 0xffb00100  sd          $s0, 0x100($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441910u, 0x4AA33Cu, 0x4AA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA344u;
label_4aa344:
    // 0x4aa344: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4aa344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa348: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA348u;
    {
        const bool branch_taken_0x4aa348 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x4AA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA348u;
        // 0x4aa34c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa348) {
            ctx->pc = 0x4AA358u;
            goto label_4aa358;
        }
    }
    ctx->pc = 0x4AA350u;
    // 0x4aa350: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4AA350u;
    {
        const bool branch_taken_0x4aa350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA350u;
        // 0x4aa354: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa350) {
            ctx->pc = 0x4AA3A8u;
            goto label_4aa3a8;
        }
    }
    ctx->pc = 0x4AA358u;
label_4aa358:
    // 0x4aa358: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AA358u;
    {
        const bool branch_taken_0x4aa358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA358u;
        // 0x4aa35c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa358) {
            ctx->pc = 0x4AA364u;
            goto label_4aa364;
        }
    }
    ctx->pc = 0x4AA360u;
label_4aa360:
    // 0x4aa360: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4aa360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4aa364:
    // 0x4aa364: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x4aa364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x4aa368: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AA368u;
    {
        const bool branch_taken_0x4aa368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA368u;
        // 0x4aa36c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa368) {
            ctx->pc = 0x4AA388u;
            goto label_4aa388;
        }
    }
    ctx->pc = 0x4AA370u;
    // 0x4aa370: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4aa370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa374: 0xc1107d6  jal         func_441F58
    ctx->pc = 0x4AA374u;
    SET_GPR_U32(ctx, 31, 0x4AA37Cu);
    ctx->pc = 0x4AA378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA374u;
    // 0x4aa378: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441F58u, 0x4AA374u, 0x4AA37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA37Cu;
label_4aa37c:
    // 0x4aa37c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x4aa37cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aa380: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4AA380u;
    {
        const bool branch_taken_0x4aa380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA380u;
        // 0x4aa384: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa380) {
            ctx->pc = 0x4AA360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa360;
        }
    }
    ctx->pc = 0x4AA388u;
label_4aa388:
    // 0x4aa388: 0xc1106e8  jal         func_441BA0
    ctx->pc = 0x4AA388u;
    SET_GPR_U32(ctx, 31, 0x4AA390u);
    ctx->pc = 0x4AA38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA388u;
    // 0x4aa38c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441BA0u, 0x4AA388u, 0x4AA390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA390u;
label_4aa390:
    // 0x4aa390: 0x2624fff7  addiu       $a0, $s1, -0x9
    ctx->pc = 0x4aa390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x4aa394: 0xc10ce90  jal         func_433A40
    ctx->pc = 0x4AA394u;
    SET_GPR_U32(ctx, 31, 0x4AA39Cu);
    ctx->pc = 0x4AA398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA394u;
    // 0x4aa398: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A40u, 0x4AA394u, 0x4AA39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA39Cu;
label_4aa39c:
    // 0x4aa39c: 0x3c030131  lui         $v1, 0x131
    ctx->pc = 0x4aa39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)305 << 16));
    // 0x4aa3a0: 0x34635670  ori         $v1, $v1, 0x5670
    ctx->pc = 0x4aa3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22128);
    // 0x4aa3a4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x4aa3a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4aa3a8:
    // 0x4aa3a8: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x4aa3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x4aa3ac: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x4aa3acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x4aa3b0: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x4aa3b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4aa3b4: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x4aa3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4aa3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA3B8u;
        // 0x4aa3bc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA3C0u;
}
