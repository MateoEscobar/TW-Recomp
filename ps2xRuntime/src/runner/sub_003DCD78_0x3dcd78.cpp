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

// Function: sub_003DCD78
// Address: 0x3dcd78 - 0x3dce18
void sub_003DCD78_0x3dcd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCD78_0x3dcd78");
#endif

    switch (ctx->pc) {
        case 0x3dcd78u: goto label_3dcd78;
        case 0x3dcd7cu: goto label_3dcd7c;
        case 0x3dcd80u: goto label_3dcd80;
        case 0x3dcd84u: goto label_3dcd84;
        case 0x3dcd88u: goto label_3dcd88;
        case 0x3dcd8cu: goto label_3dcd8c;
        case 0x3dcd90u: goto label_3dcd90;
        case 0x3dcd94u: goto label_3dcd94;
        case 0x3dcd98u: goto label_3dcd98;
        case 0x3dcd9cu: goto label_3dcd9c;
        case 0x3dcda0u: goto label_3dcda0;
        case 0x3dcda4u: goto label_3dcda4;
        case 0x3dcda8u: goto label_3dcda8;
        case 0x3dcdacu: goto label_3dcdac;
        case 0x3dcdb0u: goto label_3dcdb0;
        case 0x3dcdb4u: goto label_3dcdb4;
        case 0x3dcdb8u: goto label_3dcdb8;
        case 0x3dcdbcu: goto label_3dcdbc;
        case 0x3dcdc0u: goto label_3dcdc0;
        case 0x3dcdc4u: goto label_3dcdc4;
        case 0x3dcdc8u: goto label_3dcdc8;
        case 0x3dcdccu: goto label_3dcdcc;
        case 0x3dcdd0u: goto label_3dcdd0;
        case 0x3dcdd4u: goto label_3dcdd4;
        case 0x3dcdd8u: goto label_3dcdd8;
        case 0x3dcddcu: goto label_3dcddc;
        case 0x3dcde0u: goto label_3dcde0;
        case 0x3dcde4u: goto label_3dcde4;
        case 0x3dcde8u: goto label_3dcde8;
        case 0x3dcdecu: goto label_3dcdec;
        case 0x3dcdf0u: goto label_3dcdf0;
        case 0x3dcdf4u: goto label_3dcdf4;
        case 0x3dcdf8u: goto label_3dcdf8;
        case 0x3dcdfcu: goto label_3dcdfc;
        case 0x3dce00u: goto label_3dce00;
        case 0x3dce04u: goto label_3dce04;
        case 0x3dce08u: goto label_3dce08;
        case 0x3dce0cu: goto label_3dce0c;
        case 0x3dce10u: goto label_3dce10;
        case 0x3dce14u: goto label_3dce14;
        default: break;
    }

    ctx->pc = 0x3dcd78u;

label_3dcd78:
    // 0x3dcd78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dcd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3dcd7c:
    // 0x3dcd7c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3dcd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3dcd80:
    // 0x3dcd80: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3dcd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3dcd84:
    // 0x3dcd84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dcd84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dcd88:
    // 0x3dcd88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dcd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dcd8c:
    // 0x3dcd8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dcd8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dcd90:
    // 0x3dcd90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dcd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dcd94:
    // 0x3dcd94: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dcd94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dcd98:
    // 0x3dcd98: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dcd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dcd9c:
    // 0x3dcd9c: 0x40f809  jalr        $v0
label_3dcda0:
    if (ctx->pc == 0x3DCDA0u) {
        ctx->pc = 0x3DCDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD9Cu;
        // 0x3dcda0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCDA4u;
        goto label_3dcda4;
    }
    ctx->pc = 0x3DCD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DCDA4u);
        ctx->pc = 0x3DCDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCD9Cu;
        // 0x3dcda0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCD9Cu, 0x3DCDA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DCDA4u;
label_3dcda4:
    // 0x3dcda4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3dcda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dcda8:
    // 0x3dcda8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dcda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dcdac:
    // 0x3dcdac: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3dcdacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3dcdb0:
    // 0x3dcdb0: 0xc0e858c  jal         func_3A1630
label_3dcdb4:
    if (ctx->pc == 0x3DCDB4u) {
        ctx->pc = 0x3DCDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCDB0u;
        // 0x3dcdb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCDB8u;
        goto label_3dcdb8;
    }
    ctx->pc = 0x3DCDB0u;
    SET_GPR_U32(ctx, 31, 0x3DCDB8u);
    ctx->pc = 0x3DCDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCDB0u;
    // 0x3dcdb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DCDB0u, 0x3DCDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCDB8u;
label_3dcdb8:
    // 0x3dcdb8: 0xc0ea14c  jal         func_3A8530
label_3dcdbc:
    if (ctx->pc == 0x3DCDBCu) {
        ctx->pc = 0x3DCDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCDB8u;
        // 0x3dcdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCDC0u;
        goto label_3dcdc0;
    }
    ctx->pc = 0x3DCDB8u;
    SET_GPR_U32(ctx, 31, 0x3DCDC0u);
    ctx->pc = 0x3DCDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCDB8u;
    // 0x3dcdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DCDB8u, 0x3DCDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCDC0u;
label_3dcdc0:
    // 0x3dcdc0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dcdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcdc4:
    // 0x3dcdc4: 0xc0ea12a  jal         func_3A84A8
label_3dcdc8:
    if (ctx->pc == 0x3DCDC8u) {
        ctx->pc = 0x3DCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCDC4u;
        // 0x3dcdc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCDCCu;
        goto label_3dcdcc;
    }
    ctx->pc = 0x3DCDC4u;
    SET_GPR_U32(ctx, 31, 0x3DCDCCu);
    ctx->pc = 0x3DCDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCDC4u;
    // 0x3dcdc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DCDC4u, 0x3DCDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCDCCu;
label_3dcdcc:
    // 0x3dcdcc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dcdccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dcdd0:
    // 0x3dcdd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dcdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dcdd4:
    // 0x3dcdd4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dcdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcdd8:
    // 0x3dcdd8: 0xc0ea12a  jal         func_3A84A8
label_3dcddc:
    if (ctx->pc == 0x3DCDDCu) {
        ctx->pc = 0x3DCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCDD8u;
        // 0x3dcddc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCDE0u;
        goto label_3dcde0;
    }
    ctx->pc = 0x3DCDD8u;
    SET_GPR_U32(ctx, 31, 0x3DCDE0u);
    ctx->pc = 0x3DCDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCDD8u;
    // 0x3dcddc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DCDD8u, 0x3DCDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCDE0u;
label_3dcde0:
    // 0x3dcde0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dcde0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dcde4:
    // 0x3dcde4: 0x3c052295  lui         $a1, 0x2295
    ctx->pc = 0x3dcde4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8853 << 16));
label_3dcde8:
    // 0x3dcde8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3dcde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dcdec:
    // 0x3dcdec: 0x34a5785e  ori         $a1, $a1, 0x785E
    ctx->pc = 0x3dcdecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30814);
label_3dcdf0:
    // 0x3dcdf0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3dcdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3dcdf4:
    // 0x3dcdf4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3dcdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcdf8:
    // 0x3dcdf8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3dcdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3dcdfc:
    // 0x3dcdfc: 0xc045cb2  jal         func_1172C8
label_3dce00:
    if (ctx->pc == 0x3DCE00u) {
        ctx->pc = 0x3DCE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCDFCu;
        // 0x3dce00: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE04u;
        goto label_3dce04;
    }
    ctx->pc = 0x3DCDFCu;
    SET_GPR_U32(ctx, 31, 0x3DCE04u);
    ctx->pc = 0x3DCE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCDFCu;
    // 0x3dce00: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3DCDFCu, 0x3DCE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCE04u;
label_3dce04:
    // 0x3dce04: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3dce04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dce08:
    // 0x3dce08: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3dce08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dce0c:
    // 0x3dce0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dce0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3dce10:
    // 0x3dce10: 0x3e00008  jr          $ra
label_3dce14:
    if (ctx->pc == 0x3DCE14u) {
        ctx->pc = 0x3DCE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE10u;
        // 0x3dce14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE18u;
        goto label_fallthrough_0x3dce10;
    }
    ctx->pc = 0x3DCE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE10u;
        // 0x3dce14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dce10:
    ctx->pc = 0x3DCE18u;
}
