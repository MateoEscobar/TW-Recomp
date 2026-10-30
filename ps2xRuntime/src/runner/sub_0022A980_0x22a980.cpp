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

// Function: sub_0022A980
// Address: 0x22a980 - 0x22aa78
void sub_0022A980_0x22a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A980_0x22a980");
#endif

    switch (ctx->pc) {
        case 0x22a9e0u: goto label_22a9e0;
        case 0x22aa0cu: goto label_22aa0c;
        case 0x22aa48u: goto label_22aa48;
        default: break;
    }

    ctx->pc = 0x22a980u;

    // 0x22a980: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22a980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22a984: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x22a984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x22a988: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22a988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22a98c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x22a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x22a990: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x22a990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x22a994: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22a994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a998: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x22a998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x22a99c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22a99cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9a0: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x22a9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x22a9a4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x22a9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x22a9a8: 0x949021  addu        $s2, $a0, $s4
    ctx->pc = 0x22a9a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x22a9ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x22a9acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9b0: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x22a9b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22a9b4: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x22a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x22a9b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x22a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x22a9bc: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x22a9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x22a9c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a9c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22a9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x22a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x22a9cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x22a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22a9d0: 0x84510042  lh          $s1, 0x42($v0)
    ctx->pc = 0x22a9d0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
    // 0x22a9d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22a9d8: 0xa4510044  sh          $s1, 0x44($v0)
    ctx->pc = 0x22a9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 17));
    // 0x22a9dc: 0x0  nop
    ctx->pc = 0x22a9dcu;
    // NOP
label_22a9e0:
    // 0x22a9e0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x22a9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x22a9e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22a9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22a9e8: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x22a9e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x22a9ec: 0x0  nop
    ctx->pc = 0x22a9ecu;
    // NOP
    // 0x22a9f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x22A9F0u;
    {
        const bool branch_taken_0x22a9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A9F0u;
        // 0x22a9f4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a9f0) {
            ctx->pc = 0x22A9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a9e0;
        }
    }
    ctx->pc = 0x22A9F8u;
    // 0x22a9f8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x22a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x22a9fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22a9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa00: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x22aa00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22aa04: 0xc06ba36  jal         func_1AE8D8
    ctx->pc = 0x22AA04u;
    SET_GPR_U32(ctx, 31, 0x22AA0Cu);
    ctx->pc = 0x22AA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA04u;
    // 0x22aa08: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x22AA04u, 0x22AA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA0Cu;
label_22aa0c:
    // 0x22aa0c: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x22aa0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x22aa10: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x22aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x22aa14: 0x26a9d810  addiu       $t1, $s5, -0x27F0
    ctx->pc = 0x22aa14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957072));
    // 0x22aa18: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x22aa18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22aa1c: 0x26105560  addiu       $s0, $s0, 0x5560
    ctx->pc = 0x22aa1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21856));
    // 0x22aa20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22aa24: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x22aa24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22aa28: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x22aa28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x22aa2c: 0x328700ff  andi        $a3, $s4, 0xFF
    ctx->pc = 0x22aa2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x22aa30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22aa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa34: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x22aa34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x22aa38: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22aa3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22aa3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa40: 0xc055d62  jal         func_157588
    ctx->pc = 0x22AA40u;
    SET_GPR_U32(ctx, 31, 0x22AA48u);
    ctx->pc = 0x22AA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA40u;
    // 0x22aa44: 0xa4430042  sh          $v1, 0x42($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157588u, 0x22AA40u, 0x22AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA48u;
label_22aa48:
    // 0x22aa48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22aa4c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x22aa4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22aa50: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x22aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x22aa54: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x22aa54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22aa58: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x22aa58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22aa5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22aa5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22aa60: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x22aa60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22aa64: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x22aa64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22aa68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22aa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22aa6c: 0x3e00008  jr          $ra
    ctx->pc = 0x22AA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA6Cu;
        // 0x22aa70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AA74u;
    // 0x22aa74: 0x0  nop
    ctx->pc = 0x22aa74u;
    // NOP
    ctx->pc = 0x22aa78u;
}
