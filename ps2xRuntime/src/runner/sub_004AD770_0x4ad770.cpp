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

// Function: sub_004AD770
// Address: 0x4ad770 - 0x4ad850
void sub_004AD770_0x4ad770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD770_0x4ad770");
#endif

    ctx->pc = 0x4ad770u;

    // 0x4ad770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad774: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4ad774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad778: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x4ad778u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad77c: 0x11200013  beqz        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4AD77Cu;
    {
        const bool branch_taken_0x4ad77c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD77Cu;
        // 0x4ad780: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad77c) {
            ctx->pc = 0x4AD7CCu;
            goto label_4ad7cc;
        }
    }
    ctx->pc = 0x4AD784u;
    // 0x4ad784: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x4ad784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x4ad788: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ad788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ad78c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4ad78cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4ad790: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4ad790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4ad794: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x4ad794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x4ad798: 0x24840668  addiu       $a0, $a0, 0x668
    ctx->pc = 0x4ad798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1640));
    // 0x4ad79c: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x4ad79cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4ad7a0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4ad7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4ad7a4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x4ad7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4ad7a8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4ad7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4ad7ac: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x4ad7acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x4ad7b0: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x4ad7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ad7b4: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x4ad7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x4ad7b8: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x4ad7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x4ad7bc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4ad7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x4ad7c0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x4ad7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x4ad7c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4ad7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4ad7c8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4ad7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_4ad7cc:
    // 0x4ad7cc: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4ad7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ad7d0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4ad7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4ad7d4: 0x244404a0  addiu       $a0, $v0, 0x4A0
    ctx->pc = 0x4ad7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1184));
    // 0x4ad7d8: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x4AD7D8u;
    {
        const bool branch_taken_0x4ad7d8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD7D8u;
        // 0x4ad7dc: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad7d8) {
            ctx->pc = 0x4AD808u;
            goto label_4ad808;
        }
    }
    ctx->pc = 0x4AD7E0u;
    // 0x4ad7e0: 0xdc4504a0  ld          $a1, 0x4A0($v0)
    ctx->pc = 0x4ad7e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 1184)));
    // 0x4ad7e4: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x4ad7e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4ad7e8: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x4ad7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4ad7ec: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x4ad7ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4ad7f0: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x4ad7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4ad7f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ad7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ad7f8: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x4ad7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x4ad7fc: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x4ad7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x4ad800: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x4ad800u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ad804: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x4ad804u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_4ad808:
    // 0x4ad808: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD808u;
    {
        const bool branch_taken_0x4ad808 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ad808) {
            ctx->pc = 0x4AD80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD808u;
            // 0x4ad80c: 0xa0c0001a  sb          $zero, 0x1A($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD818u;
            goto label_4ad818;
        }
    }
    ctx->pc = 0x4AD810u;
    // 0x4ad810: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4ad810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ad814: 0xa0c2001a  sb          $v0, 0x1A($a2)
    ctx->pc = 0x4ad814u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
label_4ad818:
    // 0x4ad818: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4ad818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4ad81c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x4ad81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4ad820: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4ad820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4ad824: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4ad824u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x4ad828: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x4ad828u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x4ad82c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x4ad82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad830: 0xa4c30018  sh          $v1, 0x18($a2)
    ctx->pc = 0x4ad830u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ad834: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x4ad834u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x4ad838: 0xacc5001c  sw          $a1, 0x1C($a2)
    ctx->pc = 0x4ad838u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
    // 0x4ad83c: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x4ad83cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x4ad840: 0xa0c0001b  sb          $zero, 0x1B($a2)
    ctx->pc = 0x4ad840u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4ad844: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x4ad844u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x4ad848: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD848u;
        // 0x4ad84c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD850u;
}
