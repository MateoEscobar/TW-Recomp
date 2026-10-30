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

// Function: sub_004E3E70
// Address: 0x4e3e70 - 0x4e3f08
void sub_004E3E70_0x4e3e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3E70_0x4e3e70");
#endif

    switch (ctx->pc) {
        case 0x4e3e70u: goto label_4e3e70;
        case 0x4e3e74u: goto label_4e3e74;
        case 0x4e3e78u: goto label_4e3e78;
        case 0x4e3e7cu: goto label_4e3e7c;
        case 0x4e3e80u: goto label_4e3e80;
        case 0x4e3e84u: goto label_4e3e84;
        case 0x4e3e88u: goto label_4e3e88;
        case 0x4e3e8cu: goto label_4e3e8c;
        case 0x4e3e90u: goto label_4e3e90;
        case 0x4e3e94u: goto label_4e3e94;
        case 0x4e3e98u: goto label_4e3e98;
        case 0x4e3e9cu: goto label_4e3e9c;
        case 0x4e3ea0u: goto label_4e3ea0;
        case 0x4e3ea4u: goto label_4e3ea4;
        case 0x4e3ea8u: goto label_4e3ea8;
        case 0x4e3eacu: goto label_4e3eac;
        case 0x4e3eb0u: goto label_4e3eb0;
        case 0x4e3eb4u: goto label_4e3eb4;
        case 0x4e3eb8u: goto label_4e3eb8;
        case 0x4e3ebcu: goto label_4e3ebc;
        case 0x4e3ec0u: goto label_4e3ec0;
        case 0x4e3ec4u: goto label_4e3ec4;
        case 0x4e3ec8u: goto label_4e3ec8;
        case 0x4e3eccu: goto label_4e3ecc;
        case 0x4e3ed0u: goto label_4e3ed0;
        case 0x4e3ed4u: goto label_4e3ed4;
        case 0x4e3ed8u: goto label_4e3ed8;
        case 0x4e3edcu: goto label_4e3edc;
        case 0x4e3ee0u: goto label_4e3ee0;
        case 0x4e3ee4u: goto label_4e3ee4;
        case 0x4e3ee8u: goto label_4e3ee8;
        case 0x4e3eecu: goto label_4e3eec;
        case 0x4e3ef0u: goto label_4e3ef0;
        case 0x4e3ef4u: goto label_4e3ef4;
        case 0x4e3ef8u: goto label_4e3ef8;
        case 0x4e3efcu: goto label_4e3efc;
        case 0x4e3f00u: goto label_4e3f00;
        case 0x4e3f04u: goto label_4e3f04;
        default: break;
    }

    ctx->pc = 0x4e3e70u;

label_4e3e70:
    // 0x4e3e70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e3e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e3e74:
    // 0x4e3e74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e3e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e3e78:
    // 0x4e3e78: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e3e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e3e7c:
    // 0x4e3e7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e3e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e3e80:
    // 0x4e3e80: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e3e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e3e84:
    // 0x4e3e84: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e3e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e3e88:
    // 0x4e3e88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e3e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e3e8c:
    // 0x4e3e8c: 0x262413b0  addiu       $a0, $s1, 0x13B0
    ctx->pc = 0x4e3e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5040));
label_4e3e90:
    // 0x4e3e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e3e94:
    // 0x4e3e94: 0xc06e410  jal         func_1B9040
label_4e3e98:
    if (ctx->pc == 0x4E3E98u) {
        ctx->pc = 0x4E3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3E94u;
        // 0x4e3e98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3E9Cu;
        goto label_4e3e9c;
    }
    ctx->pc = 0x4E3E94u;
    SET_GPR_U32(ctx, 31, 0x4E3E9Cu);
    ctx->pc = 0x4E3E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3E94u;
    // 0x4e3e98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4E3E94u, 0x4E3E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3E9Cu;
label_4e3e9c:
    // 0x4e3e9c: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x4e3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_4e3ea0:
    // 0x4e3ea0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4e3ea4:
    if (ctx->pc == 0x4E3EA4u) {
        ctx->pc = 0x4E3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3EA0u;
        // 0x4e3ea4: 0x263012f0  addiu       $s0, $s1, 0x12F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3EA8u;
        goto label_4e3ea8;
    }
    ctx->pc = 0x4E3EA0u;
    {
        const bool branch_taken_0x4e3ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3EA0u;
        // 0x4e3ea4: 0x263012f0  addiu       $s0, $s1, 0x12F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3ea0) {
            ctx->pc = 0x4E3ED8u;
            goto label_4e3ed8;
        }
    }
    ctx->pc = 0x4E3EA8u;
label_4e3ea8:
    // 0x4e3ea8: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
label_4e3eac:
    if (ctx->pc == 0x4E3EACu) {
        ctx->pc = 0x4E3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3EA8u;
        // 0x4e3eac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3EB0u;
        goto label_4e3eb0;
    }
    ctx->pc = 0x4E3EA8u;
    {
        const bool branch_taken_0x4e3ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x4E3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3EA8u;
        // 0x4e3eac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3ea8) {
            ctx->pc = 0x4E3ED8u;
            goto label_4e3ed8;
        }
    }
    ctx->pc = 0x4E3EB0u;
label_4e3eb0:
    // 0x4e3eb0: 0x2610fdb0  addiu       $s0, $s0, -0x250
    ctx->pc = 0x4e3eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966704));
label_4e3eb4:
    // 0x4e3eb4: 0x0  nop
    ctx->pc = 0x4e3eb4u;
    // NOP
label_4e3eb8:
    // 0x4e3eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e3eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e3ebc:
    // 0x4e3ebc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e3ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e3ec0:
    // 0x4e3ec0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e3ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e3ec4:
    // 0x4e3ec4: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e3ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e3ec8:
    // 0x4e3ec8: 0x60f809  jalr        $v1
label_4e3ecc:
    if (ctx->pc == 0x4E3ECCu) {
        ctx->pc = 0x4E3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3EC8u;
        // 0x4e3ecc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3ED0u;
        goto label_4e3ed0;
    }
    ctx->pc = 0x4E3EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E3ED0u);
        ctx->pc = 0x4E3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3EC8u;
        // 0x4e3ecc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3EC8u, 0x4E3ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3ED0u;
label_4e3ed0:
    // 0x4e3ed0: 0x1650fff9  bne         $s2, $s0, . + 4 + (-0x7 << 2)
label_4e3ed4:
    if (ctx->pc == 0x4E3ED4u) {
        ctx->pc = 0x4E3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3ED0u;
        // 0x4e3ed4: 0x2610fdb0  addiu       $s0, $s0, -0x250 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3ED8u;
        goto label_4e3ed8;
    }
    ctx->pc = 0x4E3ED0u;
    {
        const bool branch_taken_0x4e3ed0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x4E3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3ED0u;
        // 0x4e3ed4: 0x2610fdb0  addiu       $s0, $s0, -0x250 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3ed0) {
            ctx->pc = 0x4E3EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e3eb8;
        }
    }
    ctx->pc = 0x4E3ED8u;
label_4e3ed8:
    // 0x4e3ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e3ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e3edc:
    // 0x4e3edc: 0xc06a39e  jal         func_1A8E78
label_4e3ee0:
    if (ctx->pc == 0x4E3EE0u) {
        ctx->pc = 0x4E3EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3EDCu;
        // 0x4e3ee0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3EE4u;
        goto label_4e3ee4;
    }
    ctx->pc = 0x4E3EDCu;
    SET_GPR_U32(ctx, 31, 0x4E3EE4u);
    ctx->pc = 0x4E3EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3EDCu;
    // 0x4e3ee0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4E3EDCu, 0x4E3EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3EE4u;
label_4e3ee4:
    // 0x4e3ee4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e3ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e3ee8:
    // 0x4e3ee8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e3ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e3eec:
    // 0x4e3eec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e3eecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e3ef0:
    // 0x4e3ef0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e3ef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e3ef4:
    // 0x4e3ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e3ef8:
    // 0x4e3ef8: 0x3e00008  jr          $ra
label_4e3efc:
    if (ctx->pc == 0x4E3EFCu) {
        ctx->pc = 0x4E3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3EF8u;
        // 0x4e3efc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3F00u;
        goto label_4e3f00;
    }
    ctx->pc = 0x4E3EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3EF8u;
        // 0x4e3efc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3F00u;
label_4e3f00:
    // 0x4e3f00: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4e3f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4e3f04:
    // 0x4e3f04: 0x0  nop
    ctx->pc = 0x4e3f04u;
    // NOP
    ctx->pc = 0x4e3f08u;
}
