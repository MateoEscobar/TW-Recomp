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

// Function: sub_003D8BD8
// Address: 0x3d8bd8 - 0x3d8d98
void sub_003D8BD8_0x3d8bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8BD8_0x3d8bd8");
#endif

    switch (ctx->pc) {
        case 0x3d8bd8u: goto label_3d8bd8;
        case 0x3d8bdcu: goto label_3d8bdc;
        case 0x3d8be0u: goto label_3d8be0;
        case 0x3d8be4u: goto label_3d8be4;
        case 0x3d8be8u: goto label_3d8be8;
        case 0x3d8becu: goto label_3d8bec;
        case 0x3d8bf0u: goto label_3d8bf0;
        case 0x3d8bf4u: goto label_3d8bf4;
        case 0x3d8bf8u: goto label_3d8bf8;
        case 0x3d8bfcu: goto label_3d8bfc;
        case 0x3d8c00u: goto label_3d8c00;
        case 0x3d8c04u: goto label_3d8c04;
        case 0x3d8c08u: goto label_3d8c08;
        case 0x3d8c0cu: goto label_3d8c0c;
        case 0x3d8c10u: goto label_3d8c10;
        case 0x3d8c14u: goto label_3d8c14;
        case 0x3d8c18u: goto label_3d8c18;
        case 0x3d8c1cu: goto label_3d8c1c;
        case 0x3d8c20u: goto label_3d8c20;
        case 0x3d8c24u: goto label_3d8c24;
        case 0x3d8c28u: goto label_3d8c28;
        case 0x3d8c2cu: goto label_3d8c2c;
        case 0x3d8c30u: goto label_3d8c30;
        case 0x3d8c34u: goto label_3d8c34;
        case 0x3d8c38u: goto label_3d8c38;
        case 0x3d8c3cu: goto label_3d8c3c;
        case 0x3d8c40u: goto label_3d8c40;
        case 0x3d8c44u: goto label_3d8c44;
        case 0x3d8c48u: goto label_3d8c48;
        case 0x3d8c4cu: goto label_3d8c4c;
        case 0x3d8c50u: goto label_3d8c50;
        case 0x3d8c54u: goto label_3d8c54;
        case 0x3d8c58u: goto label_3d8c58;
        case 0x3d8c5cu: goto label_3d8c5c;
        case 0x3d8c60u: goto label_3d8c60;
        case 0x3d8c64u: goto label_3d8c64;
        case 0x3d8c68u: goto label_3d8c68;
        case 0x3d8c6cu: goto label_3d8c6c;
        case 0x3d8c70u: goto label_3d8c70;
        case 0x3d8c74u: goto label_3d8c74;
        case 0x3d8c78u: goto label_3d8c78;
        case 0x3d8c7cu: goto label_3d8c7c;
        case 0x3d8c80u: goto label_3d8c80;
        case 0x3d8c84u: goto label_3d8c84;
        case 0x3d8c88u: goto label_3d8c88;
        case 0x3d8c8cu: goto label_3d8c8c;
        case 0x3d8c90u: goto label_3d8c90;
        case 0x3d8c94u: goto label_3d8c94;
        case 0x3d8c98u: goto label_3d8c98;
        case 0x3d8c9cu: goto label_3d8c9c;
        case 0x3d8ca0u: goto label_3d8ca0;
        case 0x3d8ca4u: goto label_3d8ca4;
        case 0x3d8ca8u: goto label_3d8ca8;
        case 0x3d8cacu: goto label_3d8cac;
        case 0x3d8cb0u: goto label_3d8cb0;
        case 0x3d8cb4u: goto label_3d8cb4;
        case 0x3d8cb8u: goto label_3d8cb8;
        case 0x3d8cbcu: goto label_3d8cbc;
        case 0x3d8cc0u: goto label_3d8cc0;
        case 0x3d8cc4u: goto label_3d8cc4;
        case 0x3d8cc8u: goto label_3d8cc8;
        case 0x3d8cccu: goto label_3d8ccc;
        case 0x3d8cd0u: goto label_3d8cd0;
        case 0x3d8cd4u: goto label_3d8cd4;
        case 0x3d8cd8u: goto label_3d8cd8;
        case 0x3d8cdcu: goto label_3d8cdc;
        case 0x3d8ce0u: goto label_3d8ce0;
        case 0x3d8ce4u: goto label_3d8ce4;
        case 0x3d8ce8u: goto label_3d8ce8;
        case 0x3d8cecu: goto label_3d8cec;
        case 0x3d8cf0u: goto label_3d8cf0;
        case 0x3d8cf4u: goto label_3d8cf4;
        case 0x3d8cf8u: goto label_3d8cf8;
        case 0x3d8cfcu: goto label_3d8cfc;
        case 0x3d8d00u: goto label_3d8d00;
        case 0x3d8d04u: goto label_3d8d04;
        case 0x3d8d08u: goto label_3d8d08;
        case 0x3d8d0cu: goto label_3d8d0c;
        case 0x3d8d10u: goto label_3d8d10;
        case 0x3d8d14u: goto label_3d8d14;
        case 0x3d8d18u: goto label_3d8d18;
        case 0x3d8d1cu: goto label_3d8d1c;
        case 0x3d8d20u: goto label_3d8d20;
        case 0x3d8d24u: goto label_3d8d24;
        case 0x3d8d28u: goto label_3d8d28;
        case 0x3d8d2cu: goto label_3d8d2c;
        case 0x3d8d30u: goto label_3d8d30;
        case 0x3d8d34u: goto label_3d8d34;
        case 0x3d8d38u: goto label_3d8d38;
        case 0x3d8d3cu: goto label_3d8d3c;
        case 0x3d8d40u: goto label_3d8d40;
        case 0x3d8d44u: goto label_3d8d44;
        case 0x3d8d48u: goto label_3d8d48;
        case 0x3d8d4cu: goto label_3d8d4c;
        case 0x3d8d50u: goto label_3d8d50;
        case 0x3d8d54u: goto label_3d8d54;
        case 0x3d8d58u: goto label_3d8d58;
        case 0x3d8d5cu: goto label_3d8d5c;
        case 0x3d8d60u: goto label_3d8d60;
        case 0x3d8d64u: goto label_3d8d64;
        case 0x3d8d68u: goto label_3d8d68;
        case 0x3d8d6cu: goto label_3d8d6c;
        case 0x3d8d70u: goto label_3d8d70;
        case 0x3d8d74u: goto label_3d8d74;
        case 0x3d8d78u: goto label_3d8d78;
        case 0x3d8d7cu: goto label_3d8d7c;
        case 0x3d8d80u: goto label_3d8d80;
        case 0x3d8d84u: goto label_3d8d84;
        case 0x3d8d88u: goto label_3d8d88;
        case 0x3d8d8cu: goto label_3d8d8c;
        case 0x3d8d90u: goto label_3d8d90;
        case 0x3d8d94u: goto label_3d8d94;
        default: break;
    }

    ctx->pc = 0x3d8bd8u;

label_3d8bd8:
    // 0x3d8bd8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3d8bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3d8bdc:
    // 0x3d8bdc: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x3d8bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_3d8be0:
    // 0x3d8be0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x3d8be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_3d8be4:
    // 0x3d8be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d8be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8be8:
    // 0x3d8be8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x3d8be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_3d8bec:
    // 0x3d8bec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d8becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d8bf0:
    // 0x3d8bf0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x3d8bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_3d8bf4:
    // 0x3d8bf4: 0x3c12fafe  lui         $s2, 0xFAFE
    ctx->pc = 0x3d8bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64254 << 16));
label_3d8bf8:
    // 0x3d8bf8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x3d8bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_3d8bfc:
    // 0x3d8bfc: 0x3652c9ff  ori         $s2, $s2, 0xC9FF
    ctx->pc = 0x3d8bfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)51711);
label_3d8c00:
    // 0x3d8c00: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3d8c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3d8c04:
    // 0x3d8c04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d8c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d8c08:
    // 0x3d8c08: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d8c08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d8c0c:
    // 0x3d8c0c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d8c10:
    // 0x3d8c10: 0x40f809  jalr        $v0
label_3d8c14:
    if (ctx->pc == 0x3D8C14u) {
        ctx->pc = 0x3D8C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C10u;
        // 0x3d8c14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8C18u;
        goto label_3d8c18;
    }
    ctx->pc = 0x3D8C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D8C18u);
        ctx->pc = 0x3D8C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C10u;
        // 0x3d8c14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8C10u, 0x3D8C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8C18u;
label_3d8c18:
    // 0x3d8c18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d8c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8c1c:
    // 0x3d8c1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d8c1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8c20:
    // 0x3d8c20: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3d8c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3d8c24:
    // 0x3d8c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d8c28:
    // 0x3d8c28: 0xc0e858c  jal         func_3A1630
label_3d8c2c:
    if (ctx->pc == 0x3D8C2Cu) {
        ctx->pc = 0x3D8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C28u;
        // 0x3d8c2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8C30u;
        goto label_3d8c30;
    }
    ctx->pc = 0x3D8C28u;
    SET_GPR_U32(ctx, 31, 0x3D8C30u);
    ctx->pc = 0x3D8C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8C28u;
    // 0x3d8c2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D8C28u, 0x3D8C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8C30u;
label_3d8c30:
    // 0x3d8c30: 0xae1200b0  sw          $s2, 0xB0($s0)
    ctx->pc = 0x3d8c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 18));
label_3d8c34:
    // 0x3d8c34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d8c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8c38:
    // 0x3d8c38: 0xc0ea14c  jal         func_3A8530
label_3d8c3c:
    if (ctx->pc == 0x3D8C3Cu) {
        ctx->pc = 0x3D8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C38u;
        // 0x3d8c3c: 0xae0000bc  sw          $zero, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8C40u;
        goto label_3d8c40;
    }
    ctx->pc = 0x3D8C38u;
    SET_GPR_U32(ctx, 31, 0x3D8C40u);
    ctx->pc = 0x3D8C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8C38u;
    // 0x3d8c3c: 0xae0000bc  sw          $zero, 0xBC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D8C38u, 0x3D8C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8C40u;
label_3d8c40:
    // 0x3d8c40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d8c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d8c44:
    // 0x3d8c44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d8c44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8c48:
    // 0x3d8c48: 0xc0ea12a  jal         func_3A84A8
label_3d8c4c:
    if (ctx->pc == 0x3D8C4Cu) {
        ctx->pc = 0x3D8C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C48u;
        // 0x3d8c4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8C50u;
        goto label_3d8c50;
    }
    ctx->pc = 0x3D8C48u;
    SET_GPR_U32(ctx, 31, 0x3D8C50u);
    ctx->pc = 0x3D8C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8C48u;
    // 0x3d8c4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D8C48u, 0x3D8C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8C50u;
label_3d8c50:
    // 0x3d8c50: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d8c50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8c54:
    // 0x3d8c54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d8c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d8c58:
    // 0x3d8c58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d8c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8c5c:
    // 0x3d8c5c: 0xc0ea12a  jal         func_3A84A8
label_3d8c60:
    if (ctx->pc == 0x3D8C60u) {
        ctx->pc = 0x3D8C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C5Cu;
        // 0x3d8c60: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8C64u;
        goto label_3d8c64;
    }
    ctx->pc = 0x3D8C5Cu;
    SET_GPR_U32(ctx, 31, 0x3D8C64u);
    ctx->pc = 0x3D8C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8C5Cu;
    // 0x3d8c60: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D8C5Cu, 0x3D8C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8C64u;
label_3d8c64:
    // 0x3d8c64: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d8c64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8c68:
    // 0x3d8c68: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3d8c68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d8c6c:
    // 0x3d8c6c: 0x8e070054  lw          $a3, 0x54($s0)
    ctx->pc = 0x3d8c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d8c70:
    // 0x3d8c70: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x3d8c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_3d8c74:
    // 0x3d8c74: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3d8c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3d8c78:
    // 0x3d8c78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d8c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8c7c:
    // 0x3d8c7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d8c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d8c80:
    // 0x3d8c80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d8c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d8c84:
    // 0x3d8c84: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3d8c84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3d8c88:
    // 0x3d8c88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d8c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8c8c:
    // 0x3d8c8c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3d8c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3d8c90:
    // 0x3d8c90: 0xc0e93a2  jal         func_3A4E88
label_3d8c94:
    if (ctx->pc == 0x3D8C94u) {
        ctx->pc = 0x3D8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C90u;
        // 0x3d8c94: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8C98u;
        goto label_3d8c98;
    }
    ctx->pc = 0x3D8C90u;
    SET_GPR_U32(ctx, 31, 0x3D8C98u);
    ctx->pc = 0x3D8C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8C90u;
    // 0x3d8c94: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3D8C90u, 0x3D8C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8C98u;
label_3d8c98:
    // 0x3d8c98: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x3d8c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_3d8c9c:
    // 0x3d8c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d8ca0:
    // 0x3d8ca0: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3d8ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3d8ca4:
    // 0x3d8ca4: 0xc0e9404  jal         func_3A5010
label_3d8ca8:
    if (ctx->pc == 0x3D8CA8u) {
        ctx->pc = 0x3D8CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8CA4u;
        // 0x3d8ca8: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8CACu;
        goto label_3d8cac;
    }
    ctx->pc = 0x3D8CA4u;
    SET_GPR_U32(ctx, 31, 0x3D8CACu);
    ctx->pc = 0x3D8CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8CA4u;
    // 0x3d8ca8: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3D8CA4u, 0x3D8CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8CACu;
label_3d8cac:
    // 0x3d8cac: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3d8cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3d8cb0:
    // 0x3d8cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d8cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8cb4:
    // 0x3d8cb4: 0xc0e911e  jal         func_3A4478
label_3d8cb8:
    if (ctx->pc == 0x3D8CB8u) {
        ctx->pc = 0x3D8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8CB4u;
        // 0x3d8cb8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8CBCu;
        goto label_3d8cbc;
    }
    ctx->pc = 0x3D8CB4u;
    SET_GPR_U32(ctx, 31, 0x3D8CBCu);
    ctx->pc = 0x3D8CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8CB4u;
    // 0x3d8cb8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3D8CB4u, 0x3D8CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8CBCu;
label_3d8cbc:
    // 0x3d8cbc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d8cbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8cc0:
    // 0x3d8cc0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3d8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d8cc4:
    // 0x3d8cc4: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x3d8cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_3d8cc8:
    // 0x3d8cc8: 0x342104f7  ori         $at, $at, 0x4F7
    ctx->pc = 0x3d8cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1271);
label_3d8ccc:
    // 0x3d8ccc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d8cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d8cd0:
    // 0x3d8cd0: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x3d8cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_3d8cd4:
    // 0x3d8cd4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3d8cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3d8cd8:
    // 0x3d8cd8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x3d8cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3d8cdc:
    // 0x3d8cdc: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3d8cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3d8ce0:
    // 0x3d8ce0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3d8ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3d8ce4:
    // 0x3d8ce4: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3d8ce4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d8ce8:
    // 0x3d8ce8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3d8ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3d8cec:
    // 0x3d8cec: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x3d8cecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_3d8cf0:
    // 0x3d8cf0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3d8cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3d8cf4:
    // 0x3d8cf4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3d8cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3d8cf8:
    // 0x3d8cf8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3d8cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3d8cfc:
    // 0x3d8cfc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d8cfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d8d00:
    // 0x3d8d00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d8d00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d8d04:
    // 0x3d8d04: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3d8d04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d8d08:
    // 0x3d8d08: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d8d08u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d8d0c:
    // 0x3d8d0c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d8d0cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d8d10:
    // 0x3d8d10: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d8d10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d8d14:
    // 0x3d8d14: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3d8d14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d8d18:
    // 0x3d8d18: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3d8d18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d8d1c:
    // 0x3d8d1c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d8d1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d8d20:
    // 0x3d8d20: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3d8d20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d8d24:
    // 0x3d8d24: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3d8d24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d8d28:
    // 0x3d8d28: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d8d28u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d8d2c:
    // 0x3d8d2c: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3d8d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3d8d30:
    // 0x3d8d30: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d8d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d8d34:
    // 0x3d8d34: 0xae1200b0  sw          $s2, 0xB0($s0)
    ctx->pc = 0x3d8d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 18));
label_3d8d38:
    // 0x3d8d38: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d8d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d8d3c:
    // 0x3d8d3c: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3d8d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3d8d40:
    // 0x3d8d40: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3d8d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3d8d44:
    // 0x3d8d44: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3d8d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3d8d48:
    // 0x3d8d48: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3d8d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3d8d4c:
    // 0x3d8d4c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3d8d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3d8d50:
    // 0x3d8d50: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3d8d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d8d54:
    // 0x3d8d54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3d8d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3d8d58:
    // 0x3d8d58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d8d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d8d5c:
    // 0x3d8d5c: 0xc0cd518  jal         func_335460
label_3d8d60:
    if (ctx->pc == 0x3D8D60u) {
        ctx->pc = 0x3D8D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8D5Cu;
        // 0x3d8d60: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8D64u;
        goto label_3d8d64;
    }
    ctx->pc = 0x3D8D5Cu;
    SET_GPR_U32(ctx, 31, 0x3D8D64u);
    ctx->pc = 0x3D8D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8D5Cu;
    // 0x3d8d60: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3D8D5Cu, 0x3D8D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8D64u;
label_3d8d64:
    // 0x3d8d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d8d68:
    // 0x3d8d68: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3d8d68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3d8d6c:
    // 0x3d8d6c: 0xc0f15f6  jal         func_3C57D8
label_3d8d70:
    if (ctx->pc == 0x3D8D70u) {
        ctx->pc = 0x3D8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8D6Cu;
        // 0x3d8d70: 0x2405ff30  addiu       $a1, $zero, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8D74u;
        goto label_3d8d74;
    }
    ctx->pc = 0x3D8D6Cu;
    SET_GPR_U32(ctx, 31, 0x3D8D74u);
    ctx->pc = 0x3D8D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8D6Cu;
    // 0x3d8d70: 0x2405ff30  addiu       $a1, $zero, -0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3D8D6Cu, 0x3D8D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8D74u;
label_3d8d74:
    // 0x3d8d74: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x3d8d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3d8d78:
    // 0x3d8d78: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x3d8d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3d8d7c:
    // 0x3d8d7c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x3d8d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3d8d80:
    // 0x3d8d80: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x3d8d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3d8d84:
    // 0x3d8d84: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x3d8d84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3d8d88:
    // 0x3d8d88: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3d8d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3d8d8c:
    // 0x3d8d8c: 0x3e00008  jr          $ra
label_3d8d90:
    if (ctx->pc == 0x3D8D90u) {
        ctx->pc = 0x3D8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8D8Cu;
        // 0x3d8d90: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8D94u;
        goto label_3d8d94;
    }
    ctx->pc = 0x3D8D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8D8Cu;
        // 0x3d8d90: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8D94u;
label_3d8d94:
    // 0x3d8d94: 0x0  nop
    ctx->pc = 0x3d8d94u;
    // NOP
    ctx->pc = 0x3d8d98u;
}
