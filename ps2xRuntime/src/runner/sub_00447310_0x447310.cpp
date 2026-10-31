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

// Function: sub_00447310
// Address: 0x447310 - 0x4473a0
void sub_00447310_0x447310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447310_0x447310");
#endif

    switch (ctx->pc) {
        case 0x447350u: goto label_447350;
        case 0x44737cu: goto label_44737c;
        default: break;
    }

    ctx->pc = 0x447310u;

    // 0x447310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x447310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x447314: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x447314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x447318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44731c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x447320: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x447320u;
    {
        const bool branch_taken_0x447320 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x447324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447320u;
        // 0x447324: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447320) {
            ctx->pc = 0x44737Cu;
            goto label_44737c;
        }
    }
    ctx->pc = 0x447328u;
    // 0x447328: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x447328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x44732c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x447330: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x447330u;
    {
        const bool branch_taken_0x447330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x447334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447330u;
        // 0x447334: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447330) {
            ctx->pc = 0x447358u;
            goto label_447358;
        }
    }
    ctx->pc = 0x447338u;
    // 0x447338: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x447338u;
    {
        const bool branch_taken_0x447338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x447338) {
            ctx->pc = 0x44733Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447338u;
            // 0x44733c: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447344u;
            goto label_447344;
        }
    }
    ctx->pc = 0x447340u;
    // 0x447340: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x447340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_447344:
    // 0x447344: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x447344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x447348: 0xc111adc  jal         func_446B70
    ctx->pc = 0x447348u;
    SET_GPR_U32(ctx, 31, 0x447350u);
    ctx->pc = 0x44734Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447348u;
    // 0x44734c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446B70u, 0x447348u, 0x447350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447350u;
label_447350:
    // 0x447350: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x447350u;
    {
        const bool branch_taken_0x447350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447350u;
        // 0x447354: 0x8e030108  lw          $v1, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447350) {
            ctx->pc = 0x447380u;
            goto label_447380;
        }
    }
    ctx->pc = 0x447358u;
label_447358:
    // 0x447358: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x447358u;
    {
        const bool branch_taken_0x447358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x447358) {
            ctx->pc = 0x44735Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447358u;
            // 0x44735c: 0x8e0501d8  lw          $a1, 0x1D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44736Cu;
            goto label_44736c;
        }
    }
    ctx->pc = 0x447360u;
    // 0x447360: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x447360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x447364: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x447364u;
    {
        const bool branch_taken_0x447364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447364u;
        // 0x447368: 0x8e0601f4  lw          $a2, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447364) {
            ctx->pc = 0x447370u;
            goto label_447370;
        }
    }
    ctx->pc = 0x44736Cu;
label_44736c:
    // 0x44736c: 0x8e0601e8  lw          $a2, 0x1E8($s0)
    ctx->pc = 0x44736cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_447370:
    // 0x447370: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x447370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x447374: 0xc111b8c  jal         func_446E30
    ctx->pc = 0x447374u;
    SET_GPR_U32(ctx, 31, 0x44737Cu);
    ctx->pc = 0x447378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447374u;
    // 0x447378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446E30u, 0x447374u, 0x44737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44737Cu;
label_44737c:
    // 0x44737c: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x44737cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_447380:
    // 0x447380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x447380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x447384: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x447384u;
    {
        const bool branch_taken_0x447384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x447388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447384u;
        // 0x447388: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447384) {
            ctx->pc = 0x447394u;
            goto label_447394;
        }
    }
    ctx->pc = 0x44738Cu;
    // 0x44738c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x44738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x447390: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x447390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_447394:
    // 0x447394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x447394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x447398: 0x3e00008  jr          $ra
    ctx->pc = 0x447398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447398u;
        // 0x44739c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4473A0u;
}
