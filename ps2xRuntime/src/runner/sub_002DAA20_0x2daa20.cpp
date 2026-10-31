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

// Function: sub_002DAA20
// Address: 0x2daa20 - 0x2daac8
void sub_002DAA20_0x2daa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAA20_0x2daa20");
#endif

    switch (ctx->pc) {
        case 0x2daa20u: goto label_2daa20;
        case 0x2daa24u: goto label_2daa24;
        case 0x2daa28u: goto label_2daa28;
        case 0x2daa2cu: goto label_2daa2c;
        case 0x2daa30u: goto label_2daa30;
        case 0x2daa34u: goto label_2daa34;
        case 0x2daa38u: goto label_2daa38;
        case 0x2daa3cu: goto label_2daa3c;
        case 0x2daa40u: goto label_2daa40;
        case 0x2daa44u: goto label_2daa44;
        case 0x2daa48u: goto label_2daa48;
        case 0x2daa4cu: goto label_2daa4c;
        case 0x2daa50u: goto label_2daa50;
        case 0x2daa54u: goto label_2daa54;
        case 0x2daa58u: goto label_2daa58;
        case 0x2daa5cu: goto label_2daa5c;
        case 0x2daa60u: goto label_2daa60;
        case 0x2daa64u: goto label_2daa64;
        case 0x2daa68u: goto label_2daa68;
        case 0x2daa6cu: goto label_2daa6c;
        case 0x2daa70u: goto label_2daa70;
        case 0x2daa74u: goto label_2daa74;
        case 0x2daa78u: goto label_2daa78;
        case 0x2daa7cu: goto label_2daa7c;
        case 0x2daa80u: goto label_2daa80;
        case 0x2daa84u: goto label_2daa84;
        case 0x2daa88u: goto label_2daa88;
        case 0x2daa8cu: goto label_2daa8c;
        case 0x2daa90u: goto label_2daa90;
        case 0x2daa94u: goto label_2daa94;
        case 0x2daa98u: goto label_2daa98;
        case 0x2daa9cu: goto label_2daa9c;
        case 0x2daaa0u: goto label_2daaa0;
        case 0x2daaa4u: goto label_2daaa4;
        case 0x2daaa8u: goto label_2daaa8;
        case 0x2daaacu: goto label_2daaac;
        case 0x2daab0u: goto label_2daab0;
        case 0x2daab4u: goto label_2daab4;
        case 0x2daab8u: goto label_2daab8;
        case 0x2daabcu: goto label_2daabc;
        case 0x2daac0u: goto label_2daac0;
        case 0x2daac4u: goto label_2daac4;
        default: break;
    }

    ctx->pc = 0x2daa20u;

label_2daa20:
    // 0x2daa20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2daa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2daa24:
    // 0x2daa24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2daa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2daa28:
    // 0x2daa28: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2daa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2daa2c:
    // 0x2daa2c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2daa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2daa30:
    // 0x2daa30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2daa30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2daa34:
    // 0x2daa34: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2daa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2daa38:
    // 0x2daa38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2daa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2daa3c:
    // 0x2daa3c: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x2daa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_2daa40:
    // 0x2daa40: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
label_2daa44:
    if (ctx->pc == 0x2DAA44u) {
        ctx->pc = 0x2DAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA40u;
        // 0x2daa44: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAA48u;
        goto label_2daa48;
    }
    ctx->pc = 0x2DAA40u;
    {
        const bool branch_taken_0x2daa40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA40u;
        // 0x2daa44: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa40) {
            ctx->pc = 0x2DAAA8u;
            goto label_2daaa8;
        }
    }
    ctx->pc = 0x2DAA48u;
label_2daa48:
    // 0x2daa48: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2daa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2daa4c:
    // 0x2daa4c: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x2daa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2daa50:
    // 0x2daa50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2daa50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2daa54:
    // 0x2daa54: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2daa54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2daa58:
    // 0x2daa58: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2daa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_2daa5c:
    // 0x2daa5c: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x2daa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
label_2daa60:
    // 0x2daa60: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2daa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2daa64:
    // 0x2daa64: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2daa64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2daa68:
    // 0x2daa68: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2daa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2daa6c:
    // 0x2daa6c: 0x40f809  jalr        $v0
label_2daa70:
    if (ctx->pc == 0x2DAA70u) {
        ctx->pc = 0x2DAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA6Cu;
        // 0x2daa70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAA74u;
        goto label_2daa74;
    }
    ctx->pc = 0x2DAA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DAA74u);
        ctx->pc = 0x2DAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA6Cu;
        // 0x2daa70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAA6Cu, 0x2DAA74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DAA74u;
label_2daa74:
    // 0x2daa74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2daa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2daa78:
    // 0x2daa78: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2daa78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2daa7c:
    // 0x2daa7c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2daa7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2daa80:
    // 0x2daa80: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2daa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2daa84:
    // 0x2daa84: 0x8cb1020c  lw          $s1, 0x20C($a1)
    ctx->pc = 0x2daa84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
label_2daa88:
    // 0x2daa88: 0x40f809  jalr        $v0
label_2daa8c:
    if (ctx->pc == 0x2DAA8Cu) {
        ctx->pc = 0x2DAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA88u;
        // 0x2daa8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAA90u;
        goto label_2daa90;
    }
    ctx->pc = 0x2DAA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DAA90u);
        ctx->pc = 0x2DAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA88u;
        // 0x2daa8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAA88u, 0x2DAA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DAA90u;
label_2daa90:
    // 0x2daa90: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2daa90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_2daa94:
    // 0x2daa94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2daa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2daa98:
    // 0x2daa98: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2daa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2daa9c:
    // 0x2daa9c: 0xc059308  jal         func_164C20
label_2daaa0:
    if (ctx->pc == 0x2DAAA0u) {
        ctx->pc = 0x2DAAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA9Cu;
        // 0x2daaa0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAAA4u;
        goto label_2daaa4;
    }
    ctx->pc = 0x2DAA9Cu;
    SET_GPR_U32(ctx, 31, 0x2DAAA4u);
    ctx->pc = 0x2DAAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAA9Cu;
    // 0x2daaa0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C20u, 0x2DAA9Cu, 0x2DAAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAAA4u;
label_2daaa4:
    // 0x2daaa4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2daaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2daaa8:
    // 0x2daaa8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2daaa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2daaac:
    // 0x2daaac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2daaacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2daab0:
    // 0x2daab0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2daab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2daab4:
    // 0x2daab4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2daab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2daab8:
    // 0x2daab8: 0xa04002d7  sb          $zero, 0x2D7($v0)
    ctx->pc = 0x2daab8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 727), (uint8_t)GPR_U32(ctx, 0));
label_2daabc:
    // 0x2daabc: 0x3e00008  jr          $ra
label_2daac0:
    if (ctx->pc == 0x2DAAC0u) {
        ctx->pc = 0x2DAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAABCu;
        // 0x2daac0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAAC4u;
        goto label_2daac4;
    }
    ctx->pc = 0x2DAABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAABCu;
        // 0x2daac0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAAC4u;
label_2daac4:
    // 0x2daac4: 0x0  nop
    ctx->pc = 0x2daac4u;
    // NOP
    ctx->pc = 0x2daac8u;
}
