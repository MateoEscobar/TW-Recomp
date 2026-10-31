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

// Function: sub_003E39F8
// Address: 0x3e39f8 - 0x3e3d40
void sub_003E39F8_0x3e39f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E39F8_0x3e39f8");
#endif

    switch (ctx->pc) {
        case 0x3e39f8u: goto label_3e39f8;
        case 0x3e39fcu: goto label_3e39fc;
        case 0x3e3a00u: goto label_3e3a00;
        case 0x3e3a04u: goto label_3e3a04;
        case 0x3e3a08u: goto label_3e3a08;
        case 0x3e3a0cu: goto label_3e3a0c;
        case 0x3e3a10u: goto label_3e3a10;
        case 0x3e3a14u: goto label_3e3a14;
        case 0x3e3a18u: goto label_3e3a18;
        case 0x3e3a1cu: goto label_3e3a1c;
        case 0x3e3a20u: goto label_3e3a20;
        case 0x3e3a24u: goto label_3e3a24;
        case 0x3e3a28u: goto label_3e3a28;
        case 0x3e3a2cu: goto label_3e3a2c;
        case 0x3e3a30u: goto label_3e3a30;
        case 0x3e3a34u: goto label_3e3a34;
        case 0x3e3a38u: goto label_3e3a38;
        case 0x3e3a3cu: goto label_3e3a3c;
        case 0x3e3a40u: goto label_3e3a40;
        case 0x3e3a44u: goto label_3e3a44;
        case 0x3e3a48u: goto label_3e3a48;
        case 0x3e3a4cu: goto label_3e3a4c;
        case 0x3e3a50u: goto label_3e3a50;
        case 0x3e3a54u: goto label_3e3a54;
        case 0x3e3a58u: goto label_3e3a58;
        case 0x3e3a5cu: goto label_3e3a5c;
        case 0x3e3a60u: goto label_3e3a60;
        case 0x3e3a64u: goto label_3e3a64;
        case 0x3e3a68u: goto label_3e3a68;
        case 0x3e3a6cu: goto label_3e3a6c;
        case 0x3e3a70u: goto label_3e3a70;
        case 0x3e3a74u: goto label_3e3a74;
        case 0x3e3a78u: goto label_3e3a78;
        case 0x3e3a7cu: goto label_3e3a7c;
        case 0x3e3a80u: goto label_3e3a80;
        case 0x3e3a84u: goto label_3e3a84;
        case 0x3e3a88u: goto label_3e3a88;
        case 0x3e3a8cu: goto label_3e3a8c;
        case 0x3e3a90u: goto label_3e3a90;
        case 0x3e3a94u: goto label_3e3a94;
        case 0x3e3a98u: goto label_3e3a98;
        case 0x3e3a9cu: goto label_3e3a9c;
        case 0x3e3aa0u: goto label_3e3aa0;
        case 0x3e3aa4u: goto label_3e3aa4;
        case 0x3e3aa8u: goto label_3e3aa8;
        case 0x3e3aacu: goto label_3e3aac;
        case 0x3e3ab0u: goto label_3e3ab0;
        case 0x3e3ab4u: goto label_3e3ab4;
        case 0x3e3ab8u: goto label_3e3ab8;
        case 0x3e3abcu: goto label_3e3abc;
        case 0x3e3ac0u: goto label_3e3ac0;
        case 0x3e3ac4u: goto label_3e3ac4;
        case 0x3e3ac8u: goto label_3e3ac8;
        case 0x3e3accu: goto label_3e3acc;
        case 0x3e3ad0u: goto label_3e3ad0;
        case 0x3e3ad4u: goto label_3e3ad4;
        case 0x3e3ad8u: goto label_3e3ad8;
        case 0x3e3adcu: goto label_3e3adc;
        case 0x3e3ae0u: goto label_3e3ae0;
        case 0x3e3ae4u: goto label_3e3ae4;
        case 0x3e3ae8u: goto label_3e3ae8;
        case 0x3e3aecu: goto label_3e3aec;
        case 0x3e3af0u: goto label_3e3af0;
        case 0x3e3af4u: goto label_3e3af4;
        case 0x3e3af8u: goto label_3e3af8;
        case 0x3e3afcu: goto label_3e3afc;
        case 0x3e3b00u: goto label_3e3b00;
        case 0x3e3b04u: goto label_3e3b04;
        case 0x3e3b08u: goto label_3e3b08;
        case 0x3e3b0cu: goto label_3e3b0c;
        case 0x3e3b10u: goto label_3e3b10;
        case 0x3e3b14u: goto label_3e3b14;
        case 0x3e3b18u: goto label_3e3b18;
        case 0x3e3b1cu: goto label_3e3b1c;
        case 0x3e3b20u: goto label_3e3b20;
        case 0x3e3b24u: goto label_3e3b24;
        case 0x3e3b28u: goto label_3e3b28;
        case 0x3e3b2cu: goto label_3e3b2c;
        case 0x3e3b30u: goto label_3e3b30;
        case 0x3e3b34u: goto label_3e3b34;
        case 0x3e3b38u: goto label_3e3b38;
        case 0x3e3b3cu: goto label_3e3b3c;
        case 0x3e3b40u: goto label_3e3b40;
        case 0x3e3b44u: goto label_3e3b44;
        case 0x3e3b48u: goto label_3e3b48;
        case 0x3e3b4cu: goto label_3e3b4c;
        case 0x3e3b50u: goto label_3e3b50;
        case 0x3e3b54u: goto label_3e3b54;
        case 0x3e3b58u: goto label_3e3b58;
        case 0x3e3b5cu: goto label_3e3b5c;
        case 0x3e3b60u: goto label_3e3b60;
        case 0x3e3b64u: goto label_3e3b64;
        case 0x3e3b68u: goto label_3e3b68;
        case 0x3e3b6cu: goto label_3e3b6c;
        case 0x3e3b70u: goto label_3e3b70;
        case 0x3e3b74u: goto label_3e3b74;
        case 0x3e3b78u: goto label_3e3b78;
        case 0x3e3b7cu: goto label_3e3b7c;
        case 0x3e3b80u: goto label_3e3b80;
        case 0x3e3b84u: goto label_3e3b84;
        case 0x3e3b88u: goto label_3e3b88;
        case 0x3e3b8cu: goto label_3e3b8c;
        case 0x3e3b90u: goto label_3e3b90;
        case 0x3e3b94u: goto label_3e3b94;
        case 0x3e3b98u: goto label_3e3b98;
        case 0x3e3b9cu: goto label_3e3b9c;
        case 0x3e3ba0u: goto label_3e3ba0;
        case 0x3e3ba4u: goto label_3e3ba4;
        case 0x3e3ba8u: goto label_3e3ba8;
        case 0x3e3bacu: goto label_3e3bac;
        case 0x3e3bb0u: goto label_3e3bb0;
        case 0x3e3bb4u: goto label_3e3bb4;
        case 0x3e3bb8u: goto label_3e3bb8;
        case 0x3e3bbcu: goto label_3e3bbc;
        case 0x3e3bc0u: goto label_3e3bc0;
        case 0x3e3bc4u: goto label_3e3bc4;
        case 0x3e3bc8u: goto label_3e3bc8;
        case 0x3e3bccu: goto label_3e3bcc;
        case 0x3e3bd0u: goto label_3e3bd0;
        case 0x3e3bd4u: goto label_3e3bd4;
        case 0x3e3bd8u: goto label_3e3bd8;
        case 0x3e3bdcu: goto label_3e3bdc;
        case 0x3e3be0u: goto label_3e3be0;
        case 0x3e3be4u: goto label_3e3be4;
        case 0x3e3be8u: goto label_3e3be8;
        case 0x3e3becu: goto label_3e3bec;
        case 0x3e3bf0u: goto label_3e3bf0;
        case 0x3e3bf4u: goto label_3e3bf4;
        case 0x3e3bf8u: goto label_3e3bf8;
        case 0x3e3bfcu: goto label_3e3bfc;
        case 0x3e3c00u: goto label_3e3c00;
        case 0x3e3c04u: goto label_3e3c04;
        case 0x3e3c08u: goto label_3e3c08;
        case 0x3e3c0cu: goto label_3e3c0c;
        case 0x3e3c10u: goto label_3e3c10;
        case 0x3e3c14u: goto label_3e3c14;
        case 0x3e3c18u: goto label_3e3c18;
        case 0x3e3c1cu: goto label_3e3c1c;
        case 0x3e3c20u: goto label_3e3c20;
        case 0x3e3c24u: goto label_3e3c24;
        case 0x3e3c28u: goto label_3e3c28;
        case 0x3e3c2cu: goto label_3e3c2c;
        case 0x3e3c30u: goto label_3e3c30;
        case 0x3e3c34u: goto label_3e3c34;
        case 0x3e3c38u: goto label_3e3c38;
        case 0x3e3c3cu: goto label_3e3c3c;
        case 0x3e3c40u: goto label_3e3c40;
        case 0x3e3c44u: goto label_3e3c44;
        case 0x3e3c48u: goto label_3e3c48;
        case 0x3e3c4cu: goto label_3e3c4c;
        case 0x3e3c50u: goto label_3e3c50;
        case 0x3e3c54u: goto label_3e3c54;
        case 0x3e3c58u: goto label_3e3c58;
        case 0x3e3c5cu: goto label_3e3c5c;
        case 0x3e3c60u: goto label_3e3c60;
        case 0x3e3c64u: goto label_3e3c64;
        case 0x3e3c68u: goto label_3e3c68;
        case 0x3e3c6cu: goto label_3e3c6c;
        case 0x3e3c70u: goto label_3e3c70;
        case 0x3e3c74u: goto label_3e3c74;
        case 0x3e3c78u: goto label_3e3c78;
        case 0x3e3c7cu: goto label_3e3c7c;
        case 0x3e3c80u: goto label_3e3c80;
        case 0x3e3c84u: goto label_3e3c84;
        case 0x3e3c88u: goto label_3e3c88;
        case 0x3e3c8cu: goto label_3e3c8c;
        case 0x3e3c90u: goto label_3e3c90;
        case 0x3e3c94u: goto label_3e3c94;
        case 0x3e3c98u: goto label_3e3c98;
        case 0x3e3c9cu: goto label_3e3c9c;
        case 0x3e3ca0u: goto label_3e3ca0;
        case 0x3e3ca4u: goto label_3e3ca4;
        case 0x3e3ca8u: goto label_3e3ca8;
        case 0x3e3cacu: goto label_3e3cac;
        case 0x3e3cb0u: goto label_3e3cb0;
        case 0x3e3cb4u: goto label_3e3cb4;
        case 0x3e3cb8u: goto label_3e3cb8;
        case 0x3e3cbcu: goto label_3e3cbc;
        case 0x3e3cc0u: goto label_3e3cc0;
        case 0x3e3cc4u: goto label_3e3cc4;
        case 0x3e3cc8u: goto label_3e3cc8;
        case 0x3e3cccu: goto label_3e3ccc;
        case 0x3e3cd0u: goto label_3e3cd0;
        case 0x3e3cd4u: goto label_3e3cd4;
        case 0x3e3cd8u: goto label_3e3cd8;
        case 0x3e3cdcu: goto label_3e3cdc;
        case 0x3e3ce0u: goto label_3e3ce0;
        case 0x3e3ce4u: goto label_3e3ce4;
        case 0x3e3ce8u: goto label_3e3ce8;
        case 0x3e3cecu: goto label_3e3cec;
        case 0x3e3cf0u: goto label_3e3cf0;
        case 0x3e3cf4u: goto label_3e3cf4;
        case 0x3e3cf8u: goto label_3e3cf8;
        case 0x3e3cfcu: goto label_3e3cfc;
        case 0x3e3d00u: goto label_3e3d00;
        case 0x3e3d04u: goto label_3e3d04;
        case 0x3e3d08u: goto label_3e3d08;
        case 0x3e3d0cu: goto label_3e3d0c;
        case 0x3e3d10u: goto label_3e3d10;
        case 0x3e3d14u: goto label_3e3d14;
        case 0x3e3d18u: goto label_3e3d18;
        case 0x3e3d1cu: goto label_3e3d1c;
        case 0x3e3d20u: goto label_3e3d20;
        case 0x3e3d24u: goto label_3e3d24;
        case 0x3e3d28u: goto label_3e3d28;
        case 0x3e3d2cu: goto label_3e3d2c;
        case 0x3e3d30u: goto label_3e3d30;
        case 0x3e3d34u: goto label_3e3d34;
        case 0x3e3d38u: goto label_3e3d38;
        case 0x3e3d3cu: goto label_3e3d3c;
        default: break;
    }

    ctx->pc = 0x3e39f8u;

label_3e39f8:
    // 0x3e39f8: 0x27bdf6d0  addiu       $sp, $sp, -0x930
    ctx->pc = 0x3e39f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964944));
label_3e39fc:
    // 0x3e39fc: 0x7fb00900  sq          $s0, 0x900($sp)
    ctx->pc = 0x3e39fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 16));
label_3e3a00:
    // 0x3e3a00: 0x7fb308d0  sq          $s3, 0x8D0($sp)
    ctx->pc = 0x3e3a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 19));
label_3e3a04:
    // 0x3e3a04: 0x7fb408c0  sq          $s4, 0x8C0($sp)
    ctx->pc = 0x3e3a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 20));
label_3e3a08:
    // 0x3e3a08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e3a08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e3a0c:
    // 0x3e3a0c: 0x7fb108f0  sq          $s1, 0x8F0($sp)
    ctx->pc = 0x3e3a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 17));
label_3e3a10:
    // 0x3e3a10: 0x7fb208e0  sq          $s2, 0x8E0($sp)
    ctx->pc = 0x3e3a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 18));
label_3e3a14:
    // 0x3e3a14: 0x7fb508b0  sq          $s5, 0x8B0($sp)
    ctx->pc = 0x3e3a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 21));
label_3e3a18:
    // 0x3e3a18: 0x7fb608a0  sq          $s6, 0x8A0($sp)
    ctx->pc = 0x3e3a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 22));
label_3e3a1c:
    // 0x3e3a1c: 0x7fb70890  sq          $s7, 0x890($sp)
    ctx->pc = 0x3e3a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 23));
label_3e3a20:
    // 0x3e3a20: 0x7fbe0880  sq          $fp, 0x880($sp)
    ctx->pc = 0x3e3a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 30));
label_3e3a24:
    // 0x3e3a24: 0xffbf0870  sd          $ra, 0x870($sp)
    ctx->pc = 0x3e3a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2160), GPR_U64(ctx, 31));
label_3e3a28:
    // 0x3e3a28: 0xe7b70928  swc1        $f23, 0x928($sp)
    ctx->pc = 0x3e3a28u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2344), bits); }
label_3e3a2c:
    // 0x3e3a2c: 0xe7b60920  swc1        $f22, 0x920($sp)
    ctx->pc = 0x3e3a2cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2336), bits); }
label_3e3a30:
    // 0x3e3a30: 0xe7b50918  swc1        $f21, 0x918($sp)
    ctx->pc = 0x3e3a30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2328), bits); }
label_3e3a34:
    // 0x3e3a34: 0xe7b40910  swc1        $f20, 0x910($sp)
    ctx->pc = 0x3e3a34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2320), bits); }
label_3e3a38:
    // 0x3e3a38: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e3a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e3a3c:
    // 0x3e3a3c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e3a3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e3a40:
    // 0x3e3a40: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e3a44:
    // 0x3e3a44: 0x40f809  jalr        $v0
label_3e3a48:
    if (ctx->pc == 0x3E3A48u) {
        ctx->pc = 0x3E3A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A44u;
        // 0x3e3a48: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3A4Cu;
        goto label_3e3a4c;
    }
    ctx->pc = 0x3E3A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E3A4Cu);
        ctx->pc = 0x3E3A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A44u;
        // 0x3e3a48: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3A44u, 0x3E3A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E3A4Cu;
label_3e3a4c:
    // 0x3e3a4c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e3a4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e3a50:
    // 0x3e3a50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e3a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e3a54:
    // 0x3e3a54: 0x27b00410  addiu       $s0, $sp, 0x410
    ctx->pc = 0x3e3a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e3a58:
    // 0x3e3a58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e3a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e3a5c:
    // 0x3e3a5c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e3a60:
    // 0x3e3a60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e3a64:
    // 0x3e3a64: 0x0  nop
    ctx->pc = 0x3e3a64u;
    // NOP
label_3e3a68:
    // 0x3e3a68: 0x0  nop
    ctx->pc = 0x3e3a68u;
    // NOP
label_3e3a6c:
    // 0x3e3a6c: 0x0  nop
    ctx->pc = 0x3e3a6cu;
    // NOP
label_3e3a70:
    // 0x3e3a70: 0x0  nop
    ctx->pc = 0x3e3a70u;
    // NOP
label_3e3a74:
    // 0x3e3a74: 0x0  nop
    ctx->pc = 0x3e3a74u;
    // NOP
label_3e3a78:
    // 0x3e3a78: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e3a7c:
    if (ctx->pc == 0x3E3A7Cu) {
        ctx->pc = 0x3E3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A78u;
        // 0x3e3a7c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3A80u;
        goto label_3e3a80;
    }
    ctx->pc = 0x3E3A78u;
    {
        const bool branch_taken_0x3e3a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A78u;
        // 0x3e3a7c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3a78) {
            ctx->pc = 0x3E3A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E3A80u;
label_3e3a80:
    // 0x3e3a80: 0xc138ddc  jal         func_4E3770
label_3e3a84:
    if (ctx->pc == 0x3E3A84u) {
        ctx->pc = 0x3E3A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A80u;
        // 0x3e3a84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3A88u;
        goto label_3e3a88;
    }
    ctx->pc = 0x3E3A80u;
    SET_GPR_U32(ctx, 31, 0x3E3A88u);
    ctx->pc = 0x3E3A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3A80u;
    // 0x3e3a84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E3A80u, 0x3E3A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3A88u;
label_3e3a88:
    // 0x3e3a88: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3e3a88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3e3a8c:
    // 0x3e3a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3a90:
    // 0x3e3a90: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3e3a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3e3a94:
    // 0x3e3a94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e3a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e3a98:
    // 0x3e3a98: 0xc0e947e  jal         func_3A51F8
label_3e3a9c:
    if (ctx->pc == 0x3E3A9Cu) {
        ctx->pc = 0x3E3A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A98u;
        // 0x3e3a9c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3AA0u;
        goto label_3e3aa0;
    }
    ctx->pc = 0x3E3A98u;
    SET_GPR_U32(ctx, 31, 0x3E3AA0u);
    ctx->pc = 0x3E3A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3A98u;
    // 0x3e3a9c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3E3A98u, 0x3E3AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3AA0u;
label_3e3aa0:
    // 0x3e3aa0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_3e3aa4:
    if (ctx->pc == 0x3E3AA4u) {
        ctx->pc = 0x3E3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AA0u;
        // 0x3e3aa4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3AA8u;
        goto label_3e3aa8;
    }
    ctx->pc = 0x3E3AA0u;
    {
        const bool branch_taken_0x3e3aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3aa0) {
            ctx->pc = 0x3E3AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3AA0u;
            // 0x3e3aa4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3AE0u;
            goto label_3e3ae0;
        }
    }
    ctx->pc = 0x3E3AA8u;
label_3e3aa8:
    // 0x3e3aa8: 0xc0e9694  jal         func_3A5A50
label_3e3aac:
    if (ctx->pc == 0x3E3AACu) {
        ctx->pc = 0x3E3AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AA8u;
        // 0x3e3aac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3AB0u;
        goto label_3e3ab0;
    }
    ctx->pc = 0x3E3AA8u;
    SET_GPR_U32(ctx, 31, 0x3E3AB0u);
    ctx->pc = 0x3E3AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3AA8u;
    // 0x3e3aac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3E3AA8u, 0x3E3AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3AB0u;
label_3e3ab0:
    // 0x3e3ab0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3e3ab4:
    if (ctx->pc == 0x3E3AB4u) {
        ctx->pc = 0x3E3AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AB0u;
        // 0x3e3ab4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3AB8u;
        goto label_3e3ab8;
    }
    ctx->pc = 0x3E3AB0u;
    {
        const bool branch_taken_0x3e3ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3ab0) {
            ctx->pc = 0x3E3AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3AB0u;
            // 0x3e3ab4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3AE0u;
            goto label_3e3ae0;
        }
    }
    ctx->pc = 0x3E3AB8u;
label_3e3ab8:
    // 0x3e3ab8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3e3ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3e3abc:
    // 0x3e3abc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e3abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e3ac0:
    // 0x3e3ac0: 0xc0e94a0  jal         func_3A5280
label_3e3ac4:
    if (ctx->pc == 0x3E3AC4u) {
        ctx->pc = 0x3E3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AC0u;
        // 0x3e3ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3AC8u;
        goto label_3e3ac8;
    }
    ctx->pc = 0x3E3AC0u;
    SET_GPR_U32(ctx, 31, 0x3E3AC8u);
    ctx->pc = 0x3E3AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3AC0u;
    // 0x3e3ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3E3AC0u, 0x3E3AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3AC8u;
label_3e3ac8:
    // 0x3e3ac8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e3acc:
    if (ctx->pc == 0x3E3ACCu) {
        ctx->pc = 0x3E3ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AC8u;
        // 0x3e3acc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3AD0u;
        goto label_3e3ad0;
    }
    ctx->pc = 0x3E3AC8u;
    {
        const bool branch_taken_0x3e3ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3ac8) {
            ctx->pc = 0x3E3ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3AC8u;
            // 0x3e3acc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3AE0u;
            goto label_3e3ae0;
        }
    }
    ctx->pc = 0x3E3AD0u;
label_3e3ad0:
    // 0x3e3ad0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3e3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3e3ad4:
    // 0x3e3ad4: 0x2c420078  sltiu       $v0, $v0, 0x78
    ctx->pc = 0x3e3ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
label_3e3ad8:
    // 0x3e3ad8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3e3adc:
    if (ctx->pc == 0x3E3ADCu) {
        ctx->pc = 0x3E3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AD8u;
        // 0x3e3adc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3AE0u;
        goto label_3e3ae0;
    }
    ctx->pc = 0x3E3AD8u;
    {
        const bool branch_taken_0x3e3ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3ad8) {
            ctx->pc = 0x3E3ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3AD8u;
            // 0x3e3adc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3AE0u;
            goto label_3e3ae0;
        }
    }
    ctx->pc = 0x3E3AE0u;
label_3e3ae0:
    // 0x3e3ae0: 0x16200086  bnez        $s1, . + 4 + (0x86 << 2)
label_3e3ae4:
    if (ctx->pc == 0x3E3AE4u) {
        ctx->pc = 0x3E3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AE0u;
        // 0x3e3ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3AE8u;
        goto label_3e3ae8;
    }
    ctx->pc = 0x3E3AE0u;
    {
        const bool branch_taken_0x3e3ae0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AE0u;
        // 0x3e3ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3ae0) {
            ctx->pc = 0x3E3CFCu;
            goto label_3e3cfc;
        }
    }
    ctx->pc = 0x3E3AE8u;
label_3e3ae8:
    // 0x3e3ae8: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x3e3ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e3aec:
    // 0x3e3aec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e3af0:
    // 0x3e3af0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e3af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e3af4:
    // 0x3e3af4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3e3af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3e3af8:
    // 0x3e3af8: 0x2455b8b8  addiu       $s5, $v0, -0x4748
    ctx->pc = 0x3e3af8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3e3afc:
    // 0x3e3afc: 0x86320070  lh          $s2, 0x70($s1)
    ctx->pc = 0x3e3afcu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_3e3b00:
    // 0x3e3b00: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3e3b00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e3b04:
    // 0x3e3b04: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3e3b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3e3b08:
    // 0x3e3b08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3e3b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3e3b0c:
    // 0x3e3b0c: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x3e3b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3e3b10:
    // 0x3e3b10: 0x2729021  addu        $s2, $s3, $s2
    ctx->pc = 0x3e3b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_3e3b14:
    // 0x3e3b14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e3b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e3b18:
    // 0x3e3b18: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3e3b18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3e3b1c:
    // 0x3e3b1c: 0xc0cd518  jal         func_335460
label_3e3b20:
    if (ctx->pc == 0x3E3B20u) {
        ctx->pc = 0x3E3B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B1Cu;
        // 0x3e3b20: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3B24u;
        goto label_3e3b24;
    }
    ctx->pc = 0x3E3B1Cu;
    SET_GPR_U32(ctx, 31, 0x3E3B24u);
    ctx->pc = 0x3E3B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3B1Cu;
    // 0x3e3b20: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E3B1Cu, 0x3E3B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B24u;
label_3e3b24:
    // 0x3e3b24: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3e3b24u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_3e3b28:
    // 0x3e3b28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e3b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e3b2c:
    // 0x3e3b2c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3e3b2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3e3b30:
    // 0x3e3b30: 0xc0cd518  jal         func_335460
label_3e3b34:
    if (ctx->pc == 0x3E3B34u) {
        ctx->pc = 0x3E3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B30u;
        // 0x3e3b34: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3B38u;
        goto label_3e3b38;
    }
    ctx->pc = 0x3E3B30u;
    SET_GPR_U32(ctx, 31, 0x3E3B38u);
    ctx->pc = 0x3E3B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3B30u;
    // 0x3e3b34: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E3B30u, 0x3E3B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B38u;
label_3e3b38:
    // 0x3e3b38: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3e3b38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3e3b3c:
    // 0x3e3b3c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3e3b3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3e3b40:
    // 0x3e3b40: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3e3b40u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3e3b44:
    // 0x3e3b44: 0xc0cd518  jal         func_335460
label_3e3b48:
    if (ctx->pc == 0x3E3B48u) {
        ctx->pc = 0x3E3B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B44u;
        // 0x3e3b48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3B4Cu;
        goto label_3e3b4c;
    }
    ctx->pc = 0x3E3B44u;
    SET_GPR_U32(ctx, 31, 0x3E3B4Cu);
    ctx->pc = 0x3E3B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3B44u;
    // 0x3e3b48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E3B44u, 0x3E3B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B4Cu;
label_3e3b4c:
    // 0x3e3b4c: 0x27b00440  addiu       $s0, $sp, 0x440
    ctx->pc = 0x3e3b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3e3b50:
    // 0x3e3b50: 0xe7b70440  swc1        $f23, 0x440($sp)
    ctx->pc = 0x3e3b50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3e3b54:
    // 0x3e3b54: 0xe7b60444  swc1        $f22, 0x444($sp)
    ctx->pc = 0x3e3b54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1092), bits); }
label_3e3b58:
    // 0x3e3b58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e3b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e3b5c:
    // 0x3e3b5c: 0xe7a00448  swc1        $f0, 0x448($sp)
    ctx->pc = 0x3e3b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1096), bits); }
label_3e3b60:
    // 0x3e3b60: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x3e3b60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3b64:
    // 0x3e3b64: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3e3b64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3e3b68:
    // 0x3e3b68: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3e3b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e3b6c:
    // 0x3e3b6c: 0xc0e87c0  jal         func_3A1F00
label_3e3b70:
    if (ctx->pc == 0x3E3B70u) {
        ctx->pc = 0x3E3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B6Cu;
        // 0x3e3b70: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3B74u;
        goto label_3e3b74;
    }
    ctx->pc = 0x3E3B6Cu;
    SET_GPR_U32(ctx, 31, 0x3E3B74u);
    ctx->pc = 0x3E3B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3B6Cu;
    // 0x3e3b70: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3E3B6Cu, 0x3E3B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B74u;
label_3e3b74:
    // 0x3e3b74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e3b74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e3b78:
    // 0x3e3b78: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3e3b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3e3b7c:
    // 0x3e3b7c: 0xc136b18  jal         func_4DAC60
label_3e3b80:
    if (ctx->pc == 0x3E3B80u) {
        ctx->pc = 0x3E3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B7Cu;
        // 0x3e3b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3B84u;
        goto label_3e3b84;
    }
    ctx->pc = 0x3E3B7Cu;
    SET_GPR_U32(ctx, 31, 0x3E3B84u);
    ctx->pc = 0x3E3B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3B7Cu;
    // 0x3e3b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E3B7Cu, 0x3E3B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B84u;
label_3e3b84:
    // 0x3e3b84: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3e3b84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e3b88:
    // 0x3e3b88: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3e3b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3e3b8c:
    // 0x3e3b8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e3b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e3b90:
    // 0x3e3b90: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3e3b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3e3b94:
    // 0x3e3b94: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e3b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e3b98:
    // 0x3e3b98: 0x40f809  jalr        $v0
label_3e3b9c:
    if (ctx->pc == 0x3E3B9Cu) {
        ctx->pc = 0x3E3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B98u;
        // 0x3e3b9c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3BA0u;
        goto label_3e3ba0;
    }
    ctx->pc = 0x3E3B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E3BA0u);
        ctx->pc = 0x3E3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B98u;
        // 0x3e3b9c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3B98u, 0x3E3BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E3BA0u;
label_3e3ba0:
    // 0x3e3ba0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e3ba4:
    // 0x3e3ba4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3e3ba4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3e3ba8:
    // 0x3e3ba8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3e3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3e3bac:
    // 0x3e3bac: 0x40f809  jalr        $v0
label_3e3bb0:
    if (ctx->pc == 0x3E3BB0u) {
        ctx->pc = 0x3E3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BACu;
        // 0x3e3bb0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3BB4u;
        goto label_3e3bb4;
    }
    ctx->pc = 0x3E3BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E3BB4u);
        ctx->pc = 0x3E3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BACu;
        // 0x3e3bb0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3BACu, 0x3E3BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E3BB4u;
label_3e3bb4:
    // 0x3e3bb4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3e3bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3e3bb8:
    // 0x3e3bb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e3bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e3bbc:
    // 0x3e3bbc: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_3e3bc0:
    if (ctx->pc == 0x3E3BC0u) {
        ctx->pc = 0x3E3BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BBCu;
        // 0x3e3bc0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3BC4u;
        goto label_3e3bc4;
    }
    ctx->pc = 0x3E3BBCu;
    {
        const bool branch_taken_0x3e3bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BBCu;
        // 0x3e3bc0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3bbc) {
            ctx->pc = 0x3E3CDCu;
            goto label_3e3cdc;
        }
    }
    ctx->pc = 0x3E3BC4u;
label_3e3bc4:
    // 0x3e3bc4: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x3e3bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3e3bc8:
    // 0x3e3bc8: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3e3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3e3bcc:
    // 0x3e3bcc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e3bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e3bd0:
    // 0x3e3bd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e3bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e3bd4:
    // 0x3e3bd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e3bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e3bd8:
    // 0x3e3bd8: 0xc0cd4ee  jal         func_3353B8
label_3e3bdc:
    if (ctx->pc == 0x3E3BDCu) {
        ctx->pc = 0x3E3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BD8u;
        // 0x3e3bdc: 0xae630054  sw          $v1, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3BE0u;
        goto label_3e3be0;
    }
    ctx->pc = 0x3E3BD8u;
    SET_GPR_U32(ctx, 31, 0x3E3BE0u);
    ctx->pc = 0x3E3BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3BD8u;
    // 0x3e3bdc: 0xae630054  sw          $v1, 0x54($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E3BD8u, 0x3E3BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3BE0u;
label_3e3be0:
    // 0x3e3be0: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x3e3be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_3e3be4:
    // 0x3e3be4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3e3be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e3be8:
    // 0x3e3be8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3e3bec:
    if (ctx->pc == 0x3E3BECu) {
        ctx->pc = 0x3E3BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BE8u;
        // 0x3e3bec: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3BF0u;
        goto label_3e3bf0;
    }
    ctx->pc = 0x3E3BE8u;
    {
        const bool branch_taken_0x3e3be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BE8u;
        // 0x3e3bec: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3be8) {
            ctx->pc = 0x3E3C34u;
            goto label_3e3c34;
        }
    }
    ctx->pc = 0x3E3BF0u;
label_3e3bf0:
    // 0x3e3bf0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e3bf4:
    // 0x3e3bf4: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3e3bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3e3bf8:
    // 0x3e3bf8: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3e3bf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3e3bfc:
    // 0x3e3bfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e3bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3c00:
    // 0x3e3c00: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3e3c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3e3c04:
    // 0x3e3c04: 0x60f809  jalr        $v1
label_3e3c08:
    if (ctx->pc == 0x3E3C08u) {
        ctx->pc = 0x3E3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C04u;
        // 0x3e3c08: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3C0Cu;
        goto label_3e3c0c;
    }
    ctx->pc = 0x3E3C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E3C0Cu);
        ctx->pc = 0x3E3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C04u;
        // 0x3e3c08: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3C04u, 0x3E3C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E3C0Cu;
label_3e3c0c:
    // 0x3e3c0c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3e3c0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3e3c10:
    // 0x3e3c10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e3c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3c14:
    // 0x3e3c14: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x3e3c14u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_3e3c18:
    // 0x3e3c18: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e3c1c:
    // 0x3e3c1c: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3e3c1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3e3c20:
    // 0x3e3c20: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3e3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3e3c24:
    // 0x3e3c24: 0x40f809  jalr        $v0
label_3e3c28:
    if (ctx->pc == 0x3E3C28u) {
        ctx->pc = 0x3E3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C24u;
        // 0x3e3c28: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3C2Cu;
        goto label_3e3c2c;
    }
    ctx->pc = 0x3E3C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E3C2Cu);
        ctx->pc = 0x3E3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C24u;
        // 0x3e3c28: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3C24u, 0x3E3C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E3C2Cu;
label_3e3c2c:
    // 0x3e3c2c: 0x10000033  b           . + 4 + (0x33 << 2)
label_3e3c30:
    if (ctx->pc == 0x3E3C30u) {
        ctx->pc = 0x3E3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C2Cu;
        // 0x3e3c30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3C34u;
        goto label_3e3c34;
    }
    ctx->pc = 0x3E3C2Cu;
    {
        const bool branch_taken_0x3e3c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C2Cu;
        // 0x3e3c30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3c2c) {
            ctx->pc = 0x3E3CFCu;
            goto label_3e3cfc;
        }
    }
    ctx->pc = 0x3E3C34u;
label_3e3c34:
    // 0x3e3c34: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x3e3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e3c38:
    // 0x3e3c38: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_3e3c3c:
    if (ctx->pc == 0x3E3C3Cu) {
        ctx->pc = 0x3E3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C38u;
        // 0x3e3c3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3C40u;
        goto label_3e3c40;
    }
    ctx->pc = 0x3E3C38u;
    {
        const bool branch_taken_0x3e3c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C38u;
        // 0x3e3c3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3c38) {
            ctx->pc = 0x3E3CC8u;
            goto label_3e3cc8;
        }
    }
    ctx->pc = 0x3E3C40u;
label_3e3c40:
    // 0x3e3c40: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x3e3c40u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
label_3e3c44:
    // 0x3e3c44: 0x27b10450  addiu       $s1, $sp, 0x450
    ctx->pc = 0x3e3c44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e3c48:
    // 0x3e3c48: 0x27b20430  addiu       $s2, $sp, 0x430
    ctx->pc = 0x3e3c48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3e3c4c:
    // 0x3e3c4c: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3e3c4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3e3c50:
    // 0x3e3c50: 0x27c4b8b8  addiu       $a0, $fp, -0x4748
    ctx->pc = 0x3e3c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949048));
label_3e3c54:
    // 0x3e3c54: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3e3c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3e3c58:
    // 0x3e3c58: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e3c58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e3c5c:
    // 0x3e3c5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e3c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e3c60:
    // 0x3e3c60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e3c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3e3c64:
    // 0x3e3c64: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3e3c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3e3c68:
    // 0x3e3c68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e3c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3e3c6c:
    // 0x3e3c6c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e3c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e3c70:
    // 0x3e3c70: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x3e3c70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_3e3c74:
    // 0x3e3c74: 0xc0cd518  jal         func_335460
label_3e3c78:
    if (ctx->pc == 0x3E3C78u) {
        ctx->pc = 0x3E3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C74u;
        // 0x3e3c78: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3C7Cu;
        goto label_3e3c7c;
    }
    ctx->pc = 0x3E3C74u;
    SET_GPR_U32(ctx, 31, 0x3E3C7Cu);
    ctx->pc = 0x3E3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3C74u;
    // 0x3e3c78: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E3C74u, 0x3E3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3C7Cu;
label_3e3c7c:
    // 0x3e3c7c: 0xc66100bc  lwc1        $f1, 0xBC($s3)
    ctx->pc = 0x3e3c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e3c80:
    // 0x3e3c80: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3e3c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e3c84:
    // 0x3e3c84: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x3e3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3e3c88:
    // 0x3e3c88: 0x27a80860  addiu       $t0, $sp, 0x860
    ctx->pc = 0x3e3c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3e3c8c:
    // 0x3e3c8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e3c8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3e3c90:
    // 0x3e3c90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e3c94:
    // 0x3e3c94: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3e3c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_3e3c98:
    // 0x3e3c98: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3e3c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3e3c9c:
    // 0x3e3c9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3e3c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e3ca0:
    // 0x3e3ca0: 0xafa20860  sw          $v0, 0x860($sp)
    ctx->pc = 0x3e3ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2144), GPR_U32(ctx, 2));
label_3e3ca4:
    // 0x3e3ca4: 0xc0e9fd0  jal         func_3A7F40
label_3e3ca8:
    if (ctx->pc == 0x3E3CA8u) {
        ctx->pc = 0x3E3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CA4u;
        // 0x3e3ca8: 0xe7a00440  swc1        $f0, 0x440($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3CACu;
        goto label_3e3cac;
    }
    ctx->pc = 0x3E3CA4u;
    SET_GPR_U32(ctx, 31, 0x3E3CACu);
    ctx->pc = 0x3E3CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3CA4u;
    // 0x3e3ca8: 0xe7a00440  swc1        $f0, 0x440($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3E3CA4u, 0x3E3CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3CACu;
label_3e3cac:
    // 0x3e3cac: 0x26a453f0  addiu       $a0, $s5, 0x53F0
    ctx->pc = 0x3e3cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 21488));
label_3e3cb0:
    // 0x3e3cb0: 0xc0f15bc  jal         func_3C56F0
label_3e3cb4:
    if (ctx->pc == 0x3E3CB4u) {
        ctx->pc = 0x3E3CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CB0u;
        // 0x3e3cb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3CB8u;
        goto label_3e3cb8;
    }
    ctx->pc = 0x3E3CB0u;
    SET_GPR_U32(ctx, 31, 0x3E3CB8u);
    ctx->pc = 0x3E3CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3CB0u;
    // 0x3e3cb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E3CB0u, 0x3E3CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3CB8u;
label_3e3cb8:
    // 0x3e3cb8: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3e3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e3cbc:
    // 0x3e3cbc: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3e3cbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e3cc0:
    // 0x3e3cc0: 0x5460ffe3  bnel        $v1, $zero, . + 4 + (-0x1D << 2)
label_3e3cc4:
    if (ctx->pc == 0x3E3CC4u) {
        ctx->pc = 0x3E3CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CC0u;
        // 0x3e3cc4: 0x7a620010  lq          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3CC8u;
        goto label_3e3cc8;
    }
    ctx->pc = 0x3E3CC0u;
    {
        const bool branch_taken_0x3e3cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3cc0) {
            ctx->pc = 0x3E3CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3CC0u;
            // 0x3e3cc4: 0x7a620010  lq          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3c50;
        }
    }
    ctx->pc = 0x3E3CC8u;
label_3e3cc8:
    // 0x3e3cc8: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x3e3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_3e3ccc:
    // 0x3e3ccc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e3cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e3cd0:
    // 0x3e3cd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e3cd4:
    // 0x3e3cd4: 0x1043ffd5  beq         $v0, $v1, . + 4 + (-0x2B << 2)
label_3e3cd8:
    if (ctx->pc == 0x3E3CD8u) {
        ctx->pc = 0x3E3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CD4u;
        // 0x3e3cd8: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3CDCu;
        goto label_3e3cdc;
    }
    ctx->pc = 0x3E3CD4u;
    {
        const bool branch_taken_0x3e3cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CD4u;
        // 0x3e3cd8: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3cd4) {
            ctx->pc = 0x3E3C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3c2c;
        }
    }
    ctx->pc = 0x3E3CDCu;
label_3e3cdc:
    // 0x3e3cdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e3cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e3ce0:
    // 0x3e3ce0: 0xc0e858c  jal         func_3A1630
label_3e3ce4:
    if (ctx->pc == 0x3E3CE4u) {
        ctx->pc = 0x3E3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CE0u;
        // 0x3e3ce4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3CE8u;
        goto label_3e3ce8;
    }
    ctx->pc = 0x3E3CE0u;
    SET_GPR_U32(ctx, 31, 0x3E3CE8u);
    ctx->pc = 0x3E3CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3CE0u;
    // 0x3e3ce4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E3CE0u, 0x3E3CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3CE8u;
label_3e3ce8:
    // 0x3e3ce8: 0x9664006e  lhu         $a0, 0x6E($s3)
    ctx->pc = 0x3e3ce8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 110)));
label_3e3cec:
    // 0x3e3cec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e3cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e3cf0:
    // 0x3e3cf0: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x3e3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3e3cf4:
    // 0x3e3cf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e3cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e3cf8:
    // 0x3e3cf8: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x3e3cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
label_3e3cfc:
    // 0x3e3cfc: 0x7bb00900  lq          $s0, 0x900($sp)
    ctx->pc = 0x3e3cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3e3d00:
    // 0x3e3d00: 0x7bb108f0  lq          $s1, 0x8F0($sp)
    ctx->pc = 0x3e3d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3e3d04:
    // 0x3e3d04: 0x7bb208e0  lq          $s2, 0x8E0($sp)
    ctx->pc = 0x3e3d04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3e3d08:
    // 0x3e3d08: 0x7bb308d0  lq          $s3, 0x8D0($sp)
    ctx->pc = 0x3e3d08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3e3d0c:
    // 0x3e3d0c: 0x7bb408c0  lq          $s4, 0x8C0($sp)
    ctx->pc = 0x3e3d0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3e3d10:
    // 0x3e3d10: 0x7bb508b0  lq          $s5, 0x8B0($sp)
    ctx->pc = 0x3e3d10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3e3d14:
    // 0x3e3d14: 0x7bb608a0  lq          $s6, 0x8A0($sp)
    ctx->pc = 0x3e3d14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3e3d18:
    // 0x3e3d18: 0x7bb70890  lq          $s7, 0x890($sp)
    ctx->pc = 0x3e3d18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3e3d1c:
    // 0x3e3d1c: 0x7bbe0880  lq          $fp, 0x880($sp)
    ctx->pc = 0x3e3d1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3e3d20:
    // 0x3e3d20: 0xdfbf0870  ld          $ra, 0x870($sp)
    ctx->pc = 0x3e3d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2160)));
label_3e3d24:
    // 0x3e3d24: 0xc7b70928  lwc1        $f23, 0x928($sp)
    ctx->pc = 0x3e3d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3e3d28:
    // 0x3e3d28: 0xc7b60920  lwc1        $f22, 0x920($sp)
    ctx->pc = 0x3e3d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3e3d2c:
    // 0x3e3d2c: 0xc7b50918  lwc1        $f21, 0x918($sp)
    ctx->pc = 0x3e3d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e3d30:
    // 0x3e3d30: 0xc7b40910  lwc1        $f20, 0x910($sp)
    ctx->pc = 0x3e3d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e3d34:
    // 0x3e3d34: 0x3e00008  jr          $ra
label_3e3d38:
    if (ctx->pc == 0x3E3D38u) {
        ctx->pc = 0x3E3D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D34u;
        // 0x3e3d38: 0x27bd0930  addiu       $sp, $sp, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3D3Cu;
        goto label_3e3d3c;
    }
    ctx->pc = 0x3E3D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D34u;
        // 0x3e3d38: 0x27bd0930  addiu       $sp, $sp, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3D3Cu;
label_3e3d3c:
    // 0x3e3d3c: 0x0  nop
    ctx->pc = 0x3e3d3cu;
    // NOP
    ctx->pc = 0x3e3d40u;
}
