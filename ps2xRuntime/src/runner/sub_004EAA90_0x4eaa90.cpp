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

// Function: sub_004EAA90
// Address: 0x4eaa90 - 0x4eab10
void sub_004EAA90_0x4eaa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EAA90_0x4eaa90");
#endif

    switch (ctx->pc) {
        case 0x4eaa90u: goto label_4eaa90;
        case 0x4eaa94u: goto label_4eaa94;
        case 0x4eaa98u: goto label_4eaa98;
        case 0x4eaa9cu: goto label_4eaa9c;
        case 0x4eaaa0u: goto label_4eaaa0;
        case 0x4eaaa4u: goto label_4eaaa4;
        case 0x4eaaa8u: goto label_4eaaa8;
        case 0x4eaaacu: goto label_4eaaac;
        case 0x4eaab0u: goto label_4eaab0;
        case 0x4eaab4u: goto label_4eaab4;
        case 0x4eaab8u: goto label_4eaab8;
        case 0x4eaabcu: goto label_4eaabc;
        case 0x4eaac0u: goto label_4eaac0;
        case 0x4eaac4u: goto label_4eaac4;
        case 0x4eaac8u: goto label_4eaac8;
        case 0x4eaaccu: goto label_4eaacc;
        case 0x4eaad0u: goto label_4eaad0;
        case 0x4eaad4u: goto label_4eaad4;
        case 0x4eaad8u: goto label_4eaad8;
        case 0x4eaadcu: goto label_4eaadc;
        case 0x4eaae0u: goto label_4eaae0;
        case 0x4eaae4u: goto label_4eaae4;
        case 0x4eaae8u: goto label_4eaae8;
        case 0x4eaaecu: goto label_4eaaec;
        case 0x4eaaf0u: goto label_4eaaf0;
        case 0x4eaaf4u: goto label_4eaaf4;
        case 0x4eaaf8u: goto label_4eaaf8;
        case 0x4eaafcu: goto label_4eaafc;
        case 0x4eab00u: goto label_4eab00;
        case 0x4eab04u: goto label_4eab04;
        case 0x4eab08u: goto label_4eab08;
        case 0x4eab0cu: goto label_4eab0c;
        default: break;
    }

    ctx->pc = 0x4eaa90u;

label_4eaa90:
    // 0x4eaa90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4eaa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4eaa94:
    // 0x4eaa94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4eaa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4eaa98:
    // 0x4eaa98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4eaa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4eaa9c:
    // 0x4eaa9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eaa9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eaaa0:
    // 0x4eaaa0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4eaaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4eaaa4:
    // 0x4eaaa4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4eaaa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4eaaa8:
    // 0x4eaaa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eaaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eaaac:
    // 0x4eaaac: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4eaab0:
    if (ctx->pc == 0x4EAAB0u) {
        ctx->pc = 0x4EAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAAACu;
        // 0x4eaab0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAAB4u;
        goto label_4eaab4;
    }
    ctx->pc = 0x4EAAACu;
    {
        const bool branch_taken_0x4eaaac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAAACu;
        // 0x4eaab0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eaaac) {
            ctx->pc = 0x4EAAF4u;
            goto label_4eaaf4;
        }
    }
    ctx->pc = 0x4EAAB4u;
label_4eaab4:
    // 0x4eaab4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4eaab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4eaab8:
    // 0x4eaab8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4eaab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4eaabc:
    // 0x4eaabc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4eaabcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4eaac0:
    // 0x4eaac0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4eaac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4eaac4:
    // 0x4eaac4: 0x60f809  jalr        $v1
label_4eaac8:
    if (ctx->pc == 0x4EAAC8u) {
        ctx->pc = 0x4EAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAAC4u;
        // 0x4eaac8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAACCu;
        goto label_4eaacc;
    }
    ctx->pc = 0x4EAAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EAACCu);
        ctx->pc = 0x4EAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAAC4u;
        // 0x4eaac8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAAC4u, 0x4EAACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EAACCu;
label_4eaacc:
    // 0x4eaacc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4eaaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4eaad0:
    // 0x4eaad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eaad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eaad4:
    // 0x4eaad4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4eaad4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4eaad8:
    // 0x4eaad8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4eaad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eaadc:
    // 0x4eaadc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4eaadcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4eaae0:
    // 0x4eaae0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eaae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eaae4:
    // 0x4eaae4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eaae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eaae8:
    // 0x4eaae8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eaae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eaaec:
    // 0x4eaaec: 0x60f809  jalr        $v1
label_4eaaf0:
    if (ctx->pc == 0x4EAAF0u) {
        ctx->pc = 0x4EAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAAECu;
        // 0x4eaaf0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAAF4u;
        goto label_4eaaf4;
    }
    ctx->pc = 0x4EAAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EAAF4u);
        ctx->pc = 0x4EAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAAECu;
        // 0x4eaaf0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAAECu, 0x4EAAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EAAF4u;
label_4eaaf4:
    // 0x4eaaf4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4eaaf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eaaf8:
    // 0x4eaaf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4eaaf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eaafc:
    // 0x4eaafc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4eaafcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eab00:
    // 0x4eab00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eab00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eab04:
    // 0x4eab04: 0x3e00008  jr          $ra
label_4eab08:
    if (ctx->pc == 0x4EAB08u) {
        ctx->pc = 0x4EAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAB04u;
        // 0x4eab08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAB0Cu;
        goto label_4eab0c;
    }
    ctx->pc = 0x4EAB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAB04u;
        // 0x4eab08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EAB0Cu;
label_4eab0c:
    // 0x4eab0c: 0x0  nop
    ctx->pc = 0x4eab0cu;
    // NOP
    ctx->pc = 0x4eab10u;
}
