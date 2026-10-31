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

// Function: sub_004EDD50
// Address: 0x4edd50 - 0x4ede08
void sub_004EDD50_0x4edd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EDD50_0x4edd50");
#endif

    switch (ctx->pc) {
        case 0x4edd68u: goto label_4edd68;
        case 0x4edd70u: goto label_4edd70;
        case 0x4edd98u: goto label_4edd98;
        case 0x4eddc8u: goto label_4eddc8;
        default: break;
    }

    ctx->pc = 0x4edd50u;

    // 0x4edd50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4edd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4edd54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4edd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4edd58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4edd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4edd5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4edd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4edd60: 0xc0a2292  jal         func_288A48
    ctx->pc = 0x4EDD60u;
    SET_GPR_U32(ctx, 31, 0x4EDD68u);
    ctx->pc = 0x4EDD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDD60u;
    // 0x4edd64: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288A48u, 0x4EDD60u, 0x4EDD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDD68u;
label_4edd68:
    // 0x4edd68: 0xc0a68d6  jal         func_29A358
    ctx->pc = 0x4EDD68u;
    SET_GPR_U32(ctx, 31, 0x4EDD70u);
    ctx->pc = 0x4EDD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDD68u;
    // 0x4edd6c: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A358u, 0x4EDD68u, 0x4EDD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDD70u;
label_4edd70:
    // 0x4edd70: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4edd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4edd74: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4edd74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4edd78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4edd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4edd7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4edd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4edd80: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x4edd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x4edd84: 0x26030164  addiu       $v1, $s0, 0x164
    ctx->pc = 0x4edd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x4edd88: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x4edd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x4edd8c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4edd8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4edd90: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4edd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4edd94: 0x0  nop
    ctx->pc = 0x4edd94u;
    // NOP
label_4edd98:
    // 0x4edd98: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4edd98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x4edd9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4edd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4edda0: 0x0  nop
    ctx->pc = 0x4edda0u;
    // NOP
    // 0x4edda4: 0x0  nop
    ctx->pc = 0x4edda4u;
    // NOP
    // 0x4edda8: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4EDDA8u;
    {
        const bool branch_taken_0x4edda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4EDDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDDA8u;
        // 0x4eddac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edda8) {
            ctx->pc = 0x4EDD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4edd98;
        }
    }
    ctx->pc = 0x4EDDB0u;
    // 0x4eddb0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4eddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4eddb4: 0x260201a4  addiu       $v0, $s0, 0x1A4
    ctx->pc = 0x4eddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
    // 0x4eddb8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x4eddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4eddbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eddbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eddc0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4eddc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4eddc4: 0x0  nop
    ctx->pc = 0x4eddc4u;
    // NOP
label_4eddc8:
    // 0x4eddc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4eddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4eddcc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4eddccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4eddd0: 0x0  nop
    ctx->pc = 0x4eddd0u;
    // NOP
    // 0x4eddd4: 0x0  nop
    ctx->pc = 0x4eddd4u;
    // NOP
    // 0x4eddd8: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4EDDD8u;
    {
        const bool branch_taken_0x4eddd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x4EDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDDD8u;
        // 0x4edddc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eddd8) {
            ctx->pc = 0x4EDDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4eddc8;
        }
    }
    ctx->pc = 0x4EDDE0u;
    // 0x4edde0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4edde0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4edde4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4edde4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4edde8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4edde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eddec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eddecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eddf0: 0xae030294  sw          $v1, 0x294($s0)
    ctx->pc = 0x4eddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 3));
    // 0x4eddf4: 0xae030260  sw          $v1, 0x260($s0)
    ctx->pc = 0x4eddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 3));
    // 0x4eddf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4eddf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eddfc: 0x3e00008  jr          $ra
    ctx->pc = 0x4EDDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EDE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDDFCu;
        // 0x4ede00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EDDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EDE04u;
    // 0x4ede04: 0x0  nop
    ctx->pc = 0x4ede04u;
    // NOP
    ctx->pc = 0x4ede08u;
}
