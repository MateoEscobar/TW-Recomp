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

// Function: sub_00451428
// Address: 0x451428 - 0x451680
void sub_00451428_0x451428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00451428_0x451428");
#endif

    switch (ctx->pc) {
        case 0x4514bcu: goto label_4514bc;
        case 0x451530u: goto label_451530;
        case 0x451570u: goto label_451570;
        case 0x4515bcu: goto label_4515bc;
        default: break;
    }

    ctx->pc = 0x451428u;

    // 0x451428: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x451428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x45142c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x451430: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x451430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x451434: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x451434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x451438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x451438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45143c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45143cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x451440: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x451440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451444: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x451444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x451448: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x451448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x45144c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x45144cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x451450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x451454: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x451454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x451458: 0x8eb1004c  lw          $s1, 0x4C($s5)
    ctx->pc = 0x451458u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x45145c: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x45145cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x451460: 0x1482002d  bne         $a0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x451460u;
    {
        const bool branch_taken_0x451460 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x451464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451460u;
        // 0x451464: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451460) {
            ctx->pc = 0x451518u;
            goto label_451518;
        }
    }
    ctx->pc = 0x451468u;
    // 0x451468: 0x8e3400e4  lw          $s4, 0xE4($s1)
    ctx->pc = 0x451468u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x45146c: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x45146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x451470: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x451470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x451474: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x451474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x451478: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x451478u;
    {
        const bool branch_taken_0x451478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451478u;
        // 0x45147c: 0xae2300e4  sw          $v1, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451478) {
            ctx->pc = 0x451484u;
            goto label_451484;
        }
    }
    ctx->pc = 0x451480u;
    // 0x451480: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x451480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_451484:
    // 0x451484: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x451484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x451488: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x451488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x45148c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x45148cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x451490: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x451490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x451494: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x451494u;
    {
        const bool branch_taken_0x451494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451494) {
            ctx->pc = 0x451498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x451494u;
            // 0x451498: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4514ACu;
            goto label_4514ac;
        }
    }
    ctx->pc = 0x45149Cu;
    // 0x45149c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4514a0: 0x50440008  beql        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4514A0u;
    {
        const bool branch_taken_0x4514a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x4514a0) {
            ctx->pc = 0x4514A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4514A0u;
            // 0x4514a4: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4514C4u;
            goto label_4514c4;
        }
    }
    ctx->pc = 0x4514A8u;
    // 0x4514a8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4514a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_4514ac:
    // 0x4514ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4514acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4514b0: 0x8f848910  lw          $a0, -0x76F0($gp)
    ctx->pc = 0x4514b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x4514b4: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x4514B4u;
    SET_GPR_U32(ctx, 31, 0x4514BCu);
    ctx->pc = 0x4514B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4514B4u;
    // 0x4514b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x4514B4u, 0x4514BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4514BCu;
label_4514bc:
    // 0x4514bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4514bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4514c0: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x4514c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_4514c4:
    // 0x4514c4: 0x26240138  addiu       $a0, $s1, 0x138
    ctx->pc = 0x4514c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 312));
    // 0x4514c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4514c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4514cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4514ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4514d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4514d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4514d4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4514d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4514d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4514d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4514dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4514DCu;
    {
        const bool branch_taken_0x4514dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4514E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4514DCu;
        // 0x4514e0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4514dc) {
            ctx->pc = 0x4514FCu;
            goto label_4514fc;
        }
    }
    ctx->pc = 0x4514E4u;
    // 0x4514e4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4514e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4514e8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x4514e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x4514ec: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x4514ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x4514f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4514f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4514f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4514f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4514f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4514f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4514fc:
    // 0x4514fc: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x4514fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x451500: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x451500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x451504: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x451504u;
    {
        const bool branch_taken_0x451504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x451508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451504u;
        // 0x451508: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451504) {
            ctx->pc = 0x451518u;
            goto label_451518;
        }
    }
    ctx->pc = 0x45150Cu;
    // 0x45150c: 0x24620138  addiu       $v0, $v1, 0x138
    ctx->pc = 0x45150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 312));
    // 0x451510: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x451510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x451514: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x451514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_451518:
    // 0x451518: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x451518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45151c: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x45151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x451520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x451520u;
    {
        const bool branch_taken_0x451520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x451524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451520u;
        // 0x451524: 0x8e3400e4  lw          $s4, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451520) {
            ctx->pc = 0x451530u;
            goto label_451530;
        }
    }
    ctx->pc = 0x451528u;
    // 0x451528: 0xc113b66  jal         func_44ED98
    ctx->pc = 0x451528u;
    SET_GPR_U32(ctx, 31, 0x451530u);
    ctx->pc = 0x45152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451528u;
    // 0x45152c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44ED98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44ED98u, 0x451528u, 0x451530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451530u;
label_451530:
    // 0x451530: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x451530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x451534: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x451534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x451538: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x451538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45153c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x45153cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x451540: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x451540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x451544: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x451544u;
    {
        const bool branch_taken_0x451544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x451548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451544u;
        // 0x451548: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451544) {
            ctx->pc = 0x451564u;
            goto label_451564;
        }
    }
    ctx->pc = 0x45154Cu;
    // 0x45154c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x45154cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x451550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x451550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x451554: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x451554u;
    {
        const bool branch_taken_0x451554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x451558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451554u;
        // 0x451558: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451554) {
            ctx->pc = 0x451568u;
            goto label_451568;
        }
    }
    ctx->pc = 0x45155Cu;
    // 0x45155c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x45155Cu;
    {
        const bool branch_taken_0x45155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45155Cu;
        // 0x451560: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45155c) {
            ctx->pc = 0x451570u;
            goto label_451570;
        }
    }
    ctx->pc = 0x451564u;
label_451564:
    // 0x451564: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x451564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_451568:
    // 0x451568: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x451568u;
    SET_GPR_U32(ctx, 31, 0x451570u);
    ctx->pc = 0x45156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451568u;
    // 0x45156c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x451568u, 0x451570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451570u;
label_451570:
    // 0x451570: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x451570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x451574: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x451574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x451578: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x451578u;
    {
        const bool branch_taken_0x451578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x451578) {
            ctx->pc = 0x4515B4u;
            goto label_4515b4;
        }
    }
    ctx->pc = 0x451580u;
    // 0x451580: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x451580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x451584: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x451584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x451588: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x451588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x45158c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x45158cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x451590: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x451590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x451594: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x451594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x451598: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x451598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x45159c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x45159cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x4515a0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x4515a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x4515a4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x4515a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x4515a8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x4515a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x4515ac: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x4515ACu;
    {
        const bool branch_taken_0x4515ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4515B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4515ACu;
        // 0x4515b0: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4515ac) {
            ctx->pc = 0x451658u;
            goto label_451658;
        }
    }
    ctx->pc = 0x4515B4u;
label_4515b4:
    // 0x4515b4: 0xc123508  jal         func_48D420
    ctx->pc = 0x4515B4u;
    SET_GPR_U32(ctx, 31, 0x4515BCu);
    ctx->pc = 0x48D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D420u, 0x4515B4u, 0x4515BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4515BCu;
label_4515bc:
    // 0x4515bc: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x4515bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4515c0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x4515c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x4515c4: 0x2833818  mult        $a3, $s4, $v1
    ctx->pc = 0x4515c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4515c8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x4515c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x4515cc: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x4515ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x4515d0: 0x32634004  andi        $v1, $s3, 0x4004
    ctx->pc = 0x4515d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16388);
    // 0x4515d4: 0x32642002  andi        $a0, $s3, 0x2002
    ctx->pc = 0x4515d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8194);
    // 0x4515d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4515d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4515dc: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x4515dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4515e0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x4515e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4515e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4515e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4515e8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4515e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4515ec: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4515ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4515f0: 0x2273021  addu        $a2, $s1, $a3
    ctx->pc = 0x4515f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x4515f4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4515f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x4515f8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x4515f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4515fc: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x4515fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x451600: 0x8cc20140  lw          $v0, 0x140($a2)
    ctx->pc = 0x451600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 320)));
    // 0x451604: 0xae080014  sw          $t0, 0x14($s0)
    ctx->pc = 0x451604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 8));
    // 0x451608: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x451608u;
    {
        const bool branch_taken_0x451608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x45160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451608u;
        // 0x45160c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451608) {
            ctx->pc = 0x451624u;
            goto label_451624;
        }
    }
    ctx->pc = 0x451610u;
    // 0x451610: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x451610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451614: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x451614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x451618: 0x8c440150  lw          $a0, 0x150($v0)
    ctx->pc = 0x451618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x45161c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x45161cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x451620: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x451620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_451624:
    // 0x451624: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x451624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x451628: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x451628u;
    {
        const bool branch_taken_0x451628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451628u;
        // 0x45162c: 0x2271021  addu        $v0, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451628) {
            ctx->pc = 0x45163Cu;
            goto label_45163c;
        }
    }
    ctx->pc = 0x451630u;
    // 0x451630: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x451630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x451634: 0xae08001c  sw          $t0, 0x1C($s0)
    ctx->pc = 0x451634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 8));
    // 0x451638: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x451638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_45163c:
    // 0x45163c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x45163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x451640: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x451640u;
    {
        const bool branch_taken_0x451640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x451644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451640u;
        // 0x451644: 0x2271021  addu        $v0, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451640) {
            ctx->pc = 0x451658u;
            goto label_451658;
        }
    }
    ctx->pc = 0x451648u;
    // 0x451648: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x451648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x45164c: 0x8c44014c  lw          $a0, 0x14C($v0)
    ctx->pc = 0x45164cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x451650: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x451650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x451654: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x451654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
label_451658:
    // 0x451658: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x451658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45165c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x45165cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x451660: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x451660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x451664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x451664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x451668: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x451668u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45166c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x45166cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x451670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x451670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x451674: 0x3e00008  jr          $ra
    ctx->pc = 0x451674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x451678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451674u;
        // 0x451678: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45167Cu;
    // 0x45167c: 0x0  nop
    ctx->pc = 0x45167cu;
    // NOP
    ctx->pc = 0x451680u;
}
