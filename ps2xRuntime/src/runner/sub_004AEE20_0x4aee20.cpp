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

// Function: sub_004AEE20
// Address: 0x4aee20 - 0x4aeec0
void sub_004AEE20_0x4aee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEE20_0x4aee20");
#endif

    ctx->pc = 0x4aee20u;

    // 0x4aee20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4aee24: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4aee24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aee28: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4AEE28u;
    {
        const bool branch_taken_0x4aee28 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEE28u;
        // 0x4aee2c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aee28) {
            ctx->pc = 0x4AEE78u;
            goto label_4aee78;
        }
    }
    ctx->pc = 0x4AEE30u;
    // 0x4aee30: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x4aee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x4aee34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4aee34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4aee38: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4aee38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4aee3c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4aee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4aee40: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x4aee40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x4aee44: 0x24840668  addiu       $a0, $a0, 0x668
    ctx->pc = 0x4aee44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1640));
    // 0x4aee48: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x4aee48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4aee4c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4aee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4aee50: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x4aee50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4aee54: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4aee54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4aee58: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x4aee58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x4aee5c: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x4aee5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x4aee60: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x4aee60u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x4aee64: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x4aee64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x4aee68: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4aee68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x4aee6c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4aee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x4aee70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4aee70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4aee74: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4aee74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_4aee78:
    // 0x4aee78: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4aee78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4aee7c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4aee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4aee80: 0x244404a0  addiu       $a0, $v0, 0x4A0
    ctx->pc = 0x4aee80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1184));
    // 0x4aee84: 0x1500000b  bnez        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x4AEE84u;
    {
        const bool branch_taken_0x4aee84 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEE84u;
        // 0x4aee88: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aee84) {
            ctx->pc = 0x4AEEB4u;
            goto label_4aeeb4;
        }
    }
    ctx->pc = 0x4AEE8Cu;
    // 0x4aee8c: 0xdc4504a0  ld          $a1, 0x4A0($v0)
    ctx->pc = 0x4aee8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 1184)));
    // 0x4aee90: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x4aee90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4aee94: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x4aee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4aee98: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x4aee98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4aee9c: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x4aee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4aeea0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4aeea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4aeea4: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x4aeea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x4aeea8: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x4aeea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x4aeeac: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x4aeeacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4aeeb0: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x4aeeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_4aeeb4:
    // 0x4aeeb4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x4aeeb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aeeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEEB8u;
        // 0x4aeebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEEC0u;
}
