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

// Function: sub_004A8E88
// Address: 0x4a8e88 - 0x4a8f28
void sub_004A8E88_0x4a8e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8E88_0x4a8e88");
#endif

    switch (ctx->pc) {
        case 0x4a8e88u: goto label_4a8e88;
        case 0x4a8e8cu: goto label_4a8e8c;
        case 0x4a8e90u: goto label_4a8e90;
        case 0x4a8e94u: goto label_4a8e94;
        case 0x4a8e98u: goto label_4a8e98;
        case 0x4a8e9cu: goto label_4a8e9c;
        case 0x4a8ea0u: goto label_4a8ea0;
        case 0x4a8ea4u: goto label_4a8ea4;
        case 0x4a8ea8u: goto label_4a8ea8;
        case 0x4a8eacu: goto label_4a8eac;
        case 0x4a8eb0u: goto label_4a8eb0;
        case 0x4a8eb4u: goto label_4a8eb4;
        case 0x4a8eb8u: goto label_4a8eb8;
        case 0x4a8ebcu: goto label_4a8ebc;
        case 0x4a8ec0u: goto label_4a8ec0;
        case 0x4a8ec4u: goto label_4a8ec4;
        case 0x4a8ec8u: goto label_4a8ec8;
        case 0x4a8eccu: goto label_4a8ecc;
        case 0x4a8ed0u: goto label_4a8ed0;
        case 0x4a8ed4u: goto label_4a8ed4;
        case 0x4a8ed8u: goto label_4a8ed8;
        case 0x4a8edcu: goto label_4a8edc;
        case 0x4a8ee0u: goto label_4a8ee0;
        case 0x4a8ee4u: goto label_4a8ee4;
        case 0x4a8ee8u: goto label_4a8ee8;
        case 0x4a8eecu: goto label_4a8eec;
        case 0x4a8ef0u: goto label_4a8ef0;
        case 0x4a8ef4u: goto label_4a8ef4;
        case 0x4a8ef8u: goto label_4a8ef8;
        case 0x4a8efcu: goto label_4a8efc;
        case 0x4a8f00u: goto label_4a8f00;
        case 0x4a8f04u: goto label_4a8f04;
        case 0x4a8f08u: goto label_4a8f08;
        case 0x4a8f0cu: goto label_4a8f0c;
        case 0x4a8f10u: goto label_4a8f10;
        case 0x4a8f14u: goto label_4a8f14;
        case 0x4a8f18u: goto label_4a8f18;
        case 0x4a8f1cu: goto label_4a8f1c;
        case 0x4a8f20u: goto label_4a8f20;
        case 0x4a8f24u: goto label_4a8f24;
        default: break;
    }

    ctx->pc = 0x4a8e88u;

label_4a8e88:
    // 0x4a8e88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a8e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a8e8c:
    // 0x4a8e8c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a8e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4a8e90:
    // 0x4a8e90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a8e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4a8e94:
    // 0x4a8e94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a8e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a8e98:
    // 0x4a8e98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a8e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a8e9c:
    // 0x4a8e9c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a8e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4a8ea0:
    // 0x4a8ea0: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_4a8ea4:
    if (ctx->pc == 0x4A8EA4u) {
        ctx->pc = 0x4A8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8EA0u;
        // 0x4a8ea4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8EA8u;
        goto label_4a8ea8;
    }
    ctx->pc = 0x4A8EA0u;
    {
        const bool branch_taken_0x4a8ea0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8EA0u;
        // 0x4a8ea4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8ea0) {
            ctx->pc = 0x4A8F08u;
            goto label_4a8f08;
        }
    }
    ctx->pc = 0x4A8EA8u;
label_4a8ea8:
    // 0x4a8ea8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x4a8ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4a8eac:
    // 0x4a8eac: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4a8eb0:
    if (ctx->pc == 0x4A8EB0u) {
        ctx->pc = 0x4A8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8EACu;
        // 0x4a8eb0: 0x3c130071  lui         $s3, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8EB4u;
        goto label_4a8eb4;
    }
    ctx->pc = 0x4A8EACu;
    {
        const bool branch_taken_0x4a8eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8EACu;
        // 0x4a8eb0: 0x3c130071  lui         $s3, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8eac) {
            ctx->pc = 0x4A8EC8u;
            goto label_4a8ec8;
        }
    }
    ctx->pc = 0x4A8EB4u;
label_4a8eb4:
    // 0x4a8eb4: 0x2662ad18  addiu       $v0, $s3, -0x52E8
    ctx->pc = 0x4a8eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_4a8eb8:
    // 0x4a8eb8: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x4a8eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_4a8ebc:
    // 0x4a8ebc: 0x60f809  jalr        $v1
label_4a8ec0:
    if (ctx->pc == 0x4A8EC0u) {
        ctx->pc = 0x4A8EC4u;
        goto label_4a8ec4;
    }
    ctx->pc = 0x4A8EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4A8EC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8EBCu, 0x4A8EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8EC4u;
label_4a8ec4:
    // 0x4a8ec4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x4a8ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_4a8ec8:
    // 0x4a8ec8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4a8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4a8ecc:
    // 0x4a8ecc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4a8ed0:
    if (ctx->pc == 0x4A8ED0u) {
        ctx->pc = 0x4A8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8ECCu;
        // 0x4a8ed0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8ED4u;
        goto label_4a8ed4;
    }
    ctx->pc = 0x4A8ECCu;
    {
        const bool branch_taken_0x4a8ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8ECCu;
        // 0x4a8ed0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8ecc) {
            ctx->pc = 0x4A8EF8u;
            goto label_4a8ef8;
        }
    }
    ctx->pc = 0x4A8ED4u;
label_4a8ed4:
    // 0x4a8ed4: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x4a8ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4a8ed8:
    // 0x4a8ed8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_4a8edc:
    if (ctx->pc == 0x4A8EDCu) {
        ctx->pc = 0x4A8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8ED8u;
        // 0x4a8edc: 0x8c900008  lw          $s0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8EE0u;
        goto label_4a8ee0;
    }
    ctx->pc = 0x4A8ED8u;
    {
        const bool branch_taken_0x4a8ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8ED8u;
        // 0x4a8edc: 0x8c900008  lw          $s0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8ed8) {
            ctx->pc = 0x4A8EECu;
            goto label_4a8eec;
        }
    }
    ctx->pc = 0x4A8EE0u;
label_4a8ee0:
    // 0x4a8ee0: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x4a8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_4a8ee4:
    // 0x4a8ee4: 0x40f809  jalr        $v0
label_4a8ee8:
    if (ctx->pc == 0x4A8EE8u) {
        ctx->pc = 0x4A8EECu;
        goto label_4a8eec;
    }
    ctx->pc = 0x4A8EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8EECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8EE4u, 0x4A8EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8EECu;
label_4a8eec:
    // 0x4a8eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8ef0:
    // 0x4a8ef0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_4a8ef4:
    if (ctx->pc == 0x4A8EF4u) {
        ctx->pc = 0x4A8EF8u;
        goto label_4a8ef8;
    }
    ctx->pc = 0x4A8EF0u;
    {
        const bool branch_taken_0x4a8ef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8ef0) {
            ctx->pc = 0x4A8ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8ed8;
        }
    }
    ctx->pc = 0x4A8EF8u;
label_4a8ef8:
    // 0x4a8ef8: 0x2663ad18  addiu       $v1, $s3, -0x52E8
    ctx->pc = 0x4a8ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_4a8efc:
    // 0x4a8efc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x4a8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_4a8f00:
    // 0x4a8f00: 0x40f809  jalr        $v0
label_4a8f04:
    if (ctx->pc == 0x4A8F04u) {
        ctx->pc = 0x4A8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F00u;
        // 0x4a8f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8F08u;
        goto label_4a8f08;
    }
    ctx->pc = 0x4A8F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8F08u);
        ctx->pc = 0x4A8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F00u;
        // 0x4a8f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8F00u, 0x4A8F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8F08u;
label_4a8f08:
    // 0x4a8f08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a8f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a8f0c:
    // 0x4a8f0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a8f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a8f10:
    // 0x4a8f10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a8f10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a8f14:
    // 0x4a8f14: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a8f14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a8f18:
    // 0x4a8f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a8f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a8f1c:
    // 0x4a8f1c: 0x3e00008  jr          $ra
label_4a8f20:
    if (ctx->pc == 0x4A8F20u) {
        ctx->pc = 0x4A8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F1Cu;
        // 0x4a8f20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8F24u;
        goto label_4a8f24;
    }
    ctx->pc = 0x4A8F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F1Cu;
        // 0x4a8f20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8F24u;
label_4a8f24:
    // 0x4a8f24: 0x0  nop
    ctx->pc = 0x4a8f24u;
    // NOP
    ctx->pc = 0x4a8f28u;
}
