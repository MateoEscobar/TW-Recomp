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

// Function: sub_003F2378
// Address: 0x3f2378 - 0x3f23f8
void sub_003F2378_0x3f2378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2378_0x3f2378");
#endif

    switch (ctx->pc) {
        case 0x3f2378u: goto label_3f2378;
        case 0x3f237cu: goto label_3f237c;
        case 0x3f2380u: goto label_3f2380;
        case 0x3f2384u: goto label_3f2384;
        case 0x3f2388u: goto label_3f2388;
        case 0x3f238cu: goto label_3f238c;
        case 0x3f2390u: goto label_3f2390;
        case 0x3f2394u: goto label_3f2394;
        case 0x3f2398u: goto label_3f2398;
        case 0x3f239cu: goto label_3f239c;
        case 0x3f23a0u: goto label_3f23a0;
        case 0x3f23a4u: goto label_3f23a4;
        case 0x3f23a8u: goto label_3f23a8;
        case 0x3f23acu: goto label_3f23ac;
        case 0x3f23b0u: goto label_3f23b0;
        case 0x3f23b4u: goto label_3f23b4;
        case 0x3f23b8u: goto label_3f23b8;
        case 0x3f23bcu: goto label_3f23bc;
        case 0x3f23c0u: goto label_3f23c0;
        case 0x3f23c4u: goto label_3f23c4;
        case 0x3f23c8u: goto label_3f23c8;
        case 0x3f23ccu: goto label_3f23cc;
        case 0x3f23d0u: goto label_3f23d0;
        case 0x3f23d4u: goto label_3f23d4;
        case 0x3f23d8u: goto label_3f23d8;
        case 0x3f23dcu: goto label_3f23dc;
        case 0x3f23e0u: goto label_3f23e0;
        case 0x3f23e4u: goto label_3f23e4;
        case 0x3f23e8u: goto label_3f23e8;
        case 0x3f23ecu: goto label_3f23ec;
        case 0x3f23f0u: goto label_3f23f0;
        case 0x3f23f4u: goto label_3f23f4;
        default: break;
    }

    ctx->pc = 0x3f2378u;

label_3f2378:
    // 0x3f2378: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f2378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f237c:
    // 0x3f237c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3f2380:
    // 0x3f2380: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f2380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f2384:
    // 0x3f2384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f2384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f2388:
    // 0x3f2388: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f2388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3f238c:
    // 0x3f238c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f238cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f2390:
    // 0x3f2390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f2394:
    // 0x3f2394: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f2394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f2398:
    // 0x3f2398: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f2398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f239c:
    // 0x3f239c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f239cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f23a0:
    // 0x3f23a0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f23a4:
    // 0x3f23a4: 0x40f809  jalr        $v0
label_3f23a8:
    if (ctx->pc == 0x3F23A8u) {
        ctx->pc = 0x3F23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F23A4u;
        // 0x3f23a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F23ACu;
        goto label_3f23ac;
    }
    ctx->pc = 0x3F23A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F23ACu);
        ctx->pc = 0x3F23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F23A4u;
        // 0x3f23a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F23A4u, 0x3F23ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F23ACu;
label_3f23ac:
    // 0x3f23ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3f23acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f23b0:
    // 0x3f23b0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3f23b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3f23b4:
    // 0x3f23b4: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_3f23b8:
    if (ctx->pc == 0x3F23B8u) {
        ctx->pc = 0x3F23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F23B4u;
        // 0x3f23b8: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F23BCu;
        goto label_3f23bc;
    }
    ctx->pc = 0x3F23B4u;
    {
        const bool branch_taken_0x3f23b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F23B4u;
        // 0x3f23b8: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f23b4) {
            ctx->pc = 0x3F23D4u;
            goto label_3f23d4;
        }
    }
    ctx->pc = 0x3F23BCu;
label_3f23bc:
    // 0x3f23bc: 0x56220008  bnel        $s1, $v0, . + 4 + (0x8 << 2)
label_3f23c0:
    if (ctx->pc == 0x3F23C0u) {
        ctx->pc = 0x3F23C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F23BCu;
        // 0x3f23c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F23C4u;
        goto label_3f23c4;
    }
    ctx->pc = 0x3F23BCu;
    {
        const bool branch_taken_0x3f23bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f23bc) {
            ctx->pc = 0x3F23C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F23BCu;
            // 0x3f23c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F23E0u;
            goto label_3f23e0;
        }
    }
    ctx->pc = 0x3F23C4u;
label_3f23c4:
    // 0x3f23c4: 0xc0ea146  jal         func_3A8518
label_3f23c8:
    if (ctx->pc == 0x3F23C8u) {
        ctx->pc = 0x3F23C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F23C4u;
        // 0x3f23c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F23CCu;
        goto label_3f23cc;
    }
    ctx->pc = 0x3F23C4u;
    SET_GPR_U32(ctx, 31, 0x3F23CCu);
    ctx->pc = 0x3F23C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F23C4u;
    // 0x3f23c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F23C4u, 0x3F23CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F23CCu;
label_3f23cc:
    // 0x3f23cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3f23d0:
    if (ctx->pc == 0x3F23D0u) {
        ctx->pc = 0x3F23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F23CCu;
        // 0x3f23d0: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F23D4u;
        goto label_3f23d4;
    }
    ctx->pc = 0x3F23CCu;
    {
        const bool branch_taken_0x3f23cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F23CCu;
        // 0x3f23d0: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f23cc) {
            ctx->pc = 0x3F23DCu;
            goto label_3f23dc;
        }
    }
    ctx->pc = 0x3F23D4u;
label_3f23d4:
    // 0x3f23d4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x3f23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_3f23d8:
    // 0x3f23d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3f23d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3f23dc:
    // 0x3f23dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f23dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f23e0:
    // 0x3f23e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f23e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f23e4:
    // 0x3f23e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3f23e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f23e8:
    // 0x3f23e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f23e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f23ec:
    // 0x3f23ec: 0x3e00008  jr          $ra
label_3f23f0:
    if (ctx->pc == 0x3F23F0u) {
        ctx->pc = 0x3F23F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F23ECu;
        // 0x3f23f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F23F4u;
        goto label_3f23f4;
    }
    ctx->pc = 0x3F23ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F23F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F23ECu;
        // 0x3f23f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F23ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F23F4u;
label_3f23f4:
    // 0x3f23f4: 0x0  nop
    ctx->pc = 0x3f23f4u;
    // NOP
    ctx->pc = 0x3f23f8u;
}
