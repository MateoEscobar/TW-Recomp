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

// Function: sub_003D2B68
// Address: 0x3d2b68 - 0x3d2e48
void sub_003D2B68_0x3d2b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2B68_0x3d2b68");
#endif

    switch (ctx->pc) {
        case 0x3d2b68u: goto label_3d2b68;
        case 0x3d2b6cu: goto label_3d2b6c;
        case 0x3d2b70u: goto label_3d2b70;
        case 0x3d2b74u: goto label_3d2b74;
        case 0x3d2b78u: goto label_3d2b78;
        case 0x3d2b7cu: goto label_3d2b7c;
        case 0x3d2b80u: goto label_3d2b80;
        case 0x3d2b84u: goto label_3d2b84;
        case 0x3d2b88u: goto label_3d2b88;
        case 0x3d2b8cu: goto label_3d2b8c;
        case 0x3d2b90u: goto label_3d2b90;
        case 0x3d2b94u: goto label_3d2b94;
        case 0x3d2b98u: goto label_3d2b98;
        case 0x3d2b9cu: goto label_3d2b9c;
        case 0x3d2ba0u: goto label_3d2ba0;
        case 0x3d2ba4u: goto label_3d2ba4;
        case 0x3d2ba8u: goto label_3d2ba8;
        case 0x3d2bacu: goto label_3d2bac;
        case 0x3d2bb0u: goto label_3d2bb0;
        case 0x3d2bb4u: goto label_3d2bb4;
        case 0x3d2bb8u: goto label_3d2bb8;
        case 0x3d2bbcu: goto label_3d2bbc;
        case 0x3d2bc0u: goto label_3d2bc0;
        case 0x3d2bc4u: goto label_3d2bc4;
        case 0x3d2bc8u: goto label_3d2bc8;
        case 0x3d2bccu: goto label_3d2bcc;
        case 0x3d2bd0u: goto label_3d2bd0;
        case 0x3d2bd4u: goto label_3d2bd4;
        case 0x3d2bd8u: goto label_3d2bd8;
        case 0x3d2bdcu: goto label_3d2bdc;
        case 0x3d2be0u: goto label_3d2be0;
        case 0x3d2be4u: goto label_3d2be4;
        case 0x3d2be8u: goto label_3d2be8;
        case 0x3d2becu: goto label_3d2bec;
        case 0x3d2bf0u: goto label_3d2bf0;
        case 0x3d2bf4u: goto label_3d2bf4;
        case 0x3d2bf8u: goto label_3d2bf8;
        case 0x3d2bfcu: goto label_3d2bfc;
        case 0x3d2c00u: goto label_3d2c00;
        case 0x3d2c04u: goto label_3d2c04;
        case 0x3d2c08u: goto label_3d2c08;
        case 0x3d2c0cu: goto label_3d2c0c;
        case 0x3d2c10u: goto label_3d2c10;
        case 0x3d2c14u: goto label_3d2c14;
        case 0x3d2c18u: goto label_3d2c18;
        case 0x3d2c1cu: goto label_3d2c1c;
        case 0x3d2c20u: goto label_3d2c20;
        case 0x3d2c24u: goto label_3d2c24;
        case 0x3d2c28u: goto label_3d2c28;
        case 0x3d2c2cu: goto label_3d2c2c;
        case 0x3d2c30u: goto label_3d2c30;
        case 0x3d2c34u: goto label_3d2c34;
        case 0x3d2c38u: goto label_3d2c38;
        case 0x3d2c3cu: goto label_3d2c3c;
        case 0x3d2c40u: goto label_3d2c40;
        case 0x3d2c44u: goto label_3d2c44;
        case 0x3d2c48u: goto label_3d2c48;
        case 0x3d2c4cu: goto label_3d2c4c;
        case 0x3d2c50u: goto label_3d2c50;
        case 0x3d2c54u: goto label_3d2c54;
        case 0x3d2c58u: goto label_3d2c58;
        case 0x3d2c5cu: goto label_3d2c5c;
        case 0x3d2c60u: goto label_3d2c60;
        case 0x3d2c64u: goto label_3d2c64;
        case 0x3d2c68u: goto label_3d2c68;
        case 0x3d2c6cu: goto label_3d2c6c;
        case 0x3d2c70u: goto label_3d2c70;
        case 0x3d2c74u: goto label_3d2c74;
        case 0x3d2c78u: goto label_3d2c78;
        case 0x3d2c7cu: goto label_3d2c7c;
        case 0x3d2c80u: goto label_3d2c80;
        case 0x3d2c84u: goto label_3d2c84;
        case 0x3d2c88u: goto label_3d2c88;
        case 0x3d2c8cu: goto label_3d2c8c;
        case 0x3d2c90u: goto label_3d2c90;
        case 0x3d2c94u: goto label_3d2c94;
        case 0x3d2c98u: goto label_3d2c98;
        case 0x3d2c9cu: goto label_3d2c9c;
        case 0x3d2ca0u: goto label_3d2ca0;
        case 0x3d2ca4u: goto label_3d2ca4;
        case 0x3d2ca8u: goto label_3d2ca8;
        case 0x3d2cacu: goto label_3d2cac;
        case 0x3d2cb0u: goto label_3d2cb0;
        case 0x3d2cb4u: goto label_3d2cb4;
        case 0x3d2cb8u: goto label_3d2cb8;
        case 0x3d2cbcu: goto label_3d2cbc;
        case 0x3d2cc0u: goto label_3d2cc0;
        case 0x3d2cc4u: goto label_3d2cc4;
        case 0x3d2cc8u: goto label_3d2cc8;
        case 0x3d2cccu: goto label_3d2ccc;
        case 0x3d2cd0u: goto label_3d2cd0;
        case 0x3d2cd4u: goto label_3d2cd4;
        case 0x3d2cd8u: goto label_3d2cd8;
        case 0x3d2cdcu: goto label_3d2cdc;
        case 0x3d2ce0u: goto label_3d2ce0;
        case 0x3d2ce4u: goto label_3d2ce4;
        case 0x3d2ce8u: goto label_3d2ce8;
        case 0x3d2cecu: goto label_3d2cec;
        case 0x3d2cf0u: goto label_3d2cf0;
        case 0x3d2cf4u: goto label_3d2cf4;
        case 0x3d2cf8u: goto label_3d2cf8;
        case 0x3d2cfcu: goto label_3d2cfc;
        case 0x3d2d00u: goto label_3d2d00;
        case 0x3d2d04u: goto label_3d2d04;
        case 0x3d2d08u: goto label_3d2d08;
        case 0x3d2d0cu: goto label_3d2d0c;
        case 0x3d2d10u: goto label_3d2d10;
        case 0x3d2d14u: goto label_3d2d14;
        case 0x3d2d18u: goto label_3d2d18;
        case 0x3d2d1cu: goto label_3d2d1c;
        case 0x3d2d20u: goto label_3d2d20;
        case 0x3d2d24u: goto label_3d2d24;
        case 0x3d2d28u: goto label_3d2d28;
        case 0x3d2d2cu: goto label_3d2d2c;
        case 0x3d2d30u: goto label_3d2d30;
        case 0x3d2d34u: goto label_3d2d34;
        case 0x3d2d38u: goto label_3d2d38;
        case 0x3d2d3cu: goto label_3d2d3c;
        case 0x3d2d40u: goto label_3d2d40;
        case 0x3d2d44u: goto label_3d2d44;
        case 0x3d2d48u: goto label_3d2d48;
        case 0x3d2d4cu: goto label_3d2d4c;
        case 0x3d2d50u: goto label_3d2d50;
        case 0x3d2d54u: goto label_3d2d54;
        case 0x3d2d58u: goto label_3d2d58;
        case 0x3d2d5cu: goto label_3d2d5c;
        case 0x3d2d60u: goto label_3d2d60;
        case 0x3d2d64u: goto label_3d2d64;
        case 0x3d2d68u: goto label_3d2d68;
        case 0x3d2d6cu: goto label_3d2d6c;
        case 0x3d2d70u: goto label_3d2d70;
        case 0x3d2d74u: goto label_3d2d74;
        case 0x3d2d78u: goto label_3d2d78;
        case 0x3d2d7cu: goto label_3d2d7c;
        case 0x3d2d80u: goto label_3d2d80;
        case 0x3d2d84u: goto label_3d2d84;
        case 0x3d2d88u: goto label_3d2d88;
        case 0x3d2d8cu: goto label_3d2d8c;
        case 0x3d2d90u: goto label_3d2d90;
        case 0x3d2d94u: goto label_3d2d94;
        case 0x3d2d98u: goto label_3d2d98;
        case 0x3d2d9cu: goto label_3d2d9c;
        case 0x3d2da0u: goto label_3d2da0;
        case 0x3d2da4u: goto label_3d2da4;
        case 0x3d2da8u: goto label_3d2da8;
        case 0x3d2dacu: goto label_3d2dac;
        case 0x3d2db0u: goto label_3d2db0;
        case 0x3d2db4u: goto label_3d2db4;
        case 0x3d2db8u: goto label_3d2db8;
        case 0x3d2dbcu: goto label_3d2dbc;
        case 0x3d2dc0u: goto label_3d2dc0;
        case 0x3d2dc4u: goto label_3d2dc4;
        case 0x3d2dc8u: goto label_3d2dc8;
        case 0x3d2dccu: goto label_3d2dcc;
        case 0x3d2dd0u: goto label_3d2dd0;
        case 0x3d2dd4u: goto label_3d2dd4;
        case 0x3d2dd8u: goto label_3d2dd8;
        case 0x3d2ddcu: goto label_3d2ddc;
        case 0x3d2de0u: goto label_3d2de0;
        case 0x3d2de4u: goto label_3d2de4;
        case 0x3d2de8u: goto label_3d2de8;
        case 0x3d2decu: goto label_3d2dec;
        case 0x3d2df0u: goto label_3d2df0;
        case 0x3d2df4u: goto label_3d2df4;
        case 0x3d2df8u: goto label_3d2df8;
        case 0x3d2dfcu: goto label_3d2dfc;
        case 0x3d2e00u: goto label_3d2e00;
        case 0x3d2e04u: goto label_3d2e04;
        case 0x3d2e08u: goto label_3d2e08;
        case 0x3d2e0cu: goto label_3d2e0c;
        case 0x3d2e10u: goto label_3d2e10;
        case 0x3d2e14u: goto label_3d2e14;
        case 0x3d2e18u: goto label_3d2e18;
        case 0x3d2e1cu: goto label_3d2e1c;
        case 0x3d2e20u: goto label_3d2e20;
        case 0x3d2e24u: goto label_3d2e24;
        case 0x3d2e28u: goto label_3d2e28;
        case 0x3d2e2cu: goto label_3d2e2c;
        case 0x3d2e30u: goto label_3d2e30;
        case 0x3d2e34u: goto label_3d2e34;
        case 0x3d2e38u: goto label_3d2e38;
        case 0x3d2e3cu: goto label_3d2e3c;
        case 0x3d2e40u: goto label_3d2e40;
        case 0x3d2e44u: goto label_3d2e44;
        default: break;
    }

    ctx->pc = 0x3d2b68u;

label_3d2b68:
    // 0x3d2b68: 0x27bdfac0  addiu       $sp, $sp, -0x540
    ctx->pc = 0x3d2b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965952));
label_3d2b6c:
    // 0x3d2b6c: 0x7fb00510  sq          $s0, 0x510($sp)
    ctx->pc = 0x3d2b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 16));
label_3d2b70:
    // 0x3d2b70: 0x7fb10500  sq          $s1, 0x500($sp)
    ctx->pc = 0x3d2b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 17));
label_3d2b74:
    // 0x3d2b74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d2b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d2b78:
    // 0x3d2b78: 0x7fb204f0  sq          $s2, 0x4F0($sp)
    ctx->pc = 0x3d2b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 18));
label_3d2b7c:
    // 0x3d2b7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d2b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d2b80:
    // 0x3d2b80: 0x7fb404d0  sq          $s4, 0x4D0($sp)
    ctx->pc = 0x3d2b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 20));
label_3d2b84:
    // 0x3d2b84: 0x7fb504c0  sq          $s5, 0x4C0($sp)
    ctx->pc = 0x3d2b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 21));
label_3d2b88:
    // 0x3d2b88: 0xe7b50528  swc1        $f21, 0x528($sp)
    ctx->pc = 0x3d2b88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_3d2b8c:
    // 0x3d2b8c: 0xe7b40520  swc1        $f20, 0x520($sp)
    ctx->pc = 0x3d2b8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_3d2b90:
    // 0x3d2b90: 0x7fb304e0  sq          $s3, 0x4E0($sp)
    ctx->pc = 0x3d2b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 19));
label_3d2b94:
    // 0x3d2b94: 0x7fb604b0  sq          $s6, 0x4B0($sp)
    ctx->pc = 0x3d2b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 22));
label_3d2b98:
    // 0x3d2b98: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x3d2b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
label_3d2b9c:
    // 0x3d2b9c: 0xe7b60530  swc1        $f22, 0x530($sp)
    ctx->pc = 0x3d2b9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
label_3d2ba0:
    // 0x3d2ba0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3d2ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3d2ba4:
    // 0x3d2ba4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3d2ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3d2ba8:
    // 0x3d2ba8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d2ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d2bac:
    // 0x3d2bac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d2bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d2bb0:
    // 0x3d2bb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3d2bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3d2bb4:
    // 0x3d2bb4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d2bb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d2bb8:
    // 0x3d2bb8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d2bbc:
    // 0x3d2bbc: 0x40f809  jalr        $v0
label_3d2bc0:
    if (ctx->pc == 0x3D2BC0u) {
        ctx->pc = 0x3D2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2BBCu;
        // 0x3d2bc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2BC4u;
        goto label_3d2bc4;
    }
    ctx->pc = 0x3D2BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D2BC4u);
        ctx->pc = 0x3D2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2BBCu;
        // 0x3d2bc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2BBCu, 0x3D2BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D2BC4u;
label_3d2bc4:
    // 0x3d2bc4: 0x24030401  addiu       $v1, $zero, 0x401
    ctx->pc = 0x3d2bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_3d2bc8:
    // 0x3d2bc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d2bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2bcc:
    // 0x3d2bcc: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3d2bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3d2bd0:
    // 0x3d2bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d2bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d2bd4:
    // 0x3d2bd4: 0xc0e858c  jal         func_3A1630
label_3d2bd8:
    if (ctx->pc == 0x3D2BD8u) {
        ctx->pc = 0x3D2BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2BD4u;
        // 0x3d2bd8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2BDCu;
        goto label_3d2bdc;
    }
    ctx->pc = 0x3D2BD4u;
    SET_GPR_U32(ctx, 31, 0x3D2BDCu);
    ctx->pc = 0x3D2BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2BD4u;
    // 0x3d2bd8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D2BD4u, 0x3D2BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2BDCu;
label_3d2bdc:
    // 0x3d2bdc: 0xc0ea14c  jal         func_3A8530
label_3d2be0:
    if (ctx->pc == 0x3D2BE0u) {
        ctx->pc = 0x3D2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2BDCu;
        // 0x3d2be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2BE4u;
        goto label_3d2be4;
    }
    ctx->pc = 0x3D2BDCu;
    SET_GPR_U32(ctx, 31, 0x3D2BE4u);
    ctx->pc = 0x3D2BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2BDCu;
    // 0x3d2be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D2BDCu, 0x3D2BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2BE4u;
label_3d2be4:
    // 0x3d2be4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d2be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d2be8:
    // 0x3d2be8: 0xc0ea12a  jal         func_3A84A8
label_3d2bec:
    if (ctx->pc == 0x3D2BECu) {
        ctx->pc = 0x3D2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2BE8u;
        // 0x3d2bec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2BF0u;
        goto label_3d2bf0;
    }
    ctx->pc = 0x3D2BE8u;
    SET_GPR_U32(ctx, 31, 0x3D2BF0u);
    ctx->pc = 0x3D2BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2BE8u;
    // 0x3d2bec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D2BE8u, 0x3D2BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2BF0u;
label_3d2bf0:
    // 0x3d2bf0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d2bf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d2bf4:
    // 0x3d2bf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d2bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d2bf8:
    // 0x3d2bf8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d2bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d2bfc:
    // 0x3d2bfc: 0xc0ea12a  jal         func_3A84A8
label_3d2c00:
    if (ctx->pc == 0x3D2C00u) {
        ctx->pc = 0x3D2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2BFCu;
        // 0x3d2c00: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2C04u;
        goto label_3d2c04;
    }
    ctx->pc = 0x3D2BFCu;
    SET_GPR_U32(ctx, 31, 0x3D2C04u);
    ctx->pc = 0x3D2C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2BFCu;
    // 0x3d2c00: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D2BFCu, 0x3D2C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2C04u;
label_3d2c04:
    // 0x3d2c04: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3d2c04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d2c08:
    // 0x3d2c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d2c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d2c0c:
    // 0x3d2c0c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d2c0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d2c10:
    // 0x3d2c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d2c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d2c14:
    // 0x3d2c14: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3d2c14u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3d2c18:
    // 0x3d2c18: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3d2c18u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_3d2c1c:
    // 0x3d2c1c: 0xc0e9132  jal         func_3A44C8
label_3d2c20:
    if (ctx->pc == 0x3D2C20u) {
        ctx->pc = 0x3D2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2C1Cu;
        // 0x3d2c20: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2C24u;
        goto label_3d2c24;
    }
    ctx->pc = 0x3D2C1Cu;
    SET_GPR_U32(ctx, 31, 0x3D2C24u);
    ctx->pc = 0x3D2C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2C1Cu;
    // 0x3d2c20: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3D2C1Cu, 0x3D2C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2C24u;
label_3d2c24:
    // 0x3d2c24: 0xe7b50470  swc1        $f21, 0x470($sp)
    ctx->pc = 0x3d2c24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3d2c28:
    // 0x3d2c28: 0x27b00470  addiu       $s0, $sp, 0x470
    ctx->pc = 0x3d2c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d2c2c:
    // 0x3d2c2c: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x3d2c2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3d2c30:
    // 0x3d2c30: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x3d2c30u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
label_3d2c34:
    // 0x3d2c34: 0xafa00478  sw          $zero, 0x478($sp)
    ctx->pc = 0x3d2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 0));
label_3d2c38:
    // 0x3d2c38: 0x26944c98  addiu       $s4, $s4, 0x4C98
    ctx->pc = 0x3d2c38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 19608));
label_3d2c3c:
    // 0x3d2c3c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3d2c3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d2c40:
    // 0x3d2c40: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x3d2c40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d2c44:
    // 0x3d2c44: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3d2c44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3d2c48:
    // 0x3d2c48: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3d2c48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3d2c4c:
    // 0x3d2c4c: 0x7ba30470  lq          $v1, 0x470($sp)
    ctx->pc = 0x3d2c4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d2c50:
    // 0x3d2c50: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3d2c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3d2c54:
    // 0x3d2c54: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3d2c54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d2c58:
    // 0x3d2c58: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3d2c58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d2c5c:
    // 0x3d2c5c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d2c5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2c60:
    // 0x3d2c60: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d2c60u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d2c64:
    // 0x3d2c64: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d2c64u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d2c68:
    // 0x3d2c68: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d2c68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2c6c:
    // 0x3d2c6c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d2c6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2c70:
    // 0x3d2c70: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d2c70u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d2c74:
    // 0x3d2c74: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d2c74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2c78:
    // 0x3d2c78: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d2c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d2c7c:
    // 0x3d2c7c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d2c7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d2c80:
    // 0x3d2c80: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d2c80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2c84:
    // 0x3d2c84: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d2c84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d2c88:
    // 0x3d2c88: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d2c88u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2c8c:
    // 0x3d2c8c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d2c8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2c90:
    // 0x3d2c90: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d2c90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2c94:
    // 0x3d2c94: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3d2c94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d2c98:
    // 0x3d2c98: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3d2c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3d2c9c:
    // 0x3d2c9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d2c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d2ca0:
    // 0x3d2ca0: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3d2ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d2ca4:
    // 0x3d2ca4: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3d2ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3d2ca8:
    // 0x3d2ca8: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3d2ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_3d2cac:
    // 0x3d2cac: 0xc136b18  jal         func_4DAC60
label_3d2cb0:
    if (ctx->pc == 0x3D2CB0u) {
        ctx->pc = 0x3D2CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2CACu;
        // 0x3d2cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2CB4u;
        goto label_3d2cb4;
    }
    ctx->pc = 0x3D2CACu;
    SET_GPR_U32(ctx, 31, 0x3D2CB4u);
    ctx->pc = 0x3D2CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2CACu;
    // 0x3d2cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D2CACu, 0x3D2CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2CB4u;
label_3d2cb4:
    // 0x3d2cb4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3d2cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3d2cb8:
    // 0x3d2cb8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3d2cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3d2cbc:
    // 0x3d2cbc: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3d2cbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d2cc0:
    // 0x3d2cc0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3d2cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d2cc4:
    // 0x3d2cc4: 0x27b60480  addiu       $s6, $sp, 0x480
    ctx->pc = 0x3d2cc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d2cc8:
    // 0x3d2cc8: 0xe7b60470  swc1        $f22, 0x470($sp)
    ctx->pc = 0x3d2cc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3d2ccc:
    // 0x3d2ccc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d2cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d2cd0:
    // 0x3d2cd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d2cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d2cd4:
    // 0x3d2cd4: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d2cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d2cd8:
    // 0x3d2cd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d2cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d2cdc:
    // 0x3d2cdc: 0xafa00480  sw          $zero, 0x480($sp)
    ctx->pc = 0x3d2cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
label_3d2ce0:
    // 0x3d2ce0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d2ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d2ce4:
    // 0x3d2ce4: 0xc0e9fa6  jal         func_3A7E98
label_3d2ce8:
    if (ctx->pc == 0x3D2CE8u) {
        ctx->pc = 0x3D2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2CE4u;
        // 0x3d2ce8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2CECu;
        goto label_3d2cec;
    }
    ctx->pc = 0x3D2CE4u;
    SET_GPR_U32(ctx, 31, 0x3D2CECu);
    ctx->pc = 0x3D2CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2CE4u;
    // 0x3d2ce8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3D2CE4u, 0x3D2CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2CECu;
label_3d2cec:
    // 0x3d2cec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3d2cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d2cf0:
    // 0x3d2cf0: 0xc0f15bc  jal         func_3C56F0
label_3d2cf4:
    if (ctx->pc == 0x3D2CF4u) {
        ctx->pc = 0x3D2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2CF0u;
        // 0x3d2cf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2CF8u;
        goto label_3d2cf8;
    }
    ctx->pc = 0x3D2CF0u;
    SET_GPR_U32(ctx, 31, 0x3D2CF8u);
    ctx->pc = 0x3D2CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2CF0u;
    // 0x3d2cf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D2CF0u, 0x3D2CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2CF8u;
label_3d2cf8:
    // 0x3d2cf8: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x3d2cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_3d2cfc:
    // 0x3d2cfc: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3d2cfcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3d2d00:
    // 0x3d2d00: 0xe7b40470  swc1        $f20, 0x470($sp)
    ctx->pc = 0x3d2d00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3d2d04:
    // 0x3d2d04: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x3d2d04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3d2d08:
    // 0x3d2d08: 0xafa00478  sw          $zero, 0x478($sp)
    ctx->pc = 0x3d2d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 0));
label_3d2d0c:
    // 0x3d2d0c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3d2d0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d2d10:
    // 0x3d2d10: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3d2d10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d2d14:
    // 0x3d2d14: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3d2d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3d2d18:
    // 0x3d2d18: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d2d18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d2d1c:
    // 0x3d2d1c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d2d1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d2d20:
    // 0x3d2d20: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d2d20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2d24:
    // 0x3d2d24: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d2d24u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d2d28:
    // 0x3d2d28: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d2d28u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d2d2c:
    // 0x3d2d2c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d2d2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2d30:
    // 0x3d2d30: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d2d30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2d34:
    // 0x3d2d34: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d2d34u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d2d38:
    // 0x3d2d38: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d2d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2d3c:
    // 0x3d2d3c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d2d3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d2d40:
    // 0x3d2d40: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d2d40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d2d44:
    // 0x3d2d44: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d2d44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2d48:
    // 0x3d2d48: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d2d48u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d2d4c:
    // 0x3d2d4c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d2d4cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2d50:
    // 0x3d2d50: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d2d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2d54:
    // 0x3d2d54: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d2d54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2d58:
    // 0x3d2d58: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d2d58u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d2d5c:
    // 0x3d2d5c: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3d2d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3d2d60:
    // 0x3d2d60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d2d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d2d64:
    // 0x3d2d64: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3d2d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d2d68:
    // 0x3d2d68: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3d2d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3d2d6c:
    // 0x3d2d6c: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x3d2d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_3d2d70:
    // 0x3d2d70: 0xc136b18  jal         func_4DAC60
label_3d2d74:
    if (ctx->pc == 0x3D2D74u) {
        ctx->pc = 0x3D2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2D70u;
        // 0x3d2d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2D78u;
        goto label_3d2d78;
    }
    ctx->pc = 0x3D2D70u;
    SET_GPR_U32(ctx, 31, 0x3D2D78u);
    ctx->pc = 0x3D2D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2D70u;
    // 0x3d2d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D2D70u, 0x3D2D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2D78u;
label_3d2d78:
    // 0x3d2d78: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3d2d78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d2d7c:
    // 0x3d2d7c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3d2d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d2d80:
    // 0x3d2d80: 0xe7b60470  swc1        $f22, 0x470($sp)
    ctx->pc = 0x3d2d80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3d2d84:
    // 0x3d2d84: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3d2d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3d2d88:
    // 0x3d2d88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d2d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d2d8c:
    // 0x3d2d8c: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3d2d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3d2d90:
    // 0x3d2d90: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d2d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d2d94:
    // 0x3d2d94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d2d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d2d98:
    // 0x3d2d98: 0xc0e9fa6  jal         func_3A7E98
label_3d2d9c:
    if (ctx->pc == 0x3D2D9Cu) {
        ctx->pc = 0x3D2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2D98u;
        // 0x3d2d9c: 0xafa00480  sw          $zero, 0x480($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2DA0u;
        goto label_3d2da0;
    }
    ctx->pc = 0x3D2D98u;
    SET_GPR_U32(ctx, 31, 0x3D2DA0u);
    ctx->pc = 0x3D2D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2D98u;
    // 0x3d2d9c: 0xafa00480  sw          $zero, 0x480($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3D2D98u, 0x3D2DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2DA0u;
label_3d2da0:
    // 0x3d2da0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d2da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d2da4:
    // 0x3d2da4: 0xc0f15bc  jal         func_3C56F0
label_3d2da8:
    if (ctx->pc == 0x3D2DA8u) {
        ctx->pc = 0x3D2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2DA4u;
        // 0x3d2da8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2DACu;
        goto label_3d2dac;
    }
    ctx->pc = 0x3D2DA4u;
    SET_GPR_U32(ctx, 31, 0x3D2DACu);
    ctx->pc = 0x3D2DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2DA4u;
    // 0x3d2da8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D2DA4u, 0x3D2DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2DACu;
label_3d2dac:
    // 0x3d2dac: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x3d2dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_3d2db0:
    // 0x3d2db0: 0x3c05e919  lui         $a1, 0xE919
    ctx->pc = 0x3d2db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59673 << 16));
label_3d2db4:
    // 0x3d2db4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d2db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d2db8:
    // 0x3d2db8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d2db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d2dbc:
    // 0x3d2dbc: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3d2dbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3d2dc0:
    // 0x3d2dc0: 0x34a52d4a  ori         $a1, $a1, 0x2D4A
    ctx->pc = 0x3d2dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11594);
label_3d2dc4:
    // 0x3d2dc4: 0xc045cb2  jal         func_1172C8
label_3d2dc8:
    if (ctx->pc == 0x3D2DC8u) {
        ctx->pc = 0x3D2DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2DC4u;
        // 0x3d2dc8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2DCCu;
        goto label_3d2dcc;
    }
    ctx->pc = 0x3D2DC4u;
    SET_GPR_U32(ctx, 31, 0x3D2DCCu);
    ctx->pc = 0x3D2DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2DC4u;
    // 0x3d2dc8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3D2DC4u, 0x3D2DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2DCCu;
label_3d2dcc:
    // 0x3d2dcc: 0x3c03eac9  lui         $v1, 0xEAC9
    ctx->pc = 0x3d2dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60105 << 16));
label_3d2dd0:
    // 0x3d2dd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d2dd4:
    // 0x3d2dd4: 0x3463acff  ori         $v1, $v1, 0xACFF
    ctx->pc = 0x3d2dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44287);
label_3d2dd8:
    // 0x3d2dd8: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3d2dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3d2ddc:
    // 0x3d2ddc: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x3d2ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_3d2de0:
    // 0x3d2de0: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3d2de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3d2de4:
    // 0x3d2de4: 0xae2200c8  sw          $v0, 0xC8($s1)
    ctx->pc = 0x3d2de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
label_3d2de8:
    // 0x3d2de8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3d2de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3d2dec:
    // 0x3d2dec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3d2decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d2df0:
    // 0x3d2df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d2df4:
    // 0x3d2df4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3d2df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_3d2df8:
    // 0x3d2df8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3d2df8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3d2dfc:
    // 0x3d2dfc: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x3d2dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
label_3d2e00:
    // 0x3d2e00: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3d2e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3d2e04:
    // 0x3d2e04: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x3d2e04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_3d2e08:
    // 0x3d2e08: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3d2e08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3d2e0c:
    // 0x3d2e0c: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x3d2e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_3d2e10:
    // 0x3d2e10: 0x7bb00510  lq          $s0, 0x510($sp)
    ctx->pc = 0x3d2e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3d2e14:
    // 0x3d2e14: 0x7bb10500  lq          $s1, 0x500($sp)
    ctx->pc = 0x3d2e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3d2e18:
    // 0x3d2e18: 0x7bb204f0  lq          $s2, 0x4F0($sp)
    ctx->pc = 0x3d2e18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3d2e1c:
    // 0x3d2e1c: 0x7bb304e0  lq          $s3, 0x4E0($sp)
    ctx->pc = 0x3d2e1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3d2e20:
    // 0x3d2e20: 0x7bb404d0  lq          $s4, 0x4D0($sp)
    ctx->pc = 0x3d2e20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3d2e24:
    // 0x3d2e24: 0x7bb504c0  lq          $s5, 0x4C0($sp)
    ctx->pc = 0x3d2e24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d2e28:
    // 0x3d2e28: 0x7bb604b0  lq          $s6, 0x4B0($sp)
    ctx->pc = 0x3d2e28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d2e2c:
    // 0x3d2e2c: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x3d2e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d2e30:
    // 0x3d2e30: 0xc7b60530  lwc1        $f22, 0x530($sp)
    ctx->pc = 0x3d2e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3d2e34:
    // 0x3d2e34: 0xc7b50528  lwc1        $f21, 0x528($sp)
    ctx->pc = 0x3d2e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d2e38:
    // 0x3d2e38: 0xc7b40520  lwc1        $f20, 0x520($sp)
    ctx->pc = 0x3d2e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d2e3c:
    // 0x3d2e3c: 0x3e00008  jr          $ra
label_3d2e40:
    if (ctx->pc == 0x3D2E40u) {
        ctx->pc = 0x3D2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E3Cu;
        // 0x3d2e40: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2E44u;
        goto label_3d2e44;
    }
    ctx->pc = 0x3D2E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E3Cu;
        // 0x3d2e40: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2E44u;
label_3d2e44:
    // 0x3d2e44: 0x0  nop
    ctx->pc = 0x3d2e44u;
    // NOP
    ctx->pc = 0x3d2e48u;
}
