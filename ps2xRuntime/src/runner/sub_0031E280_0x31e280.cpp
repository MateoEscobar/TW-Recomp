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

// Function: sub_0031E280
// Address: 0x31e280 - 0x31e394
void sub_0031E280_0x31e280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E280_0x31e280");
#endif

    switch (ctx->pc) {
        case 0x31e2acu: goto label_31e2ac;
        case 0x31e318u: goto label_31e318;
        case 0x31e330u: goto label_31e330;
        case 0x31e33cu: goto label_31e33c;
        case 0x31e360u: goto label_31e360;
        case 0x31e36cu: goto label_31e36c;
        case 0x31e380u: goto label_31e380;
        default: break;
    }

    ctx->pc = 0x31e280u;

    // 0x31e280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31e280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31e284: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31e284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31e288: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31e288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31e28c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31e28cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e290: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x31e290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x31e294: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31e294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x31e298: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31e298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e29c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31e29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31e2a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31e2a4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x31E2A4u;
    SET_GPR_U32(ctx, 31, 0x31E2ACu);
    ctx->pc = 0x31E2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E2A4u;
    // 0x31e2a8: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31E2A4u, 0x31E2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E2ACu;
label_31e2ac:
    // 0x31e2ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31e2acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e2b0: 0x12600039  beqz        $s3, . + 4 + (0x39 << 2)
    ctx->pc = 0x31E2B0u;
    {
        const bool branch_taken_0x31e2b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2B0u;
        // 0x31e2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2b0) {
            ctx->pc = 0x31E398u;
            return;
        }
    }
    ctx->pc = 0x31E2B8u;
    // 0x31e2b8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x31e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x31e2bc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x31e2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e2c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31e2c4: 0x2c620017  sltiu       $v0, $v1, 0x17
    ctx->pc = 0x31e2c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x31e2c8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x31E2C8u;
    {
        const bool branch_taken_0x31e2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2C8u;
        // 0x31e2cc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2c8) {
            ctx->pc = 0x31E394u;
            return;
        }
    }
    ctx->pc = 0x31E2D0u;
    // 0x31e2d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31e2d4: 0x24422760  addiu       $v0, $v0, 0x2760
    ctx->pc = 0x31e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10080));
    // 0x31e2d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31e2dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31e2e0: 0x800008  jr          $a0
    ctx->pc = 0x31E2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31E2E8u: goto label_31e2e8;
            case 0x31E388u: goto label_31e388;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E2E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31E2E8u;
label_31e2e8:
    // 0x31e2e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e2ec: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E2ECu;
    {
        const bool branch_taken_0x31e2ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x31E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2ECu;
        // 0x31e2f0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2ec) {
            ctx->pc = 0x31E304u;
            goto label_31e304;
        }
    }
    ctx->pc = 0x31E2F4u;
    // 0x31e2f4: 0x54a20015  bnel        $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x31E2F4u;
    {
        const bool branch_taken_0x31e2f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x31e2f4) {
            ctx->pc = 0x31E2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E2F4u;
            // 0x31e2f8: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E34Cu;
            goto label_31e34c;
        }
    }
    ctx->pc = 0x31E2FCu;
    // 0x31e2fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31E2FCu;
    {
        const bool branch_taken_0x31e2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2FCu;
        // 0x31e300: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2fc) {
            ctx->pc = 0x31E308u;
            goto label_31e308;
        }
    }
    ctx->pc = 0x31E304u;
label_31e304:
    // 0x31e304: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x31e304u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_31e308:
    // 0x31e308: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x31E308u;
    {
        const bool branch_taken_0x31e308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e308) {
            ctx->pc = 0x31E30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E308u;
            // 0x31e30c: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E34Cu;
            goto label_31e34c;
        }
    }
    ctx->pc = 0x31E310u;
    // 0x31e310: 0xc08a076  jal         func_2281D8
    ctx->pc = 0x31E310u;
    SET_GPR_U32(ctx, 31, 0x31E318u);
    ctx->pc = 0x31E314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E310u;
    // 0x31e314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2281D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2281D8u, 0x31E310u, 0x31E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E318u;
label_31e318:
    // 0x31e318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31e318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e31c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e320: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31E320u;
    {
        const bool branch_taken_0x31e320 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x31e320) {
            ctx->pc = 0x31E324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E320u;
            // 0x31e324: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E34Cu;
            goto label_31e34c;
        }
    }
    ctx->pc = 0x31E328u;
    // 0x31e328: 0xc087502  jal         func_21D408
    ctx->pc = 0x31E328u;
    SET_GPR_U32(ctx, 31, 0x31E330u);
    ctx->pc = 0x31E32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E328u;
    // 0x31e32c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31E328u, 0x31E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E330u;
label_31e330:
    // 0x31e330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31e330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e334: 0xc0a4742  jal         func_291D08
    ctx->pc = 0x31E334u;
    SET_GPR_U32(ctx, 31, 0x31E33Cu);
    ctx->pc = 0x31E338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E334u;
    // 0x31e338: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D08u, 0x31E334u, 0x31E33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E33Cu;
label_31e33c:
    // 0x31e33c: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E33Cu;
    {
        const bool branch_taken_0x31e33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x31e33c) {
            ctx->pc = 0x31E340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E33Cu;
            // 0x31e340: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E34Cu;
            goto label_31e34c;
        }
    }
    ctx->pc = 0x31E344u;
    // 0x31e344: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31E344u;
    {
        const bool branch_taken_0x31e344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E344u;
        // 0x31e348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e344) {
            ctx->pc = 0x31E398u;
            return;
        }
    }
    ctx->pc = 0x31E34Cu;
label_31e34c:
    // 0x31e34c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x31e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x31e350: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31E350u;
    {
        const bool branch_taken_0x31e350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31e350) {
            ctx->pc = 0x31E354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E350u;
            // 0x31e354: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E370u;
            goto label_31e370;
        }
    }
    ctx->pc = 0x31E358u;
    // 0x31e358: 0xc087502  jal         func_21D408
    ctx->pc = 0x31E358u;
    SET_GPR_U32(ctx, 31, 0x31E360u);
    ctx->pc = 0x31E35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E358u;
    // 0x31e35c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31E358u, 0x31E360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E360u;
label_31e360:
    // 0x31e360: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x31e360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31e364: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x31E364u;
    SET_GPR_U32(ctx, 31, 0x31E36Cu);
    ctx->pc = 0x31E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E364u;
    // 0x31e368: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x31E364u, 0x31E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E36Cu;
label_31e36c:
    // 0x31e36c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x31e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_31e370:
    // 0x31e370: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31E370u;
    {
        const bool branch_taken_0x31e370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E370u;
        // 0x31e374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e370) {
            ctx->pc = 0x31E398u;
            return;
        }
    }
    ctx->pc = 0x31E378u;
    // 0x31e378: 0xc0c789c  jal         func_31E270
    ctx->pc = 0x31E378u;
    SET_GPR_U32(ctx, 31, 0x31E380u);
    ctx->pc = 0x31E37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E378u;
    // 0x31e37c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E270u, 0x31E378u, 0x31E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E380u;
label_31e380:
    // 0x31e380: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31E380u;
    {
        const bool branch_taken_0x31e380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E380u;
        // 0x31e384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e380) {
            ctx->pc = 0x31E398u;
            return;
        }
    }
    ctx->pc = 0x31E388u;
label_31e388:
    // 0x31e388: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31e388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e38c: 0xc0c7758  jal         func_31DD60
    ctx->pc = 0x31E38Cu;
    SET_GPR_U32(ctx, 31, 0x31E394u);
    ctx->pc = 0x31E390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E38Cu;
    // 0x31e390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD60u, 0x31E38Cu, 0x31E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E394u;
}
