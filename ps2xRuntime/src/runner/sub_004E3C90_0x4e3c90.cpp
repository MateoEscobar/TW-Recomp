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

// Function: sub_004E3C90
// Address: 0x4e3c90 - 0x4e3d10
void sub_004E3C90_0x4e3c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3C90_0x4e3c90");
#endif

    switch (ctx->pc) {
        case 0x4e3c90u: goto label_4e3c90;
        case 0x4e3c94u: goto label_4e3c94;
        case 0x4e3c98u: goto label_4e3c98;
        case 0x4e3c9cu: goto label_4e3c9c;
        case 0x4e3ca0u: goto label_4e3ca0;
        case 0x4e3ca4u: goto label_4e3ca4;
        case 0x4e3ca8u: goto label_4e3ca8;
        case 0x4e3cacu: goto label_4e3cac;
        case 0x4e3cb0u: goto label_4e3cb0;
        case 0x4e3cb4u: goto label_4e3cb4;
        case 0x4e3cb8u: goto label_4e3cb8;
        case 0x4e3cbcu: goto label_4e3cbc;
        case 0x4e3cc0u: goto label_4e3cc0;
        case 0x4e3cc4u: goto label_4e3cc4;
        case 0x4e3cc8u: goto label_4e3cc8;
        case 0x4e3cccu: goto label_4e3ccc;
        case 0x4e3cd0u: goto label_4e3cd0;
        case 0x4e3cd4u: goto label_4e3cd4;
        case 0x4e3cd8u: goto label_4e3cd8;
        case 0x4e3cdcu: goto label_4e3cdc;
        case 0x4e3ce0u: goto label_4e3ce0;
        case 0x4e3ce4u: goto label_4e3ce4;
        case 0x4e3ce8u: goto label_4e3ce8;
        case 0x4e3cecu: goto label_4e3cec;
        case 0x4e3cf0u: goto label_4e3cf0;
        case 0x4e3cf4u: goto label_4e3cf4;
        case 0x4e3cf8u: goto label_4e3cf8;
        case 0x4e3cfcu: goto label_4e3cfc;
        case 0x4e3d00u: goto label_4e3d00;
        case 0x4e3d04u: goto label_4e3d04;
        case 0x4e3d08u: goto label_4e3d08;
        case 0x4e3d0cu: goto label_4e3d0c;
        default: break;
    }

    ctx->pc = 0x4e3c90u;

label_4e3c90:
    // 0x4e3c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e3c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e3c94:
    // 0x4e3c94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e3c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e3c98:
    // 0x4e3c98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e3c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e3c9c:
    // 0x4e3c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e3c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e3ca0:
    // 0x4e3ca0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e3ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e3ca4:
    // 0x4e3ca4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e3ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e3ca8:
    // 0x4e3ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e3cac:
    // 0x4e3cac: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e3cb0:
    if (ctx->pc == 0x4E3CB0u) {
        ctx->pc = 0x4E3CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3CACu;
        // 0x4e3cb0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3CB4u;
        goto label_4e3cb4;
    }
    ctx->pc = 0x4E3CACu;
    {
        const bool branch_taken_0x4e3cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3CACu;
        // 0x4e3cb0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3cac) {
            ctx->pc = 0x4E3CF4u;
            goto label_4e3cf4;
        }
    }
    ctx->pc = 0x4E3CB4u;
label_4e3cb4:
    // 0x4e3cb4: 0x8e02330c  lw          $v0, 0x330C($s0)
    ctx->pc = 0x4e3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13068)));
label_4e3cb8:
    // 0x4e3cb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e3cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e3cbc:
    // 0x4e3cbc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4e3cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4e3cc0:
    // 0x4e3cc0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4e3cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e3cc4:
    // 0x4e3cc4: 0x60f809  jalr        $v1
label_4e3cc8:
    if (ctx->pc == 0x4E3CC8u) {
        ctx->pc = 0x4E3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3CC4u;
        // 0x4e3cc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3CCCu;
        goto label_4e3ccc;
    }
    ctx->pc = 0x4E3CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E3CCCu);
        ctx->pc = 0x4E3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3CC4u;
        // 0x4e3cc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3CC4u, 0x4E3CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3CCCu;
label_4e3ccc:
    // 0x4e3ccc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e3cd0:
    // 0x4e3cd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e3cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3cd4:
    // 0x4e3cd4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e3cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e3cd8:
    // 0x4e3cd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e3cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e3cdc:
    // 0x4e3cdc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e3cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e3ce0:
    // 0x4e3ce0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e3ce4:
    // 0x4e3ce4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e3ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e3ce8:
    // 0x4e3ce8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e3cec:
    // 0x4e3cec: 0x60f809  jalr        $v1
label_4e3cf0:
    if (ctx->pc == 0x4E3CF0u) {
        ctx->pc = 0x4E3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3CECu;
        // 0x4e3cf0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3CF4u;
        goto label_4e3cf4;
    }
    ctx->pc = 0x4E3CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E3CF4u);
        ctx->pc = 0x4E3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3CECu;
        // 0x4e3cf0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3CECu, 0x4E3CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3CF4u;
label_4e3cf4:
    // 0x4e3cf4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e3cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e3cf8:
    // 0x4e3cf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e3cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e3cfc:
    // 0x4e3cfc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e3cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e3d00:
    // 0x4e3d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e3d04:
    // 0x4e3d04: 0x3e00008  jr          $ra
label_4e3d08:
    if (ctx->pc == 0x4E3D08u) {
        ctx->pc = 0x4E3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3D04u;
        // 0x4e3d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3D0Cu;
        goto label_4e3d0c;
    }
    ctx->pc = 0x4E3D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3D04u;
        // 0x4e3d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3D0Cu;
label_4e3d0c:
    // 0x4e3d0c: 0x0  nop
    ctx->pc = 0x4e3d0cu;
    // NOP
    ctx->pc = 0x4e3d10u;
}
