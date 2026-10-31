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

// Function: sub_004ABBA0
// Address: 0x4abba0 - 0x4abc88
void sub_004ABBA0_0x4abba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ABBA0_0x4abba0");
#endif

    ctx->pc = 0x4abba0u;

    // 0x4abba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4abba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4abba4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4abba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abba8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x4abba8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abbac: 0x11200013  beqz        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4ABBACu;
    {
        const bool branch_taken_0x4abbac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABBACu;
        // 0x4abbb0: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abbac) {
            ctx->pc = 0x4ABBFCu;
            goto label_4abbfc;
        }
    }
    ctx->pc = 0x4ABBB4u;
    // 0x4abbb4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x4abbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x4abbb8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4abbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4abbbc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4abbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4abbc0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4abbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4abbc4: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x4abbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x4abbc8: 0x24840668  addiu       $a0, $a0, 0x668
    ctx->pc = 0x4abbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1640));
    // 0x4abbcc: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x4abbccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4abbd0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4abbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4abbd4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x4abbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4abbd8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4abbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4abbdc: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x4abbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x4abbe0: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x4abbe0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x4abbe4: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x4abbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x4abbe8: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x4abbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x4abbec: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4abbecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x4abbf0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x4abbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x4abbf4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4abbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4abbf8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4abbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_4abbfc:
    // 0x4abbfc: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4abbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4abc00: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4abc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4abc04: 0x24440490  addiu       $a0, $v0, 0x490
    ctx->pc = 0x4abc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1168));
    // 0x4abc08: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x4ABC08u;
    {
        const bool branch_taken_0x4abc08 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ABC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC08u;
        // 0x4abc0c: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abc08) {
            ctx->pc = 0x4ABC38u;
            goto label_4abc38;
        }
    }
    ctx->pc = 0x4ABC10u;
    // 0x4abc10: 0xdc450490  ld          $a1, 0x490($v0)
    ctx->pc = 0x4abc10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 1168)));
    // 0x4abc14: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x4abc14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4abc18: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x4abc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4abc1c: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x4abc1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4abc20: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x4abc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4abc24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4abc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4abc28: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x4abc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x4abc2c: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x4abc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x4abc30: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x4abc30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4abc34: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x4abc34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_4abc38:
    // 0x4abc38: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4ABC38u;
    {
        const bool branch_taken_0x4abc38 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x4abc38) {
            ctx->pc = 0x4ABC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABC38u;
            // 0x4abc3c: 0xa0c0001a  sb          $zero, 0x1A($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABC48u;
            goto label_4abc48;
        }
    }
    ctx->pc = 0x4ABC40u;
    // 0x4abc40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4abc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4abc44: 0xa0c2001a  sb          $v0, 0x1A($a2)
    ctx->pc = 0x4abc44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
label_4abc48:
    // 0x4abc48: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4abc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4abc4c: 0xa0c0001b  sb          $zero, 0x1B($a2)
    ctx->pc = 0x4abc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4abc50: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x4abc50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x4abc54: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4abc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4abc58: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x4abc58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x4abc5c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4abc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4abc60: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4abc60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x4abc64: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x4abc64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abc68: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x4abc68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x4abc6c: 0xa4c40018  sh          $a0, 0x18($a2)
    ctx->pc = 0x4abc6cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x4abc70: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x4abc70u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x4abc74: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x4abc74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x4abc78: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x4abc78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x4abc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC7Cu;
        // 0x4abc80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABC84u;
    // 0x4abc84: 0x0  nop
    ctx->pc = 0x4abc84u;
    // NOP
    ctx->pc = 0x4abc88u;
}
