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

// Function: sub_0048B308
// Address: 0x48b308 - 0x48b3b8
void sub_0048B308_0x48b308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B308_0x48b308");
#endif

    switch (ctx->pc) {
        case 0x48b308u: goto label_48b308;
        case 0x48b30cu: goto label_48b30c;
        case 0x48b310u: goto label_48b310;
        case 0x48b314u: goto label_48b314;
        case 0x48b318u: goto label_48b318;
        case 0x48b31cu: goto label_48b31c;
        case 0x48b320u: goto label_48b320;
        case 0x48b324u: goto label_48b324;
        case 0x48b328u: goto label_48b328;
        case 0x48b32cu: goto label_48b32c;
        case 0x48b330u: goto label_48b330;
        case 0x48b334u: goto label_48b334;
        case 0x48b338u: goto label_48b338;
        case 0x48b33cu: goto label_48b33c;
        case 0x48b340u: goto label_48b340;
        case 0x48b344u: goto label_48b344;
        case 0x48b348u: goto label_48b348;
        case 0x48b34cu: goto label_48b34c;
        case 0x48b350u: goto label_48b350;
        case 0x48b354u: goto label_48b354;
        case 0x48b358u: goto label_48b358;
        case 0x48b35cu: goto label_48b35c;
        case 0x48b360u: goto label_48b360;
        case 0x48b364u: goto label_48b364;
        case 0x48b368u: goto label_48b368;
        case 0x48b36cu: goto label_48b36c;
        case 0x48b370u: goto label_48b370;
        case 0x48b374u: goto label_48b374;
        case 0x48b378u: goto label_48b378;
        case 0x48b37cu: goto label_48b37c;
        case 0x48b380u: goto label_48b380;
        case 0x48b384u: goto label_48b384;
        case 0x48b388u: goto label_48b388;
        case 0x48b38cu: goto label_48b38c;
        case 0x48b390u: goto label_48b390;
        case 0x48b394u: goto label_48b394;
        case 0x48b398u: goto label_48b398;
        case 0x48b39cu: goto label_48b39c;
        case 0x48b3a0u: goto label_48b3a0;
        case 0x48b3a4u: goto label_48b3a4;
        case 0x48b3a8u: goto label_48b3a8;
        case 0x48b3acu: goto label_48b3ac;
        case 0x48b3b0u: goto label_48b3b0;
        case 0x48b3b4u: goto label_48b3b4;
        default: break;
    }

    ctx->pc = 0x48b308u;

label_48b308:
    // 0x48b308: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x48b308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_48b30c:
    // 0x48b30c: 0x8f868668  lw          $a2, -0x7998($gp)
    ctx->pc = 0x48b30cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
label_48b310:
    // 0x48b310: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x48b310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_48b314:
    // 0x48b314: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x48b314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_48b318:
    // 0x48b318: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x48b318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48b31c:
    // 0x48b31c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x48b31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_48b320:
    // 0x48b320: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x48b320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_48b324:
    // 0x48b324: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x48b324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_48b328:
    // 0x48b328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48b328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48b32c:
    // 0x48b32c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48b330:
    // 0x48b330: 0x8e534000  lw          $s3, 0x4000($s2)
    ctx->pc = 0x48b330u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
label_48b334:
    // 0x48b334: 0x52600015  beql        $s3, $zero, . + 4 + (0x15 << 2)
label_48b338:
    if (ctx->pc == 0x48B338u) {
        ctx->pc = 0x48B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B334u;
        // 0x48b338: 0x8e444004  lw          $a0, 0x4004($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B33Cu;
        goto label_48b33c;
    }
    ctx->pc = 0x48B334u;
    {
        const bool branch_taken_0x48b334 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b334) {
            ctx->pc = 0x48B338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48B334u;
            // 0x48b338: 0x8e444004  lw          $a0, 0x4004($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48B38Cu;
            goto label_48b38c;
        }
    }
    ctx->pc = 0x48B33Cu;
label_48b33c:
    // 0x48b33c: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
label_48b340:
    if (ctx->pc == 0x48B340u) {
        ctx->pc = 0x48B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B33Cu;
        // 0x48b340: 0x3c150071  lui         $s5, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B344u;
        goto label_48b344;
    }
    ctx->pc = 0x48B33Cu;
    {
        const bool branch_taken_0x48b33c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x48B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B33Cu;
        // 0x48b340: 0x3c150071  lui         $s5, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b33c) {
            ctx->pc = 0x48B374u;
            goto label_48b374;
        }
    }
    ctx->pc = 0x48B344u;
label_48b344:
    // 0x48b344: 0x24d4ffff  addiu       $s4, $a2, -0x1
    ctx->pc = 0x48b344u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_48b348:
    // 0x48b348: 0x2670001c  addiu       $s0, $s3, 0x1C
    ctx->pc = 0x48b348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
label_48b34c:
    // 0x48b34c: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x48b34cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_48b350:
    // 0x48b350: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x48b350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_48b354:
    // 0x48b354: 0x0  nop
    ctx->pc = 0x48b354u;
    // NOP
label_48b358:
    // 0x48b358: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x48b358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_48b35c:
    // 0x48b35c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x48b35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_48b360:
    // 0x48b360: 0xc122d9a  jal         func_48B668
label_48b364:
    if (ctx->pc == 0x48B364u) {
        ctx->pc = 0x48B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B360u;
        // 0x48b364: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B368u;
        goto label_48b368;
    }
    ctx->pc = 0x48B360u;
    SET_GPR_U32(ctx, 31, 0x48B368u);
    ctx->pc = 0x48B364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B360u;
    // 0x48b364: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B668u, 0x48B360u, 0x48B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B368u;
label_48b368:
    // 0x48b368: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x48b368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_48b36c:
    // 0x48b36c: 0x623fffa  bgezl       $s1, . + 4 + (-0x6 << 2)
label_48b370:
    if (ctx->pc == 0x48B370u) {
        ctx->pc = 0x48B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B36Cu;
        // 0x48b370: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B374u;
        goto label_48b374;
    }
    ctx->pc = 0x48B36Cu;
    {
        const bool branch_taken_0x48b36c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x48b36c) {
            ctx->pc = 0x48B370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48B36Cu;
            // 0x48b370: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48B358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b358;
        }
    }
    ctx->pc = 0x48B374u;
label_48b374:
    // 0x48b374: 0x26a3ad18  addiu       $v1, $s5, -0x52E8
    ctx->pc = 0x48b374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
label_48b378:
    // 0x48b378: 0x8e444004  lw          $a0, 0x4004($s2)
    ctx->pc = 0x48b378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16388)));
label_48b37c:
    // 0x48b37c: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x48b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_48b380:
    // 0x48b380: 0x40f809  jalr        $v0
label_48b384:
    if (ctx->pc == 0x48B384u) {
        ctx->pc = 0x48B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B380u;
        // 0x48b384: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B388u;
        goto label_48b388;
    }
    ctx->pc = 0x48B380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48B388u);
        ctx->pc = 0x48B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B380u;
        // 0x48b384: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B380u, 0x48B388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48B388u;
label_48b388:
    // 0x48b388: 0x8e444004  lw          $a0, 0x4004($s2)
    ctx->pc = 0x48b388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16388)));
label_48b38c:
    // 0x48b38c: 0xc11f74a  jal         func_47DD28
label_48b390:
    if (ctx->pc == 0x48B390u) {
        ctx->pc = 0x48B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B38Cu;
        // 0x48b390: 0xae404000  sw          $zero, 0x4000($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B394u;
        goto label_48b394;
    }
    ctx->pc = 0x48B38Cu;
    SET_GPR_U32(ctx, 31, 0x48B394u);
    ctx->pc = 0x48B390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B38Cu;
    // 0x48b390: 0xae404000  sw          $zero, 0x4000($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16384), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x48B38Cu, 0x48B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B394u;
label_48b394:
    // 0x48b394: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x48b394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_48b398:
    // 0x48b398: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x48b398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48b39c:
    // 0x48b39c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x48b39cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48b3a0:
    // 0x48b3a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48b3a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48b3a4:
    // 0x48b3a4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x48b3a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48b3a8:
    // 0x48b3a8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x48b3a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48b3ac:
    // 0x48b3ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48b3b0:
    // 0x48b3b0: 0x3e00008  jr          $ra
label_48b3b4:
    if (ctx->pc == 0x48B3B4u) {
        ctx->pc = 0x48B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B3B0u;
        // 0x48b3b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B3B8u;
        goto label_fallthrough_0x48b3b0;
    }
    ctx->pc = 0x48B3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B3B0u;
        // 0x48b3b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48b3b0:
    ctx->pc = 0x48B3B8u;
}
