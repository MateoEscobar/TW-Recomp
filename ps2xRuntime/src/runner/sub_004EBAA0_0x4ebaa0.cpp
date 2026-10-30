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

// Function: sub_004EBAA0
// Address: 0x4ebaa0 - 0x4ebb20
void sub_004EBAA0_0x4ebaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBAA0_0x4ebaa0");
#endif

    switch (ctx->pc) {
        case 0x4ebaa0u: goto label_4ebaa0;
        case 0x4ebaa4u: goto label_4ebaa4;
        case 0x4ebaa8u: goto label_4ebaa8;
        case 0x4ebaacu: goto label_4ebaac;
        case 0x4ebab0u: goto label_4ebab0;
        case 0x4ebab4u: goto label_4ebab4;
        case 0x4ebab8u: goto label_4ebab8;
        case 0x4ebabcu: goto label_4ebabc;
        case 0x4ebac0u: goto label_4ebac0;
        case 0x4ebac4u: goto label_4ebac4;
        case 0x4ebac8u: goto label_4ebac8;
        case 0x4ebaccu: goto label_4ebacc;
        case 0x4ebad0u: goto label_4ebad0;
        case 0x4ebad4u: goto label_4ebad4;
        case 0x4ebad8u: goto label_4ebad8;
        case 0x4ebadcu: goto label_4ebadc;
        case 0x4ebae0u: goto label_4ebae0;
        case 0x4ebae4u: goto label_4ebae4;
        case 0x4ebae8u: goto label_4ebae8;
        case 0x4ebaecu: goto label_4ebaec;
        case 0x4ebaf0u: goto label_4ebaf0;
        case 0x4ebaf4u: goto label_4ebaf4;
        case 0x4ebaf8u: goto label_4ebaf8;
        case 0x4ebafcu: goto label_4ebafc;
        case 0x4ebb00u: goto label_4ebb00;
        case 0x4ebb04u: goto label_4ebb04;
        case 0x4ebb08u: goto label_4ebb08;
        case 0x4ebb0cu: goto label_4ebb0c;
        case 0x4ebb10u: goto label_4ebb10;
        case 0x4ebb14u: goto label_4ebb14;
        case 0x4ebb18u: goto label_4ebb18;
        case 0x4ebb1cu: goto label_4ebb1c;
        default: break;
    }

    ctx->pc = 0x4ebaa0u;

label_4ebaa0:
    // 0x4ebaa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ebaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ebaa4:
    // 0x4ebaa4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ebaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ebaa8:
    // 0x4ebaa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ebaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ebaac:
    // 0x4ebaac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ebaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebab0:
    // 0x4ebab0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ebab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ebab4:
    // 0x4ebab4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ebab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ebab8:
    // 0x4ebab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ebab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ebabc:
    // 0x4ebabc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ebac0:
    if (ctx->pc == 0x4EBAC0u) {
        ctx->pc = 0x4EBAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBABCu;
        // 0x4ebac0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBAC4u;
        goto label_4ebac4;
    }
    ctx->pc = 0x4EBABCu;
    {
        const bool branch_taken_0x4ebabc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EBAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBABCu;
        // 0x4ebac0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebabc) {
            ctx->pc = 0x4EBB04u;
            goto label_4ebb04;
        }
    }
    ctx->pc = 0x4EBAC4u;
label_4ebac4:
    // 0x4ebac4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ebac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebac8:
    // 0x4ebac8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ebac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ebacc:
    // 0x4ebacc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ebaccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ebad0:
    // 0x4ebad0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ebad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ebad4:
    // 0x4ebad4: 0x60f809  jalr        $v1
label_4ebad8:
    if (ctx->pc == 0x4EBAD8u) {
        ctx->pc = 0x4EBAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBAD4u;
        // 0x4ebad8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBADCu;
        goto label_4ebadc;
    }
    ctx->pc = 0x4EBAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBADCu);
        ctx->pc = 0x4EBAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBAD4u;
        // 0x4ebad8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBAD4u, 0x4EBADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBADCu;
label_4ebadc:
    // 0x4ebadc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ebadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ebae0:
    // 0x4ebae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ebae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ebae4:
    // 0x4ebae4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ebae4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ebae8:
    // 0x4ebae8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ebae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ebaec:
    // 0x4ebaec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ebaecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ebaf0:
    // 0x4ebaf0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ebaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ebaf4:
    // 0x4ebaf4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ebaf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ebaf8:
    // 0x4ebaf8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ebaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ebafc:
    // 0x4ebafc: 0x60f809  jalr        $v1
label_4ebb00:
    if (ctx->pc == 0x4EBB00u) {
        ctx->pc = 0x4EBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBAFCu;
        // 0x4ebb00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBB04u;
        goto label_4ebb04;
    }
    ctx->pc = 0x4EBAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBB04u);
        ctx->pc = 0x4EBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBAFCu;
        // 0x4ebb00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBAFCu, 0x4EBB04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBB04u;
label_4ebb04:
    // 0x4ebb04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ebb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ebb08:
    // 0x4ebb08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ebb08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ebb0c:
    // 0x4ebb0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ebb0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ebb10:
    // 0x4ebb10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ebb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ebb14:
    // 0x4ebb14: 0x3e00008  jr          $ra
label_4ebb18:
    if (ctx->pc == 0x4EBB18u) {
        ctx->pc = 0x4EBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBB14u;
        // 0x4ebb18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBB1Cu;
        goto label_4ebb1c;
    }
    ctx->pc = 0x4EBB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBB14u;
        // 0x4ebb18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EBB1Cu;
label_4ebb1c:
    // 0x4ebb1c: 0x0  nop
    ctx->pc = 0x4ebb1cu;
    // NOP
    ctx->pc = 0x4ebb20u;
}
