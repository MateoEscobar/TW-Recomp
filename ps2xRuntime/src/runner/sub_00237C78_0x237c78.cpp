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

// Function: sub_00237C78
// Address: 0x237c78 - 0x237d08
void sub_00237C78_0x237c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237C78_0x237c78");
#endif

    switch (ctx->pc) {
        case 0x237c78u: goto label_237c78;
        case 0x237c7cu: goto label_237c7c;
        case 0x237c80u: goto label_237c80;
        case 0x237c84u: goto label_237c84;
        case 0x237c88u: goto label_237c88;
        case 0x237c8cu: goto label_237c8c;
        case 0x237c90u: goto label_237c90;
        case 0x237c94u: goto label_237c94;
        case 0x237c98u: goto label_237c98;
        case 0x237c9cu: goto label_237c9c;
        case 0x237ca0u: goto label_237ca0;
        case 0x237ca4u: goto label_237ca4;
        case 0x237ca8u: goto label_237ca8;
        case 0x237cacu: goto label_237cac;
        case 0x237cb0u: goto label_237cb0;
        case 0x237cb4u: goto label_237cb4;
        case 0x237cb8u: goto label_237cb8;
        case 0x237cbcu: goto label_237cbc;
        case 0x237cc0u: goto label_237cc0;
        case 0x237cc4u: goto label_237cc4;
        case 0x237cc8u: goto label_237cc8;
        case 0x237cccu: goto label_237ccc;
        case 0x237cd0u: goto label_237cd0;
        case 0x237cd4u: goto label_237cd4;
        case 0x237cd8u: goto label_237cd8;
        case 0x237cdcu: goto label_237cdc;
        case 0x237ce0u: goto label_237ce0;
        case 0x237ce4u: goto label_237ce4;
        case 0x237ce8u: goto label_237ce8;
        case 0x237cecu: goto label_237cec;
        case 0x237cf0u: goto label_237cf0;
        case 0x237cf4u: goto label_237cf4;
        case 0x237cf8u: goto label_237cf8;
        case 0x237cfcu: goto label_237cfc;
        case 0x237d00u: goto label_237d00;
        case 0x237d04u: goto label_237d04;
        default: break;
    }

    ctx->pc = 0x237c78u;

label_237c78:
    // 0x237c78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_237c7c:
    // 0x237c7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x237c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_237c80:
    // 0x237c80: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_237c84:
    // 0x237c84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x237c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_237c88:
    // 0x237c88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_237c8c:
    // 0x237c8c: 0xc0e4060  jal         func_390180
label_237c90:
    if (ctx->pc == 0x237C90u) {
        ctx->pc = 0x237C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C8Cu;
        // 0x237c90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C94u;
        goto label_237c94;
    }
    ctx->pc = 0x237C8Cu;
    SET_GPR_U32(ctx, 31, 0x237C94u);
    ctx->pc = 0x237C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C8Cu;
    // 0x237c90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237C8Cu, 0x237C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C94u;
label_237c94:
    // 0x237c94: 0xc08a61a  jal         func_229868
label_237c98:
    if (ctx->pc == 0x237C98u) {
        ctx->pc = 0x237C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C94u;
        // 0x237c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C9Cu;
        goto label_237c9c;
    }
    ctx->pc = 0x237C94u;
    SET_GPR_U32(ctx, 31, 0x237C9Cu);
    ctx->pc = 0x237C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C94u;
    // 0x237c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237C94u, 0x237C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C9Cu;
label_237c9c:
    // 0x237c9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x237c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237ca0:
    // 0x237ca0: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
label_237ca4:
    if (ctx->pc == 0x237CA4u) {
        ctx->pc = 0x237CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CA0u;
        // 0x237ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237CA8u;
        goto label_237ca8;
    }
    ctx->pc = 0x237CA0u;
    {
        const bool branch_taken_0x237ca0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CA0u;
        // 0x237ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ca0) {
            ctx->pc = 0x237CF4u;
            goto label_237cf4;
        }
    }
    ctx->pc = 0x237CA8u;
label_237ca8:
    // 0x237ca8: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
label_237cac:
    if (ctx->pc == 0x237CACu) {
        ctx->pc = 0x237CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CA8u;
        // 0x237cac: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237CB0u;
        goto label_237cb0;
    }
    ctx->pc = 0x237CA8u;
    {
        const bool branch_taken_0x237ca8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x237CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CA8u;
        // 0x237cac: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ca8) {
            ctx->pc = 0x237CD8u;
            goto label_237cd8;
        }
    }
    ctx->pc = 0x237CB0u;
label_237cb0:
    // 0x237cb0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x237cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_237cb4:
    // 0x237cb4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x237cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_237cb8:
    // 0x237cb8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x237cb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_237cbc:
    // 0x237cbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x237cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_237cc0:
    // 0x237cc0: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x237cc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_237cc4:
    // 0x237cc4: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x237cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_237cc8:
    // 0x237cc8: 0x60f809  jalr        $v1
label_237ccc:
    if (ctx->pc == 0x237CCCu) {
        ctx->pc = 0x237CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CC8u;
        // 0x237ccc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237CD0u;
        goto label_237cd0;
    }
    ctx->pc = 0x237CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x237CD0u);
        ctx->pc = 0x237CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CC8u;
        // 0x237ccc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237CC8u, 0x237CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237CD0u;
label_237cd0:
    // 0x237cd0: 0x10000009  b           . + 4 + (0x9 << 2)
label_237cd4:
    if (ctx->pc == 0x237CD4u) {
        ctx->pc = 0x237CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CD0u;
        // 0x237cd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237CD8u;
        goto label_237cd8;
    }
    ctx->pc = 0x237CD0u;
    {
        const bool branch_taken_0x237cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CD0u;
        // 0x237cd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cd0) {
            ctx->pc = 0x237CF8u;
            goto label_237cf8;
        }
    }
    ctx->pc = 0x237CD8u;
label_237cd8:
    // 0x237cd8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x237cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_237cdc:
    // 0x237cdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x237cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_237ce0:
    // 0x237ce0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x237ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_237ce4:
    // 0x237ce4: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x237ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_237ce8:
    // 0x237ce8: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x237ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_237cec:
    // 0x237cec: 0x60f809  jalr        $v1
label_237cf0:
    if (ctx->pc == 0x237CF0u) {
        ctx->pc = 0x237CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CECu;
        // 0x237cf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237CF4u;
        goto label_237cf4;
    }
    ctx->pc = 0x237CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x237CF4u);
        ctx->pc = 0x237CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CECu;
        // 0x237cf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237CECu, 0x237CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237CF4u;
label_237cf4:
    // 0x237cf4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_237cf8:
    // 0x237cf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237cfc:
    // 0x237cfc: 0x3e00008  jr          $ra
label_237d00:
    if (ctx->pc == 0x237D00u) {
        ctx->pc = 0x237D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CFCu;
        // 0x237d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D04u;
        goto label_237d04;
    }
    ctx->pc = 0x237CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CFCu;
        // 0x237d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237D04u;
label_237d04:
    // 0x237d04: 0x0  nop
    ctx->pc = 0x237d04u;
    // NOP
    ctx->pc = 0x237d08u;
}
