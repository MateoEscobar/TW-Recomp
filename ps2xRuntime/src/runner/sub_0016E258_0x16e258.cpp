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

// Function: sub_0016E258
// Address: 0x16e258 - 0x16e388
void sub_0016E258_0x16e258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E258_0x16e258");
#endif

    switch (ctx->pc) {
        case 0x16e284u: goto label_16e284;
        case 0x16e2a4u: goto label_16e2a4;
        case 0x16e2d0u: goto label_16e2d0;
        case 0x16e2ecu: goto label_16e2ec;
        case 0x16e300u: goto label_16e300;
        case 0x16e35cu: goto label_16e35c;
        default: break;
    }

    ctx->pc = 0x16e258u;

    // 0x16e258: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16e258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16e25c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16e25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x16e260: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x16e260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x16e264: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x16e264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x16e268: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x16e268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x16e26c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x16e26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x16e270: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x16e270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x16e274: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x16e274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x16e278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e27c: 0xc051048  jal         func_144120
    ctx->pc = 0x16E27Cu;
    SET_GPR_U32(ctx, 31, 0x16E284u);
    ctx->pc = 0x16E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E27Cu;
    // 0x16e280: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x16E27Cu, 0x16E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E284u;
label_16e284:
    // 0x16e284: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16e284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e288: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E288u;
    {
        const bool branch_taken_0x16e288 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E288u;
        // 0x16e28c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e288) {
            ctx->pc = 0x16E298u;
            goto label_16e298;
        }
    }
    ctx->pc = 0x16E290u;
    // 0x16e290: 0x244289a0  addiu       $v0, $v0, -0x7660
    ctx->pc = 0x16e290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936992));
    // 0x16e294: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x16e294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_16e298:
    // 0x16e298: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x16e298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x16e29c: 0xc051048  jal         func_144120
    ctx->pc = 0x16E29Cu;
    SET_GPR_U32(ctx, 31, 0x16E2A4u);
    ctx->pc = 0x16E2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E29Cu;
    // 0x16e2a0: 0x26750008  addiu       $s5, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x16E29Cu, 0x16E2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E2A4u;
label_16e2a4:
    // 0x16e2a4: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x16e2a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x16e2a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e2ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16e2acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e2b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x16e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16e2b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16e2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e2b8: 0xae620b54  sw          $v0, 0xB54($s3)
    ctx->pc = 0x16e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2900), GPR_U32(ctx, 2));
    // 0x16e2bc: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x16e2bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x16e2c0: 0xae630b50  sw          $v1, 0xB50($s3)
    ctx->pc = 0x16e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2896), GPR_U32(ctx, 3));
    // 0x16e2c4: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x16e2c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    // 0x16e2c8: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x16e2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e2cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16e2d0:
    // 0x16e2d0: 0x10540013  beq         $v0, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x16E2D0u;
    {
        const bool branch_taken_0x16e2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x16E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2D0u;
        // 0x16e2d4: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2d0) {
            ctx->pc = 0x16E320u;
            goto label_16e320;
        }
    }
    ctx->pc = 0x16E2D8u;
    // 0x16e2d8: 0x2c4202d2  sltiu       $v0, $v0, 0x2D2
    ctx->pc = 0x16e2d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)722) ? 1 : 0);
    // 0x16e2dc: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x16E2DCu;
    {
        const bool branch_taken_0x16e2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e2dc) {
            ctx->pc = 0x16E2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E2DCu;
            // 0x16e2e0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E344u;
            goto label_16e344;
        }
    }
    ctx->pc = 0x16E2E4u;
    // 0x16e2e4: 0xc051028  jal         func_1440A0
    ctx->pc = 0x16E2E4u;
    SET_GPR_U32(ctx, 31, 0x16E2ECu);
    ctx->pc = 0x1440A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1440A0u, 0x16E2E4u, 0x16E2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E2ECu;
label_16e2ec:
    // 0x16e2ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16e2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e2f0: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x16e2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x16e2f4: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x16e2f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e2f8: 0x240402d1  addiu       $a0, $zero, 0x2D1
    ctx->pc = 0x16e2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 721));
    // 0x16e2fc: 0x0  nop
    ctx->pc = 0x16e2fcu;
    // NOP
label_16e300:
    // 0x16e300: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e304: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x16E304u;
    {
        const bool branch_taken_0x16e304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x16e304) {
            ctx->pc = 0x16E308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E304u;
            // 0x16e308: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E30Cu;
            goto label_16e30c;
        }
    }
    ctx->pc = 0x16E30Cu;
label_16e30c:
    // 0x16e30c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x16e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16e310: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x16E310u;
    {
        const bool branch_taken_0x16e310 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x16E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E310u;
        // 0x16e314: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e310) {
            ctx->pc = 0x16E300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e300;
        }
    }
    ctx->pc = 0x16E318u;
    // 0x16e318: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16E318u;
    {
        const bool branch_taken_0x16e318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E318u;
        // 0x16e31c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e318) {
            ctx->pc = 0x16E348u;
            goto label_16e348;
        }
    }
    ctx->pc = 0x16E320u;
label_16e320:
    // 0x16e320: 0x8ec2cd4c  lw          $v0, -0x32B4($s6)
    ctx->pc = 0x16e320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
    // 0x16e324: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x16e324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x16e328: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16E328u;
    {
        const bool branch_taken_0x16e328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e328) {
            ctx->pc = 0x16E32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E328u;
            // 0x16e32c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E344u;
            goto label_16e344;
        }
    }
    ctx->pc = 0x16E330u;
    // 0x16e330: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x16e330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x16e334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16e338: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16e33c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16e340: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x16e340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_16e344:
    // 0x16e344: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16e344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16e348:
    // 0x16e348: 0x2a2202d2  slti        $v0, $s1, 0x2D2
    ctx->pc = 0x16e348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)722) ? 1 : 0);
    // 0x16e34c: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x16E34Cu;
    {
        const bool branch_taken_0x16e34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e34c) {
            ctx->pc = 0x16E350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E34Cu;
            // 0x16e350: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e2d0;
        }
    }
    ctx->pc = 0x16E354u;
    // 0x16e354: 0xc051032  jal         func_1440C8
    ctx->pc = 0x16E354u;
    SET_GPR_U32(ctx, 31, 0x16E35Cu);
    ctx->pc = 0x16E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E354u;
    // 0x16e358: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1440C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1440C8u, 0x16E354u, 0x16E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E35Cu;
label_16e35c:
    // 0x16e35c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x16e35cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16e360: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x16e360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16e364: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x16e364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16e368: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16e368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e36c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x16e36cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e370: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x16e370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e374: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x16e374u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e37c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E37Cu;
        // 0x16e380: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E384u;
    // 0x16e384: 0x0  nop
    ctx->pc = 0x16e384u;
    // NOP
    ctx->pc = 0x16e388u;
}
