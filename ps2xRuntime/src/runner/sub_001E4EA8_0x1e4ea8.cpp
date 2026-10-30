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

// Function: sub_001E4EA8
// Address: 0x1e4ea8 - 0x1e4f18
void sub_001E4EA8_0x1e4ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4EA8_0x1e4ea8");
#endif

    switch (ctx->pc) {
        case 0x1e4ea8u: goto label_1e4ea8;
        case 0x1e4eacu: goto label_1e4eac;
        case 0x1e4eb0u: goto label_1e4eb0;
        case 0x1e4eb4u: goto label_1e4eb4;
        case 0x1e4eb8u: goto label_1e4eb8;
        case 0x1e4ebcu: goto label_1e4ebc;
        case 0x1e4ec0u: goto label_1e4ec0;
        case 0x1e4ec4u: goto label_1e4ec4;
        case 0x1e4ec8u: goto label_1e4ec8;
        case 0x1e4eccu: goto label_1e4ecc;
        case 0x1e4ed0u: goto label_1e4ed0;
        case 0x1e4ed4u: goto label_1e4ed4;
        case 0x1e4ed8u: goto label_1e4ed8;
        case 0x1e4edcu: goto label_1e4edc;
        case 0x1e4ee0u: goto label_1e4ee0;
        case 0x1e4ee4u: goto label_1e4ee4;
        case 0x1e4ee8u: goto label_1e4ee8;
        case 0x1e4eecu: goto label_1e4eec;
        case 0x1e4ef0u: goto label_1e4ef0;
        case 0x1e4ef4u: goto label_1e4ef4;
        case 0x1e4ef8u: goto label_1e4ef8;
        case 0x1e4efcu: goto label_1e4efc;
        case 0x1e4f00u: goto label_1e4f00;
        case 0x1e4f04u: goto label_1e4f04;
        case 0x1e4f08u: goto label_1e4f08;
        case 0x1e4f0cu: goto label_1e4f0c;
        case 0x1e4f10u: goto label_1e4f10;
        case 0x1e4f14u: goto label_1e4f14;
        default: break;
    }

    ctx->pc = 0x1e4ea8u;

label_1e4ea8:
    // 0x1e4ea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e4eac:
    // 0x1e4eac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e4eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e4eb0:
    // 0x1e4eb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4eb4:
    // 0x1e4eb4: 0x24900940  addiu       $s0, $a0, 0x940
    ctx->pc = 0x1e4eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2368));
label_1e4eb8:
    // 0x1e4eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e4ebc:
    // 0x1e4ebc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e4ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ec0:
    // 0x1e4ec0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1e4ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e4ec4:
    // 0x1e4ec4: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_1e4ec8:
    if (ctx->pc == 0x1E4EC8u) {
        ctx->pc = 0x1E4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EC4u;
        // 0x1e4ec8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4ECCu;
        goto label_1e4ecc;
    }
    ctx->pc = 0x1E4EC4u;
    {
        const bool branch_taken_0x1e4ec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ec4) {
            ctx->pc = 0x1E4EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4EC4u;
            // 0x1e4ec8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4EF0u;
            goto label_1e4ef0;
        }
    }
    ctx->pc = 0x1E4ECCu;
label_1e4ecc:
    // 0x1e4ecc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e4eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e4ed0:
    // 0x1e4ed0: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1e4ed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1e4ed4:
    // 0x1e4ed4: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x1e4ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1e4ed8:
    // 0x1e4ed8: 0x40f809  jalr        $v0
label_1e4edc:
    if (ctx->pc == 0x1E4EDCu) {
        ctx->pc = 0x1E4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4ED8u;
        // 0x1e4edc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EE0u;
        goto label_1e4ee0;
    }
    ctx->pc = 0x1E4ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4EE0u);
        ctx->pc = 0x1E4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4ED8u;
        // 0x1e4edc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4ED8u, 0x1E4EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4EE0u;
label_1e4ee0:
    // 0x1e4ee0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e4ee4:
    if (ctx->pc == 0x1E4EE4u) {
        ctx->pc = 0x1E4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EE0u;
        // 0x1e4ee4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EE8u;
        goto label_1e4ee8;
    }
    ctx->pc = 0x1E4EE0u;
    {
        const bool branch_taken_0x1e4ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EE0u;
        // 0x1e4ee4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ee0) {
            ctx->pc = 0x1E4EF0u;
            goto label_1e4ef0;
        }
    }
    ctx->pc = 0x1E4EE8u;
label_1e4ee8:
    // 0x1e4ee8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e4eec:
    if (ctx->pc == 0x1E4EECu) {
        ctx->pc = 0x1E4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EE8u;
        // 0x1e4eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EF0u;
        goto label_1e4ef0;
    }
    ctx->pc = 0x1E4EE8u;
    {
        const bool branch_taken_0x1e4ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EE8u;
        // 0x1e4eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ee8) {
            ctx->pc = 0x1E4F00u;
            goto label_1e4f00;
        }
    }
    ctx->pc = 0x1E4EF0u;
label_1e4ef0:
    // 0x1e4ef0: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1e4ef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e4ef4:
    // 0x1e4ef4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1e4ef8:
    if (ctx->pc == 0x1E4EF8u) {
        ctx->pc = 0x1E4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EF4u;
        // 0x1e4ef8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EFCu;
        goto label_1e4efc;
    }
    ctx->pc = 0x1E4EF4u;
    {
        const bool branch_taken_0x1e4ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EF4u;
        // 0x1e4ef8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ef4) {
            ctx->pc = 0x1E4EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4ec0;
        }
    }
    ctx->pc = 0x1E4EFCu;
label_1e4efc:
    // 0x1e4efc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4f00:
    // 0x1e4f00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e4f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4f04:
    // 0x1e4f04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4f08:
    // 0x1e4f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4f0c:
    // 0x1e4f0c: 0x3e00008  jr          $ra
label_1e4f10:
    if (ctx->pc == 0x1E4F10u) {
        ctx->pc = 0x1E4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F0Cu;
        // 0x1e4f10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F14u;
        goto label_1e4f14;
    }
    ctx->pc = 0x1E4F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F0Cu;
        // 0x1e4f10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4F14u;
label_1e4f14:
    // 0x1e4f14: 0x0  nop
    ctx->pc = 0x1e4f14u;
    // NOP
    ctx->pc = 0x1e4f18u;
}
