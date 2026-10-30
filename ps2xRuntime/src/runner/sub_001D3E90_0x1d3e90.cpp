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

// Function: sub_001D3E90
// Address: 0x1d3e90 - 0x1d3ef0
void sub_001D3E90_0x1d3e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3E90_0x1d3e90");
#endif

    switch (ctx->pc) {
        case 0x1d3e90u: goto label_1d3e90;
        case 0x1d3e94u: goto label_1d3e94;
        case 0x1d3e98u: goto label_1d3e98;
        case 0x1d3e9cu: goto label_1d3e9c;
        case 0x1d3ea0u: goto label_1d3ea0;
        case 0x1d3ea4u: goto label_1d3ea4;
        case 0x1d3ea8u: goto label_1d3ea8;
        case 0x1d3eacu: goto label_1d3eac;
        case 0x1d3eb0u: goto label_1d3eb0;
        case 0x1d3eb4u: goto label_1d3eb4;
        case 0x1d3eb8u: goto label_1d3eb8;
        case 0x1d3ebcu: goto label_1d3ebc;
        case 0x1d3ec0u: goto label_1d3ec0;
        case 0x1d3ec4u: goto label_1d3ec4;
        case 0x1d3ec8u: goto label_1d3ec8;
        case 0x1d3eccu: goto label_1d3ecc;
        case 0x1d3ed0u: goto label_1d3ed0;
        case 0x1d3ed4u: goto label_1d3ed4;
        case 0x1d3ed8u: goto label_1d3ed8;
        case 0x1d3edcu: goto label_1d3edc;
        case 0x1d3ee0u: goto label_1d3ee0;
        case 0x1d3ee4u: goto label_1d3ee4;
        case 0x1d3ee8u: goto label_1d3ee8;
        case 0x1d3eecu: goto label_1d3eec;
        default: break;
    }

    ctx->pc = 0x1d3e90u;

label_1d3e90:
    // 0x1d3e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d3e94:
    // 0x1d3e94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d3e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d3e98:
    // 0x1d3e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3e9c:
    // 0x1d3e9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3ea0:
    // 0x1d3ea0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3ea4:
    // 0x1d3ea4: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1d3ea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1d3ea8:
    // 0x1d3ea8: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1d3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1d3eac:
    // 0x1d3eac: 0x40f809  jalr        $v0
label_1d3eb0:
    if (ctx->pc == 0x1D3EB0u) {
        ctx->pc = 0x1D3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EACu;
        // 0x1d3eb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3EB4u;
        goto label_1d3eb4;
    }
    ctx->pc = 0x1D3EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D3EB4u);
        ctx->pc = 0x1D3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EACu;
        // 0x1d3eb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3EACu, 0x1D3EB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3EB4u;
label_1d3eb4:
    // 0x1d3eb4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1d3eb8:
    if (ctx->pc == 0x1D3EB8u) {
        ctx->pc = 0x1D3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EB4u;
        // 0x1d3eb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3EBCu;
        goto label_1d3ebc;
    }
    ctx->pc = 0x1D3EB4u;
    {
        const bool branch_taken_0x1d3eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3eb4) {
            ctx->pc = 0x1D3EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3EB4u;
            // 0x1d3eb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3EE0u;
            goto label_1d3ee0;
        }
    }
    ctx->pc = 0x1D3EBCu;
label_1d3ebc:
    // 0x1d3ebc: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x1d3ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1d3ec0:
    // 0x1d3ec0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1d3ec4:
    if (ctx->pc == 0x1D3EC4u) {
        ctx->pc = 0x1D3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EC0u;
        // 0x1d3ec4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3EC8u;
        goto label_1d3ec8;
    }
    ctx->pc = 0x1D3EC0u;
    {
        const bool branch_taken_0x1d3ec0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EC0u;
        // 0x1d3ec4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ec0) {
            ctx->pc = 0x1D3EE0u;
            goto label_1d3ee0;
        }
    }
    ctx->pc = 0x1D3EC8u;
label_1d3ec8:
    // 0x1d3ec8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d3ecc:
    // 0x1d3ecc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1d3eccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1d3ed0:
    // 0x1d3ed0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1d3ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1d3ed4:
    // 0x1d3ed4: 0x60f809  jalr        $v1
label_1d3ed8:
    if (ctx->pc == 0x1D3ED8u) {
        ctx->pc = 0x1D3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ED4u;
        // 0x1d3ed8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3EDCu;
        goto label_1d3edc;
    }
    ctx->pc = 0x1D3ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D3EDCu);
        ctx->pc = 0x1D3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ED4u;
        // 0x1d3ed8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3ED4u, 0x1D3EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3EDCu;
label_1d3edc:
    // 0x1d3edc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d3edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3ee0:
    // 0x1d3ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3ee4:
    // 0x1d3ee4: 0x3e00008  jr          $ra
label_1d3ee8:
    if (ctx->pc == 0x1D3EE8u) {
        ctx->pc = 0x1D3EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EE4u;
        // 0x1d3ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3EECu;
        goto label_1d3eec;
    }
    ctx->pc = 0x1D3EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EE4u;
        // 0x1d3ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3EECu;
label_1d3eec:
    // 0x1d3eec: 0x0  nop
    ctx->pc = 0x1d3eecu;
    // NOP
    ctx->pc = 0x1d3ef0u;
}
