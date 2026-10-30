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

// Function: sub_0046BED8
// Address: 0x46bed8 - 0x46bf60
void sub_0046BED8_0x46bed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BED8_0x46bed8");
#endif

    switch (ctx->pc) {
        case 0x46bf10u: goto label_46bf10;
        case 0x46bf24u: goto label_46bf24;
        default: break;
    }

    ctx->pc = 0x46bed8u;

    // 0x46bed8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46bed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x46bedc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x46bedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x46bee0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46bee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46bee4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x46bee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46bee8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x46bee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x46beec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x46beecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46bef0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x46bef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x46bef4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x46bef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46bef8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x46BEF8u;
    {
        const bool branch_taken_0x46bef8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BEF8u;
        // 0x46befc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bef8) {
            ctx->pc = 0x46BF34u;
            goto label_46bf34;
        }
    }
    ctx->pc = 0x46BF00u;
    // 0x46bf00: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x46bf00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x46bf04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46bf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46bf08: 0xc11b5c2  jal         func_46D708
    ctx->pc = 0x46BF08u;
    SET_GPR_U32(ctx, 31, 0x46BF10u);
    ctx->pc = 0x46BF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BF08u;
    // 0x46bf0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D708u, 0x46BF08u, 0x46BF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BF10u;
label_46bf10:
    // 0x46bf10: 0x443000a  bgezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x46BF10u;
    {
        const bool branch_taken_0x46bf10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x46bf10) {
            ctx->pc = 0x46BF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46BF10u;
            // 0x46bf14: 0xa6420006  sh          $v0, 0x6($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46BF3Cu;
            goto label_46bf3c;
        }
    }
    ctx->pc = 0x46BF18u;
    // 0x46bf18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46bf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46bf1c: 0xc11b448  jal         func_46D120
    ctx->pc = 0x46BF1Cu;
    SET_GPR_U32(ctx, 31, 0x46BF24u);
    ctx->pc = 0x46BF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BF1Cu;
    // 0x46bf20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D120u, 0x46BF1Cu, 0x46BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BF24u;
label_46bf24:
    // 0x46bf24: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x46BF24u;
    {
        const bool branch_taken_0x46bf24 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x46bf24) {
            ctx->pc = 0x46BF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46BF24u;
            // 0x46bf28: 0xa6420006  sh          $v0, 0x6($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46BF3Cu;
            goto label_46bf3c;
        }
    }
    ctx->pc = 0x46BF2Cu;
    // 0x46bf2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x46BF2Cu;
    {
        const bool branch_taken_0x46bf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BF2Cu;
        // 0x46bf30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bf2c) {
            ctx->pc = 0x46BF40u;
            goto label_46bf40;
        }
    }
    ctx->pc = 0x46BF34u;
label_46bf34:
    // 0x46bf34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x46bf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x46bf38: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x46bf38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_46bf3c:
    // 0x46bf3c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x46bf3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46bf40:
    // 0x46bf40: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x46bf40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46bf44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x46bf44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46bf48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46bf48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bf4c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x46bf4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bf50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46bf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46bf54: 0x3e00008  jr          $ra
    ctx->pc = 0x46BF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BF54u;
        // 0x46bf58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BF5Cu;
    // 0x46bf5c: 0x0  nop
    ctx->pc = 0x46bf5cu;
    // NOP
    ctx->pc = 0x46bf60u;
}
