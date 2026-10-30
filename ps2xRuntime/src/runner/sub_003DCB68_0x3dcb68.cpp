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

// Function: sub_003DCB68
// Address: 0x3dcb68 - 0x3dcc08
void sub_003DCB68_0x3dcb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCB68_0x3dcb68");
#endif

    switch (ctx->pc) {
        case 0x3dcb68u: goto label_3dcb68;
        case 0x3dcb6cu: goto label_3dcb6c;
        case 0x3dcb70u: goto label_3dcb70;
        case 0x3dcb74u: goto label_3dcb74;
        case 0x3dcb78u: goto label_3dcb78;
        case 0x3dcb7cu: goto label_3dcb7c;
        case 0x3dcb80u: goto label_3dcb80;
        case 0x3dcb84u: goto label_3dcb84;
        case 0x3dcb88u: goto label_3dcb88;
        case 0x3dcb8cu: goto label_3dcb8c;
        case 0x3dcb90u: goto label_3dcb90;
        case 0x3dcb94u: goto label_3dcb94;
        case 0x3dcb98u: goto label_3dcb98;
        case 0x3dcb9cu: goto label_3dcb9c;
        case 0x3dcba0u: goto label_3dcba0;
        case 0x3dcba4u: goto label_3dcba4;
        case 0x3dcba8u: goto label_3dcba8;
        case 0x3dcbacu: goto label_3dcbac;
        case 0x3dcbb0u: goto label_3dcbb0;
        case 0x3dcbb4u: goto label_3dcbb4;
        case 0x3dcbb8u: goto label_3dcbb8;
        case 0x3dcbbcu: goto label_3dcbbc;
        case 0x3dcbc0u: goto label_3dcbc0;
        case 0x3dcbc4u: goto label_3dcbc4;
        case 0x3dcbc8u: goto label_3dcbc8;
        case 0x3dcbccu: goto label_3dcbcc;
        case 0x3dcbd0u: goto label_3dcbd0;
        case 0x3dcbd4u: goto label_3dcbd4;
        case 0x3dcbd8u: goto label_3dcbd8;
        case 0x3dcbdcu: goto label_3dcbdc;
        case 0x3dcbe0u: goto label_3dcbe0;
        case 0x3dcbe4u: goto label_3dcbe4;
        case 0x3dcbe8u: goto label_3dcbe8;
        case 0x3dcbecu: goto label_3dcbec;
        case 0x3dcbf0u: goto label_3dcbf0;
        case 0x3dcbf4u: goto label_3dcbf4;
        case 0x3dcbf8u: goto label_3dcbf8;
        case 0x3dcbfcu: goto label_3dcbfc;
        case 0x3dcc00u: goto label_3dcc00;
        case 0x3dcc04u: goto label_3dcc04;
        default: break;
    }

    ctx->pc = 0x3dcb68u;

label_3dcb68:
    // 0x3dcb68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dcb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3dcb6c:
    // 0x3dcb6c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3dcb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3dcb70:
    // 0x3dcb70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3dcb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3dcb74:
    // 0x3dcb74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dcb74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dcb78:
    // 0x3dcb78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dcb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dcb7c:
    // 0x3dcb7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dcb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dcb80:
    // 0x3dcb80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dcb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dcb84:
    // 0x3dcb84: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dcb84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dcb88:
    // 0x3dcb88: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dcb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dcb8c:
    // 0x3dcb8c: 0x40f809  jalr        $v0
label_3dcb90:
    if (ctx->pc == 0x3DCB90u) {
        ctx->pc = 0x3DCB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB8Cu;
        // 0x3dcb90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCB94u;
        goto label_3dcb94;
    }
    ctx->pc = 0x3DCB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DCB94u);
        ctx->pc = 0x3DCB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB8Cu;
        // 0x3dcb90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCB8Cu, 0x3DCB94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DCB94u;
label_3dcb94:
    // 0x3dcb94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3dcb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dcb98:
    // 0x3dcb98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dcb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dcb9c:
    // 0x3dcb9c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3dcb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3dcba0:
    // 0x3dcba0: 0xc0e858c  jal         func_3A1630
label_3dcba4:
    if (ctx->pc == 0x3DCBA4u) {
        ctx->pc = 0x3DCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCBA0u;
        // 0x3dcba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCBA8u;
        goto label_3dcba8;
    }
    ctx->pc = 0x3DCBA0u;
    SET_GPR_U32(ctx, 31, 0x3DCBA8u);
    ctx->pc = 0x3DCBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCBA0u;
    // 0x3dcba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DCBA0u, 0x3DCBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCBA8u;
label_3dcba8:
    // 0x3dcba8: 0xc0ea14c  jal         func_3A8530
label_3dcbac:
    if (ctx->pc == 0x3DCBACu) {
        ctx->pc = 0x3DCBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCBA8u;
        // 0x3dcbac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCBB0u;
        goto label_3dcbb0;
    }
    ctx->pc = 0x3DCBA8u;
    SET_GPR_U32(ctx, 31, 0x3DCBB0u);
    ctx->pc = 0x3DCBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCBA8u;
    // 0x3dcbac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DCBA8u, 0x3DCBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCBB0u;
label_3dcbb0:
    // 0x3dcbb0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dcbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcbb4:
    // 0x3dcbb4: 0xc0ea12a  jal         func_3A84A8
label_3dcbb8:
    if (ctx->pc == 0x3DCBB8u) {
        ctx->pc = 0x3DCBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCBB4u;
        // 0x3dcbb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCBBCu;
        goto label_3dcbbc;
    }
    ctx->pc = 0x3DCBB4u;
    SET_GPR_U32(ctx, 31, 0x3DCBBCu);
    ctx->pc = 0x3DCBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCBB4u;
    // 0x3dcbb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DCBB4u, 0x3DCBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCBBCu;
label_3dcbbc:
    // 0x3dcbbc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dcbbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dcbc0:
    // 0x3dcbc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dcbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dcbc4:
    // 0x3dcbc4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dcbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcbc8:
    // 0x3dcbc8: 0xc0ea12a  jal         func_3A84A8
label_3dcbcc:
    if (ctx->pc == 0x3DCBCCu) {
        ctx->pc = 0x3DCBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCBC8u;
        // 0x3dcbcc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCBD0u;
        goto label_3dcbd0;
    }
    ctx->pc = 0x3DCBC8u;
    SET_GPR_U32(ctx, 31, 0x3DCBD0u);
    ctx->pc = 0x3DCBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCBC8u;
    // 0x3dcbcc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DCBC8u, 0x3DCBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCBD0u;
label_3dcbd0:
    // 0x3dcbd0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dcbd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dcbd4:
    // 0x3dcbd4: 0x3c052295  lui         $a1, 0x2295
    ctx->pc = 0x3dcbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8853 << 16));
label_3dcbd8:
    // 0x3dcbd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3dcbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dcbdc:
    // 0x3dcbdc: 0x34a5785e  ori         $a1, $a1, 0x785E
    ctx->pc = 0x3dcbdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30814);
label_3dcbe0:
    // 0x3dcbe0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3dcbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3dcbe4:
    // 0x3dcbe4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3dcbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcbe8:
    // 0x3dcbe8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3dcbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3dcbec:
    // 0x3dcbec: 0xc045cb2  jal         func_1172C8
label_3dcbf0:
    if (ctx->pc == 0x3DCBF0u) {
        ctx->pc = 0x3DCBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCBECu;
        // 0x3dcbf0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCBF4u;
        goto label_3dcbf4;
    }
    ctx->pc = 0x3DCBECu;
    SET_GPR_U32(ctx, 31, 0x3DCBF4u);
    ctx->pc = 0x3DCBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCBECu;
    // 0x3dcbf0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3DCBECu, 0x3DCBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCBF4u;
label_3dcbf4:
    // 0x3dcbf4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3dcbf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dcbf8:
    // 0x3dcbf8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3dcbf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dcbfc:
    // 0x3dcbfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dcbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3dcc00:
    // 0x3dcc00: 0x3e00008  jr          $ra
label_3dcc04:
    if (ctx->pc == 0x3DCC04u) {
        ctx->pc = 0x3DCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC00u;
        // 0x3dcc04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCC08u;
        goto label_fallthrough_0x3dcc00;
    }
    ctx->pc = 0x3DCC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC00u;
        // 0x3dcc04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dcc00:
    ctx->pc = 0x3DCC08u;
}
