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

// Function: sub_00318A38
// Address: 0x318a38 - 0x318d78
void sub_00318A38_0x318a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318A38_0x318a38");
#endif

    switch (ctx->pc) {
        case 0x318a38u: goto label_318a38;
        case 0x318a3cu: goto label_318a3c;
        case 0x318a40u: goto label_318a40;
        case 0x318a44u: goto label_318a44;
        case 0x318a48u: goto label_318a48;
        case 0x318a4cu: goto label_318a4c;
        case 0x318a50u: goto label_318a50;
        case 0x318a54u: goto label_318a54;
        case 0x318a58u: goto label_318a58;
        case 0x318a5cu: goto label_318a5c;
        case 0x318a60u: goto label_318a60;
        case 0x318a64u: goto label_318a64;
        case 0x318a68u: goto label_318a68;
        case 0x318a6cu: goto label_318a6c;
        case 0x318a70u: goto label_318a70;
        case 0x318a74u: goto label_318a74;
        case 0x318a78u: goto label_318a78;
        case 0x318a7cu: goto label_318a7c;
        case 0x318a80u: goto label_318a80;
        case 0x318a84u: goto label_318a84;
        case 0x318a88u: goto label_318a88;
        case 0x318a8cu: goto label_318a8c;
        case 0x318a90u: goto label_318a90;
        case 0x318a94u: goto label_318a94;
        case 0x318a98u: goto label_318a98;
        case 0x318a9cu: goto label_318a9c;
        case 0x318aa0u: goto label_318aa0;
        case 0x318aa4u: goto label_318aa4;
        case 0x318aa8u: goto label_318aa8;
        case 0x318aacu: goto label_318aac;
        case 0x318ab0u: goto label_318ab0;
        case 0x318ab4u: goto label_318ab4;
        case 0x318ab8u: goto label_318ab8;
        case 0x318abcu: goto label_318abc;
        case 0x318ac0u: goto label_318ac0;
        case 0x318ac4u: goto label_318ac4;
        case 0x318ac8u: goto label_318ac8;
        case 0x318accu: goto label_318acc;
        case 0x318ad0u: goto label_318ad0;
        case 0x318ad4u: goto label_318ad4;
        case 0x318ad8u: goto label_318ad8;
        case 0x318adcu: goto label_318adc;
        case 0x318ae0u: goto label_318ae0;
        case 0x318ae4u: goto label_318ae4;
        case 0x318ae8u: goto label_318ae8;
        case 0x318aecu: goto label_318aec;
        case 0x318af0u: goto label_318af0;
        case 0x318af4u: goto label_318af4;
        case 0x318af8u: goto label_318af8;
        case 0x318afcu: goto label_318afc;
        case 0x318b00u: goto label_318b00;
        case 0x318b04u: goto label_318b04;
        case 0x318b08u: goto label_318b08;
        case 0x318b0cu: goto label_318b0c;
        case 0x318b10u: goto label_318b10;
        case 0x318b14u: goto label_318b14;
        case 0x318b18u: goto label_318b18;
        case 0x318b1cu: goto label_318b1c;
        case 0x318b20u: goto label_318b20;
        case 0x318b24u: goto label_318b24;
        case 0x318b28u: goto label_318b28;
        case 0x318b2cu: goto label_318b2c;
        case 0x318b30u: goto label_318b30;
        case 0x318b34u: goto label_318b34;
        case 0x318b38u: goto label_318b38;
        case 0x318b3cu: goto label_318b3c;
        case 0x318b40u: goto label_318b40;
        case 0x318b44u: goto label_318b44;
        case 0x318b48u: goto label_318b48;
        case 0x318b4cu: goto label_318b4c;
        case 0x318b50u: goto label_318b50;
        case 0x318b54u: goto label_318b54;
        case 0x318b58u: goto label_318b58;
        case 0x318b5cu: goto label_318b5c;
        case 0x318b60u: goto label_318b60;
        case 0x318b64u: goto label_318b64;
        case 0x318b68u: goto label_318b68;
        case 0x318b6cu: goto label_318b6c;
        case 0x318b70u: goto label_318b70;
        case 0x318b74u: goto label_318b74;
        case 0x318b78u: goto label_318b78;
        case 0x318b7cu: goto label_318b7c;
        case 0x318b80u: goto label_318b80;
        case 0x318b84u: goto label_318b84;
        case 0x318b88u: goto label_318b88;
        case 0x318b8cu: goto label_318b8c;
        case 0x318b90u: goto label_318b90;
        case 0x318b94u: goto label_318b94;
        case 0x318b98u: goto label_318b98;
        case 0x318b9cu: goto label_318b9c;
        case 0x318ba0u: goto label_318ba0;
        case 0x318ba4u: goto label_318ba4;
        case 0x318ba8u: goto label_318ba8;
        case 0x318bacu: goto label_318bac;
        case 0x318bb0u: goto label_318bb0;
        case 0x318bb4u: goto label_318bb4;
        case 0x318bb8u: goto label_318bb8;
        case 0x318bbcu: goto label_318bbc;
        case 0x318bc0u: goto label_318bc0;
        case 0x318bc4u: goto label_318bc4;
        case 0x318bc8u: goto label_318bc8;
        case 0x318bccu: goto label_318bcc;
        case 0x318bd0u: goto label_318bd0;
        case 0x318bd4u: goto label_318bd4;
        case 0x318bd8u: goto label_318bd8;
        case 0x318bdcu: goto label_318bdc;
        case 0x318be0u: goto label_318be0;
        case 0x318be4u: goto label_318be4;
        case 0x318be8u: goto label_318be8;
        case 0x318becu: goto label_318bec;
        case 0x318bf0u: goto label_318bf0;
        case 0x318bf4u: goto label_318bf4;
        case 0x318bf8u: goto label_318bf8;
        case 0x318bfcu: goto label_318bfc;
        case 0x318c00u: goto label_318c00;
        case 0x318c04u: goto label_318c04;
        case 0x318c08u: goto label_318c08;
        case 0x318c0cu: goto label_318c0c;
        case 0x318c10u: goto label_318c10;
        case 0x318c14u: goto label_318c14;
        case 0x318c18u: goto label_318c18;
        case 0x318c1cu: goto label_318c1c;
        case 0x318c20u: goto label_318c20;
        case 0x318c24u: goto label_318c24;
        case 0x318c28u: goto label_318c28;
        case 0x318c2cu: goto label_318c2c;
        case 0x318c30u: goto label_318c30;
        case 0x318c34u: goto label_318c34;
        case 0x318c38u: goto label_318c38;
        case 0x318c3cu: goto label_318c3c;
        case 0x318c40u: goto label_318c40;
        case 0x318c44u: goto label_318c44;
        case 0x318c48u: goto label_318c48;
        case 0x318c4cu: goto label_318c4c;
        case 0x318c50u: goto label_318c50;
        case 0x318c54u: goto label_318c54;
        case 0x318c58u: goto label_318c58;
        case 0x318c5cu: goto label_318c5c;
        case 0x318c60u: goto label_318c60;
        case 0x318c64u: goto label_318c64;
        case 0x318c68u: goto label_318c68;
        case 0x318c6cu: goto label_318c6c;
        case 0x318c70u: goto label_318c70;
        case 0x318c74u: goto label_318c74;
        case 0x318c78u: goto label_318c78;
        case 0x318c7cu: goto label_318c7c;
        case 0x318c80u: goto label_318c80;
        case 0x318c84u: goto label_318c84;
        case 0x318c88u: goto label_318c88;
        case 0x318c8cu: goto label_318c8c;
        case 0x318c90u: goto label_318c90;
        case 0x318c94u: goto label_318c94;
        case 0x318c98u: goto label_318c98;
        case 0x318c9cu: goto label_318c9c;
        case 0x318ca0u: goto label_318ca0;
        case 0x318ca4u: goto label_318ca4;
        case 0x318ca8u: goto label_318ca8;
        case 0x318cacu: goto label_318cac;
        case 0x318cb0u: goto label_318cb0;
        case 0x318cb4u: goto label_318cb4;
        case 0x318cb8u: goto label_318cb8;
        case 0x318cbcu: goto label_318cbc;
        case 0x318cc0u: goto label_318cc0;
        case 0x318cc4u: goto label_318cc4;
        case 0x318cc8u: goto label_318cc8;
        case 0x318cccu: goto label_318ccc;
        case 0x318cd0u: goto label_318cd0;
        case 0x318cd4u: goto label_318cd4;
        case 0x318cd8u: goto label_318cd8;
        case 0x318cdcu: goto label_318cdc;
        case 0x318ce0u: goto label_318ce0;
        case 0x318ce4u: goto label_318ce4;
        case 0x318ce8u: goto label_318ce8;
        case 0x318cecu: goto label_318cec;
        case 0x318cf0u: goto label_318cf0;
        case 0x318cf4u: goto label_318cf4;
        case 0x318cf8u: goto label_318cf8;
        case 0x318cfcu: goto label_318cfc;
        case 0x318d00u: goto label_318d00;
        case 0x318d04u: goto label_318d04;
        case 0x318d08u: goto label_318d08;
        case 0x318d0cu: goto label_318d0c;
        case 0x318d10u: goto label_318d10;
        case 0x318d14u: goto label_318d14;
        case 0x318d18u: goto label_318d18;
        case 0x318d1cu: goto label_318d1c;
        case 0x318d20u: goto label_318d20;
        case 0x318d24u: goto label_318d24;
        case 0x318d28u: goto label_318d28;
        case 0x318d2cu: goto label_318d2c;
        case 0x318d30u: goto label_318d30;
        case 0x318d34u: goto label_318d34;
        case 0x318d38u: goto label_318d38;
        case 0x318d3cu: goto label_318d3c;
        case 0x318d40u: goto label_318d40;
        case 0x318d44u: goto label_318d44;
        case 0x318d48u: goto label_318d48;
        case 0x318d4cu: goto label_318d4c;
        case 0x318d50u: goto label_318d50;
        case 0x318d54u: goto label_318d54;
        case 0x318d58u: goto label_318d58;
        case 0x318d5cu: goto label_318d5c;
        case 0x318d60u: goto label_318d60;
        case 0x318d64u: goto label_318d64;
        case 0x318d68u: goto label_318d68;
        case 0x318d6cu: goto label_318d6c;
        case 0x318d70u: goto label_318d70;
        case 0x318d74u: goto label_318d74;
        default: break;
    }

    ctx->pc = 0x318a38u;

label_318a38:
    // 0x318a38: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x318a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_318a3c:
    // 0x318a3c: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x318a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_318a40:
    // 0x318a40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x318a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_318a44:
    // 0x318a44: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x318a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_318a48:
    // 0x318a48: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x318a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_318a4c:
    // 0x318a4c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x318a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_318a50:
    // 0x318a50: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x318a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_318a54:
    // 0x318a54: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x318a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_318a58:
    // 0x318a58: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x318a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_318a5c:
    // 0x318a5c: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x318a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_318a60:
    // 0x318a60: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x318a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_318a64:
    // 0x318a64: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x318a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_318a68:
    // 0x318a68: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x318a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_318a6c:
    // 0x318a6c: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x318a6cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_318a70:
    // 0x318a70: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x318a70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_318a74:
    // 0x318a74: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x318a74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_318a78:
    // 0x318a78: 0xc0e40a2  jal         func_390288
label_318a7c:
    if (ctx->pc == 0x318A7Cu) {
        ctx->pc = 0x318A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A78u;
        // 0x318a7c: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318A80u;
        goto label_318a80;
    }
    ctx->pc = 0x318A78u;
    SET_GPR_U32(ctx, 31, 0x318A80u);
    ctx->pc = 0x318A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318A78u;
    // 0x318a7c: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x318A78u, 0x318A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318A80u;
label_318a80:
    // 0x318a80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x318a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318a84:
    // 0x318a84: 0x520000ad  beql        $s0, $zero, . + 4 + (0xAD << 2)
label_318a88:
    if (ctx->pc == 0x318A88u) {
        ctx->pc = 0x318A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A84u;
        // 0x318a88: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318A8Cu;
        goto label_318a8c;
    }
    ctx->pc = 0x318A84u;
    {
        const bool branch_taken_0x318a84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a84) {
            ctx->pc = 0x318A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318A84u;
            // 0x318a88: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318D3Cu;
            goto label_318d3c;
        }
    }
    ctx->pc = 0x318A8Cu;
label_318a8c:
    // 0x318a8c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x318a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_318a90:
    // 0x318a90: 0xc059856  jal         func_166158
label_318a94:
    if (ctx->pc == 0x318A94u) {
        ctx->pc = 0x318A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A90u;
        // 0x318a94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318A98u;
        goto label_318a98;
    }
    ctx->pc = 0x318A90u;
    SET_GPR_U32(ctx, 31, 0x318A98u);
    ctx->pc = 0x318A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318A90u;
    // 0x318a94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x318A90u, 0x318A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318A98u;
label_318a98:
    // 0x318a98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x318a98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318a9c:
    // 0x318a9c: 0x122000a6  beqz        $s1, . + 4 + (0xA6 << 2)
label_318aa0:
    if (ctx->pc == 0x318AA0u) {
        ctx->pc = 0x318AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A9Cu;
        // 0x318aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318AA4u;
        goto label_318aa4;
    }
    ctx->pc = 0x318A9Cu;
    {
        const bool branch_taken_0x318a9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x318AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A9Cu;
        // 0x318aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a9c) {
            ctx->pc = 0x318D38u;
            goto label_318d38;
        }
    }
    ctx->pc = 0x318AA4u;
label_318aa4:
    // 0x318aa4: 0xc10587a  jal         func_4161E8
label_318aa8:
    if (ctx->pc == 0x318AA8u) {
        ctx->pc = 0x318AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AA4u;
        // 0x318aa8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318AACu;
        goto label_318aac;
    }
    ctx->pc = 0x318AA4u;
    SET_GPR_U32(ctx, 31, 0x318AACu);
    ctx->pc = 0x318AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318AA4u;
    // 0x318aa8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x318AA4u, 0x318AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318AACu;
label_318aac:
    // 0x318aac: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x318aacu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_318ab0:
    // 0x318ab0: 0x0  nop
    ctx->pc = 0x318ab0u;
    // NOP
label_318ab4:
    // 0x318ab4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x318ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_318ab8:
    // 0x318ab8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x318ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_318abc:
    // 0x318abc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x318abcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_318ac0:
    // 0x318ac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x318ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318ac4:
    // 0x318ac4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x318ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_318ac8:
    // 0x318ac8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x318ac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318acc:
    // 0x318acc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x318accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_318ad0:
    // 0x318ad0: 0xc6560028  lwc1        $f22, 0x28($s2)
    ctx->pc = 0x318ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_318ad4:
    // 0x318ad4: 0x0  nop
    ctx->pc = 0x318ad4u;
    // NOP
label_318ad8:
    // 0x318ad8: 0x0  nop
    ctx->pc = 0x318ad8u;
    // NOP
label_318adc:
    // 0x318adc: 0x460105c3  div.s       $f23, $f0, $f1
    ctx->pc = 0x318adcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_318ae0:
    // 0x318ae0: 0x245e1740  addiu       $fp, $v0, 0x1740
    ctx->pc = 0x318ae0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_318ae4:
    // 0x318ae4: 0x24750048  addiu       $s5, $v1, 0x48
    ctx->pc = 0x318ae4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_318ae8:
    // 0x318ae8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x318ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_318aec:
    // 0x318aec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x318aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_318af0:
    // 0x318af0: 0x24571730  addiu       $s7, $v0, 0x1730
    ctx->pc = 0x318af0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_318af4:
    // 0x318af4: 0x24761530  addiu       $s6, $v1, 0x1530
    ctx->pc = 0x318af4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 5424));
label_318af8:
    // 0x318af8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x318af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_318afc:
    // 0x318afc: 0x0  nop
    ctx->pc = 0x318afcu;
    // NOP
label_318b00:
    // 0x318b00: 0xc137826  jal         func_4DE098
label_318b04:
    if (ctx->pc == 0x318B04u) {
        ctx->pc = 0x318B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B00u;
        // 0x318b04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318B08u;
        goto label_318b08;
    }
    ctx->pc = 0x318B00u;
    SET_GPR_U32(ctx, 31, 0x318B08u);
    ctx->pc = 0x318B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318B00u;
    // 0x318b04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x318B00u, 0x318B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318B08u;
label_318b08:
    // 0x318b08: 0xc0e409a  jal         func_390268
label_318b0c:
    if (ctx->pc == 0x318B0Cu) {
        ctx->pc = 0x318B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B08u;
        // 0x318b0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318B10u;
        goto label_318b10;
    }
    ctx->pc = 0x318B08u;
    SET_GPR_U32(ctx, 31, 0x318B10u);
    ctx->pc = 0x318B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318B08u;
    // 0x318b0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x318B08u, 0x318B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318B10u;
label_318b10:
    // 0x318b10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x318b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318b14:
    // 0x318b14: 0x12200084  beqz        $s1, . + 4 + (0x84 << 2)
label_318b18:
    if (ctx->pc == 0x318B18u) {
        ctx->pc = 0x318B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B14u;
        // 0x318b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318B1Cu;
        goto label_318b1c;
    }
    ctx->pc = 0x318B14u;
    {
        const bool branch_taken_0x318b14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B14u;
        // 0x318b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b14) {
            ctx->pc = 0x318D28u;
            goto label_318d28;
        }
    }
    ctx->pc = 0x318B1Cu;
label_318b1c:
    // 0x318b1c: 0xc089f98  jal         func_227E60
label_318b20:
    if (ctx->pc == 0x318B20u) {
        ctx->pc = 0x318B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B1Cu;
        // 0x318b20: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318B24u;
        goto label_318b24;
    }
    ctx->pc = 0x318B1Cu;
    SET_GPR_U32(ctx, 31, 0x318B24u);
    ctx->pc = 0x318B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318B1Cu;
    // 0x318b20: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x318B1Cu, 0x318B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318B24u;
label_318b24:
    // 0x318b24: 0x50500081  beql        $v0, $s0, . + 4 + (0x81 << 2)
label_318b28:
    if (ctx->pc == 0x318B28u) {
        ctx->pc = 0x318B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B24u;
        // 0x318b28: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318B2Cu;
        goto label_318b2c;
    }
    ctx->pc = 0x318B24u;
    {
        const bool branch_taken_0x318b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x318b24) {
            ctx->pc = 0x318B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318B24u;
            // 0x318b28: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318D2Cu;
            goto label_318d2c;
        }
    }
    ctx->pc = 0x318B2Cu;
label_318b2c:
    // 0x318b2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x318b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_318b30:
    // 0x318b30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x318b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_318b34:
    // 0x318b34: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x318b34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_318b38:
    // 0x318b38: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x318b38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_318b3c:
    // 0x318b3c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x318b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_318b40:
    // 0x318b40: 0xc12e310  jal         func_4B8C40
label_318b44:
    if (ctx->pc == 0x318B44u) {
        ctx->pc = 0x318B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B40u;
        // 0x318b44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318B48u;
        goto label_318b48;
    }
    ctx->pc = 0x318B40u;
    SET_GPR_U32(ctx, 31, 0x318B48u);
    ctx->pc = 0x318B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318B40u;
    // 0x318b44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x318B40u, 0x318B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318B48u;
label_318b48:
    // 0x318b48: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x318b48u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_318b4c:
    // 0x318b4c: 0xc12e29c  jal         func_4B8A70
label_318b50:
    if (ctx->pc == 0x318B50u) {
        ctx->pc = 0x318B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B4Cu;
        // 0x318b50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318B54u;
        goto label_318b54;
    }
    ctx->pc = 0x318B4Cu;
    SET_GPR_U32(ctx, 31, 0x318B54u);
    ctx->pc = 0x318B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318B4Cu;
    // 0x318b50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x318B4Cu, 0x318B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318B54u;
label_318b54:
    // 0x318b54: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x318b54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_318b58:
    // 0x318b58: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x318b58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_318b5c:
    // 0x318b5c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x318b5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_318b60:
    // 0x318b60: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x318b60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_318b64:
    // 0x318b64: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x318b64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_318b68:
    // 0x318b68: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x318b68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_318b6c:
    // 0x318b6c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x318b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_318b70:
    // 0x318b70: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x318b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_318b74:
    // 0x318b74: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x318b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_318b78:
    // 0x318b78: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x318b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318b7c:
    // 0x318b7c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x318b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318b80:
    // 0x318b80: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x318b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318b84:
    // 0x318b84: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x318b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_318b88:
    // 0x318b88: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x318b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_318b8c:
    // 0x318b8c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x318b8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_318b90:
    // 0x318b90: 0x7ae30000  lq          $v1, 0x0($s7)
    ctx->pc = 0x318b90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_318b94:
    // 0x318b94: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x318b94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_318b98:
    // 0x318b98: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x318b98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_318b9c:
    // 0x318b9c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x318b9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_318ba0:
    // 0x318ba0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x318ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_318ba4:
    // 0x318ba4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x318ba4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_318ba8:
    // 0x318ba8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x318ba8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_318bac:
    // 0x318bac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x318bacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_318bb0:
    // 0x318bb0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x318bb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_318bb4:
    // 0x318bb4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x318bb4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_318bb8:
    // 0x318bb8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x318bb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_318bbc:
    // 0x318bbc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x318bbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_318bc0:
    // 0x318bc0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x318bc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_318bc4:
    // 0x318bc4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x318bc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_318bc8:
    // 0x318bc8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x318bc8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_318bcc:
    // 0x318bcc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x318bccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_318bd0:
    // 0x318bd0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x318bd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_318bd4:
    // 0x318bd4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x318bd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_318bd8:
    // 0x318bd8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x318bd8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_318bdc:
    // 0x318bdc: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x318bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_318be0:
    // 0x318be0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x318be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_318be4:
    // 0x318be4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x318be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_318be8:
    // 0x318be8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x318be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_318bec:
    // 0x318bec: 0xc136b24  jal         func_4DAC90
label_318bf0:
    if (ctx->pc == 0x318BF0u) {
        ctx->pc = 0x318BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BECu;
        // 0x318bf0: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318BF4u;
        goto label_318bf4;
    }
    ctx->pc = 0x318BECu;
    SET_GPR_U32(ctx, 31, 0x318BF4u);
    ctx->pc = 0x318BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318BECu;
    // 0x318bf0: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x318BECu, 0x318BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318BF4u;
label_318bf4:
    // 0x318bf4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x318bf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_318bf8:
    // 0x318bf8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x318bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_318bfc:
    // 0x318bfc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x318bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318c00:
    // 0x318c00: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x318c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_318c04:
    // 0x318c04: 0xc136b18  jal         func_4DAC60
label_318c08:
    if (ctx->pc == 0x318C08u) {
        ctx->pc = 0x318C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C04u;
        // 0x318c08: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C0Cu;
        goto label_318c0c;
    }
    ctx->pc = 0x318C04u;
    SET_GPR_U32(ctx, 31, 0x318C0Cu);
    ctx->pc = 0x318C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318C04u;
    // 0x318c08: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x318C04u, 0x318C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C0Cu;
label_318c0c:
    // 0x318c0c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x318c0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_318c10:
    // 0x318c10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318c14:
    // 0x318c14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x318c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_318c18:
    // 0x318c18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x318c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318c1c:
    // 0x318c1c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x318c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_318c20:
    // 0x318c20: 0xc0937ba  jal         func_24DEE8
label_318c24:
    if (ctx->pc == 0x318C24u) {
        ctx->pc = 0x318C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C20u;
        // 0x318c24: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C28u;
        goto label_318c28;
    }
    ctx->pc = 0x318C20u;
    SET_GPR_U32(ctx, 31, 0x318C28u);
    ctx->pc = 0x318C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318C20u;
    // 0x318c24: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DEE8u, 0x318C20u, 0x318C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C28u;
label_318c28:
    // 0x318c28: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_318c2c:
    if (ctx->pc == 0x318C2Cu) {
        ctx->pc = 0x318C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C28u;
        // 0x318c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C30u;
        goto label_318c30;
    }
    ctx->pc = 0x318C28u;
    {
        const bool branch_taken_0x318c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C28u;
        // 0x318c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c28) {
            ctx->pc = 0x318CD8u;
            goto label_318cd8;
        }
    }
    ctx->pc = 0x318C30u;
label_318c30:
    // 0x318c30: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x318c30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_318c34:
    // 0x318c34: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x318c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_318c38:
    // 0x318c38: 0xc6430024  lwc1        $f3, 0x24($s2)
    ctx->pc = 0x318c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_318c3c:
    // 0x318c3c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x318c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_318c40:
    // 0x318c40: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x318c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_318c44:
    // 0x318c44: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x318c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_318c48:
    // 0x318c48: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x318c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_318c4c:
    // 0x318c4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x318c4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_318c50:
    // 0x318c50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x318c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_318c54:
    // 0x318c54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x318c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318c58:
    // 0x318c58: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x318c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318c5c:
    // 0x318c5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x318c5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318c60:
    // 0x318c60: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x318c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_318c64:
    // 0x318c64: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x318c64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_318c68:
    // 0x318c68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x318c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_318c6c:
    // 0x318c6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x318c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_318c70:
    // 0x318c70: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x318c70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_318c74:
    // 0x318c74: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x318c74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_318c78:
    // 0x318c78: 0x8c6447c4  lw          $a0, 0x47C4($v1)
    ctx->pc = 0x318c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18372)));
label_318c7c:
    // 0x318c7c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x318c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_318c80:
    // 0x318c80: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x318c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_318c84:
    // 0x318c84: 0xc1036e2  jal         func_40DB88
label_318c88:
    if (ctx->pc == 0x318C88u) {
        ctx->pc = 0x318C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C84u;
        // 0x318c88: 0xe7a30050  swc1        $f3, 0x50($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C8Cu;
        goto label_318c8c;
    }
    ctx->pc = 0x318C84u;
    SET_GPR_U32(ctx, 31, 0x318C8Cu);
    ctx->pc = 0x318C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318C84u;
    // 0x318c88: 0xe7a30050  swc1        $f3, 0x50($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x318C84u, 0x318C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C8Cu;
label_318c8c:
    // 0x318c8c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x318c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_318c90:
    // 0x318c90: 0x14500029  bne         $v0, $s0, . + 4 + (0x29 << 2)
label_318c94:
    if (ctx->pc == 0x318C94u) {
        ctx->pc = 0x318C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C90u;
        // 0x318c94: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C98u;
        goto label_318c98;
    }
    ctx->pc = 0x318C90u;
    {
        const bool branch_taken_0x318c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x318C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C90u;
        // 0x318c94: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c90) {
            ctx->pc = 0x318D38u;
            goto label_318d38;
        }
    }
    ctx->pc = 0x318C98u;
label_318c98:
    // 0x318c98: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x318c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_318c9c:
    // 0x318c9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x318c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_318ca0:
    // 0x318ca0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x318ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_318ca4:
    // 0x318ca4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x318ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_318ca8:
    // 0x318ca8: 0xc136b24  jal         func_4DAC90
label_318cac:
    if (ctx->pc == 0x318CACu) {
        ctx->pc = 0x318CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CA8u;
        // 0x318cac: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318CB0u;
        goto label_318cb0;
    }
    ctx->pc = 0x318CA8u;
    SET_GPR_U32(ctx, 31, 0x318CB0u);
    ctx->pc = 0x318CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318CA8u;
    // 0x318cac: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x318CA8u, 0x318CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CB0u;
label_318cb0:
    // 0x318cb0: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x318cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_318cb4:
    // 0x318cb4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x318cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_318cb8:
    // 0x318cb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x318cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318cbc:
    // 0x318cbc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x318cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_318cc0:
    // 0x318cc0: 0xc136b18  jal         func_4DAC60
label_318cc4:
    if (ctx->pc == 0x318CC4u) {
        ctx->pc = 0x318CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CC0u;
        // 0x318cc4: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318CC8u;
        goto label_318cc8;
    }
    ctx->pc = 0x318CC0u;
    SET_GPR_U32(ctx, 31, 0x318CC8u);
    ctx->pc = 0x318CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318CC0u;
    // 0x318cc4: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x318CC0u, 0x318CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CC8u;
label_318cc8:
    // 0x318cc8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x318cc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_318ccc:
    // 0x318ccc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x318cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_318cd0:
    // 0x318cd0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x318cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_318cd4:
    // 0x318cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x318cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_318cd8:
    // 0x318cd8: 0xc087502  jal         func_21D408
label_318cdc:
    if (ctx->pc == 0x318CDCu) {
        ctx->pc = 0x318CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CD8u;
        // 0x318cdc: 0x4617b580  add.s       $f22, $f22, $f23 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318CE0u;
        goto label_318ce0;
    }
    ctx->pc = 0x318CD8u;
    SET_GPR_U32(ctx, 31, 0x318CE0u);
    ctx->pc = 0x318CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318CD8u;
    // 0x318cdc: 0x4617b580  add.s       $f22, $f22, $f23 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x318CD8u, 0x318CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CE0u;
label_318ce0:
    // 0x318ce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x318ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318ce4:
    // 0x318ce4: 0xae160208  sw          $s6, 0x208($s0)
    ctx->pc = 0x318ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 22));
label_318ce8:
    // 0x318ce8: 0xc0a3630  jal         func_28D8C0
label_318cec:
    if (ctx->pc == 0x318CECu) {
        ctx->pc = 0x318CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CE8u;
        // 0x318cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318CF0u;
        goto label_318cf0;
    }
    ctx->pc = 0x318CE8u;
    SET_GPR_U32(ctx, 31, 0x318CF0u);
    ctx->pc = 0x318CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318CE8u;
    // 0x318cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x318CE8u, 0x318CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CF0u;
label_318cf0:
    // 0x318cf0: 0xc0a3628  jal         func_28D8A0
label_318cf4:
    if (ctx->pc == 0x318CF4u) {
        ctx->pc = 0x318CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CF0u;
        // 0x318cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318CF8u;
        goto label_318cf8;
    }
    ctx->pc = 0x318CF0u;
    SET_GPR_U32(ctx, 31, 0x318CF8u);
    ctx->pc = 0x318CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318CF0u;
    // 0x318cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x318CF0u, 0x318CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CF8u;
label_318cf8:
    // 0x318cf8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x318cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_318cfc:
    // 0x318cfc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x318cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_318d00:
    // 0x318d00: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x318d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_318d04:
    // 0x318d04: 0x40f809  jalr        $v0
label_318d08:
    if (ctx->pc == 0x318D08u) {
        ctx->pc = 0x318D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D04u;
        // 0x318d08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D0Cu;
        goto label_318d0c;
    }
    ctx->pc = 0x318D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x318D0Cu);
        ctx->pc = 0x318D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D04u;
        // 0x318d08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318D04u, 0x318D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x318D0Cu;
label_318d0c:
    // 0x318d0c: 0x92470030  lbu         $a3, 0x30($s2)
    ctx->pc = 0x318d0cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
label_318d10:
    // 0x318d10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x318d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318d14:
    // 0x318d14: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x318d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_318d18:
    // 0x318d18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x318d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_318d1c:
    // 0x318d1c: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x318d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_318d20:
    // 0x318d20: 0xc0ae6a4  jal         func_2B9A90
label_318d24:
    if (ctx->pc == 0x318D24u) {
        ctx->pc = 0x318D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D20u;
        // 0x318d24: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D28u;
        goto label_318d28;
    }
    ctx->pc = 0x318D20u;
    SET_GPR_U32(ctx, 31, 0x318D28u);
    ctx->pc = 0x318D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318D20u;
    // 0x318d24: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9A90u, 0x318D20u, 0x318D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318D28u;
label_318d28:
    // 0x318d28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x318d28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_318d2c:
    // 0x318d2c: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x318d2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_318d30:
    // 0x318d30: 0x1440ff73  bnez        $v0, . + 4 + (-0x8D << 2)
label_318d34:
    if (ctx->pc == 0x318D34u) {
        ctx->pc = 0x318D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D30u;
        // 0x318d34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D38u;
        goto label_318d38;
    }
    ctx->pc = 0x318D30u;
    {
        const bool branch_taken_0x318d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D30u;
        // 0x318d34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d30) {
            ctx->pc = 0x318B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318b00;
        }
    }
    ctx->pc = 0x318D38u;
label_318d38:
    // 0x318d38: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x318d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_318d3c:
    // 0x318d3c: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x318d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_318d40:
    // 0x318d40: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x318d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_318d44:
    // 0x318d44: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x318d44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_318d48:
    // 0x318d48: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x318d48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_318d4c:
    // 0x318d4c: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x318d4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_318d50:
    // 0x318d50: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x318d50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_318d54:
    // 0x318d54: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x318d54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_318d58:
    // 0x318d58: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x318d58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_318d5c:
    // 0x318d5c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x318d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_318d60:
    // 0x318d60: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x318d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_318d64:
    // 0x318d64: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x318d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_318d68:
    // 0x318d68: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x318d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_318d6c:
    // 0x318d6c: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x318d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_318d70:
    // 0x318d70: 0x3e00008  jr          $ra
label_318d74:
    if (ctx->pc == 0x318D74u) {
        ctx->pc = 0x318D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D70u;
        // 0x318d74: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D78u;
        goto label_fallthrough_0x318d70;
    }
    ctx->pc = 0x318D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D70u;
        // 0x318d74: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x318d70:
    ctx->pc = 0x318D78u;
}
