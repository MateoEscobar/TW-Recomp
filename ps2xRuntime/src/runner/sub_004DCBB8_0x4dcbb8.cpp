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

// Function: sub_004DCBB8
// Address: 0x4dcbb8 - 0x4dcc38
void sub_004DCBB8_0x4dcbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCBB8_0x4dcbb8");
#endif

    switch (ctx->pc) {
        case 0x4dcbb8u: goto label_4dcbb8;
        case 0x4dcbbcu: goto label_4dcbbc;
        case 0x4dcbc0u: goto label_4dcbc0;
        case 0x4dcbc4u: goto label_4dcbc4;
        case 0x4dcbc8u: goto label_4dcbc8;
        case 0x4dcbccu: goto label_4dcbcc;
        case 0x4dcbd0u: goto label_4dcbd0;
        case 0x4dcbd4u: goto label_4dcbd4;
        case 0x4dcbd8u: goto label_4dcbd8;
        case 0x4dcbdcu: goto label_4dcbdc;
        case 0x4dcbe0u: goto label_4dcbe0;
        case 0x4dcbe4u: goto label_4dcbe4;
        case 0x4dcbe8u: goto label_4dcbe8;
        case 0x4dcbecu: goto label_4dcbec;
        case 0x4dcbf0u: goto label_4dcbf0;
        case 0x4dcbf4u: goto label_4dcbf4;
        case 0x4dcbf8u: goto label_4dcbf8;
        case 0x4dcbfcu: goto label_4dcbfc;
        case 0x4dcc00u: goto label_4dcc00;
        case 0x4dcc04u: goto label_4dcc04;
        case 0x4dcc08u: goto label_4dcc08;
        case 0x4dcc0cu: goto label_4dcc0c;
        case 0x4dcc10u: goto label_4dcc10;
        case 0x4dcc14u: goto label_4dcc14;
        case 0x4dcc18u: goto label_4dcc18;
        case 0x4dcc1cu: goto label_4dcc1c;
        case 0x4dcc20u: goto label_4dcc20;
        case 0x4dcc24u: goto label_4dcc24;
        case 0x4dcc28u: goto label_4dcc28;
        case 0x4dcc2cu: goto label_4dcc2c;
        case 0x4dcc30u: goto label_4dcc30;
        case 0x4dcc34u: goto label_4dcc34;
        default: break;
    }

    ctx->pc = 0x4dcbb8u;

label_4dcbb8:
    // 0x4dcbb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4dcbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4dcbbc:
    // 0x4dcbbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4dcbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4dcbc0:
    // 0x4dcbc0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4dcbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4dcbc4:
    // 0x4dcbc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dcbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dcbc8:
    // 0x4dcbc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4dcbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4dcbcc:
    // 0x4dcbcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4dcbccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dcbd0:
    // 0x4dcbd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dcbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dcbd4:
    // 0x4dcbd4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4dcbd8:
    if (ctx->pc == 0x4DCBD8u) {
        ctx->pc = 0x4DCBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCBD4u;
        // 0x4dcbd8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCBDCu;
        goto label_4dcbdc;
    }
    ctx->pc = 0x4DCBD4u;
    {
        const bool branch_taken_0x4dcbd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DCBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCBD4u;
        // 0x4dcbd8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcbd4) {
            ctx->pc = 0x4DCC1Cu;
            goto label_4dcc1c;
        }
    }
    ctx->pc = 0x4DCBDCu;
label_4dcbdc:
    // 0x4dcbdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4dcbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dcbe0:
    // 0x4dcbe0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4dcbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4dcbe4:
    // 0x4dcbe4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4dcbe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4dcbe8:
    // 0x4dcbe8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4dcbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4dcbec:
    // 0x4dcbec: 0x60f809  jalr        $v1
label_4dcbf0:
    if (ctx->pc == 0x4DCBF0u) {
        ctx->pc = 0x4DCBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCBECu;
        // 0x4dcbf0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCBF4u;
        goto label_4dcbf4;
    }
    ctx->pc = 0x4DCBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DCBF4u);
        ctx->pc = 0x4DCBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCBECu;
        // 0x4dcbf0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCBECu, 0x4DCBF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DCBF4u;
label_4dcbf4:
    // 0x4dcbf4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4dcbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4dcbf8:
    // 0x4dcbf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4dcbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dcbfc:
    // 0x4dcbfc: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4dcbfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4dcc00:
    // 0x4dcc00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4dcc00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dcc04:
    // 0x4dcc04: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4dcc04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4dcc08:
    // 0x4dcc08: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4dcc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4dcc0c:
    // 0x4dcc0c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4dcc0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4dcc10:
    // 0x4dcc10: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4dcc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4dcc14:
    // 0x4dcc14: 0x60f809  jalr        $v1
label_4dcc18:
    if (ctx->pc == 0x4DCC18u) {
        ctx->pc = 0x4DCC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCC14u;
        // 0x4dcc18: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCC1Cu;
        goto label_4dcc1c;
    }
    ctx->pc = 0x4DCC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DCC1Cu);
        ctx->pc = 0x4DCC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCC14u;
        // 0x4dcc18: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCC14u, 0x4DCC1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DCC1Cu;
label_4dcc1c:
    // 0x4dcc1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4dcc1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dcc20:
    // 0x4dcc20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4dcc20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dcc24:
    // 0x4dcc24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4dcc24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dcc28:
    // 0x4dcc28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dcc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dcc2c:
    // 0x4dcc2c: 0x3e00008  jr          $ra
label_4dcc30:
    if (ctx->pc == 0x4DCC30u) {
        ctx->pc = 0x4DCC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCC2Cu;
        // 0x4dcc30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCC34u;
        goto label_4dcc34;
    }
    ctx->pc = 0x4DCC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCC2Cu;
        // 0x4dcc30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DCC34u;
label_4dcc34:
    // 0x4dcc34: 0x0  nop
    ctx->pc = 0x4dcc34u;
    // NOP
    ctx->pc = 0x4dcc38u;
}
