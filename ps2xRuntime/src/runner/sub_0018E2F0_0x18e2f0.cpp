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

// Function: sub_0018E2F0
// Address: 0x18e2f0 - 0x18e3c8
void sub_0018E2F0_0x18e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E2F0_0x18e2f0");
#endif

    switch (ctx->pc) {
        case 0x18e2f0u: goto label_18e2f0;
        case 0x18e2f4u: goto label_18e2f4;
        case 0x18e2f8u: goto label_18e2f8;
        case 0x18e2fcu: goto label_18e2fc;
        case 0x18e300u: goto label_18e300;
        case 0x18e304u: goto label_18e304;
        case 0x18e308u: goto label_18e308;
        case 0x18e30cu: goto label_18e30c;
        case 0x18e310u: goto label_18e310;
        case 0x18e314u: goto label_18e314;
        case 0x18e318u: goto label_18e318;
        case 0x18e31cu: goto label_18e31c;
        case 0x18e320u: goto label_18e320;
        case 0x18e324u: goto label_18e324;
        case 0x18e328u: goto label_18e328;
        case 0x18e32cu: goto label_18e32c;
        case 0x18e330u: goto label_18e330;
        case 0x18e334u: goto label_18e334;
        case 0x18e338u: goto label_18e338;
        case 0x18e33cu: goto label_18e33c;
        case 0x18e340u: goto label_18e340;
        case 0x18e344u: goto label_18e344;
        case 0x18e348u: goto label_18e348;
        case 0x18e34cu: goto label_18e34c;
        case 0x18e350u: goto label_18e350;
        case 0x18e354u: goto label_18e354;
        case 0x18e358u: goto label_18e358;
        case 0x18e35cu: goto label_18e35c;
        case 0x18e360u: goto label_18e360;
        case 0x18e364u: goto label_18e364;
        case 0x18e368u: goto label_18e368;
        case 0x18e36cu: goto label_18e36c;
        case 0x18e370u: goto label_18e370;
        case 0x18e374u: goto label_18e374;
        case 0x18e378u: goto label_18e378;
        case 0x18e37cu: goto label_18e37c;
        case 0x18e380u: goto label_18e380;
        case 0x18e384u: goto label_18e384;
        case 0x18e388u: goto label_18e388;
        case 0x18e38cu: goto label_18e38c;
        case 0x18e390u: goto label_18e390;
        case 0x18e394u: goto label_18e394;
        case 0x18e398u: goto label_18e398;
        case 0x18e39cu: goto label_18e39c;
        case 0x18e3a0u: goto label_18e3a0;
        case 0x18e3a4u: goto label_18e3a4;
        case 0x18e3a8u: goto label_18e3a8;
        case 0x18e3acu: goto label_18e3ac;
        case 0x18e3b0u: goto label_18e3b0;
        case 0x18e3b4u: goto label_18e3b4;
        case 0x18e3b8u: goto label_18e3b8;
        case 0x18e3bcu: goto label_18e3bc;
        case 0x18e3c0u: goto label_18e3c0;
        case 0x18e3c4u: goto label_18e3c4;
        default: break;
    }

    ctx->pc = 0x18e2f0u;

label_18e2f0:
    // 0x18e2f0: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x18e2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
label_18e2f4:
    // 0x18e2f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_18e2f8:
    // 0x18e2f8: 0x7fb00450  sq          $s0, 0x450($sp)
    ctx->pc = 0x18e2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 16));
label_18e2fc:
    // 0x18e2fc: 0x7fb20430  sq          $s2, 0x430($sp)
    ctx->pc = 0x18e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 18));
label_18e300:
    // 0x18e300: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18e300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e304:
    // 0x18e304: 0x7fb30420  sq          $s3, 0x420($sp)
    ctx->pc = 0x18e304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 19));
label_18e308:
    // 0x18e308: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18e308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18e30c:
    // 0x18e30c: 0x7fb10440  sq          $s1, 0x440($sp)
    ctx->pc = 0x18e30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 17));
label_18e310:
    // 0x18e310: 0x2453deb8  addiu       $s3, $v0, -0x2148
    ctx->pc = 0x18e310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_18e314:
    // 0x18e314: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x18e314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_18e318:
    // 0x18e318: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x18e318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_18e31c:
    // 0x18e31c: 0x0  nop
    ctx->pc = 0x18e31cu;
    // NOP
label_18e320:
    // 0x18e320: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x18e320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18e324:
    // 0x18e324: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18e324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_18e328:
    // 0x18e328: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18e328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e32c:
    // 0x18e32c: 0xc0e4092  jal         func_390248
label_18e330:
    if (ctx->pc == 0x18E330u) {
        ctx->pc = 0x18E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E32Cu;
        // 0x18e330: 0x24840218  addiu       $a0, $a0, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E334u;
        goto label_18e334;
    }
    ctx->pc = 0x18E32Cu;
    SET_GPR_U32(ctx, 31, 0x18E334u);
    ctx->pc = 0x18E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E32Cu;
    // 0x18e330: 0x24840218  addiu       $a0, $a0, 0x218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390248u, 0x18E32Cu, 0x18E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E334u;
label_18e334:
    // 0x18e334: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e338:
    // 0x18e338: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_18e33c:
    if (ctx->pc == 0x18E33Cu) {
        ctx->pc = 0x18E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E338u;
        // 0x18e33c: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E340u;
        goto label_18e340;
    }
    ctx->pc = 0x18E338u;
    {
        const bool branch_taken_0x18e338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E338u;
        // 0x18e33c: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e338) {
            ctx->pc = 0x18E398u;
            goto label_18e398;
        }
    }
    ctx->pc = 0x18E340u;
label_18e340:
    // 0x18e340: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18e340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18e344:
    // 0x18e344: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18e344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18e348:
    // 0x18e348: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18e34c:
    // 0x18e34c: 0x0  nop
    ctx->pc = 0x18e34cu;
    // NOP
label_18e350:
    // 0x18e350: 0x0  nop
    ctx->pc = 0x18e350u;
    // NOP
label_18e354:
    // 0x18e354: 0x0  nop
    ctx->pc = 0x18e354u;
    // NOP
label_18e358:
    // 0x18e358: 0x0  nop
    ctx->pc = 0x18e358u;
    // NOP
label_18e35c:
    // 0x18e35c: 0x0  nop
    ctx->pc = 0x18e35cu;
    // NOP
label_18e360:
    // 0x18e360: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_18e364:
    if (ctx->pc == 0x18E364u) {
        ctx->pc = 0x18E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E360u;
        // 0x18e364: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E368u;
        goto label_18e368;
    }
    ctx->pc = 0x18E360u;
    {
        const bool branch_taken_0x18e360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E360u;
        // 0x18e364: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e360) {
            ctx->pc = 0x18E350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e350;
        }
    }
    ctx->pc = 0x18E368u;
label_18e368:
    // 0x18e368: 0xc138ddc  jal         func_4E3770
label_18e36c:
    if (ctx->pc == 0x18E36Cu) {
        ctx->pc = 0x18E370u;
        goto label_18e370;
    }
    ctx->pc = 0x18E368u;
    SET_GPR_U32(ctx, 31, 0x18E370u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x18E368u, 0x18E370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E370u;
label_18e370:
    // 0x18e370: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18e370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18e374:
    // 0x18e374: 0xc0ea16a  jal         func_3A85A8
label_18e378:
    if (ctx->pc == 0x18E378u) {
        ctx->pc = 0x18E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E374u;
        // 0x18e378: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E37Cu;
        goto label_18e37c;
    }
    ctx->pc = 0x18E374u;
    SET_GPR_U32(ctx, 31, 0x18E37Cu);
    ctx->pc = 0x18E378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E374u;
    // 0x18e378: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x18E374u, 0x18E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E37Cu;
label_18e37c:
    // 0x18e37c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e380:
    // 0x18e380: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x18e380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_18e384:
    // 0x18e384: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18e384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18e388:
    // 0x18e388: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x18e388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_18e38c:
    // 0x18e38c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x18e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_18e390:
    // 0x18e390: 0x60f809  jalr        $v1
label_18e394:
    if (ctx->pc == 0x18E394u) {
        ctx->pc = 0x18E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E390u;
        // 0x18e394: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E398u;
        goto label_18e398;
    }
    ctx->pc = 0x18E390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18E398u);
        ctx->pc = 0x18E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E390u;
        // 0x18e394: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E390u, 0x18E398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E398u;
label_18e398:
    // 0x18e398: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x18e398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e39c:
    // 0x18e39c: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x18e39cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18e3a0:
    // 0x18e3a0: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
label_18e3a4:
    if (ctx->pc == 0x18E3A4u) {
        ctx->pc = 0x18E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3A0u;
        // 0x18e3a4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3A8u;
        goto label_18e3a8;
    }
    ctx->pc = 0x18E3A0u;
    {
        const bool branch_taken_0x18e3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e3a0) {
            ctx->pc = 0x18E3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E3A0u;
            // 0x18e3a4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e320;
        }
    }
    ctx->pc = 0x18E3A8u;
label_18e3a8:
    // 0x18e3a8: 0x7bb00450  lq          $s0, 0x450($sp)
    ctx->pc = 0x18e3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_18e3ac:
    // 0x18e3ac: 0x7bb10440  lq          $s1, 0x440($sp)
    ctx->pc = 0x18e3acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_18e3b0:
    // 0x18e3b0: 0x7bb20430  lq          $s2, 0x430($sp)
    ctx->pc = 0x18e3b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_18e3b4:
    // 0x18e3b4: 0x7bb30420  lq          $s3, 0x420($sp)
    ctx->pc = 0x18e3b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_18e3b8:
    // 0x18e3b8: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x18e3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_18e3bc:
    // 0x18e3bc: 0x3e00008  jr          $ra
label_18e3c0:
    if (ctx->pc == 0x18E3C0u) {
        ctx->pc = 0x18E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3BCu;
        // 0x18e3c0: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3C4u;
        goto label_18e3c4;
    }
    ctx->pc = 0x18E3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3BCu;
        // 0x18e3c0: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E3C4u;
label_18e3c4:
    // 0x18e3c4: 0x0  nop
    ctx->pc = 0x18e3c4u;
    // NOP
    ctx->pc = 0x18e3c8u;
}
