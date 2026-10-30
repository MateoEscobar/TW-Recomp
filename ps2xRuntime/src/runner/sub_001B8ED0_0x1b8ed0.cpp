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

// Function: sub_001B8ED0
// Address: 0x1b8ed0 - 0x1b8f50
void sub_001B8ED0_0x1b8ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8ED0_0x1b8ed0");
#endif

    switch (ctx->pc) {
        case 0x1b8ed0u: goto label_1b8ed0;
        case 0x1b8ed4u: goto label_1b8ed4;
        case 0x1b8ed8u: goto label_1b8ed8;
        case 0x1b8edcu: goto label_1b8edc;
        case 0x1b8ee0u: goto label_1b8ee0;
        case 0x1b8ee4u: goto label_1b8ee4;
        case 0x1b8ee8u: goto label_1b8ee8;
        case 0x1b8eecu: goto label_1b8eec;
        case 0x1b8ef0u: goto label_1b8ef0;
        case 0x1b8ef4u: goto label_1b8ef4;
        case 0x1b8ef8u: goto label_1b8ef8;
        case 0x1b8efcu: goto label_1b8efc;
        case 0x1b8f00u: goto label_1b8f00;
        case 0x1b8f04u: goto label_1b8f04;
        case 0x1b8f08u: goto label_1b8f08;
        case 0x1b8f0cu: goto label_1b8f0c;
        case 0x1b8f10u: goto label_1b8f10;
        case 0x1b8f14u: goto label_1b8f14;
        case 0x1b8f18u: goto label_1b8f18;
        case 0x1b8f1cu: goto label_1b8f1c;
        case 0x1b8f20u: goto label_1b8f20;
        case 0x1b8f24u: goto label_1b8f24;
        case 0x1b8f28u: goto label_1b8f28;
        case 0x1b8f2cu: goto label_1b8f2c;
        case 0x1b8f30u: goto label_1b8f30;
        case 0x1b8f34u: goto label_1b8f34;
        case 0x1b8f38u: goto label_1b8f38;
        case 0x1b8f3cu: goto label_1b8f3c;
        case 0x1b8f40u: goto label_1b8f40;
        case 0x1b8f44u: goto label_1b8f44;
        case 0x1b8f48u: goto label_1b8f48;
        case 0x1b8f4cu: goto label_1b8f4c;
        default: break;
    }

    ctx->pc = 0x1b8ed0u;

label_1b8ed0:
    // 0x1b8ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b8ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b8ed4:
    // 0x1b8ed4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b8ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1b8ed8:
    // 0x1b8ed8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b8ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b8edc:
    // 0x1b8edc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b8edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1b8ee0:
    // 0x1b8ee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b8ee4:
    // 0x1b8ee4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1b8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1b8ee8:
    // 0x1b8ee8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1b8eec:
    if (ctx->pc == 0x1B8EECu) {
        ctx->pc = 0x1B8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EE8u;
        // 0x1b8eec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EF0u;
        goto label_1b8ef0;
    }
    ctx->pc = 0x1B8EE8u;
    {
        const bool branch_taken_0x1b8ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EE8u;
        // 0x1b8eec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ee8) {
            ctx->pc = 0x1B8F34u;
            goto label_1b8f34;
        }
    }
    ctx->pc = 0x1B8EF0u;
label_1b8ef0:
    // 0x1b8ef0: 0x8c830468  lw          $v1, 0x468($a0)
    ctx->pc = 0x1b8ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1128)));
label_1b8ef4:
    // 0x1b8ef4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1b8ef8:
    if (ctx->pc == 0x1B8EF8u) {
        ctx->pc = 0x1B8EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EF4u;
        // 0x1b8ef8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EFCu;
        goto label_1b8efc;
    }
    ctx->pc = 0x1B8EF4u;
    {
        const bool branch_taken_0x1b8ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B8EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EF4u;
        // 0x1b8ef8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ef4) {
            ctx->pc = 0x1B8F38u;
            goto label_1b8f38;
        }
    }
    ctx->pc = 0x1B8EFCu;
label_1b8efc:
    // 0x1b8efc: 0x8c820478  lw          $v0, 0x478($a0)
    ctx->pc = 0x1b8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1144)));
label_1b8f00:
    // 0x1b8f00: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b8f04:
    if (ctx->pc == 0x1B8F04u) {
        ctx->pc = 0x1B8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F00u;
        // 0x1b8f04: 0x24900040  addiu       $s0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F08u;
        goto label_1b8f08;
    }
    ctx->pc = 0x1B8F00u;
    {
        const bool branch_taken_0x1b8f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F00u;
        // 0x1b8f04: 0x24900040  addiu       $s0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f00) {
            ctx->pc = 0x1B8F34u;
            goto label_1b8f34;
        }
    }
    ctx->pc = 0x1B8F08u;
label_1b8f08:
    // 0x1b8f08: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1b8f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8f0c:
    // 0x1b8f0c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1b8f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8f10:
    // 0x1b8f10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8f14:
    // 0x1b8f14: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b8f14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1b8f18:
    // 0x1b8f18: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1b8f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1b8f1c:
    // 0x1b8f1c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1b8f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1b8f20:
    // 0x1b8f20: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1b8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1b8f24:
    // 0x1b8f24: 0x60f809  jalr        $v1
label_1b8f28:
    if (ctx->pc == 0x1B8F28u) {
        ctx->pc = 0x1B8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F24u;
        // 0x1b8f28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F2Cu;
        goto label_1b8f2c;
    }
    ctx->pc = 0x1B8F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8F2Cu);
        ctx->pc = 0x1B8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F24u;
        // 0x1b8f28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8F24u, 0x1B8F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8F2Cu;
label_1b8f2c:
    // 0x1b8f2c: 0x641fff8  bgez        $s2, . + 4 + (-0x8 << 2)
label_1b8f30:
    if (ctx->pc == 0x1B8F30u) {
        ctx->pc = 0x1B8F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F2Cu;
        // 0x1b8f30: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F34u;
        goto label_1b8f34;
    }
    ctx->pc = 0x1B8F2Cu;
    {
        const bool branch_taken_0x1b8f2c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B8F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F2Cu;
        // 0x1b8f30: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f2c) {
            ctx->pc = 0x1B8F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8f10;
        }
    }
    ctx->pc = 0x1B8F34u;
label_1b8f34:
    // 0x1b8f34: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b8f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b8f38:
    // 0x1b8f38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b8f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8f3c:
    // 0x1b8f3c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b8f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8f40:
    // 0x1b8f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8f44:
    // 0x1b8f44: 0x3e00008  jr          $ra
label_1b8f48:
    if (ctx->pc == 0x1B8F48u) {
        ctx->pc = 0x1B8F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F44u;
        // 0x1b8f48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F4Cu;
        goto label_1b8f4c;
    }
    ctx->pc = 0x1B8F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F44u;
        // 0x1b8f48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8F4Cu;
label_1b8f4c:
    // 0x1b8f4c: 0x0  nop
    ctx->pc = 0x1b8f4cu;
    // NOP
    ctx->pc = 0x1b8f50u;
}
