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

// Function: sub_00339448
// Address: 0x339448 - 0x339518
void sub_00339448_0x339448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339448_0x339448");
#endif

    switch (ctx->pc) {
        case 0x3394b0u: goto label_3394b0;
        case 0x3394f8u: goto label_3394f8;
        default: break;
    }

    ctx->pc = 0x339448u;

label_339448:
    // 0x339448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33944c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x339450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x339454: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x339454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33945c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x33945cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x339460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339464: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x339464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x339468: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x339468u;
    {
        const bool branch_taken_0x339468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339468u;
        // 0x33946c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339468) {
            ctx->pc = 0x339500u;
            goto label_339500;
        }
    }
    ctx->pc = 0x339470u;
    // 0x339470: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x339470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x339474: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x339474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x339478: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x339478u;
    {
        const bool branch_taken_0x339478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339478) {
            ctx->pc = 0x33947Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339478u;
            // 0x33947c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3394C8u;
            goto label_3394c8;
        }
    }
    ctx->pc = 0x339480u;
    // 0x339480: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x339480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x339484: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x339484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x339488: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x339488u;
    {
        const bool branch_taken_0x339488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339488) {
            ctx->pc = 0x33948Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339488u;
            // 0x33948c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3394C8u;
            goto label_3394c8;
        }
    }
    ctx->pc = 0x339490u;
    // 0x339490: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x339490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x339494: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x339494u;
    {
        const bool branch_taken_0x339494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339494u;
        // 0x339498: 0x2462000c  addiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339494) {
            ctx->pc = 0x3394B4u;
            goto label_3394b4;
        }
    }
    ctx->pc = 0x33949Cu;
    // 0x33949c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x33949cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3394a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3394a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3394a4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3394a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3394a8: 0xc0ce512  jal         func_339448
    ctx->pc = 0x3394A8u;
    SET_GPR_U32(ctx, 31, 0x3394B0u);
    ctx->pc = 0x3394ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394A8u;
    // 0x3394ac: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339448u;
    goto label_339448;
    ctx->pc = 0x3394B0u;
label_3394b0:
    // 0x3394b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3394b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3394b4:
    // 0x3394b4: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3394B4u;
    {
        const bool branch_taken_0x3394b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3394B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394B4u;
        // 0x3394b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3394b4) {
            ctx->pc = 0x339500u;
            goto label_339500;
        }
    }
    ctx->pc = 0x3394BCu;
    // 0x3394bc: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3394bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x3394c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3394C0u;
    {
        const bool branch_taken_0x3394c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3394C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394C0u;
        // 0x3394c4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3394c0) {
            ctx->pc = 0x3394FCu;
            goto label_3394fc;
        }
    }
    ctx->pc = 0x3394C8u;
label_3394c8:
    // 0x3394c8: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x3394c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3394cc: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x3394ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3394d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3394D0u;
    {
        const bool branch_taken_0x3394d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3394d0) {
            ctx->pc = 0x3394D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3394D0u;
            // 0x3394d4: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3394E0u;
            goto label_3394e0;
        }
    }
    ctx->pc = 0x3394D8u;
    // 0x3394d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3394D8u;
    {
        const bool branch_taken_0x3394d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3394DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394D8u;
        // 0x3394dc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3394d8) {
            ctx->pc = 0x3394F0u;
            goto label_3394f0;
        }
    }
    ctx->pc = 0x3394E0u;
label_3394e0:
    // 0x3394e0: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x3394e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3394e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3394E4u;
    {
        const bool branch_taken_0x3394e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3394E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394E4u;
        // 0x3394e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3394e4) {
            ctx->pc = 0x339500u;
            goto label_339500;
        }
    }
    ctx->pc = 0x3394ECu;
    // 0x3394ec: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x3394ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
label_3394f0:
    // 0x3394f0: 0xc0ce512  jal         func_339448
    ctx->pc = 0x3394F0u;
    SET_GPR_U32(ctx, 31, 0x3394F8u);
    ctx->pc = 0x3394F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394F0u;
    // 0x3394f4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339448u;
    goto label_339448;
    ctx->pc = 0x3394F8u;
label_3394f8:
    // 0x3394f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3394f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3394fc:
    // 0x3394fc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3394fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_339500:
    // 0x339500: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x339500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33950c: 0x3e00008  jr          $ra
    ctx->pc = 0x33950Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33950Cu;
        // 0x339510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33950Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339514u;
    // 0x339514: 0x0  nop
    ctx->pc = 0x339514u;
    // NOP
    ctx->pc = 0x339518u;
}
