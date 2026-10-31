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

// Function: sub_004EBBA0
// Address: 0x4ebba0 - 0x4ebc20
void sub_004EBBA0_0x4ebba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBBA0_0x4ebba0");
#endif

    switch (ctx->pc) {
        case 0x4ebba0u: goto label_4ebba0;
        case 0x4ebba4u: goto label_4ebba4;
        case 0x4ebba8u: goto label_4ebba8;
        case 0x4ebbacu: goto label_4ebbac;
        case 0x4ebbb0u: goto label_4ebbb0;
        case 0x4ebbb4u: goto label_4ebbb4;
        case 0x4ebbb8u: goto label_4ebbb8;
        case 0x4ebbbcu: goto label_4ebbbc;
        case 0x4ebbc0u: goto label_4ebbc0;
        case 0x4ebbc4u: goto label_4ebbc4;
        case 0x4ebbc8u: goto label_4ebbc8;
        case 0x4ebbccu: goto label_4ebbcc;
        case 0x4ebbd0u: goto label_4ebbd0;
        case 0x4ebbd4u: goto label_4ebbd4;
        case 0x4ebbd8u: goto label_4ebbd8;
        case 0x4ebbdcu: goto label_4ebbdc;
        case 0x4ebbe0u: goto label_4ebbe0;
        case 0x4ebbe4u: goto label_4ebbe4;
        case 0x4ebbe8u: goto label_4ebbe8;
        case 0x4ebbecu: goto label_4ebbec;
        case 0x4ebbf0u: goto label_4ebbf0;
        case 0x4ebbf4u: goto label_4ebbf4;
        case 0x4ebbf8u: goto label_4ebbf8;
        case 0x4ebbfcu: goto label_4ebbfc;
        case 0x4ebc00u: goto label_4ebc00;
        case 0x4ebc04u: goto label_4ebc04;
        case 0x4ebc08u: goto label_4ebc08;
        case 0x4ebc0cu: goto label_4ebc0c;
        case 0x4ebc10u: goto label_4ebc10;
        case 0x4ebc14u: goto label_4ebc14;
        case 0x4ebc18u: goto label_4ebc18;
        case 0x4ebc1cu: goto label_4ebc1c;
        default: break;
    }

    ctx->pc = 0x4ebba0u;

label_4ebba0:
    // 0x4ebba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ebba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ebba4:
    // 0x4ebba4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ebba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ebba8:
    // 0x4ebba8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ebba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ebbac:
    // 0x4ebbac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ebbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebbb0:
    // 0x4ebbb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ebbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ebbb4:
    // 0x4ebbb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ebbb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ebbb8:
    // 0x4ebbb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ebbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ebbbc:
    // 0x4ebbbc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ebbc0:
    if (ctx->pc == 0x4EBBC0u) {
        ctx->pc = 0x4EBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBBBCu;
        // 0x4ebbc0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBBC4u;
        goto label_4ebbc4;
    }
    ctx->pc = 0x4EBBBCu;
    {
        const bool branch_taken_0x4ebbbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBBBCu;
        // 0x4ebbc0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebbbc) {
            ctx->pc = 0x4EBC04u;
            goto label_4ebc04;
        }
    }
    ctx->pc = 0x4EBBC4u;
label_4ebbc4:
    // 0x4ebbc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ebbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebbc8:
    // 0x4ebbc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ebbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ebbcc:
    // 0x4ebbcc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ebbccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ebbd0:
    // 0x4ebbd0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ebbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ebbd4:
    // 0x4ebbd4: 0x60f809  jalr        $v1
label_4ebbd8:
    if (ctx->pc == 0x4EBBD8u) {
        ctx->pc = 0x4EBBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBBD4u;
        // 0x4ebbd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBBDCu;
        goto label_4ebbdc;
    }
    ctx->pc = 0x4EBBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBBDCu);
        ctx->pc = 0x4EBBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBBD4u;
        // 0x4ebbd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBBD4u, 0x4EBBDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBBDCu;
label_4ebbdc:
    // 0x4ebbdc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ebbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ebbe0:
    // 0x4ebbe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ebbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ebbe4:
    // 0x4ebbe4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ebbe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ebbe8:
    // 0x4ebbe8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ebbe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ebbec:
    // 0x4ebbec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ebbecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ebbf0:
    // 0x4ebbf0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ebbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ebbf4:
    // 0x4ebbf4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ebbf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ebbf8:
    // 0x4ebbf8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ebbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ebbfc:
    // 0x4ebbfc: 0x60f809  jalr        $v1
label_4ebc00:
    if (ctx->pc == 0x4EBC00u) {
        ctx->pc = 0x4EBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBBFCu;
        // 0x4ebc00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBC04u;
        goto label_4ebc04;
    }
    ctx->pc = 0x4EBBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBC04u);
        ctx->pc = 0x4EBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBBFCu;
        // 0x4ebc00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBBFCu, 0x4EBC04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBC04u;
label_4ebc04:
    // 0x4ebc04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ebc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ebc08:
    // 0x4ebc08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ebc08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ebc0c:
    // 0x4ebc0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ebc0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ebc10:
    // 0x4ebc10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ebc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ebc14:
    // 0x4ebc14: 0x3e00008  jr          $ra
label_4ebc18:
    if (ctx->pc == 0x4EBC18u) {
        ctx->pc = 0x4EBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBC14u;
        // 0x4ebc18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBC1Cu;
        goto label_4ebc1c;
    }
    ctx->pc = 0x4EBC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBC14u;
        // 0x4ebc18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EBC1Cu;
label_4ebc1c:
    // 0x4ebc1c: 0x0  nop
    ctx->pc = 0x4ebc1cu;
    // NOP
    ctx->pc = 0x4ebc20u;
}
