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

// Function: sub_001F23C0
// Address: 0x1f23c0 - 0x1f2468
void sub_001F23C0_0x1f23c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F23C0_0x1f23c0");
#endif

    switch (ctx->pc) {
        case 0x1f23c0u: goto label_1f23c0;
        case 0x1f23c4u: goto label_1f23c4;
        case 0x1f23c8u: goto label_1f23c8;
        case 0x1f23ccu: goto label_1f23cc;
        case 0x1f23d0u: goto label_1f23d0;
        case 0x1f23d4u: goto label_1f23d4;
        case 0x1f23d8u: goto label_1f23d8;
        case 0x1f23dcu: goto label_1f23dc;
        case 0x1f23e0u: goto label_1f23e0;
        case 0x1f23e4u: goto label_1f23e4;
        case 0x1f23e8u: goto label_1f23e8;
        case 0x1f23ecu: goto label_1f23ec;
        case 0x1f23f0u: goto label_1f23f0;
        case 0x1f23f4u: goto label_1f23f4;
        case 0x1f23f8u: goto label_1f23f8;
        case 0x1f23fcu: goto label_1f23fc;
        case 0x1f2400u: goto label_1f2400;
        case 0x1f2404u: goto label_1f2404;
        case 0x1f2408u: goto label_1f2408;
        case 0x1f240cu: goto label_1f240c;
        case 0x1f2410u: goto label_1f2410;
        case 0x1f2414u: goto label_1f2414;
        case 0x1f2418u: goto label_1f2418;
        case 0x1f241cu: goto label_1f241c;
        case 0x1f2420u: goto label_1f2420;
        case 0x1f2424u: goto label_1f2424;
        case 0x1f2428u: goto label_1f2428;
        case 0x1f242cu: goto label_1f242c;
        case 0x1f2430u: goto label_1f2430;
        case 0x1f2434u: goto label_1f2434;
        case 0x1f2438u: goto label_1f2438;
        case 0x1f243cu: goto label_1f243c;
        case 0x1f2440u: goto label_1f2440;
        case 0x1f2444u: goto label_1f2444;
        case 0x1f2448u: goto label_1f2448;
        case 0x1f244cu: goto label_1f244c;
        case 0x1f2450u: goto label_1f2450;
        case 0x1f2454u: goto label_1f2454;
        case 0x1f2458u: goto label_1f2458;
        case 0x1f245cu: goto label_1f245c;
        case 0x1f2460u: goto label_1f2460;
        case 0x1f2464u: goto label_1f2464;
        default: break;
    }

    ctx->pc = 0x1f23c0u;

label_1f23c0:
    // 0x1f23c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f23c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f23c4:
    // 0x1f23c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f23c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f23c8:
    // 0x1f23c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f23c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f23cc:
    // 0x1f23cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f23ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f23d0:
    // 0x1f23d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f23d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1f23d4:
    // 0x1f23d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f23d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f23d8:
    // 0x1f23d8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1f23d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1f23dc:
    // 0x1f23dc: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_1f23e0:
    if (ctx->pc == 0x1F23E0u) {
        ctx->pc = 0x1F23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23DCu;
        // 0x1f23e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F23E4u;
        goto label_1f23e4;
    }
    ctx->pc = 0x1F23DCu;
    {
        const bool branch_taken_0x1f23dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f23dc) {
            ctx->pc = 0x1F23E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F23DCu;
            // 0x1f23e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2450u;
            goto label_1f2450;
        }
    }
    ctx->pc = 0x1F23E4u;
label_1f23e4:
    // 0x1f23e4: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x1f23e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1f23e8:
    // 0x1f23e8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1f23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f23ec:
    // 0x1f23ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f23f0:
    if (ctx->pc == 0x1F23F0u) {
        ctx->pc = 0x1F23F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23ECu;
        // 0x1f23f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F23F4u;
        goto label_1f23f4;
    }
    ctx->pc = 0x1F23ECu;
    {
        const bool branch_taken_0x1f23ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F23F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23ECu;
        // 0x1f23f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f23ec) {
            ctx->pc = 0x1F241Cu;
            goto label_1f241c;
        }
    }
    ctx->pc = 0x1F23F4u;
label_1f23f4:
    // 0x1f23f4: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1f23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1f23f8:
    // 0x1f23f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f23f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f23fc:
    // 0x1f23fc: 0xc06a3aa  jal         func_1A8EA8
label_1f2400:
    if (ctx->pc == 0x1F2400u) {
        ctx->pc = 0x1F2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23FCu;
        // 0x1f2400: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2404u;
        goto label_1f2404;
    }
    ctx->pc = 0x1F23FCu;
    SET_GPR_U32(ctx, 31, 0x1F2404u);
    ctx->pc = 0x1F2400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F23FCu;
    // 0x1f2400: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1F23FCu, 0x1F2404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2404u;
label_1f2404:
    // 0x1f2404: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f2408:
    if (ctx->pc == 0x1F2408u) {
        ctx->pc = 0x1F2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2404u;
        // 0x1f2408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F240Cu;
        goto label_1f240c;
    }
    ctx->pc = 0x1F2404u;
    {
        const bool branch_taken_0x1f2404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2404u;
        // 0x1f2408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2404) {
            ctx->pc = 0x1F241Cu;
            goto label_1f241c;
        }
    }
    ctx->pc = 0x1F240Cu;
label_1f240c:
    // 0x1f240c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1f240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1f2410:
    // 0x1f2410: 0xc06a3aa  jal         func_1A8EA8
label_1f2414:
    if (ctx->pc == 0x1F2414u) {
        ctx->pc = 0x1F2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2410u;
        // 0x1f2414: 0x8c4500c4  lw          $a1, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2418u;
        goto label_1f2418;
    }
    ctx->pc = 0x1F2410u;
    SET_GPR_U32(ctx, 31, 0x1F2418u);
    ctx->pc = 0x1F2414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2410u;
    // 0x1f2414: 0x8c4500c4  lw          $a1, 0xC4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1F2410u, 0x1F2418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2418u;
label_1f2418:
    // 0x1f2418: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1f2418u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f241c:
    // 0x1f241c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_1f2420:
    if (ctx->pc == 0x1F2420u) {
        ctx->pc = 0x1F2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F241Cu;
        // 0x1f2420: 0xae120020  sw          $s2, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2424u;
        goto label_1f2424;
    }
    ctx->pc = 0x1F241Cu;
    {
        const bool branch_taken_0x1f241c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F241Cu;
        // 0x1f2420: 0xae120020  sw          $s2, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f241c) {
            ctx->pc = 0x1F2448u;
            goto label_1f2448;
        }
    }
    ctx->pc = 0x1F2424u;
label_1f2424:
    // 0x1f2424: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f2424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f2428:
    // 0x1f2428: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1f2428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1f242c:
    // 0x1f242c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f2430:
    // 0x1f2430: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1f2430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1f2434:
    // 0x1f2434: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1f2434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1f2438:
    // 0x1f2438: 0x40f809  jalr        $v0
label_1f243c:
    if (ctx->pc == 0x1F243Cu) {
        ctx->pc = 0x1F243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2438u;
        // 0x1f243c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2440u;
        goto label_1f2440;
    }
    ctx->pc = 0x1F2438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2440u);
        ctx->pc = 0x1F243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2438u;
        // 0x1f243c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2438u, 0x1F2440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2440u;
label_1f2440:
    // 0x1f2440: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x1f2440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_1f2444:
    // 0x1f2444: 0xa20000a8  sb          $zero, 0xA8($s0)
    ctx->pc = 0x1f2444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 0));
label_1f2448:
    // 0x1f2448: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1f2448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1f244c:
    // 0x1f244c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f244cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2450:
    // 0x1f2450: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f2450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2454:
    // 0x1f2454: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f2454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2458:
    // 0x1f2458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f245c:
    // 0x1f245c: 0x3e00008  jr          $ra
label_1f2460:
    if (ctx->pc == 0x1F2460u) {
        ctx->pc = 0x1F2460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F245Cu;
        // 0x1f2460: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2464u;
        goto label_1f2464;
    }
    ctx->pc = 0x1F245Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F245Cu;
        // 0x1f2460: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F245Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2464u;
label_1f2464:
    // 0x1f2464: 0x0  nop
    ctx->pc = 0x1f2464u;
    // NOP
    ctx->pc = 0x1f2468u;
}
