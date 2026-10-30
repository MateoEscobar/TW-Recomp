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

// Function: sub_003D4C10
// Address: 0x3d4c10 - 0x3d4dc8
void sub_003D4C10_0x3d4c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4C10_0x3d4c10");
#endif

    switch (ctx->pc) {
        case 0x3d4c10u: goto label_3d4c10;
        case 0x3d4c14u: goto label_3d4c14;
        case 0x3d4c18u: goto label_3d4c18;
        case 0x3d4c1cu: goto label_3d4c1c;
        case 0x3d4c20u: goto label_3d4c20;
        case 0x3d4c24u: goto label_3d4c24;
        case 0x3d4c28u: goto label_3d4c28;
        case 0x3d4c2cu: goto label_3d4c2c;
        case 0x3d4c30u: goto label_3d4c30;
        case 0x3d4c34u: goto label_3d4c34;
        case 0x3d4c38u: goto label_3d4c38;
        case 0x3d4c3cu: goto label_3d4c3c;
        case 0x3d4c40u: goto label_3d4c40;
        case 0x3d4c44u: goto label_3d4c44;
        case 0x3d4c48u: goto label_3d4c48;
        case 0x3d4c4cu: goto label_3d4c4c;
        case 0x3d4c50u: goto label_3d4c50;
        case 0x3d4c54u: goto label_3d4c54;
        case 0x3d4c58u: goto label_3d4c58;
        case 0x3d4c5cu: goto label_3d4c5c;
        case 0x3d4c60u: goto label_3d4c60;
        case 0x3d4c64u: goto label_3d4c64;
        case 0x3d4c68u: goto label_3d4c68;
        case 0x3d4c6cu: goto label_3d4c6c;
        case 0x3d4c70u: goto label_3d4c70;
        case 0x3d4c74u: goto label_3d4c74;
        case 0x3d4c78u: goto label_3d4c78;
        case 0x3d4c7cu: goto label_3d4c7c;
        case 0x3d4c80u: goto label_3d4c80;
        case 0x3d4c84u: goto label_3d4c84;
        case 0x3d4c88u: goto label_3d4c88;
        case 0x3d4c8cu: goto label_3d4c8c;
        case 0x3d4c90u: goto label_3d4c90;
        case 0x3d4c94u: goto label_3d4c94;
        case 0x3d4c98u: goto label_3d4c98;
        case 0x3d4c9cu: goto label_3d4c9c;
        case 0x3d4ca0u: goto label_3d4ca0;
        case 0x3d4ca4u: goto label_3d4ca4;
        case 0x3d4ca8u: goto label_3d4ca8;
        case 0x3d4cacu: goto label_3d4cac;
        case 0x3d4cb0u: goto label_3d4cb0;
        case 0x3d4cb4u: goto label_3d4cb4;
        case 0x3d4cb8u: goto label_3d4cb8;
        case 0x3d4cbcu: goto label_3d4cbc;
        case 0x3d4cc0u: goto label_3d4cc0;
        case 0x3d4cc4u: goto label_3d4cc4;
        case 0x3d4cc8u: goto label_3d4cc8;
        case 0x3d4cccu: goto label_3d4ccc;
        case 0x3d4cd0u: goto label_3d4cd0;
        case 0x3d4cd4u: goto label_3d4cd4;
        case 0x3d4cd8u: goto label_3d4cd8;
        case 0x3d4cdcu: goto label_3d4cdc;
        case 0x3d4ce0u: goto label_3d4ce0;
        case 0x3d4ce4u: goto label_3d4ce4;
        case 0x3d4ce8u: goto label_3d4ce8;
        case 0x3d4cecu: goto label_3d4cec;
        case 0x3d4cf0u: goto label_3d4cf0;
        case 0x3d4cf4u: goto label_3d4cf4;
        case 0x3d4cf8u: goto label_3d4cf8;
        case 0x3d4cfcu: goto label_3d4cfc;
        case 0x3d4d00u: goto label_3d4d00;
        case 0x3d4d04u: goto label_3d4d04;
        case 0x3d4d08u: goto label_3d4d08;
        case 0x3d4d0cu: goto label_3d4d0c;
        case 0x3d4d10u: goto label_3d4d10;
        case 0x3d4d14u: goto label_3d4d14;
        case 0x3d4d18u: goto label_3d4d18;
        case 0x3d4d1cu: goto label_3d4d1c;
        case 0x3d4d20u: goto label_3d4d20;
        case 0x3d4d24u: goto label_3d4d24;
        case 0x3d4d28u: goto label_3d4d28;
        case 0x3d4d2cu: goto label_3d4d2c;
        case 0x3d4d30u: goto label_3d4d30;
        case 0x3d4d34u: goto label_3d4d34;
        case 0x3d4d38u: goto label_3d4d38;
        case 0x3d4d3cu: goto label_3d4d3c;
        case 0x3d4d40u: goto label_3d4d40;
        case 0x3d4d44u: goto label_3d4d44;
        case 0x3d4d48u: goto label_3d4d48;
        case 0x3d4d4cu: goto label_3d4d4c;
        case 0x3d4d50u: goto label_3d4d50;
        case 0x3d4d54u: goto label_3d4d54;
        case 0x3d4d58u: goto label_3d4d58;
        case 0x3d4d5cu: goto label_3d4d5c;
        case 0x3d4d60u: goto label_3d4d60;
        case 0x3d4d64u: goto label_3d4d64;
        case 0x3d4d68u: goto label_3d4d68;
        case 0x3d4d6cu: goto label_3d4d6c;
        case 0x3d4d70u: goto label_3d4d70;
        case 0x3d4d74u: goto label_3d4d74;
        case 0x3d4d78u: goto label_3d4d78;
        case 0x3d4d7cu: goto label_3d4d7c;
        case 0x3d4d80u: goto label_3d4d80;
        case 0x3d4d84u: goto label_3d4d84;
        case 0x3d4d88u: goto label_3d4d88;
        case 0x3d4d8cu: goto label_3d4d8c;
        case 0x3d4d90u: goto label_3d4d90;
        case 0x3d4d94u: goto label_3d4d94;
        case 0x3d4d98u: goto label_3d4d98;
        case 0x3d4d9cu: goto label_3d4d9c;
        case 0x3d4da0u: goto label_3d4da0;
        case 0x3d4da4u: goto label_3d4da4;
        case 0x3d4da8u: goto label_3d4da8;
        case 0x3d4dacu: goto label_3d4dac;
        case 0x3d4db0u: goto label_3d4db0;
        case 0x3d4db4u: goto label_3d4db4;
        case 0x3d4db8u: goto label_3d4db8;
        case 0x3d4dbcu: goto label_3d4dbc;
        case 0x3d4dc0u: goto label_3d4dc0;
        case 0x3d4dc4u: goto label_3d4dc4;
        default: break;
    }

    ctx->pc = 0x3d4c10u;

label_3d4c10:
    // 0x3d4c10: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3d4c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3d4c14:
    // 0x3d4c14: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3d4c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3d4c18:
    // 0x3d4c18: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3d4c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3d4c1c:
    // 0x3d4c1c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3d4c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3d4c20:
    // 0x3d4c20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d4c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d4c24:
    // 0x3d4c24: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3d4c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3d4c28:
    // 0x3d4c28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d4c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4c2c:
    // 0x3d4c2c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3d4c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3d4c30:
    // 0x3d4c30: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3d4c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3d4c34:
    // 0x3d4c34: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d4c38:
    // 0x3d4c38: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d4c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d4c3c:
    // 0x3d4c3c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d4c40:
    // 0x3d4c40: 0x40f809  jalr        $v0
label_3d4c44:
    if (ctx->pc == 0x3D4C44u) {
        ctx->pc = 0x3D4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C40u;
        // 0x3d4c44: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4C48u;
        goto label_3d4c48;
    }
    ctx->pc = 0x3D4C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4C48u);
        ctx->pc = 0x3D4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C40u;
        // 0x3d4c44: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4C40u, 0x3D4C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4C48u;
label_3d4c48:
    // 0x3d4c48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d4c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4c4c:
    // 0x3d4c4c: 0xc0ea146  jal         func_3A8518
label_3d4c50:
    if (ctx->pc == 0x3D4C50u) {
        ctx->pc = 0x3D4C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C4Cu;
        // 0x3d4c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4C54u;
        goto label_3d4c54;
    }
    ctx->pc = 0x3D4C4Cu;
    SET_GPR_U32(ctx, 31, 0x3D4C54u);
    ctx->pc = 0x3D4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4C4Cu;
    // 0x3d4c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D4C4Cu, 0x3D4C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4C54u;
label_3d4c54:
    // 0x3d4c54: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d4c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4c58:
    // 0x3d4c58: 0xc0ea14c  jal         func_3A8530
label_3d4c5c:
    if (ctx->pc == 0x3D4C5Cu) {
        ctx->pc = 0x3D4C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C58u;
        // 0x3d4c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4C60u;
        goto label_3d4c60;
    }
    ctx->pc = 0x3D4C58u;
    SET_GPR_U32(ctx, 31, 0x3D4C60u);
    ctx->pc = 0x3D4C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4C58u;
    // 0x3d4c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D4C58u, 0x3D4C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4C60u;
label_3d4c60:
    // 0x3d4c60: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3d4c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d4c64:
    // 0x3d4c64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d4c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4c68:
    // 0x3d4c68: 0xc0ea12a  jal         func_3A84A8
label_3d4c6c:
    if (ctx->pc == 0x3D4C6Cu) {
        ctx->pc = 0x3D4C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C68u;
        // 0x3d4c6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4C70u;
        goto label_3d4c70;
    }
    ctx->pc = 0x3D4C68u;
    SET_GPR_U32(ctx, 31, 0x3D4C70u);
    ctx->pc = 0x3D4C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4C68u;
    // 0x3d4c6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D4C68u, 0x3D4C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4C70u;
label_3d4c70:
    // 0x3d4c70: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d4c70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d4c74:
    // 0x3d4c74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d4c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d4c78:
    // 0x3d4c78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d4c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d4c7c:
    // 0x3d4c7c: 0xc0e858c  jal         func_3A1630
label_3d4c80:
    if (ctx->pc == 0x3D4C80u) {
        ctx->pc = 0x3D4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C7Cu;
        // 0x3d4c80: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4C84u;
        goto label_3d4c84;
    }
    ctx->pc = 0x3D4C7Cu;
    SET_GPR_U32(ctx, 31, 0x3D4C84u);
    ctx->pc = 0x3D4C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4C7Cu;
    // 0x3d4c80: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D4C7Cu, 0x3D4C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4C84u;
label_3d4c84:
    // 0x3d4c84: 0x3c027a00  lui         $v0, 0x7A00
    ctx->pc = 0x3d4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31232 << 16));
label_3d4c88:
    // 0x3d4c88: 0x3c037a00  lui         $v1, 0x7A00
    ctx->pc = 0x3d4c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31232 << 16));
label_3d4c8c:
    // 0x3d4c8c: 0x344215ff  ori         $v0, $v0, 0x15FF
    ctx->pc = 0x3d4c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5631);
label_3d4c90:
    // 0x3d4c90: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3d4c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3d4c94:
    // 0x3d4c94: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3d4c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3d4c98:
    // 0x3d4c98: 0x34631500  ori         $v1, $v1, 0x1500
    ctx->pc = 0x3d4c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5376);
label_3d4c9c:
    // 0x3d4c9c: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x3d4c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
label_3d4ca0:
    // 0x3d4ca0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d4ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d4ca4:
    // 0x3d4ca4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3d4ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3d4ca8:
    // 0x3d4ca8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d4ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d4cac:
    // 0x3d4cac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d4cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d4cb0:
    // 0x3d4cb0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d4cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d4cb4:
    // 0x3d4cb4: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3d4cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3d4cb8:
    // 0x3d4cb8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3d4cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3d4cbc:
    // 0x3d4cbc: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x3d4cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_3d4cc0:
    // 0x3d4cc0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3d4cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d4cc4:
    // 0x3d4cc4: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3d4cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3d4cc8:
    // 0x3d4cc8: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x3d4cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
label_3d4ccc:
    // 0x3d4ccc: 0xc0e8fc0  jal         func_3A3F00
label_3d4cd0:
    if (ctx->pc == 0x3D4CD0u) {
        ctx->pc = 0x3D4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4CCCu;
        // 0x3d4cd0: 0xae140010  sw          $s4, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4CD4u;
        goto label_3d4cd4;
    }
    ctx->pc = 0x3D4CCCu;
    SET_GPR_U32(ctx, 31, 0x3D4CD4u);
    ctx->pc = 0x3D4CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4CCCu;
    // 0x3d4cd0: 0xae140010  sw          $s4, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F00u, 0x3D4CCCu, 0x3D4CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4CD4u;
label_3d4cd4:
    // 0x3d4cd4: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x3d4cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d4cd8:
    // 0x3d4cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d4cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4cdc:
    // 0x3d4cdc: 0xc0e90ca  jal         func_3A4328
label_3d4ce0:
    if (ctx->pc == 0x3D4CE0u) {
        ctx->pc = 0x3D4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4CDCu;
        // 0x3d4ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4CE4u;
        goto label_3d4ce4;
    }
    ctx->pc = 0x3D4CDCu;
    SET_GPR_U32(ctx, 31, 0x3D4CE4u);
    ctx->pc = 0x3D4CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4CDCu;
    // 0x3d4ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D4CDCu, 0x3D4CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4CE4u;
label_3d4ce4:
    // 0x3d4ce4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3d4ce4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d4ce8:
    // 0x3d4ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d4ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4cec:
    // 0x3d4cec: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3d4cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3d4cf0:
    // 0x3d4cf0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x3d4cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3d4cf4:
    // 0x3d4cf4: 0xc0e8fcc  jal         func_3A3F30
label_3d4cf8:
    if (ctx->pc == 0x3D4CF8u) {
        ctx->pc = 0x3D4CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4CF4u;
        // 0x3d4cf8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4CFCu;
        goto label_3d4cfc;
    }
    ctx->pc = 0x3D4CF4u;
    SET_GPR_U32(ctx, 31, 0x3D4CFCu);
    ctx->pc = 0x3D4CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4CF4u;
    // 0x3d4cf8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F30u, 0x3D4CF4u, 0x3D4CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4CFCu;
label_3d4cfc:
    // 0x3d4cfc: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3d4cfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d4d00:
    // 0x3d4d00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3d4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d4d04:
    // 0x3d4d04: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d4d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d4d08:
    // 0x3d4d08: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3d4d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d4d0c:
    // 0x3d4d0c: 0xc136afa  jal         func_4DABE8
label_3d4d10:
    if (ctx->pc == 0x3D4D10u) {
        ctx->pc = 0x3D4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4D0Cu;
        // 0x3d4d10: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4D14u;
        goto label_3d4d14;
    }
    ctx->pc = 0x3D4D0Cu;
    SET_GPR_U32(ctx, 31, 0x3D4D14u);
    ctx->pc = 0x3D4D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4D0Cu;
    // 0x3d4d10: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3D4D0Cu, 0x3D4D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4D14u;
label_3d4d14:
    // 0x3d4d14: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3d4d14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d4d18:
    // 0x3d4d18: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3d4d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d4d1c:
    // 0x3d4d1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3d4d1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d4d20:
    // 0x3d4d20: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3d4d20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d4d24:
    // 0x3d4d24: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3d4d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d4d28:
    // 0x3d4d28: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3d4d28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d4d2c:
    // 0x3d4d2c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3d4d2cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3d4d30:
    // 0x3d4d30: 0x4a0003bf  vwaitq
    ctx->pc = 0x3d4d30u;
    // VWAITQ (Q already resolved in this runtime)
label_3d4d34:
    // 0x3d4d34: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3d4d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3d4d38:
    // 0x3d4d38: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3d4d38u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3d4d3c:
    // 0x3d4d3c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3d4d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3d4d40:
    // 0x3d4d40: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d4d40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d4d44:
    // 0x3d4d44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d4d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d4d48:
    // 0x3d4d48: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3d4d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3d4d4c:
    // 0x3d4d4c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3d4d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d4d50:
    // 0x3d4d50: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d4d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d4d54:
    // 0x3d4d54: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3d4d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3d4d58:
    // 0x3d4d58: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3d4d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3d4d5c:
    // 0x3d4d5c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3d4d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3d4d60:
    // 0x3d4d60: 0xc136b24  jal         func_4DAC90
label_3d4d64:
    if (ctx->pc == 0x3D4D64u) {
        ctx->pc = 0x3D4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4D60u;
        // 0x3d4d64: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4D68u;
        goto label_3d4d68;
    }
    ctx->pc = 0x3D4D60u;
    SET_GPR_U32(ctx, 31, 0x3D4D68u);
    ctx->pc = 0x3D4D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4D60u;
    // 0x3d4d64: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D4D60u, 0x3D4D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4D68u;
label_3d4d68:
    // 0x3d4d68: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3d4d68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d4d6c:
    // 0x3d4d6c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3d4d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d4d70:
    // 0x3d4d70: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d4d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d4d74:
    // 0x3d4d74: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3d4d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d4d78:
    // 0x3d4d78: 0xc136afa  jal         func_4DABE8
label_3d4d7c:
    if (ctx->pc == 0x3D4D7Cu) {
        ctx->pc = 0x3D4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4D78u;
        // 0x3d4d7c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4D80u;
        goto label_3d4d80;
    }
    ctx->pc = 0x3D4D78u;
    SET_GPR_U32(ctx, 31, 0x3D4D80u);
    ctx->pc = 0x3D4D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4D78u;
    // 0x3d4d7c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3D4D78u, 0x3D4D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4D80u;
label_3d4d80:
    // 0x3d4d80: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3d4d80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d4d84:
    // 0x3d4d84: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3d4d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3d4d88:
    // 0x3d4d88: 0xae4300c4  sw          $v1, 0xC4($s2)
    ctx->pc = 0x3d4d88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 3));
label_3d4d8c:
    // 0x3d4d8c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3d4d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3d4d90:
    // 0x3d4d90: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3d4d90u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3d4d94:
    // 0x3d4d94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d4d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d4d98:
    // 0x3d4d98: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3d4d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3d4d9c:
    // 0x3d4d9c: 0xc0e9404  jal         func_3A5010
label_3d4da0:
    if (ctx->pc == 0x3D4DA0u) {
        ctx->pc = 0x3D4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4D9Cu;
        // 0x3d4da0: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4DA4u;
        goto label_3d4da4;
    }
    ctx->pc = 0x3D4D9Cu;
    SET_GPR_U32(ctx, 31, 0x3D4DA4u);
    ctx->pc = 0x3D4DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4D9Cu;
    // 0x3d4da0: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3D4D9Cu, 0x3D4DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4DA4u;
label_3d4da4:
    // 0x3d4da4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3d4da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3d4da8:
    // 0x3d4da8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3d4da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3d4dac:
    // 0x3d4dac: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3d4dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3d4db0:
    // 0x3d4db0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3d4db0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3d4db4:
    // 0x3d4db4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3d4db4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3d4db8:
    // 0x3d4db8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3d4db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3d4dbc:
    // 0x3d4dbc: 0x3e00008  jr          $ra
label_3d4dc0:
    if (ctx->pc == 0x3D4DC0u) {
        ctx->pc = 0x3D4DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DBCu;
        // 0x3d4dc0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4DC4u;
        goto label_3d4dc4;
    }
    ctx->pc = 0x3D4DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DBCu;
        // 0x3d4dc0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4DC4u;
label_3d4dc4:
    // 0x3d4dc4: 0x0  nop
    ctx->pc = 0x3d4dc4u;
    // NOP
    ctx->pc = 0x3d4dc8u;
}
