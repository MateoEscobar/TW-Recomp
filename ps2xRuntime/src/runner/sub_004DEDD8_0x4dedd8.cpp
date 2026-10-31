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

// Function: sub_004DEDD8
// Address: 0x4dedd8 - 0x4dee48
void sub_004DEDD8_0x4dedd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DEDD8_0x4dedd8");
#endif

    switch (ctx->pc) {
        case 0x4dedd8u: goto label_4dedd8;
        case 0x4deddcu: goto label_4deddc;
        case 0x4dede0u: goto label_4dede0;
        case 0x4dede4u: goto label_4dede4;
        case 0x4dede8u: goto label_4dede8;
        case 0x4dedecu: goto label_4dedec;
        case 0x4dedf0u: goto label_4dedf0;
        case 0x4dedf4u: goto label_4dedf4;
        case 0x4dedf8u: goto label_4dedf8;
        case 0x4dedfcu: goto label_4dedfc;
        case 0x4dee00u: goto label_4dee00;
        case 0x4dee04u: goto label_4dee04;
        case 0x4dee08u: goto label_4dee08;
        case 0x4dee0cu: goto label_4dee0c;
        case 0x4dee10u: goto label_4dee10;
        case 0x4dee14u: goto label_4dee14;
        case 0x4dee18u: goto label_4dee18;
        case 0x4dee1cu: goto label_4dee1c;
        case 0x4dee20u: goto label_4dee20;
        case 0x4dee24u: goto label_4dee24;
        case 0x4dee28u: goto label_4dee28;
        case 0x4dee2cu: goto label_4dee2c;
        case 0x4dee30u: goto label_4dee30;
        case 0x4dee34u: goto label_4dee34;
        case 0x4dee38u: goto label_4dee38;
        case 0x4dee3cu: goto label_4dee3c;
        case 0x4dee40u: goto label_4dee40;
        case 0x4dee44u: goto label_4dee44;
        default: break;
    }

    ctx->pc = 0x4dedd8u;

label_4dedd8:
    // 0x4dedd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4dedd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4deddc:
    // 0x4deddc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4deddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4dede0:
    // 0x4dede0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4dede0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4dede4:
    // 0x4dede4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dede4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dede8:
    // 0x4dede8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4dede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4dedec:
    // 0x4dedec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4dedecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dedf0:
    // 0x4dedf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dedf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dedf4:
    // 0x4dedf4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4dedf8:
    if (ctx->pc == 0x4DEDF8u) {
        ctx->pc = 0x4DEDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEDF4u;
        // 0x4dedf8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEDFCu;
        goto label_4dedfc;
    }
    ctx->pc = 0x4DEDF4u;
    {
        const bool branch_taken_0x4dedf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DEDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEDF4u;
        // 0x4dedf8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dedf4) {
            ctx->pc = 0x4DEE2Cu;
            goto label_4dee2c;
        }
    }
    ctx->pc = 0x4DEDFCu;
label_4dedfc:
    // 0x4dedfc: 0xc05e494  jal         func_179250
label_4dee00:
    if (ctx->pc == 0x4DEE00u) {
        ctx->pc = 0x4DEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEDFCu;
        // 0x4dee00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEE04u;
        goto label_4dee04;
    }
    ctx->pc = 0x4DEDFCu;
    SET_GPR_U32(ctx, 31, 0x4DEE04u);
    ctx->pc = 0x4DEE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DEDFCu;
    // 0x4dee00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179250u, 0x4DEDFCu, 0x4DEE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DEE04u;
label_4dee04:
    // 0x4dee04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4dee04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4dee08:
    // 0x4dee08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4dee08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dee0c:
    // 0x4dee0c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4dee0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4dee10:
    // 0x4dee10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4dee10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dee14:
    // 0x4dee14: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4dee14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4dee18:
    // 0x4dee18: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4dee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4dee1c:
    // 0x4dee1c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4dee1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4dee20:
    // 0x4dee20: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4dee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4dee24:
    // 0x4dee24: 0x60f809  jalr        $v1
label_4dee28:
    if (ctx->pc == 0x4DEE28u) {
        ctx->pc = 0x4DEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEE24u;
        // 0x4dee28: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEE2Cu;
        goto label_4dee2c;
    }
    ctx->pc = 0x4DEE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DEE2Cu);
        ctx->pc = 0x4DEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEE24u;
        // 0x4dee28: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DEE24u, 0x4DEE2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DEE2Cu;
label_4dee2c:
    // 0x4dee2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4dee2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dee30:
    // 0x4dee30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4dee30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dee34:
    // 0x4dee34: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4dee34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dee38:
    // 0x4dee38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dee38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dee3c:
    // 0x4dee3c: 0x3e00008  jr          $ra
label_4dee40:
    if (ctx->pc == 0x4DEE40u) {
        ctx->pc = 0x4DEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEE3Cu;
        // 0x4dee40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEE44u;
        goto label_4dee44;
    }
    ctx->pc = 0x4DEE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEE3Cu;
        // 0x4dee40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DEE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DEE44u;
label_4dee44:
    // 0x4dee44: 0x0  nop
    ctx->pc = 0x4dee44u;
    // NOP
    ctx->pc = 0x4dee48u;
}
