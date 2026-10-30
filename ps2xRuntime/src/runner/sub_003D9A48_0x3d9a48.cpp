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

// Function: sub_003D9A48
// Address: 0x3d9a48 - 0x3d9ca0
void sub_003D9A48_0x3d9a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9A48_0x3d9a48");
#endif

    switch (ctx->pc) {
        case 0x3d9a48u: goto label_3d9a48;
        case 0x3d9a4cu: goto label_3d9a4c;
        case 0x3d9a50u: goto label_3d9a50;
        case 0x3d9a54u: goto label_3d9a54;
        case 0x3d9a58u: goto label_3d9a58;
        case 0x3d9a5cu: goto label_3d9a5c;
        case 0x3d9a60u: goto label_3d9a60;
        case 0x3d9a64u: goto label_3d9a64;
        case 0x3d9a68u: goto label_3d9a68;
        case 0x3d9a6cu: goto label_3d9a6c;
        case 0x3d9a70u: goto label_3d9a70;
        case 0x3d9a74u: goto label_3d9a74;
        case 0x3d9a78u: goto label_3d9a78;
        case 0x3d9a7cu: goto label_3d9a7c;
        case 0x3d9a80u: goto label_3d9a80;
        case 0x3d9a84u: goto label_3d9a84;
        case 0x3d9a88u: goto label_3d9a88;
        case 0x3d9a8cu: goto label_3d9a8c;
        case 0x3d9a90u: goto label_3d9a90;
        case 0x3d9a94u: goto label_3d9a94;
        case 0x3d9a98u: goto label_3d9a98;
        case 0x3d9a9cu: goto label_3d9a9c;
        case 0x3d9aa0u: goto label_3d9aa0;
        case 0x3d9aa4u: goto label_3d9aa4;
        case 0x3d9aa8u: goto label_3d9aa8;
        case 0x3d9aacu: goto label_3d9aac;
        case 0x3d9ab0u: goto label_3d9ab0;
        case 0x3d9ab4u: goto label_3d9ab4;
        case 0x3d9ab8u: goto label_3d9ab8;
        case 0x3d9abcu: goto label_3d9abc;
        case 0x3d9ac0u: goto label_3d9ac0;
        case 0x3d9ac4u: goto label_3d9ac4;
        case 0x3d9ac8u: goto label_3d9ac8;
        case 0x3d9accu: goto label_3d9acc;
        case 0x3d9ad0u: goto label_3d9ad0;
        case 0x3d9ad4u: goto label_3d9ad4;
        case 0x3d9ad8u: goto label_3d9ad8;
        case 0x3d9adcu: goto label_3d9adc;
        case 0x3d9ae0u: goto label_3d9ae0;
        case 0x3d9ae4u: goto label_3d9ae4;
        case 0x3d9ae8u: goto label_3d9ae8;
        case 0x3d9aecu: goto label_3d9aec;
        case 0x3d9af0u: goto label_3d9af0;
        case 0x3d9af4u: goto label_3d9af4;
        case 0x3d9af8u: goto label_3d9af8;
        case 0x3d9afcu: goto label_3d9afc;
        case 0x3d9b00u: goto label_3d9b00;
        case 0x3d9b04u: goto label_3d9b04;
        case 0x3d9b08u: goto label_3d9b08;
        case 0x3d9b0cu: goto label_3d9b0c;
        case 0x3d9b10u: goto label_3d9b10;
        case 0x3d9b14u: goto label_3d9b14;
        case 0x3d9b18u: goto label_3d9b18;
        case 0x3d9b1cu: goto label_3d9b1c;
        case 0x3d9b20u: goto label_3d9b20;
        case 0x3d9b24u: goto label_3d9b24;
        case 0x3d9b28u: goto label_3d9b28;
        case 0x3d9b2cu: goto label_3d9b2c;
        case 0x3d9b30u: goto label_3d9b30;
        case 0x3d9b34u: goto label_3d9b34;
        case 0x3d9b38u: goto label_3d9b38;
        case 0x3d9b3cu: goto label_3d9b3c;
        case 0x3d9b40u: goto label_3d9b40;
        case 0x3d9b44u: goto label_3d9b44;
        case 0x3d9b48u: goto label_3d9b48;
        case 0x3d9b4cu: goto label_3d9b4c;
        case 0x3d9b50u: goto label_3d9b50;
        case 0x3d9b54u: goto label_3d9b54;
        case 0x3d9b58u: goto label_3d9b58;
        case 0x3d9b5cu: goto label_3d9b5c;
        case 0x3d9b60u: goto label_3d9b60;
        case 0x3d9b64u: goto label_3d9b64;
        case 0x3d9b68u: goto label_3d9b68;
        case 0x3d9b6cu: goto label_3d9b6c;
        case 0x3d9b70u: goto label_3d9b70;
        case 0x3d9b74u: goto label_3d9b74;
        case 0x3d9b78u: goto label_3d9b78;
        case 0x3d9b7cu: goto label_3d9b7c;
        case 0x3d9b80u: goto label_3d9b80;
        case 0x3d9b84u: goto label_3d9b84;
        case 0x3d9b88u: goto label_3d9b88;
        case 0x3d9b8cu: goto label_3d9b8c;
        case 0x3d9b90u: goto label_3d9b90;
        case 0x3d9b94u: goto label_3d9b94;
        case 0x3d9b98u: goto label_3d9b98;
        case 0x3d9b9cu: goto label_3d9b9c;
        case 0x3d9ba0u: goto label_3d9ba0;
        case 0x3d9ba4u: goto label_3d9ba4;
        case 0x3d9ba8u: goto label_3d9ba8;
        case 0x3d9bacu: goto label_3d9bac;
        case 0x3d9bb0u: goto label_3d9bb0;
        case 0x3d9bb4u: goto label_3d9bb4;
        case 0x3d9bb8u: goto label_3d9bb8;
        case 0x3d9bbcu: goto label_3d9bbc;
        case 0x3d9bc0u: goto label_3d9bc0;
        case 0x3d9bc4u: goto label_3d9bc4;
        case 0x3d9bc8u: goto label_3d9bc8;
        case 0x3d9bccu: goto label_3d9bcc;
        case 0x3d9bd0u: goto label_3d9bd0;
        case 0x3d9bd4u: goto label_3d9bd4;
        case 0x3d9bd8u: goto label_3d9bd8;
        case 0x3d9bdcu: goto label_3d9bdc;
        case 0x3d9be0u: goto label_3d9be0;
        case 0x3d9be4u: goto label_3d9be4;
        case 0x3d9be8u: goto label_3d9be8;
        case 0x3d9becu: goto label_3d9bec;
        case 0x3d9bf0u: goto label_3d9bf0;
        case 0x3d9bf4u: goto label_3d9bf4;
        case 0x3d9bf8u: goto label_3d9bf8;
        case 0x3d9bfcu: goto label_3d9bfc;
        case 0x3d9c00u: goto label_3d9c00;
        case 0x3d9c04u: goto label_3d9c04;
        case 0x3d9c08u: goto label_3d9c08;
        case 0x3d9c0cu: goto label_3d9c0c;
        case 0x3d9c10u: goto label_3d9c10;
        case 0x3d9c14u: goto label_3d9c14;
        case 0x3d9c18u: goto label_3d9c18;
        case 0x3d9c1cu: goto label_3d9c1c;
        case 0x3d9c20u: goto label_3d9c20;
        case 0x3d9c24u: goto label_3d9c24;
        case 0x3d9c28u: goto label_3d9c28;
        case 0x3d9c2cu: goto label_3d9c2c;
        case 0x3d9c30u: goto label_3d9c30;
        case 0x3d9c34u: goto label_3d9c34;
        case 0x3d9c38u: goto label_3d9c38;
        case 0x3d9c3cu: goto label_3d9c3c;
        case 0x3d9c40u: goto label_3d9c40;
        case 0x3d9c44u: goto label_3d9c44;
        case 0x3d9c48u: goto label_3d9c48;
        case 0x3d9c4cu: goto label_3d9c4c;
        case 0x3d9c50u: goto label_3d9c50;
        case 0x3d9c54u: goto label_3d9c54;
        case 0x3d9c58u: goto label_3d9c58;
        case 0x3d9c5cu: goto label_3d9c5c;
        case 0x3d9c60u: goto label_3d9c60;
        case 0x3d9c64u: goto label_3d9c64;
        case 0x3d9c68u: goto label_3d9c68;
        case 0x3d9c6cu: goto label_3d9c6c;
        case 0x3d9c70u: goto label_3d9c70;
        case 0x3d9c74u: goto label_3d9c74;
        case 0x3d9c78u: goto label_3d9c78;
        case 0x3d9c7cu: goto label_3d9c7c;
        case 0x3d9c80u: goto label_3d9c80;
        case 0x3d9c84u: goto label_3d9c84;
        case 0x3d9c88u: goto label_3d9c88;
        case 0x3d9c8cu: goto label_3d9c8c;
        case 0x3d9c90u: goto label_3d9c90;
        case 0x3d9c94u: goto label_3d9c94;
        case 0x3d9c98u: goto label_3d9c98;
        case 0x3d9c9cu: goto label_3d9c9c;
        default: break;
    }

    ctx->pc = 0x3d9a48u;

label_3d9a48:
    // 0x3d9a48: 0x27bdf750  addiu       $sp, $sp, -0x8B0
    ctx->pc = 0x3d9a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965072));
label_3d9a4c:
    // 0x3d9a4c: 0x7fb20880  sq          $s2, 0x880($sp)
    ctx->pc = 0x3d9a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 18));
label_3d9a50:
    // 0x3d9a50: 0x7fb30870  sq          $s3, 0x870($sp)
    ctx->pc = 0x3d9a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 19));
label_3d9a54:
    // 0x3d9a54: 0x7fb008a0  sq          $s0, 0x8A0($sp)
    ctx->pc = 0x3d9a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 16));
label_3d9a58:
    // 0x3d9a58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d9a58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9a5c:
    // 0x3d9a5c: 0x7fb10890  sq          $s1, 0x890($sp)
    ctx->pc = 0x3d9a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 17));
label_3d9a60:
    // 0x3d9a60: 0x7fb40860  sq          $s4, 0x860($sp)
    ctx->pc = 0x3d9a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 20));
label_3d9a64:
    // 0x3d9a64: 0x7fb50850  sq          $s5, 0x850($sp)
    ctx->pc = 0x3d9a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 21));
label_3d9a68:
    // 0x3d9a68: 0xffbf0840  sd          $ra, 0x840($sp)
    ctx->pc = 0x3d9a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2112), GPR_U64(ctx, 31));
label_3d9a6c:
    // 0x3d9a6c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3d9a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d9a70:
    // 0x3d9a70: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d9a70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d9a74:
    // 0x3d9a74: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d9a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d9a78:
    // 0x3d9a78: 0x40f809  jalr        $v0
label_3d9a7c:
    if (ctx->pc == 0x3D9A7Cu) {
        ctx->pc = 0x3D9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9A78u;
        // 0x3d9a7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9A80u;
        goto label_3d9a80;
    }
    ctx->pc = 0x3D9A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D9A80u);
        ctx->pc = 0x3D9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9A78u;
        // 0x3d9a7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9A78u, 0x3D9A80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9A80u;
label_3d9a80:
    // 0x3d9a80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d9a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d9a84:
    // 0x3d9a84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d9a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d9a88:
    // 0x3d9a88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d9a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d9a8c:
    // 0x3d9a8c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d9a90:
    // 0x3d9a90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d9a94:
    // 0x3d9a94: 0x0  nop
    ctx->pc = 0x3d9a94u;
    // NOP
label_3d9a98:
    // 0x3d9a98: 0x0  nop
    ctx->pc = 0x3d9a98u;
    // NOP
label_3d9a9c:
    // 0x3d9a9c: 0x0  nop
    ctx->pc = 0x3d9a9cu;
    // NOP
label_3d9aa0:
    // 0x3d9aa0: 0x0  nop
    ctx->pc = 0x3d9aa0u;
    // NOP
label_3d9aa4:
    // 0x3d9aa4: 0x0  nop
    ctx->pc = 0x3d9aa4u;
    // NOP
label_3d9aa8:
    // 0x3d9aa8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d9aac:
    if (ctx->pc == 0x3D9AACu) {
        ctx->pc = 0x3D9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9AA8u;
        // 0x3d9aac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9AB0u;
        goto label_3d9ab0;
    }
    ctx->pc = 0x3D9AA8u;
    {
        const bool branch_taken_0x3d9aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9AA8u;
        // 0x3d9aac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9aa8) {
            ctx->pc = 0x3D9A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9a98;
        }
    }
    ctx->pc = 0x3D9AB0u;
label_3d9ab0:
    // 0x3d9ab0: 0xc138ddc  jal         func_4E3770
label_3d9ab4:
    if (ctx->pc == 0x3D9AB4u) {
        ctx->pc = 0x3D9AB8u;
        goto label_3d9ab8;
    }
    ctx->pc = 0x3D9AB0u;
    SET_GPR_U32(ctx, 31, 0x3D9AB8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D9AB0u, 0x3D9AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9AB8u;
label_3d9ab8:
    // 0x3d9ab8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3d9ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d9abc:
    // 0x3d9abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d9ac0:
    // 0x3d9ac0: 0x1462006d  bne         $v1, $v0, . + 4 + (0x6D << 2)
label_3d9ac4:
    if (ctx->pc == 0x3D9AC4u) {
        ctx->pc = 0x3D9AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9AC0u;
        // 0x3d9ac4: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9AC8u;
        goto label_3d9ac8;
    }
    ctx->pc = 0x3D9AC0u;
    {
        const bool branch_taken_0x3d9ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D9AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9AC0u;
        // 0x3d9ac4: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9ac0) {
            ctx->pc = 0x3D9C78u;
            goto label_3d9c78;
        }
    }
    ctx->pc = 0x3D9AC8u;
label_3d9ac8:
    // 0x3d9ac8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3d9ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3d9acc:
    // 0x3d9acc: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
label_3d9ad0:
    if (ctx->pc == 0x3D9AD0u) {
        ctx->pc = 0x3D9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9ACCu;
        // 0x3d9ad0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9AD4u;
        goto label_3d9ad4;
    }
    ctx->pc = 0x3D9ACCu;
    {
        const bool branch_taken_0x3d9acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d9acc) {
            ctx->pc = 0x3D9AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9ACCu;
            // 0x3d9ad0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9B1Cu;
            goto label_3d9b1c;
        }
    }
    ctx->pc = 0x3D9AD4u;
label_3d9ad4:
    // 0x3d9ad4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3d9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3d9ad8:
    // 0x3d9ad8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_3d9adc:
    if (ctx->pc == 0x3D9ADCu) {
        ctx->pc = 0x3D9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9AD8u;
        // 0x3d9adc: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9AE0u;
        goto label_3d9ae0;
    }
    ctx->pc = 0x3D9AD8u;
    {
        const bool branch_taken_0x3d9ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9ad8) {
            ctx->pc = 0x3D9ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9AD8u;
            // 0x3d9adc: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9B10u;
            goto label_3d9b10;
        }
    }
    ctx->pc = 0x3D9AE0u;
label_3d9ae0:
    // 0x3d9ae0: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3d9ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d9ae4:
    // 0x3d9ae4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d9ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d9ae8:
    // 0x3d9ae8: 0x27a50820  addiu       $a1, $sp, 0x820
    ctx->pc = 0x3d9ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
label_3d9aec:
    // 0x3d9aec: 0x26105118  addiu       $s0, $s0, 0x5118
    ctx->pc = 0x3d9aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20760));
label_3d9af0:
    // 0x3d9af0: 0xafb30820  sw          $s3, 0x820($sp)
    ctx->pc = 0x3d9af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2080), GPR_U32(ctx, 19));
label_3d9af4:
    // 0x3d9af4: 0xc0e9f6a  jal         func_3A7DA8
label_3d9af8:
    if (ctx->pc == 0x3D9AF8u) {
        ctx->pc = 0x3D9AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9AF4u;
        // 0x3d9af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9AFCu;
        goto label_3d9afc;
    }
    ctx->pc = 0x3D9AF4u;
    SET_GPR_U32(ctx, 31, 0x3D9AFCu);
    ctx->pc = 0x3D9AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9AF4u;
    // 0x3d9af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x3D9AF4u, 0x3D9AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9AFCu;
label_3d9afc:
    // 0x3d9afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9b00:
    // 0x3d9b00: 0xc0f15bc  jal         func_3C56F0
label_3d9b04:
    if (ctx->pc == 0x3D9B04u) {
        ctx->pc = 0x3D9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B00u;
        // 0x3d9b04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9B08u;
        goto label_3d9b08;
    }
    ctx->pc = 0x3D9B00u;
    SET_GPR_U32(ctx, 31, 0x3D9B08u);
    ctx->pc = 0x3D9B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9B00u;
    // 0x3d9b04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D9B00u, 0x3D9B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9B08u;
label_3d9b08:
    // 0x3d9b08: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3d9b08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_3d9b0c:
    // 0x3d9b0c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3d9b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3d9b10:
    // 0x3d9b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d9b14:
    // 0x3d9b14: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3d9b14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3d9b18:
    // 0x3d9b18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3d9b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d9b1c:
    // 0x3d9b1c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3d9b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d9b20:
    // 0x3d9b20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d9b24:
    // 0x3d9b24: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
label_3d9b28:
    if (ctx->pc == 0x3D9B28u) {
        ctx->pc = 0x3D9B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B24u;
        // 0x3d9b28: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9B2Cu;
        goto label_3d9b2c;
    }
    ctx->pc = 0x3D9B24u;
    {
        const bool branch_taken_0x3d9b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D9B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B24u;
        // 0x3d9b28: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9b24) {
            ctx->pc = 0x3D9B8Cu;
            goto label_3d9b8c;
        }
    }
    ctx->pc = 0x3D9B2Cu;
label_3d9b2c:
    // 0x3d9b2c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3d9b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3d9b30:
    // 0x3d9b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d9b34:
    // 0x3d9b34: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3d9b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3d9b38:
    // 0x3d9b38: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3d9b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3d9b3c:
    // 0x3d9b3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d9b40:
    // 0x3d9b40: 0x24a52e00  addiu       $a1, $a1, 0x2E00
    ctx->pc = 0x3d9b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11776));
label_3d9b44:
    // 0x3d9b44: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3d9b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_3d9b48:
    // 0x3d9b48: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3d9b48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3d9b4c:
    // 0x3d9b4c: 0x24c64588  addiu       $a2, $a2, 0x4588
    ctx->pc = 0x3d9b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17800));
label_3d9b50:
    // 0x3d9b50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d9b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d9b54:
    // 0x3d9b54: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3d9b54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3d9b58:
    // 0x3d9b58: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3d9b58u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3d9b5c:
    // 0x3d9b5c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d9b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d9b60:
    // 0x3d9b60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3d9b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d9b64:
    // 0x3d9b64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d9b68:
    // 0x3d9b68: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3d9b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3d9b6c:
    // 0x3d9b6c: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x3d9b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
label_3d9b70:
    // 0x3d9b70: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d9b74:
    // 0x3d9b74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d9b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d9b78:
    // 0x3d9b78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3d9b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d9b7c:
    // 0x3d9b7c: 0xc0e858c  jal         func_3A1630
label_3d9b80:
    if (ctx->pc == 0x3D9B80u) {
        ctx->pc = 0x3D9B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B7Cu;
        // 0x3d9b80: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9B84u;
        goto label_3d9b84;
    }
    ctx->pc = 0x3D9B7Cu;
    SET_GPR_U32(ctx, 31, 0x3D9B84u);
    ctx->pc = 0x3D9B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9B7Cu;
    // 0x3d9b80: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D9B7Cu, 0x3D9B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9B84u;
label_3d9b84:
    // 0x3d9b84: 0x1000003c  b           . + 4 + (0x3C << 2)
label_3d9b88:
    if (ctx->pc == 0x3D9B88u) {
        ctx->pc = 0x3D9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B84u;
        // 0x3d9b88: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9B8Cu;
        goto label_3d9b8c;
    }
    ctx->pc = 0x3D9B84u;
    {
        const bool branch_taken_0x3d9b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B84u;
        // 0x3d9b88: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9b84) {
            ctx->pc = 0x3D9C78u;
            goto label_3d9c78;
        }
    }
    ctx->pc = 0x3D9B8Cu;
label_3d9b8c:
    // 0x3d9b8c: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3d9b8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3d9b90:
    // 0x3d9b90: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x3d9b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d9b94:
    // 0x3d9b94: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x3d9b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_3d9b98:
    // 0x3d9b98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d9b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d9b9c:
    // 0x3d9b9c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3d9b9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9ba0:
    // 0x3d9ba0: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3d9ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3d9ba4:
    // 0x3d9ba4: 0xc0e94a0  jal         func_3A5280
label_3d9ba8:
    if (ctx->pc == 0x3D9BA8u) {
        ctx->pc = 0x3D9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BA4u;
        // 0x3d9ba8: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9BACu;
        goto label_3d9bac;
    }
    ctx->pc = 0x3D9BA4u;
    SET_GPR_U32(ctx, 31, 0x3D9BACu);
    ctx->pc = 0x3D9BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9BA4u;
    // 0x3d9ba8: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3D9BA4u, 0x3D9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9BACu;
label_3d9bac:
    // 0x3d9bac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3d9bb0:
    if (ctx->pc == 0x3D9BB0u) {
        ctx->pc = 0x3D9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BACu;
        // 0x3d9bb0: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9BB4u;
        goto label_3d9bb4;
    }
    ctx->pc = 0x3D9BACu;
    {
        const bool branch_taken_0x3d9bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BACu;
        // 0x3d9bb0: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9bac) {
            ctx->pc = 0x3D9BFCu;
            goto label_3d9bfc;
        }
    }
    ctx->pc = 0x3D9BB4u;
label_3d9bb4:
    // 0x3d9bb4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3d9bb8:
    if (ctx->pc == 0x3D9BB8u) {
        ctx->pc = 0x3D9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BB4u;
        // 0x3d9bb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9BBCu;
        goto label_3d9bbc;
    }
    ctx->pc = 0x3D9BB4u;
    {
        const bool branch_taken_0x3d9bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BB4u;
        // 0x3d9bb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9bb4) {
            ctx->pc = 0x3D9BE8u;
            goto label_3d9be8;
        }
    }
    ctx->pc = 0x3D9BBCu;
label_3d9bbc:
    // 0x3d9bbc: 0x0  nop
    ctx->pc = 0x3d9bbcu;
    // NOP
label_3d9bc0:
    // 0x3d9bc0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3d9bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3d9bc4:
    // 0x3d9bc4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3d9bc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3d9bc8:
    // 0x3d9bc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d9bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d9bcc:
    // 0x3d9bcc: 0xc0e9182  jal         func_3A4608
label_3d9bd0:
    if (ctx->pc == 0x3D9BD0u) {
        ctx->pc = 0x3D9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BCCu;
        // 0x3d9bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9BD4u;
        goto label_3d9bd4;
    }
    ctx->pc = 0x3D9BCCu;
    SET_GPR_U32(ctx, 31, 0x3D9BD4u);
    ctx->pc = 0x3D9BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9BCCu;
    // 0x3d9bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4608u, 0x3D9BCCu, 0x3D9BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9BD4u;
label_3d9bd4:
    // 0x3d9bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9bd8:
    // 0x3d9bd8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3d9bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3d9bdc:
    // 0x3d9bdc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d9bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d9be0:
    // 0x3d9be0: 0xc0e919a  jal         func_3A4668
label_3d9be4:
    if (ctx->pc == 0x3D9BE4u) {
        ctx->pc = 0x3D9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BE0u;
        // 0x3d9be4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9BE8u;
        goto label_3d9be8;
    }
    ctx->pc = 0x3D9BE0u;
    SET_GPR_U32(ctx, 31, 0x3D9BE8u);
    ctx->pc = 0x3D9BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9BE0u;
    // 0x3d9be4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4668u, 0x3D9BE0u, 0x3D9BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9BE8u;
label_3d9be8:
    // 0x3d9be8: 0xc047ab8  jal         func_11EAE0
label_3d9bec:
    if (ctx->pc == 0x3D9BECu) {
        ctx->pc = 0x3D9BF0u;
        goto label_3d9bf0;
    }
    ctx->pc = 0x3D9BE8u;
    SET_GPR_U32(ctx, 31, 0x3D9BF0u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x3D9BE8u, 0x3D9BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9BF0u;
label_3d9bf0:
    // 0x3d9bf0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3d9bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d9bf4:
    // 0x3d9bf4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3d9bf8:
    if (ctx->pc == 0x3D9BF8u) {
        ctx->pc = 0x3D9BFCu;
        goto label_3d9bfc;
    }
    ctx->pc = 0x3D9BF4u;
    {
        const bool branch_taken_0x3d9bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9bf4) {
            ctx->pc = 0x3D9BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9bc0;
        }
    }
    ctx->pc = 0x3D9BFCu;
label_3d9bfc:
    // 0x3d9bfc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3d9bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3d9c00:
    // 0x3d9c00: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3d9c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d9c04:
    // 0x3d9c04: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_3d9c08:
    if (ctx->pc == 0x3D9C08u) {
        ctx->pc = 0x3D9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9C04u;
        // 0x3d9c08: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9C0Cu;
        goto label_3d9c0c;
    }
    ctx->pc = 0x3D9C04u;
    {
        const bool branch_taken_0x3d9c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9c04) {
            ctx->pc = 0x3D9C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9C04u;
            // 0x3d9c08: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9C44u;
            goto label_3d9c44;
        }
    }
    ctx->pc = 0x3D9C0Cu;
label_3d9c0c:
    // 0x3d9c0c: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3d9c0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3d9c10:
    // 0x3d9c10: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d9c10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d9c14:
    // 0x3d9c14: 0x7a630020  lq          $v1, 0x20($s3)
    ctx->pc = 0x3d9c14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_3d9c18:
    // 0x3d9c18: 0x261048d8  addiu       $s0, $s0, 0x48D8
    ctx->pc = 0x3d9c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18648));
label_3d9c1c:
    // 0x3d9c1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d9c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d9c20:
    // 0x3d9c20: 0x27a50820  addiu       $a1, $sp, 0x820
    ctx->pc = 0x3d9c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
label_3d9c24:
    // 0x3d9c24: 0x7fa20820  sq          $v0, 0x820($sp)
    ctx->pc = 0x3d9c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 2));
label_3d9c28:
    // 0x3d9c28: 0x27a60830  addiu       $a2, $sp, 0x830
    ctx->pc = 0x3d9c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3d9c2c:
    // 0x3d9c2c: 0xc0e9f84  jal         func_3A7E10
label_3d9c30:
    if (ctx->pc == 0x3D9C30u) {
        ctx->pc = 0x3D9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9C2Cu;
        // 0x3d9c30: 0x7fa30830  sq          $v1, 0x830($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9C34u;
        goto label_3d9c34;
    }
    ctx->pc = 0x3D9C2Cu;
    SET_GPR_U32(ctx, 31, 0x3D9C34u);
    ctx->pc = 0x3D9C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9C2Cu;
    // 0x3d9c30: 0x7fa30830  sq          $v1, 0x830($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3D9C2Cu, 0x3D9C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9C34u;
label_3d9c34:
    // 0x3d9c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9c38:
    // 0x3d9c38: 0xc0f15bc  jal         func_3C56F0
label_3d9c3c:
    if (ctx->pc == 0x3D9C3Cu) {
        ctx->pc = 0x3D9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9C38u;
        // 0x3d9c3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9C40u;
        goto label_3d9c40;
    }
    ctx->pc = 0x3D9C38u;
    SET_GPR_U32(ctx, 31, 0x3D9C40u);
    ctx->pc = 0x3D9C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9C38u;
    // 0x3d9c3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D9C38u, 0x3D9C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9C40u;
label_3d9c40:
    // 0x3d9c40: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d9c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d9c44:
    // 0x3d9c44: 0x26252e00  addiu       $a1, $s1, 0x2E00
    ctx->pc = 0x3d9c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11776));
label_3d9c48:
    // 0x3d9c48: 0x26864588  addiu       $a2, $s4, 0x4588
    ctx->pc = 0x3d9c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 17800));
label_3d9c4c:
    // 0x3d9c4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d9c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d9c50:
    // 0x3d9c50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3d9c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d9c54:
    // 0x3d9c54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d9c58:
    // 0x3d9c58: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3d9c58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3d9c5c:
    // 0x3d9c5c: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x3d9c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
label_3d9c60:
    // 0x3d9c60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d9c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d9c64:
    // 0x3d9c64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d9c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d9c68:
    // 0x3d9c68: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3d9c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d9c6c:
    // 0x3d9c6c: 0xc0e858c  jal         func_3A1630
label_3d9c70:
    if (ctx->pc == 0x3D9C70u) {
        ctx->pc = 0x3D9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9C6Cu;
        // 0x3d9c70: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9C74u;
        goto label_3d9c74;
    }
    ctx->pc = 0x3D9C6Cu;
    SET_GPR_U32(ctx, 31, 0x3D9C74u);
    ctx->pc = 0x3D9C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9C6Cu;
    // 0x3d9c70: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D9C6Cu, 0x3D9C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9C74u;
label_3d9c74:
    // 0x3d9c74: 0x7bb008a0  lq          $s0, 0x8A0($sp)
    ctx->pc = 0x3d9c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3d9c78:
    // 0x3d9c78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d9c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9c7c:
    // 0x3d9c7c: 0x7bb10890  lq          $s1, 0x890($sp)
    ctx->pc = 0x3d9c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3d9c80:
    // 0x3d9c80: 0x7bb20880  lq          $s2, 0x880($sp)
    ctx->pc = 0x3d9c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3d9c84:
    // 0x3d9c84: 0x7bb30870  lq          $s3, 0x870($sp)
    ctx->pc = 0x3d9c84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3d9c88:
    // 0x3d9c88: 0x7bb40860  lq          $s4, 0x860($sp)
    ctx->pc = 0x3d9c88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
label_3d9c8c:
    // 0x3d9c8c: 0x7bb50850  lq          $s5, 0x850($sp)
    ctx->pc = 0x3d9c8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_3d9c90:
    // 0x3d9c90: 0xdfbf0840  ld          $ra, 0x840($sp)
    ctx->pc = 0x3d9c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2112)));
label_3d9c94:
    // 0x3d9c94: 0x3e00008  jr          $ra
label_3d9c98:
    if (ctx->pc == 0x3D9C98u) {
        ctx->pc = 0x3D9C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9C94u;
        // 0x3d9c98: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9C9Cu;
        goto label_3d9c9c;
    }
    ctx->pc = 0x3D9C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9C94u;
        // 0x3d9c98: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9C9Cu;
label_3d9c9c:
    // 0x3d9c9c: 0x0  nop
    ctx->pc = 0x3d9c9cu;
    // NOP
    ctx->pc = 0x3d9ca0u;
}
