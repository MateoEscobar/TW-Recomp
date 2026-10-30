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

// Function: sub_003DAC68
// Address: 0x3dac68 - 0x3dacf0
void sub_003DAC68_0x3dac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAC68_0x3dac68");
#endif

    switch (ctx->pc) {
        case 0x3dac68u: goto label_3dac68;
        case 0x3dac6cu: goto label_3dac6c;
        case 0x3dac70u: goto label_3dac70;
        case 0x3dac74u: goto label_3dac74;
        case 0x3dac78u: goto label_3dac78;
        case 0x3dac7cu: goto label_3dac7c;
        case 0x3dac80u: goto label_3dac80;
        case 0x3dac84u: goto label_3dac84;
        case 0x3dac88u: goto label_3dac88;
        case 0x3dac8cu: goto label_3dac8c;
        case 0x3dac90u: goto label_3dac90;
        case 0x3dac94u: goto label_3dac94;
        case 0x3dac98u: goto label_3dac98;
        case 0x3dac9cu: goto label_3dac9c;
        case 0x3daca0u: goto label_3daca0;
        case 0x3daca4u: goto label_3daca4;
        case 0x3daca8u: goto label_3daca8;
        case 0x3dacacu: goto label_3dacac;
        case 0x3dacb0u: goto label_3dacb0;
        case 0x3dacb4u: goto label_3dacb4;
        case 0x3dacb8u: goto label_3dacb8;
        case 0x3dacbcu: goto label_3dacbc;
        case 0x3dacc0u: goto label_3dacc0;
        case 0x3dacc4u: goto label_3dacc4;
        case 0x3dacc8u: goto label_3dacc8;
        case 0x3dacccu: goto label_3daccc;
        case 0x3dacd0u: goto label_3dacd0;
        case 0x3dacd4u: goto label_3dacd4;
        case 0x3dacd8u: goto label_3dacd8;
        case 0x3dacdcu: goto label_3dacdc;
        case 0x3dace0u: goto label_3dace0;
        case 0x3dace4u: goto label_3dace4;
        case 0x3dace8u: goto label_3dace8;
        case 0x3dacecu: goto label_3dacec;
        default: break;
    }

    ctx->pc = 0x3dac68u;

label_3dac68:
    // 0x3dac68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dac68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3dac6c:
    // 0x3dac6c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3dac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3dac70:
    // 0x3dac70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3dac70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3dac74:
    // 0x3dac74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dac74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dac78:
    // 0x3dac78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dac7c:
    // 0x3dac7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3dac7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dac80:
    // 0x3dac80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3dac80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dac84:
    // 0x3dac84: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dac84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dac88:
    // 0x3dac88: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dac8c:
    // 0x3dac8c: 0x40f809  jalr        $v0
label_3dac90:
    if (ctx->pc == 0x3DAC90u) {
        ctx->pc = 0x3DAC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC8Cu;
        // 0x3dac90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAC94u;
        goto label_3dac94;
    }
    ctx->pc = 0x3DAC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DAC94u);
        ctx->pc = 0x3DAC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC8Cu;
        // 0x3dac90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAC8Cu, 0x3DAC94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DAC94u;
label_3dac94:
    // 0x3dac94: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x3dac94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_3dac98:
    // 0x3dac98: 0xc0e858c  jal         func_3A1630
label_3dac9c:
    if (ctx->pc == 0x3DAC9Cu) {
        ctx->pc = 0x3DAC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC98u;
        // 0x3dac9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DACA0u;
        goto label_3daca0;
    }
    ctx->pc = 0x3DAC98u;
    SET_GPR_U32(ctx, 31, 0x3DACA0u);
    ctx->pc = 0x3DAC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAC98u;
    // 0x3dac9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DAC98u, 0x3DACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DACA0u;
label_3daca0:
    // 0x3daca0: 0x24020404  addiu       $v0, $zero, 0x404
    ctx->pc = 0x3daca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3daca4:
    // 0x3daca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3daca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3daca8:
    // 0x3daca8: 0xc0ea14c  jal         func_3A8530
label_3dacac:
    if (ctx->pc == 0x3DACACu) {
        ctx->pc = 0x3DACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DACA8u;
        // 0x3dacac: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DACB0u;
        goto label_3dacb0;
    }
    ctx->pc = 0x3DACA8u;
    SET_GPR_U32(ctx, 31, 0x3DACB0u);
    ctx->pc = 0x3DACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DACA8u;
    // 0x3dacac: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DACA8u, 0x3DACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DACB0u;
label_3dacb0:
    // 0x3dacb0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dacb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dacb4:
    // 0x3dacb4: 0xc0ea12a  jal         func_3A84A8
label_3dacb8:
    if (ctx->pc == 0x3DACB8u) {
        ctx->pc = 0x3DACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DACB4u;
        // 0x3dacb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DACBCu;
        goto label_3dacbc;
    }
    ctx->pc = 0x3DACB4u;
    SET_GPR_U32(ctx, 31, 0x3DACBCu);
    ctx->pc = 0x3DACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DACB4u;
    // 0x3dacb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DACB4u, 0x3DACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DACBCu;
label_3dacbc:
    // 0x3dacbc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dacbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dacc0:
    // 0x3dacc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3dacc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dacc4:
    // 0x3dacc4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dacc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dacc8:
    // 0x3dacc8: 0xc0ea12a  jal         func_3A84A8
label_3daccc:
    if (ctx->pc == 0x3DACCCu) {
        ctx->pc = 0x3DACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DACC8u;
        // 0x3daccc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DACD0u;
        goto label_3dacd0;
    }
    ctx->pc = 0x3DACC8u;
    SET_GPR_U32(ctx, 31, 0x3DACD0u);
    ctx->pc = 0x3DACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DACC8u;
    // 0x3daccc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DACC8u, 0x3DACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DACD0u;
label_3dacd0:
    // 0x3dacd0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dacd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dacd4:
    // 0x3dacd4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3dacd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dacd8:
    // 0x3dacd8: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3dacd8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3dacdc:
    // 0x3dacdc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3dacdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dace0:
    // 0x3dace0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dace0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3dace4:
    // 0x3dace4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3dace4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3dace8:
    // 0x3dace8: 0x3e00008  jr          $ra
label_3dacec:
    if (ctx->pc == 0x3DACECu) {
        ctx->pc = 0x3DACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DACE8u;
        // 0x3dacec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DACF0u;
        goto label_fallthrough_0x3dace8;
    }
    ctx->pc = 0x3DACE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DACE8u;
        // 0x3dacec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DACE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dace8:
    ctx->pc = 0x3DACF0u;
}
