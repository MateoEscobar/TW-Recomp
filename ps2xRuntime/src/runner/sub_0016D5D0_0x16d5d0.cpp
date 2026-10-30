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

// Function: sub_0016D5D0
// Address: 0x16d5d0 - 0x16d630
void sub_0016D5D0_0x16d5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D5D0_0x16d5d0");
#endif

    switch (ctx->pc) {
        case 0x16d600u: goto label_16d600;
        case 0x16d60cu: goto label_16d60c;
        default: break;
    }

    ctx->pc = 0x16d5d0u;

    // 0x16d5d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d5d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16d5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16d5d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16d5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16d5dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16d5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16d5e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16d5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16d5e4: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16D5E4u;
    {
        const bool branch_taken_0x16d5e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5E4u;
        // 0x16d5e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d5e4) {
            ctx->pc = 0x16D618u;
            goto label_16d618;
        }
    }
    ctx->pc = 0x16D5ECu;
    // 0x16d5ec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x16D5ECu;
    {
        const bool branch_taken_0x16d5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5ECu;
        // 0x16d5f0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d5ec) {
            ctx->pc = 0x16D618u;
            goto label_16d618;
        }
    }
    ctx->pc = 0x16D5F4u;
    // 0x16d5f4: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x16d5f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x16d5f8: 0x24506e30  addiu       $s0, $v0, 0x6E30
    ctx->pc = 0x16d5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28208));
    // 0x16d5fc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x16d5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d600:
    // 0x16d600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d604: 0xc05918c  jal         func_164630
    ctx->pc = 0x16D604u;
    SET_GPR_U32(ctx, 31, 0x16D60Cu);
    ctx->pc = 0x16D608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D604u;
    // 0x16d608: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164630u, 0x16D604u, 0x16D60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D60Cu;
label_16d60c:
    // 0x16d60c: 0x0  nop
    ctx->pc = 0x16d60cu;
    // NOP
    // 0x16d610: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x16D610u;
    {
        const bool branch_taken_0x16d610 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x16D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D610u;
        // 0x16d614: 0x26100b10  addiu       $s0, $s0, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d610) {
            ctx->pc = 0x16D600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d600;
        }
    }
    ctx->pc = 0x16D618u;
label_16d618:
    // 0x16d618: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16d618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d61c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16d61cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d620: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16d620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d628: 0x3e00008  jr          $ra
    ctx->pc = 0x16D628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D628u;
        // 0x16d62c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D630u;
}
