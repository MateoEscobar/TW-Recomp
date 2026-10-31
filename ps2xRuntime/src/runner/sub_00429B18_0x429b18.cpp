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

// Function: sub_00429B18
// Address: 0x429b18 - 0x429e20
void sub_00429B18_0x429b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429B18_0x429b18");
#endif

    switch (ctx->pc) {
        case 0x429b18u: goto label_429b18;
        case 0x429b1cu: goto label_429b1c;
        case 0x429b20u: goto label_429b20;
        case 0x429b24u: goto label_429b24;
        case 0x429b28u: goto label_429b28;
        case 0x429b2cu: goto label_429b2c;
        case 0x429b30u: goto label_429b30;
        case 0x429b34u: goto label_429b34;
        case 0x429b38u: goto label_429b38;
        case 0x429b3cu: goto label_429b3c;
        case 0x429b40u: goto label_429b40;
        case 0x429b44u: goto label_429b44;
        case 0x429b48u: goto label_429b48;
        case 0x429b4cu: goto label_429b4c;
        case 0x429b50u: goto label_429b50;
        case 0x429b54u: goto label_429b54;
        case 0x429b58u: goto label_429b58;
        case 0x429b5cu: goto label_429b5c;
        case 0x429b60u: goto label_429b60;
        case 0x429b64u: goto label_429b64;
        case 0x429b68u: goto label_429b68;
        case 0x429b6cu: goto label_429b6c;
        case 0x429b70u: goto label_429b70;
        case 0x429b74u: goto label_429b74;
        case 0x429b78u: goto label_429b78;
        case 0x429b7cu: goto label_429b7c;
        case 0x429b80u: goto label_429b80;
        case 0x429b84u: goto label_429b84;
        case 0x429b88u: goto label_429b88;
        case 0x429b8cu: goto label_429b8c;
        case 0x429b90u: goto label_429b90;
        case 0x429b94u: goto label_429b94;
        case 0x429b98u: goto label_429b98;
        case 0x429b9cu: goto label_429b9c;
        case 0x429ba0u: goto label_429ba0;
        case 0x429ba4u: goto label_429ba4;
        case 0x429ba8u: goto label_429ba8;
        case 0x429bacu: goto label_429bac;
        case 0x429bb0u: goto label_429bb0;
        case 0x429bb4u: goto label_429bb4;
        case 0x429bb8u: goto label_429bb8;
        case 0x429bbcu: goto label_429bbc;
        case 0x429bc0u: goto label_429bc0;
        case 0x429bc4u: goto label_429bc4;
        case 0x429bc8u: goto label_429bc8;
        case 0x429bccu: goto label_429bcc;
        case 0x429bd0u: goto label_429bd0;
        case 0x429bd4u: goto label_429bd4;
        case 0x429bd8u: goto label_429bd8;
        case 0x429bdcu: goto label_429bdc;
        case 0x429be0u: goto label_429be0;
        case 0x429be4u: goto label_429be4;
        case 0x429be8u: goto label_429be8;
        case 0x429becu: goto label_429bec;
        case 0x429bf0u: goto label_429bf0;
        case 0x429bf4u: goto label_429bf4;
        case 0x429bf8u: goto label_429bf8;
        case 0x429bfcu: goto label_429bfc;
        case 0x429c00u: goto label_429c00;
        case 0x429c04u: goto label_429c04;
        case 0x429c08u: goto label_429c08;
        case 0x429c0cu: goto label_429c0c;
        case 0x429c10u: goto label_429c10;
        case 0x429c14u: goto label_429c14;
        case 0x429c18u: goto label_429c18;
        case 0x429c1cu: goto label_429c1c;
        case 0x429c20u: goto label_429c20;
        case 0x429c24u: goto label_429c24;
        case 0x429c28u: goto label_429c28;
        case 0x429c2cu: goto label_429c2c;
        case 0x429c30u: goto label_429c30;
        case 0x429c34u: goto label_429c34;
        case 0x429c38u: goto label_429c38;
        case 0x429c3cu: goto label_429c3c;
        case 0x429c40u: goto label_429c40;
        case 0x429c44u: goto label_429c44;
        case 0x429c48u: goto label_429c48;
        case 0x429c4cu: goto label_429c4c;
        case 0x429c50u: goto label_429c50;
        case 0x429c54u: goto label_429c54;
        case 0x429c58u: goto label_429c58;
        case 0x429c5cu: goto label_429c5c;
        case 0x429c60u: goto label_429c60;
        case 0x429c64u: goto label_429c64;
        case 0x429c68u: goto label_429c68;
        case 0x429c6cu: goto label_429c6c;
        case 0x429c70u: goto label_429c70;
        case 0x429c74u: goto label_429c74;
        case 0x429c78u: goto label_429c78;
        case 0x429c7cu: goto label_429c7c;
        case 0x429c80u: goto label_429c80;
        case 0x429c84u: goto label_429c84;
        case 0x429c88u: goto label_429c88;
        case 0x429c8cu: goto label_429c8c;
        case 0x429c90u: goto label_429c90;
        case 0x429c94u: goto label_429c94;
        case 0x429c98u: goto label_429c98;
        case 0x429c9cu: goto label_429c9c;
        case 0x429ca0u: goto label_429ca0;
        case 0x429ca4u: goto label_429ca4;
        case 0x429ca8u: goto label_429ca8;
        case 0x429cacu: goto label_429cac;
        case 0x429cb0u: goto label_429cb0;
        case 0x429cb4u: goto label_429cb4;
        case 0x429cb8u: goto label_429cb8;
        case 0x429cbcu: goto label_429cbc;
        case 0x429cc0u: goto label_429cc0;
        case 0x429cc4u: goto label_429cc4;
        case 0x429cc8u: goto label_429cc8;
        case 0x429cccu: goto label_429ccc;
        case 0x429cd0u: goto label_429cd0;
        case 0x429cd4u: goto label_429cd4;
        case 0x429cd8u: goto label_429cd8;
        case 0x429cdcu: goto label_429cdc;
        case 0x429ce0u: goto label_429ce0;
        case 0x429ce4u: goto label_429ce4;
        case 0x429ce8u: goto label_429ce8;
        case 0x429cecu: goto label_429cec;
        case 0x429cf0u: goto label_429cf0;
        case 0x429cf4u: goto label_429cf4;
        case 0x429cf8u: goto label_429cf8;
        case 0x429cfcu: goto label_429cfc;
        case 0x429d00u: goto label_429d00;
        case 0x429d04u: goto label_429d04;
        case 0x429d08u: goto label_429d08;
        case 0x429d0cu: goto label_429d0c;
        case 0x429d10u: goto label_429d10;
        case 0x429d14u: goto label_429d14;
        case 0x429d18u: goto label_429d18;
        case 0x429d1cu: goto label_429d1c;
        case 0x429d20u: goto label_429d20;
        case 0x429d24u: goto label_429d24;
        case 0x429d28u: goto label_429d28;
        case 0x429d2cu: goto label_429d2c;
        case 0x429d30u: goto label_429d30;
        case 0x429d34u: goto label_429d34;
        case 0x429d38u: goto label_429d38;
        case 0x429d3cu: goto label_429d3c;
        case 0x429d40u: goto label_429d40;
        case 0x429d44u: goto label_429d44;
        case 0x429d48u: goto label_429d48;
        case 0x429d4cu: goto label_429d4c;
        case 0x429d50u: goto label_429d50;
        case 0x429d54u: goto label_429d54;
        case 0x429d58u: goto label_429d58;
        case 0x429d5cu: goto label_429d5c;
        case 0x429d60u: goto label_429d60;
        case 0x429d64u: goto label_429d64;
        case 0x429d68u: goto label_429d68;
        case 0x429d6cu: goto label_429d6c;
        case 0x429d70u: goto label_429d70;
        case 0x429d74u: goto label_429d74;
        case 0x429d78u: goto label_429d78;
        case 0x429d7cu: goto label_429d7c;
        case 0x429d80u: goto label_429d80;
        case 0x429d84u: goto label_429d84;
        case 0x429d88u: goto label_429d88;
        case 0x429d8cu: goto label_429d8c;
        case 0x429d90u: goto label_429d90;
        case 0x429d94u: goto label_429d94;
        case 0x429d98u: goto label_429d98;
        case 0x429d9cu: goto label_429d9c;
        case 0x429da0u: goto label_429da0;
        case 0x429da4u: goto label_429da4;
        case 0x429da8u: goto label_429da8;
        case 0x429dacu: goto label_429dac;
        case 0x429db0u: goto label_429db0;
        case 0x429db4u: goto label_429db4;
        case 0x429db8u: goto label_429db8;
        case 0x429dbcu: goto label_429dbc;
        case 0x429dc0u: goto label_429dc0;
        case 0x429dc4u: goto label_429dc4;
        case 0x429dc8u: goto label_429dc8;
        case 0x429dccu: goto label_429dcc;
        case 0x429dd0u: goto label_429dd0;
        case 0x429dd4u: goto label_429dd4;
        case 0x429dd8u: goto label_429dd8;
        case 0x429ddcu: goto label_429ddc;
        case 0x429de0u: goto label_429de0;
        case 0x429de4u: goto label_429de4;
        case 0x429de8u: goto label_429de8;
        case 0x429decu: goto label_429dec;
        case 0x429df0u: goto label_429df0;
        case 0x429df4u: goto label_429df4;
        case 0x429df8u: goto label_429df8;
        case 0x429dfcu: goto label_429dfc;
        case 0x429e00u: goto label_429e00;
        case 0x429e04u: goto label_429e04;
        case 0x429e08u: goto label_429e08;
        case 0x429e0cu: goto label_429e0c;
        case 0x429e10u: goto label_429e10;
        case 0x429e14u: goto label_429e14;
        case 0x429e18u: goto label_429e18;
        case 0x429e1cu: goto label_429e1c;
        default: break;
    }

    ctx->pc = 0x429b18u;

label_429b18:
    // 0x429b18: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x429b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_429b1c:
    // 0x429b1c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x429b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_429b20:
    // 0x429b20: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x429b20u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_429b24:
    // 0x429b24: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x429b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_429b28:
    // 0x429b28: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x429b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_429b2c:
    // 0x429b2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x429b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_429b30:
    // 0x429b30: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x429b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_429b34:
    // 0x429b34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x429b34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_429b38:
    // 0x429b38: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x429b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_429b3c:
    // 0x429b3c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x429b3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_429b40:
    // 0x429b40: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x429b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_429b44:
    // 0x429b44: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x429b44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_429b48:
    // 0x429b48: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x429b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_429b4c:
    // 0x429b4c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x429b4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_429b50:
    // 0x429b50: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x429b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_429b54:
    // 0x429b54: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x429b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_429b58:
    // 0x429b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x429b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_429b5c:
    // 0x429b5c: 0x8ee9cdb4  lw          $t1, -0x324C($s7)
    ctx->pc = 0x429b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
label_429b60:
    // 0x429b60: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x429b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_429b64:
    // 0x429b64: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x429b64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_429b68:
    // 0x429b68: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x429b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_429b6c:
    // 0x429b6c: 0x60f809  jalr        $v1
label_429b70:
    if (ctx->pc == 0x429B70u) {
        ctx->pc = 0x429B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429B6Cu;
        // 0x429b70: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429B74u;
        goto label_429b74;
    }
    ctx->pc = 0x429B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x429B74u);
        ctx->pc = 0x429B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429B6Cu;
        // 0x429b70: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429B6Cu, 0x429B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x429B74u;
label_429b74:
    // 0x429b74: 0xc10b1c6  jal         func_42C718
label_429b78:
    if (ctx->pc == 0x429B78u) {
        ctx->pc = 0x429B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429B74u;
        // 0x429b78: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x429B7Cu;
        goto label_429b7c;
    }
    ctx->pc = 0x429B74u;
    SET_GPR_U32(ctx, 31, 0x429B7Cu);
    ctx->pc = 0x429B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429B74u;
    // 0x429b78: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x429B74u, 0x429B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429B7Cu;
label_429b7c:
    // 0x429b7c: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x429b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_429b80:
    // 0x429b80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_429b84:
    if (ctx->pc == 0x429B84u) {
        ctx->pc = 0x429B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429B80u;
        // 0x429b84: 0x8ee5cdb4  lw          $a1, -0x324C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429B88u;
        goto label_429b88;
    }
    ctx->pc = 0x429B80u;
    {
        const bool branch_taken_0x429b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x429B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429B80u;
        // 0x429b84: 0x8ee5cdb4  lw          $a1, -0x324C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429b80) {
            ctx->pc = 0x429BA8u;
            goto label_429ba8;
        }
    }
    ctx->pc = 0x429B88u;
label_429b88:
    // 0x429b88: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x429b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_429b8c:
    // 0x429b8c: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x429b8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_429b90:
    // 0x429b90: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x429b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_429b94:
    // 0x429b94: 0x60f809  jalr        $v1
label_429b98:
    if (ctx->pc == 0x429B98u) {
        ctx->pc = 0x429B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429B94u;
        // 0x429b98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429B9Cu;
        goto label_429b9c;
    }
    ctx->pc = 0x429B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x429B9Cu);
        ctx->pc = 0x429B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429B94u;
        // 0x429b98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429B94u, 0x429B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x429B9Cu;
label_429b9c:
    // 0x429b9c: 0xc10b1c6  jal         func_42C718
label_429ba0:
    if (ctx->pc == 0x429BA0u) {
        ctx->pc = 0x429BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429B9Cu;
        // 0x429ba0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x429BA4u;
        goto label_429ba4;
    }
    ctx->pc = 0x429B9Cu;
    SET_GPR_U32(ctx, 31, 0x429BA4u);
    ctx->pc = 0x429BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429B9Cu;
    // 0x429ba0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x429B9Cu, 0x429BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429BA4u;
label_429ba4:
    // 0x429ba4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x429ba4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_429ba8:
    // 0x429ba8: 0x8ee5cdb4  lw          $a1, -0x324C($s7)
    ctx->pc = 0x429ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
label_429bac:
    // 0x429bac: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x429bacu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
label_429bb0:
    // 0x429bb0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x429bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_429bb4:
    // 0x429bb4: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x429bb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_429bb8:
    // 0x429bb8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x429bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_429bbc:
    // 0x429bbc: 0x60f809  jalr        $v1
label_429bc0:
    if (ctx->pc == 0x429BC0u) {
        ctx->pc = 0x429BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429BBCu;
        // 0x429bc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429BC4u;
        goto label_429bc4;
    }
    ctx->pc = 0x429BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x429BC4u);
        ctx->pc = 0x429BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429BBCu;
        // 0x429bc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429BBCu, 0x429BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x429BC4u;
label_429bc4:
    // 0x429bc4: 0xc10b1c6  jal         func_42C718
label_429bc8:
    if (ctx->pc == 0x429BC8u) {
        ctx->pc = 0x429BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429BC4u;
        // 0x429bc8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x429BCCu;
        goto label_429bcc;
    }
    ctx->pc = 0x429BC4u;
    SET_GPR_U32(ctx, 31, 0x429BCCu);
    ctx->pc = 0x429BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429BC4u;
    // 0x429bc8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x429BC4u, 0x429BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429BCCu;
label_429bcc:
    // 0x429bcc: 0x8ee5cdb4  lw          $a1, -0x324C($s7)
    ctx->pc = 0x429bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
label_429bd0:
    // 0x429bd0: 0x568823  subu        $s1, $v0, $s6
    ctx->pc = 0x429bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_429bd4:
    // 0x429bd4: 0x118842  srl         $s1, $s1, 1
    ctx->pc = 0x429bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_429bd8:
    // 0x429bd8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x429bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_429bdc:
    // 0x429bdc: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x429bdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_429be0:
    // 0x429be0: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x429be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_429be4:
    // 0x429be4: 0x60f809  jalr        $v1
label_429be8:
    if (ctx->pc == 0x429BE8u) {
        ctx->pc = 0x429BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429BE4u;
        // 0x429be8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429BECu;
        goto label_429bec;
    }
    ctx->pc = 0x429BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x429BECu);
        ctx->pc = 0x429BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429BE4u;
        // 0x429be8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429BE4u, 0x429BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x429BECu;
label_429bec:
    // 0x429bec: 0xc10b1c6  jal         func_42C718
label_429bf0:
    if (ctx->pc == 0x429BF0u) {
        ctx->pc = 0x429BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429BECu;
        // 0x429bf0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x429BF4u;
        goto label_429bf4;
    }
    ctx->pc = 0x429BECu;
    SET_GPR_U32(ctx, 31, 0x429BF4u);
    ctx->pc = 0x429BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429BECu;
    // 0x429bf0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x429BECu, 0x429BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429BF4u;
label_429bf4:
    // 0x429bf4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x429bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_429bf8:
    // 0x429bf8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x429bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_429bfc:
    // 0x429bfc: 0x559023  subu        $s2, $v0, $s5
    ctx->pc = 0x429bfcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_429c00:
    // 0x429c00: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x429c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_429c04:
    // 0x429c04: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x429c04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_429c08:
    // 0x429c08: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x429c08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_429c0c:
    // 0x429c0c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x429c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_429c10:
    // 0x429c10: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x429c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_429c14:
    // 0x429c14: 0x7393a  dsrl        $a3, $a3, 4
    ctx->pc = 0x429c14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 4);
label_429c18:
    // 0x429c18: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x429c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_429c1c:
    // 0x429c1c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x429c1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_429c20:
    // 0x429c20: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x429c20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
label_429c24:
    // 0x429c24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x429c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_429c28:
    // 0x429c28: 0x240afff0  addiu       $t2, $zero, -0x10
    ctx->pc = 0x429c28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_429c2c:
    // 0x429c2c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x429c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_429c30:
    // 0x429c30: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x429c30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_429c34:
    // 0x429c34: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x429c34u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_429c38:
    // 0x429c38: 0x240b000e  addiu       $t3, $zero, 0xE
    ctx->pc = 0x429c38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_429c3c:
    // 0x429c3c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x429c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_429c40:
    // 0x429c40: 0x129042  srl         $s2, $s2, 1
    ctx->pc = 0x429c40u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_429c44:
    // 0x429c44: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x429c44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
label_429c48:
    // 0x429c48: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x429c48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_429c4c:
    // 0x429c4c: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x429c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_429c50:
    // 0x429c50: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x429c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_429c54:
    // 0x429c54: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x429c54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_429c58:
    // 0x429c58: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x429c58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_429c5c:
    // 0x429c5c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x429c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_429c60:
    // 0x429c60: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x429c60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_429c64:
    // 0x429c64: 0x8ee5cdb4  lw          $a1, -0x324C($s7)
    ctx->pc = 0x429c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
label_429c68:
    // 0x429c68: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x429c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_429c6c:
    // 0x429c6c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x429c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_429c70:
    // 0x429c70: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x429c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_429c74:
    // 0x429c74: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x429c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_429c78:
    // 0x429c78: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x429c78u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_429c7c:
    // 0x429c7c: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x429c7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_429c80:
    // 0x429c80: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x429c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_429c84:
    // 0x429c84: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x429c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_429c88:
    // 0x429c88: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x429c88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
label_429c8c:
    // 0x429c8c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x429c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_429c90:
    // 0x429c90: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x429c90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_429c94:
    // 0x429c94: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x429c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_429c98:
    // 0x429c98: 0x60f809  jalr        $v1
label_429c9c:
    if (ctx->pc == 0x429C9Cu) {
        ctx->pc = 0x429C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429C98u;
        // 0x429c9c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429CA0u;
        goto label_429ca0;
    }
    ctx->pc = 0x429C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x429CA0u);
        ctx->pc = 0x429C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429C98u;
        // 0x429c9c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429C98u, 0x429CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x429CA0u;
label_429ca0:
    // 0x429ca0: 0xc10b1c6  jal         func_42C718
label_429ca4:
    if (ctx->pc == 0x429CA4u) {
        ctx->pc = 0x429CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429CA0u;
        // 0x429ca4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x429CA8u;
        goto label_429ca8;
    }
    ctx->pc = 0x429CA0u;
    SET_GPR_U32(ctx, 31, 0x429CA8u);
    ctx->pc = 0x429CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429CA0u;
    // 0x429ca4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x429CA0u, 0x429CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429CA8u;
label_429ca8:
    // 0x429ca8: 0x2d53818  mult        $a3, $s6, $s5
    ctx->pc = 0x429ca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_429cac:
    // 0x429cac: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x429cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_429cb0:
    // 0x429cb0: 0x16203c  dsll32      $a0, $s6, 0
    ctx->pc = 0x429cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 0));
label_429cb4:
    // 0x429cb4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x429cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_429cb8:
    // 0x429cb8: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x429cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
label_429cbc:
    // 0x429cbc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x429cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_429cc0:
    // 0x429cc0: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x429cc0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_429cc4:
    // 0x429cc4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x429cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_429cc8:
    // 0x429cc8: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x429cc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
label_429ccc:
    // 0x429ccc: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x429cccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
label_429cd0:
    // 0x429cd0: 0x2328825  or          $s1, $s1, $s2
    ctx->pc = 0x429cd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
label_429cd4:
    // 0x429cd4: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x429cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_429cd8:
    // 0x429cd8: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x429cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_429cdc:
    // 0x429cdc: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x429cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_429ce0:
    // 0x429ce0: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x429ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_429ce4:
    // 0x429ce4: 0xfe130020  sd          $s3, 0x20($s0)
    ctx->pc = 0x429ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 19));
label_429ce8:
    // 0x429ce8: 0xfe020058  sd          $v0, 0x58($s0)
    ctx->pc = 0x429ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 2));
label_429cec:
    // 0x429cec: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x429cecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_429cf0:
    // 0x429cf0: 0xfe050028  sd          $a1, 0x28($s0)
    ctx->pc = 0x429cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 5));
label_429cf4:
    // 0x429cf4: 0x74882  srl         $t1, $a3, 2
    ctx->pc = 0x429cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
label_429cf8:
    // 0x429cf8: 0xfe110030  sd          $s1, 0x30($s0)
    ctx->pc = 0x429cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 17));
label_429cfc:
    // 0x429cfc: 0xfe030038  sd          $v1, 0x38($s0)
    ctx->pc = 0x429cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 3));
label_429d00:
    // 0x429d00: 0xfe040040  sd          $a0, 0x40($s0)
    ctx->pc = 0x429d00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 4));
label_429d04:
    // 0x429d04: 0xfe060048  sd          $a2, 0x48($s0)
    ctx->pc = 0x429d04u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 6));
label_429d08:
    // 0x429d08: 0x11200038  beqz        $t1, . + 4 + (0x38 << 2)
label_429d0c:
    if (ctx->pc == 0x429D0Cu) {
        ctx->pc = 0x429D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429D08u;
        // 0x429d0c: 0xfe000050  sd          $zero, 0x50($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429D10u;
        goto label_429d10;
    }
    ctx->pc = 0x429D08u;
    {
        const bool branch_taken_0x429d08 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x429D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429D08u;
        // 0x429d0c: 0xfe000050  sd          $zero, 0x50($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429d08) {
            ctx->pc = 0x429DECu;
            goto label_429dec;
        }
    }
    ctx->pc = 0x429D10u;
label_429d10:
    // 0x429d10: 0x24087fff  addiu       $t0, $zero, 0x7FFF
    ctx->pc = 0x429d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_429d14:
    // 0x429d14: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x429d14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_429d18:
    // 0x429d18: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x429d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_429d1c:
    // 0x429d1c: 0x240f8000  addiu       $t7, $zero, -0x8000
    ctx->pc = 0x429d1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_429d20:
    // 0x429d20: 0x340ef3ff  ori         $t6, $zero, 0xF3FF
    ctx->pc = 0x429d20u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62463);
label_429d24:
    // 0x429d24: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x429d24u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
label_429d28:
    // 0x429d28: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x429d28u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
label_429d2c:
    // 0x429d2c: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x429d2cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
label_429d30:
    // 0x429d30: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x429d30u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
label_429d34:
    // 0x429d34: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x429d34u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
label_429d38:
    // 0x429d38: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x429d38u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
label_429d3c:
    // 0x429d3c: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x429d3cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_429d40:
    // 0x429d40: 0xd6b3c  dsll32      $t5, $t5, 12
    ctx->pc = 0x429d40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 12));
label_429d44:
    // 0x429d44: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x429d44u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
label_429d48:
    // 0x429d48: 0x358c7fff  ori         $t4, $t4, 0x7FFF
    ctx->pc = 0x429d48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32767);
label_429d4c:
    // 0x429d4c: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x429d4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_429d50:
    // 0x429d50: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x429d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_429d54:
    // 0x429d54: 0x109182a  slt         $v1, $t0, $t1
    ctx->pc = 0x429d54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_429d58:
    // 0x429d58: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x429d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_429d5c:
    // 0x429d5c: 0xa0500003  sb          $s0, 0x3($v0)
    ctx->pc = 0x429d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 16));
label_429d60:
    // 0x429d60: 0x123280a  movz        $a1, $t1, $v1
    ctx->pc = 0x429d60u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 9));
label_429d64:
    // 0x429d64: 0x30a67fff  andi        $a2, $a1, 0x7FFF
    ctx->pc = 0x429d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
label_429d68:
    // 0x429d68: 0xa91826  xor         $v1, $a1, $t1
    ctx->pc = 0x429d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 9));
label_429d6c:
    // 0x429d6c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x429d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_429d70:
    // 0x429d70: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x429d70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_429d74:
    // 0x429d74: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x429d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
label_429d78:
    // 0x429d78: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x429d78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_429d7c:
    // 0x429d7c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x429d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_429d80:
    // 0x429d80: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x429d80u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_429d84:
    // 0x429d84: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x429d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_429d88:
    // 0x429d88: 0xa4510000  sh          $s1, 0x0($v0)
    ctx->pc = 0x429d88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 17));
label_429d8c:
    // 0x429d8c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x429d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_429d90:
    // 0x429d90: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x429d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_429d94:
    // 0x429d94: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x429d94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_429d98:
    // 0x429d98: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x429d98u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_429d9c:
    // 0x429d9c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x429d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_429da0:
    // 0x429da0: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x429da0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_429da4:
    // 0x429da4: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x429da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
label_429da8:
    // 0x429da8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x429da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_429dac:
    // 0x429dac: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x429dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_429db0:
    // 0x429db0: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x429db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_429db4:
    // 0x429db4: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x429db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
label_429db8:
    // 0x429db8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x429db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_429dbc:
    // 0x429dbc: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x429dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_429dc0:
    // 0x429dc0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x429dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_429dc4:
    // 0x429dc4: 0xa06b0003  sb          $t3, 0x3($v1)
    ctx->pc = 0x429dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 11));
label_429dc8:
    // 0x429dc8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x429dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_429dcc:
    // 0x429dcc: 0xac4a0004  sw          $t2, 0x4($v0)
    ctx->pc = 0x429dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 10));
label_429dd0:
    // 0x429dd0: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x429dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_429dd4:
    // 0x429dd4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x429dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_429dd8:
    // 0x429dd8: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x429dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_429ddc:
    // 0x429ddc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x429ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_429de0:
    // 0x429de0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x429de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_429de4:
    // 0x429de4: 0x1520ffda  bnez        $t1, . + 4 + (-0x26 << 2)
label_429de8:
    if (ctx->pc == 0x429DE8u) {
        ctx->pc = 0x429DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429DE4u;
        // 0x429de8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429DECu;
        goto label_429dec;
    }
    ctx->pc = 0x429DE4u;
    {
        const bool branch_taken_0x429de4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x429DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429DE4u;
        // 0x429de8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429de4) {
            ctx->pc = 0x429D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_429d50;
        }
    }
    ctx->pc = 0x429DECu;
label_429dec:
    // 0x429dec: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x429decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_429df0:
    // 0x429df0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x429df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_429df4:
    // 0x429df4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x429df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_429df8:
    // 0x429df8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x429df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_429dfc:
    // 0x429dfc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x429dfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_429e00:
    // 0x429e00: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x429e00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_429e04:
    // 0x429e04: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x429e04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_429e08:
    // 0x429e08: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x429e08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_429e0c:
    // 0x429e0c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x429e0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_429e10:
    // 0x429e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x429e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_429e14:
    // 0x429e14: 0x3e00008  jr          $ra
label_429e18:
    if (ctx->pc == 0x429E18u) {
        ctx->pc = 0x429E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429E14u;
        // 0x429e18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429E1Cu;
        goto label_429e1c;
    }
    ctx->pc = 0x429E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429E14u;
        // 0x429e18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429E1Cu;
label_429e1c:
    // 0x429e1c: 0x0  nop
    ctx->pc = 0x429e1cu;
    // NOP
    ctx->pc = 0x429e20u;
}
