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

// Function: sub_0014C250
// Address: 0x14c250 - 0x14c358
void sub_0014C250_0x14c250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C250_0x14c250");
#endif

    switch (ctx->pc) {
        case 0x14c270u: goto label_14c270;
        case 0x14c284u: goto label_14c284;
        case 0x14c2a0u: goto label_14c2a0;
        case 0x14c2ecu: goto label_14c2ec;
        case 0x14c310u: goto label_14c310;
        case 0x14c328u: goto label_14c328;
        case 0x14c330u: goto label_14c330;
        case 0x14c340u: goto label_14c340;
        default: break;
    }

    ctx->pc = 0x14c250u;

    // 0x14c250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14c250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14c254: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14c254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14c258: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14c258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14c25c: 0x24900854  addiu       $s0, $a0, 0x854
    ctx->pc = 0x14c25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2132));
    // 0x14c260: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14c260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14c264: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14c264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c26c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x14c26cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_14c270:
    // 0x14c270: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14c270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14c274: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C274u;
    {
        const bool branch_taken_0x14c274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c274) {
            ctx->pc = 0x14C278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C274u;
            // 0x14c278: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C288u;
            goto label_14c288;
        }
    }
    ctx->pc = 0x14C27Cu;
    // 0x14c27c: 0xc0543c6  jal         func_150F18
    ctx->pc = 0x14C27Cu;
    SET_GPR_U32(ctx, 31, 0x14C284u);
    ctx->pc = 0x14C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C27Cu;
    // 0x14c280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150F18u, 0x14C27Cu, 0x14C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C284u;
label_14c284:
    // 0x14c284: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x14c284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_14c288:
    // 0x14c288: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14c288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14c28c: 0x2a22002f  slti        $v0, $s1, 0x2F
    ctx->pc = 0x14c28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)47) ? 1 : 0);
    // 0x14c290: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14C290u;
    {
        const bool branch_taken_0x14c290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C290u;
        // 0x14c294: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c290) {
            ctx->pc = 0x14C270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c270;
        }
    }
    ctx->pc = 0x14C298u;
    // 0x14c298: 0xc05433c  jal         func_150CF0
    ctx->pc = 0x14C298u;
    SET_GPR_U32(ctx, 31, 0x14C2A0u);
    ctx->pc = 0x14C29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C298u;
    // 0x14c29c: 0xae40bcf4  sw          $zero, -0x430C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294950132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150CF0u, 0x14C298u, 0x14C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2A0u;
label_14c2a0:
    // 0x14c2a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14c2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2a4: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x14C2A4u;
    {
        const bool branch_taken_0x14c2a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2A4u;
        // 0x14c2a8: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2a4) {
            ctx->pc = 0x14C328u;
            goto label_14c328;
        }
    }
    ctx->pc = 0x14C2ACu;
    // 0x14c2ac: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x14c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14c2b0: 0x9083bcf0  lbu         $v1, -0x4310($a0)
    ctx->pc = 0x14c2b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294950128)));
    // 0x14c2b4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C2B4u;
    {
        const bool branch_taken_0x14c2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2B4u;
        // 0x14c2b8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2b4) {
            ctx->pc = 0x14C2C4u;
            goto label_14c2c4;
        }
    }
    ctx->pc = 0x14C2BCu;
    // 0x14c2bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14C2BCu;
    {
        const bool branch_taken_0x14c2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2BCu;
        // 0x14c2c0: 0xa080bcf0  sb          $zero, -0x4310($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294950128), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2bc) {
            ctx->pc = 0x14C2C8u;
            goto label_14c2c8;
        }
    }
    ctx->pc = 0x14C2C4u;
label_14c2c4:
    // 0x14c2c4: 0xa082bcf0  sb          $v0, -0x4310($a0)
    ctx->pc = 0x14c2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294950128), (uint8_t)GPR_U32(ctx, 2));
label_14c2c8:
    // 0x14c2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c2cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14c2d0: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C2D0u;
    {
        const bool branch_taken_0x14c2d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x14C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2D0u;
        // 0x14c2d4: 0xae42bcf4  sw          $v0, -0x430C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294950132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2d0) {
            ctx->pc = 0x14C2F4u;
            goto label_14c2f4;
        }
    }
    ctx->pc = 0x14C2D8u;
    // 0x14c2d8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x14c2dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2e0: 0x24845560  addiu       $a0, $a0, 0x5560
    ctx->pc = 0x14c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21856));
    // 0x14c2e4: 0xc055e4c  jal         func_157930
    ctx->pc = 0x14C2E4u;
    SET_GPR_U32(ctx, 31, 0x14C2ECu);
    ctx->pc = 0x14C2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C2E4u;
    // 0x14c2e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157930u, 0x14C2E4u, 0x14C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2ECu;
label_14c2ec:
    // 0x14c2ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14C2ECu;
    {
        const bool branch_taken_0x14c2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c2ec) {
            ctx->pc = 0x14C328u;
            goto label_14c328;
        }
    }
    ctx->pc = 0x14C2F4u;
label_14c2f4:
    // 0x14c2f4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x14c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x14c2f8: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C2F8u;
    {
        const bool branch_taken_0x14c2f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2F8u;
        // 0x14c2fc: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2f8) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C300u;
    // 0x14c300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c304: 0x24845560  addiu       $a0, $a0, 0x5560
    ctx->pc = 0x14c304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21856));
    // 0x14c308: 0xc055e4c  jal         func_157930
    ctx->pc = 0x14C308u;
    SET_GPR_U32(ctx, 31, 0x14C310u);
    ctx->pc = 0x14C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C308u;
    // 0x14c30c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157930u, 0x14C308u, 0x14C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C310u;
label_14c310:
    // 0x14c310: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14C310u;
    {
        const bool branch_taken_0x14c310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c310) {
            ctx->pc = 0x14C328u;
            goto label_14c328;
        }
    }
    ctx->pc = 0x14C318u;
label_14c318:
    // 0x14c318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c31c: 0x24845560  addiu       $a0, $a0, 0x5560
    ctx->pc = 0x14c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21856));
    // 0x14c320: 0xc055e4c  jal         func_157930
    ctx->pc = 0x14C320u;
    SET_GPR_U32(ctx, 31, 0x14C328u);
    ctx->pc = 0x14C324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C320u;
    // 0x14c324: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157930u, 0x14C320u, 0x14C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C328u;
label_14c328:
    // 0x14c328: 0xc053eba  jal         func_14FAE8
    ctx->pc = 0x14C328u;
    SET_GPR_U32(ctx, 31, 0x14C330u);
    ctx->pc = 0x14C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C328u;
    // 0x14c32c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAE8u, 0x14C328u, 0x14C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C330u;
label_14c330:
    // 0x14c330: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C330u;
    {
        const bool branch_taken_0x14c330 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C330u;
        // 0x14c334: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c330) {
            ctx->pc = 0x14C340u;
            goto label_14c340;
        }
    }
    ctx->pc = 0x14C338u;
    // 0x14c338: 0xc043dfe  jal         func_10F7F8
    ctx->pc = 0x14C338u;
    SET_GPR_U32(ctx, 31, 0x14C340u);
    ctx->pc = 0x14C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C338u;
    // 0x14c33c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7F8u, 0x14C338u, 0x14C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C340u;
label_14c340:
    // 0x14c340: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14c340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c344: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14c344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c348: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14c348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c34c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c350: 0x3e00008  jr          $ra
    ctx->pc = 0x14C350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C350u;
        // 0x14c354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C358u;
}
