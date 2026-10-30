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

// Function: sub_00353298
// Address: 0x353298 - 0x353460
void sub_00353298_0x353298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353298_0x353298");
#endif

    switch (ctx->pc) {
        case 0x3532c0u: goto label_3532c0;
        case 0x3532f8u: goto label_3532f8;
        case 0x353348u: goto label_353348;
        case 0x353374u: goto label_353374;
        case 0x353388u: goto label_353388;
        case 0x3533b8u: goto label_3533b8;
        case 0x35342cu: goto label_35342c;
        case 0x353440u: goto label_353440;
        default: break;
    }

    ctx->pc = 0x353298u;

    // 0x353298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35329c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35329cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3532a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3532a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3532a4: 0x2443ba18  addiu       $v1, $v0, -0x45E8
    ctx->pc = 0x3532a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949400));
    // 0x3532a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3532a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3532ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3532acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3532b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3532b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3532b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3532b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3532b8: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x3532b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3532bc: 0x0  nop
    ctx->pc = 0x3532bcu;
    // NOP
label_3532c0:
    // 0x3532c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3532c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3532c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3532C4u;
    {
        const bool branch_taken_0x3532c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3532c4) {
            ctx->pc = 0x3532C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3532C4u;
            // 0x3532c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3532DCu;
            goto label_3532dc;
        }
    }
    ctx->pc = 0x3532CCu;
    // 0x3532cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3532ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3532d0: 0x1044005c  beq         $v0, $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x3532D0u;
    {
        const bool branch_taken_0x3532d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3532D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3532D0u;
        // 0x3532d4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3532d0) {
            ctx->pc = 0x353444u;
            goto label_353444;
        }
    }
    ctx->pc = 0x3532D8u;
    // 0x3532d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3532d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3532dc:
    // 0x3532dc: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x3532dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x3532e0: 0x2ca2000c  sltiu       $v0, $a1, 0xC
    ctx->pc = 0x3532e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3532e4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3532E4u;
    {
        const bool branch_taken_0x3532e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3532E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3532E4u;
        // 0x3532e8: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3532e4) {
            ctx->pc = 0x3532C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3532c0;
        }
    }
    ctx->pc = 0x3532ECu;
    // 0x3532ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3532ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3532f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3532f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3532f4: 0x2443ba18  addiu       $v1, $v0, -0x45E8
    ctx->pc = 0x3532f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949400));
label_3532f8:
    // 0x3532f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3532f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3532fc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3532FCu;
    {
        const bool branch_taken_0x3532fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3532fc) {
            ctx->pc = 0x353300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3532FCu;
            // 0x353300: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x353304u;
    // 0x353304: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x353304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x353308: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x353308u;
    {
        const bool branch_taken_0x353308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353308) {
            ctx->pc = 0x35330Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353308u;
            // 0x35330c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x353310u;
    // 0x353310: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x353310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x353314: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x353314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x353318: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x353318u;
    {
        const bool branch_taken_0x353318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353318) {
            ctx->pc = 0x35331Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353318u;
            // 0x35331c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353328u;
            goto label_353328;
        }
    }
    ctx->pc = 0x353320u;
    // 0x353320: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x353320u;
    {
        const bool branch_taken_0x353320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353320u;
        // 0x353324: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353320) {
            ctx->pc = 0x353444u;
            goto label_353444;
        }
    }
    ctx->pc = 0x353328u;
label_353328:
    // 0x353328: 0x2ca2000c  sltiu       $v0, $a1, 0xC
    ctx->pc = 0x353328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x35332c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x35332Cu;
    {
        const bool branch_taken_0x35332c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35332Cu;
        // 0x353330: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35332c) {
            ctx->pc = 0x3532F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3532f8;
        }
    }
    ctx->pc = 0x353334u;
    // 0x353334: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x353334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x353338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35333c: 0x2450ba18  addiu       $s0, $v0, -0x45E8
    ctx->pc = 0x35333cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949400));
    // 0x353340: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x353340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x353344: 0x0  nop
    ctx->pc = 0x353344u;
    // NOP
label_353348:
    // 0x353348: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x353348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35334c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35334Cu;
    {
        const bool branch_taken_0x35334c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35334Cu;
        // 0x353350: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35334c) {
            ctx->pc = 0x353390u;
            goto label_353390;
        }
    }
    ctx->pc = 0x353354u;
    // 0x353354: 0x9442001c  lhu         $v0, 0x1C($v0)
    ctx->pc = 0x353354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x353358: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x353358u;
    {
        const bool branch_taken_0x353358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353358u;
        // 0x35335c: 0x2ca2000c  sltiu       $v0, $a1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x353358) {
            ctx->pc = 0x353394u;
            goto label_353394;
        }
    }
    ctx->pc = 0x353360u;
    // 0x353360: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x353360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x353364: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x353364u;
    {
        const bool branch_taken_0x353364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x353364) {
            ctx->pc = 0x353368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353364u;
            // 0x353368: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35337Cu;
            goto label_35337c;
        }
    }
    ctx->pc = 0x35336Cu;
    // 0x35336c: 0xc0e749e  jal         func_39D278
    ctx->pc = 0x35336Cu;
    SET_GPR_U32(ctx, 31, 0x353374u);
    ctx->pc = 0x353370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35336Cu;
    // 0x353370: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39D278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D278u, 0x35336Cu, 0x353374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353374u;
label_353374:
    // 0x353374: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x353374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x353378: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x353378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_35337c:
    // 0x35337c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35337cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353380: 0xc0d4768  jal         func_351DA0
    ctx->pc = 0x353380u;
    SET_GPR_U32(ctx, 31, 0x353388u);
    ctx->pc = 0x353384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353380u;
    // 0x353384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351DA0u, 0x353380u, 0x353388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353388u;
label_353388:
    // 0x353388: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x353388u;
    {
        const bool branch_taken_0x353388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353388u;
        // 0x35338c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353388) {
            ctx->pc = 0x353444u;
            goto label_353444;
        }
    }
    ctx->pc = 0x353390u;
label_353390:
    // 0x353390: 0x2ca2000c  sltiu       $v0, $a1, 0xC
    ctx->pc = 0x353390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_353394:
    // 0x353394: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x353394u;
    {
        const bool branch_taken_0x353394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353394u;
        // 0x353398: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353394) {
            ctx->pc = 0x353348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353348;
        }
    }
    ctx->pc = 0x35339Cu;
    // 0x35339c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x35339cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3533a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3533a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3533a4: 0x2444ba18  addiu       $a0, $v0, -0x45E8
    ctx->pc = 0x3533a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949400));
    // 0x3533a8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3533a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x3533ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3533acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3533b0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x3533b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3533b4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x3533b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3533b8:
    // 0x3533b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3533b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3533bc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3533BCu;
    {
        const bool branch_taken_0x3533bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3533bc) {
            ctx->pc = 0x3533C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3533BCu;
            // 0x3533c0: 0x9442001c  lhu         $v0, 0x1C($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3533DCu;
            goto label_3533dc;
        }
    }
    ctx->pc = 0x3533C4u;
    // 0x3533c4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x3533c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x3533c8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3533c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3533cc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3533CCu;
    {
        const bool branch_taken_0x3533cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3533cc) {
            ctx->pc = 0x3533D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3533CCu;
            // 0x3533d0: 0x8c83003c  lw          $v1, 0x3C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3533F0u;
            goto label_3533f0;
        }
    }
    ctx->pc = 0x3533D4u;
    // 0x3533d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3533D4u;
    {
        const bool branch_taken_0x3533d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3533D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3533D4u;
        // 0x3533d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3533d4) {
            ctx->pc = 0x353404u;
            goto label_353404;
        }
    }
    ctx->pc = 0x3533DCu;
label_3533dc:
    // 0x3533dc: 0x50480004  beql        $v0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3533DCu;
    {
        const bool branch_taken_0x3533dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x3533dc) {
            ctx->pc = 0x3533E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3533DCu;
            // 0x3533e0: 0x8c83003c  lw          $v1, 0x3C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3533F0u;
            goto label_3533f0;
        }
    }
    ctx->pc = 0x3533E4u;
    // 0x3533e4: 0x54470007  bnel        $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3533E4u;
    {
        const bool branch_taken_0x3533e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x3533e4) {
            ctx->pc = 0x3533E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3533E4u;
            // 0x3533e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353404u;
            goto label_353404;
        }
    }
    ctx->pc = 0x3533ECu;
    // 0x3533ec: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x3533ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_3533f0:
    // 0x3533f0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3533f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3533f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3533F4u;
    {
        const bool branch_taken_0x3533f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3533F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3533F4u;
        // 0x3533f8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3533f4) {
            ctx->pc = 0x353404u;
            goto label_353404;
        }
    }
    ctx->pc = 0x3533FCu;
    // 0x3533fc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3533fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353400: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x353400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_353404:
    // 0x353404: 0x2ca2000c  sltiu       $v0, $a1, 0xC
    ctx->pc = 0x353404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x353408: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x353408u;
    {
        const bool branch_taken_0x353408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353408u;
        // 0x35340c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353408) {
            ctx->pc = 0x3533B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3533b8;
        }
    }
    ctx->pc = 0x353410u;
    // 0x353410: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x353410u;
    {
        const bool branch_taken_0x353410 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x353414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353410u;
        // 0x353414: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353410) {
            ctx->pc = 0x353444u;
            goto label_353444;
        }
    }
    ctx->pc = 0x353418u;
    // 0x353418: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x353418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x35341c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35341Cu;
    {
        const bool branch_taken_0x35341c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35341c) {
            ctx->pc = 0x353420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35341Cu;
            // 0x353420: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353434u;
            goto label_353434;
        }
    }
    ctx->pc = 0x353424u;
    // 0x353424: 0xc0e749e  jal         func_39D278
    ctx->pc = 0x353424u;
    SET_GPR_U32(ctx, 31, 0x35342Cu);
    ctx->pc = 0x353428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353424u;
    // 0x353428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39D278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D278u, 0x353424u, 0x35342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35342Cu;
label_35342c:
    // 0x35342c: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x35342cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x353430: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x353430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_353434:
    // 0x353434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353438: 0xc0d4768  jal         func_351DA0
    ctx->pc = 0x353438u;
    SET_GPR_U32(ctx, 31, 0x353440u);
    ctx->pc = 0x35343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353438u;
    // 0x35343c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351DA0u, 0x353438u, 0x353440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353440u;
label_353440:
    // 0x353440: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x353440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_353444:
    // 0x353444: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x353444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x353448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35344c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35344cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353450: 0x3e00008  jr          $ra
    ctx->pc = 0x353450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353450u;
        // 0x353454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353458u;
    // 0x353458: 0x3e00008  jr          $ra
    ctx->pc = 0x353458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353460u;
}
