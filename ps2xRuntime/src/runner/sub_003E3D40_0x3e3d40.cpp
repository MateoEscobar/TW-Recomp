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

// Function: sub_003E3D40
// Address: 0x3e3d40 - 0x3e4030
void sub_003E3D40_0x3e3d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3D40_0x3e3d40");
#endif

    switch (ctx->pc) {
        case 0x3e3d40u: goto label_3e3d40;
        case 0x3e3d44u: goto label_3e3d44;
        case 0x3e3d48u: goto label_3e3d48;
        case 0x3e3d4cu: goto label_3e3d4c;
        case 0x3e3d50u: goto label_3e3d50;
        case 0x3e3d54u: goto label_3e3d54;
        case 0x3e3d58u: goto label_3e3d58;
        case 0x3e3d5cu: goto label_3e3d5c;
        case 0x3e3d60u: goto label_3e3d60;
        case 0x3e3d64u: goto label_3e3d64;
        case 0x3e3d68u: goto label_3e3d68;
        case 0x3e3d6cu: goto label_3e3d6c;
        case 0x3e3d70u: goto label_3e3d70;
        case 0x3e3d74u: goto label_3e3d74;
        case 0x3e3d78u: goto label_3e3d78;
        case 0x3e3d7cu: goto label_3e3d7c;
        case 0x3e3d80u: goto label_3e3d80;
        case 0x3e3d84u: goto label_3e3d84;
        case 0x3e3d88u: goto label_3e3d88;
        case 0x3e3d8cu: goto label_3e3d8c;
        case 0x3e3d90u: goto label_3e3d90;
        case 0x3e3d94u: goto label_3e3d94;
        case 0x3e3d98u: goto label_3e3d98;
        case 0x3e3d9cu: goto label_3e3d9c;
        case 0x3e3da0u: goto label_3e3da0;
        case 0x3e3da4u: goto label_3e3da4;
        case 0x3e3da8u: goto label_3e3da8;
        case 0x3e3dacu: goto label_3e3dac;
        case 0x3e3db0u: goto label_3e3db0;
        case 0x3e3db4u: goto label_3e3db4;
        case 0x3e3db8u: goto label_3e3db8;
        case 0x3e3dbcu: goto label_3e3dbc;
        case 0x3e3dc0u: goto label_3e3dc0;
        case 0x3e3dc4u: goto label_3e3dc4;
        case 0x3e3dc8u: goto label_3e3dc8;
        case 0x3e3dccu: goto label_3e3dcc;
        case 0x3e3dd0u: goto label_3e3dd0;
        case 0x3e3dd4u: goto label_3e3dd4;
        case 0x3e3dd8u: goto label_3e3dd8;
        case 0x3e3ddcu: goto label_3e3ddc;
        case 0x3e3de0u: goto label_3e3de0;
        case 0x3e3de4u: goto label_3e3de4;
        case 0x3e3de8u: goto label_3e3de8;
        case 0x3e3decu: goto label_3e3dec;
        case 0x3e3df0u: goto label_3e3df0;
        case 0x3e3df4u: goto label_3e3df4;
        case 0x3e3df8u: goto label_3e3df8;
        case 0x3e3dfcu: goto label_3e3dfc;
        case 0x3e3e00u: goto label_3e3e00;
        case 0x3e3e04u: goto label_3e3e04;
        case 0x3e3e08u: goto label_3e3e08;
        case 0x3e3e0cu: goto label_3e3e0c;
        case 0x3e3e10u: goto label_3e3e10;
        case 0x3e3e14u: goto label_3e3e14;
        case 0x3e3e18u: goto label_3e3e18;
        case 0x3e3e1cu: goto label_3e3e1c;
        case 0x3e3e20u: goto label_3e3e20;
        case 0x3e3e24u: goto label_3e3e24;
        case 0x3e3e28u: goto label_3e3e28;
        case 0x3e3e2cu: goto label_3e3e2c;
        case 0x3e3e30u: goto label_3e3e30;
        case 0x3e3e34u: goto label_3e3e34;
        case 0x3e3e38u: goto label_3e3e38;
        case 0x3e3e3cu: goto label_3e3e3c;
        case 0x3e3e40u: goto label_3e3e40;
        case 0x3e3e44u: goto label_3e3e44;
        case 0x3e3e48u: goto label_3e3e48;
        case 0x3e3e4cu: goto label_3e3e4c;
        case 0x3e3e50u: goto label_3e3e50;
        case 0x3e3e54u: goto label_3e3e54;
        case 0x3e3e58u: goto label_3e3e58;
        case 0x3e3e5cu: goto label_3e3e5c;
        case 0x3e3e60u: goto label_3e3e60;
        case 0x3e3e64u: goto label_3e3e64;
        case 0x3e3e68u: goto label_3e3e68;
        case 0x3e3e6cu: goto label_3e3e6c;
        case 0x3e3e70u: goto label_3e3e70;
        case 0x3e3e74u: goto label_3e3e74;
        case 0x3e3e78u: goto label_3e3e78;
        case 0x3e3e7cu: goto label_3e3e7c;
        case 0x3e3e80u: goto label_3e3e80;
        case 0x3e3e84u: goto label_3e3e84;
        case 0x3e3e88u: goto label_3e3e88;
        case 0x3e3e8cu: goto label_3e3e8c;
        case 0x3e3e90u: goto label_3e3e90;
        case 0x3e3e94u: goto label_3e3e94;
        case 0x3e3e98u: goto label_3e3e98;
        case 0x3e3e9cu: goto label_3e3e9c;
        case 0x3e3ea0u: goto label_3e3ea0;
        case 0x3e3ea4u: goto label_3e3ea4;
        case 0x3e3ea8u: goto label_3e3ea8;
        case 0x3e3eacu: goto label_3e3eac;
        case 0x3e3eb0u: goto label_3e3eb0;
        case 0x3e3eb4u: goto label_3e3eb4;
        case 0x3e3eb8u: goto label_3e3eb8;
        case 0x3e3ebcu: goto label_3e3ebc;
        case 0x3e3ec0u: goto label_3e3ec0;
        case 0x3e3ec4u: goto label_3e3ec4;
        case 0x3e3ec8u: goto label_3e3ec8;
        case 0x3e3eccu: goto label_3e3ecc;
        case 0x3e3ed0u: goto label_3e3ed0;
        case 0x3e3ed4u: goto label_3e3ed4;
        case 0x3e3ed8u: goto label_3e3ed8;
        case 0x3e3edcu: goto label_3e3edc;
        case 0x3e3ee0u: goto label_3e3ee0;
        case 0x3e3ee4u: goto label_3e3ee4;
        case 0x3e3ee8u: goto label_3e3ee8;
        case 0x3e3eecu: goto label_3e3eec;
        case 0x3e3ef0u: goto label_3e3ef0;
        case 0x3e3ef4u: goto label_3e3ef4;
        case 0x3e3ef8u: goto label_3e3ef8;
        case 0x3e3efcu: goto label_3e3efc;
        case 0x3e3f00u: goto label_3e3f00;
        case 0x3e3f04u: goto label_3e3f04;
        case 0x3e3f08u: goto label_3e3f08;
        case 0x3e3f0cu: goto label_3e3f0c;
        case 0x3e3f10u: goto label_3e3f10;
        case 0x3e3f14u: goto label_3e3f14;
        case 0x3e3f18u: goto label_3e3f18;
        case 0x3e3f1cu: goto label_3e3f1c;
        case 0x3e3f20u: goto label_3e3f20;
        case 0x3e3f24u: goto label_3e3f24;
        case 0x3e3f28u: goto label_3e3f28;
        case 0x3e3f2cu: goto label_3e3f2c;
        case 0x3e3f30u: goto label_3e3f30;
        case 0x3e3f34u: goto label_3e3f34;
        case 0x3e3f38u: goto label_3e3f38;
        case 0x3e3f3cu: goto label_3e3f3c;
        case 0x3e3f40u: goto label_3e3f40;
        case 0x3e3f44u: goto label_3e3f44;
        case 0x3e3f48u: goto label_3e3f48;
        case 0x3e3f4cu: goto label_3e3f4c;
        case 0x3e3f50u: goto label_3e3f50;
        case 0x3e3f54u: goto label_3e3f54;
        case 0x3e3f58u: goto label_3e3f58;
        case 0x3e3f5cu: goto label_3e3f5c;
        case 0x3e3f60u: goto label_3e3f60;
        case 0x3e3f64u: goto label_3e3f64;
        case 0x3e3f68u: goto label_3e3f68;
        case 0x3e3f6cu: goto label_3e3f6c;
        case 0x3e3f70u: goto label_3e3f70;
        case 0x3e3f74u: goto label_3e3f74;
        case 0x3e3f78u: goto label_3e3f78;
        case 0x3e3f7cu: goto label_3e3f7c;
        case 0x3e3f80u: goto label_3e3f80;
        case 0x3e3f84u: goto label_3e3f84;
        case 0x3e3f88u: goto label_3e3f88;
        case 0x3e3f8cu: goto label_3e3f8c;
        case 0x3e3f90u: goto label_3e3f90;
        case 0x3e3f94u: goto label_3e3f94;
        case 0x3e3f98u: goto label_3e3f98;
        case 0x3e3f9cu: goto label_3e3f9c;
        case 0x3e3fa0u: goto label_3e3fa0;
        case 0x3e3fa4u: goto label_3e3fa4;
        case 0x3e3fa8u: goto label_3e3fa8;
        case 0x3e3facu: goto label_3e3fac;
        case 0x3e3fb0u: goto label_3e3fb0;
        case 0x3e3fb4u: goto label_3e3fb4;
        case 0x3e3fb8u: goto label_3e3fb8;
        case 0x3e3fbcu: goto label_3e3fbc;
        case 0x3e3fc0u: goto label_3e3fc0;
        case 0x3e3fc4u: goto label_3e3fc4;
        case 0x3e3fc8u: goto label_3e3fc8;
        case 0x3e3fccu: goto label_3e3fcc;
        case 0x3e3fd0u: goto label_3e3fd0;
        case 0x3e3fd4u: goto label_3e3fd4;
        case 0x3e3fd8u: goto label_3e3fd8;
        case 0x3e3fdcu: goto label_3e3fdc;
        case 0x3e3fe0u: goto label_3e3fe0;
        case 0x3e3fe4u: goto label_3e3fe4;
        case 0x3e3fe8u: goto label_3e3fe8;
        case 0x3e3fecu: goto label_3e3fec;
        case 0x3e3ff0u: goto label_3e3ff0;
        case 0x3e3ff4u: goto label_3e3ff4;
        case 0x3e3ff8u: goto label_3e3ff8;
        case 0x3e3ffcu: goto label_3e3ffc;
        case 0x3e4000u: goto label_3e4000;
        case 0x3e4004u: goto label_3e4004;
        case 0x3e4008u: goto label_3e4008;
        case 0x3e400cu: goto label_3e400c;
        case 0x3e4010u: goto label_3e4010;
        case 0x3e4014u: goto label_3e4014;
        case 0x3e4018u: goto label_3e4018;
        case 0x3e401cu: goto label_3e401c;
        case 0x3e4020u: goto label_3e4020;
        case 0x3e4024u: goto label_3e4024;
        case 0x3e4028u: goto label_3e4028;
        case 0x3e402cu: goto label_3e402c;
        default: break;
    }

    ctx->pc = 0x3e3d40u;

label_3e3d40:
    // 0x3e3d40: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3e3d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_3e3d44:
    // 0x3e3d44: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x3e3d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_3e3d48:
    // 0x3e3d48: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x3e3d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_3e3d4c:
    // 0x3e3d4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e3d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e3d50:
    // 0x3e3d50: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x3e3d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_3e3d54:
    // 0x3e3d54: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x3e3d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_3e3d58:
    // 0x3e3d58: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3e3d58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e3d5c:
    // 0x3e3d5c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x3e3d5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3e3d60:
    // 0x3e3d60: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x3e3d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_3e3d64:
    // 0x3e3d64: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x3e3d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_3e3d68:
    // 0x3e3d68: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x3e3d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_3e3d6c:
    // 0x3e3d6c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3e3d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3e3d70:
    // 0x3e3d70: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x3e3d70u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3e3d74:
    // 0x3e3d74: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x3e3d74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3e3d78:
    // 0x3e3d78: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x3e3d78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3e3d7c:
    // 0x3e3d7c: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x3e3d7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3e3d80:
    // 0x3e3d80: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3e3d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3e3d84:
    // 0x3e3d84: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e3d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e3d88:
    // 0x3e3d88: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e3d8c:
    // 0x3e3d8c: 0x40f809  jalr        $v0
label_3e3d90:
    if (ctx->pc == 0x3E3D90u) {
        ctx->pc = 0x3E3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D8Cu;
        // 0x3e3d90: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3D94u;
        goto label_3e3d94;
    }
    ctx->pc = 0x3E3D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E3D94u);
        ctx->pc = 0x3E3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D8Cu;
        // 0x3e3d90: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3D8Cu, 0x3E3D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E3D94u;
label_3e3d94:
    // 0x3e3d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3d98:
    // 0x3e3d98: 0xc0ea146  jal         func_3A8518
label_3e3d9c:
    if (ctx->pc == 0x3E3D9Cu) {
        ctx->pc = 0x3E3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D98u;
        // 0x3e3d9c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3DA0u;
        goto label_3e3da0;
    }
    ctx->pc = 0x3E3D98u;
    SET_GPR_U32(ctx, 31, 0x3E3DA0u);
    ctx->pc = 0x3E3D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3D98u;
    // 0x3e3d9c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E3D98u, 0x3E3DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3DA0u;
label_3e3da0:
    // 0x3e3da0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e3da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e3da4:
    // 0x3e3da4: 0xc0ea13a  jal         func_3A84E8
label_3e3da8:
    if (ctx->pc == 0x3E3DA8u) {
        ctx->pc = 0x3E3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DA4u;
        // 0x3e3da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3DACu;
        goto label_3e3dac;
    }
    ctx->pc = 0x3E3DA4u;
    SET_GPR_U32(ctx, 31, 0x3E3DACu);
    ctx->pc = 0x3E3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3DA4u;
    // 0x3e3da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E3DA4u, 0x3E3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3DACu;
label_3e3dac:
    // 0x3e3dac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e3dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e3db0:
    // 0x3e3db0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e3db0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e3db4:
    // 0x3e3db4: 0xc0ea12a  jal         func_3A84A8
label_3e3db8:
    if (ctx->pc == 0x3E3DB8u) {
        ctx->pc = 0x3E3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DB4u;
        // 0x3e3db8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3DBCu;
        goto label_3e3dbc;
    }
    ctx->pc = 0x3E3DB4u;
    SET_GPR_U32(ctx, 31, 0x3E3DBCu);
    ctx->pc = 0x3E3DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3DB4u;
    // 0x3e3db8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E3DB4u, 0x3E3DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3DBCu;
label_3e3dbc:
    // 0x3e3dbc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e3dbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e3dc0:
    // 0x3e3dc0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e3dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e3dc4:
    // 0x3e3dc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e3dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3dc8:
    // 0x3e3dc8: 0xc0ea12a  jal         func_3A84A8
label_3e3dcc:
    if (ctx->pc == 0x3E3DCCu) {
        ctx->pc = 0x3E3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DC8u;
        // 0x3e3dcc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3DD0u;
        goto label_3e3dd0;
    }
    ctx->pc = 0x3E3DC8u;
    SET_GPR_U32(ctx, 31, 0x3E3DD0u);
    ctx->pc = 0x3E3DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3DC8u;
    // 0x3e3dcc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E3DC8u, 0x3E3DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3DD0u;
label_3e3dd0:
    // 0x3e3dd0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e3dd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e3dd4:
    // 0x3e3dd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e3dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e3dd8:
    // 0x3e3dd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e3dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e3ddc:
    // 0x3e3ddc: 0xc0e858c  jal         func_3A1630
label_3e3de0:
    if (ctx->pc == 0x3E3DE0u) {
        ctx->pc = 0x3E3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DDCu;
        // 0x3e3de0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3DE4u;
        goto label_3e3de4;
    }
    ctx->pc = 0x3E3DDCu;
    SET_GPR_U32(ctx, 31, 0x3E3DE4u);
    ctx->pc = 0x3E3DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3DDCu;
    // 0x3e3de0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E3DDCu, 0x3E3DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3DE4u;
label_3e3de4:
    // 0x3e3de4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3e3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3e3de8:
    // 0x3e3de8: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x3e3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
label_3e3dec:
    // 0x3e3dec: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3e3decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3e3df0:
    // 0x3e3df0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3e3df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3e3df4:
    // 0x3e3df4: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x3e3df4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_3e3df8:
    // 0x3e3df8: 0xc1073cc  jal         func_41CF30
label_3e3dfc:
    if (ctx->pc == 0x3E3DFCu) {
        ctx->pc = 0x3E3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DF8u;
        // 0x3e3dfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3E00u;
        goto label_3e3e00;
    }
    ctx->pc = 0x3E3DF8u;
    SET_GPR_U32(ctx, 31, 0x3E3E00u);
    ctx->pc = 0x3E3DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3DF8u;
    // 0x3e3dfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3E3DF8u, 0x3E3E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3E00u;
label_3e3e00:
    // 0x3e3e00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e3e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3e3e04:
    // 0x3e3e04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e3e08:
    if (ctx->pc == 0x3E3E08u) {
        ctx->pc = 0x3E3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E04u;
        // 0x3e3e08: 0x3c12006f  lui         $s2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3E0Cu;
        goto label_3e3e0c;
    }
    ctx->pc = 0x3E3E04u;
    {
        const bool branch_taken_0x3e3e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E04u;
        // 0x3e3e08: 0x3c12006f  lui         $s2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3e04) {
            ctx->pc = 0x3E3E20u;
            goto label_3e3e20;
        }
    }
    ctx->pc = 0x3E3E0Cu;
label_3e3e0c:
    // 0x3e3e0c: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x3e3e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3e3e10:
    // 0x3e3e10: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x3e3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_3e3e14:
    // 0x3e3e14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e3e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e3e18:
    // 0x3e3e18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e3e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e3e1c:
    // 0x3e3e1c: 0xaea30054  sw          $v1, 0x54($s5)
    ctx->pc = 0x3e3e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 3));
label_3e3e20:
    // 0x3e3e20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3e3e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e3e24:
    // 0x3e3e24: 0x2652b8b8  addiu       $s2, $s2, -0x4748
    ctx->pc = 0x3e3e24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949048));
label_3e3e28:
    // 0x3e3e28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e3e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e3e2c:
    // 0x3e3e2c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3e3e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3e3e30:
    // 0x3e3e30: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x3e3e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_3e3e34:
    // 0x3e3e34: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3e3e34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3e3e38:
    // 0x3e3e38: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3e3e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3e3e3c:
    // 0x3e3e3c: 0xc0cd4ee  jal         func_3353B8
label_3e3e40:
    if (ctx->pc == 0x3E3E40u) {
        ctx->pc = 0x3E3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E3Cu;
        // 0x3e3e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3E44u;
        goto label_3e3e44;
    }
    ctx->pc = 0x3E3E3Cu;
    SET_GPR_U32(ctx, 31, 0x3E3E44u);
    ctx->pc = 0x3E3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3E3Cu;
    // 0x3e3e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E3E3Cu, 0x3E3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3E44u;
label_3e3e44:
    // 0x3e3e44: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3e3e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3e3e48:
    // 0x3e3e48: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3e3e48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3e3e4c:
    // 0x3e3e4c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3e3e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3e3e50:
    // 0x3e3e50: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x3e3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_3e3e54:
    // 0x3e3e54: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3e3e58:
    // 0x3e3e58: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x3e3e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_3e3e5c:
    // 0x3e3e5c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e3e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3e3e60:
    // 0x3e3e60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e3e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3e3e64:
    // 0x3e3e64: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x3e3e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_3e3e68:
    // 0x3e3e68: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3e3e68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3e3e6c:
    // 0x3e3e6c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e3e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e3e70:
    // 0x3e3e70: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x3e3e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_3e3e74:
    // 0x3e3e74: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3e3e74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3e3e78:
    // 0x3e3e78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e3e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e3e7c:
    // 0x3e3e7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e3e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e3e80:
    // 0x3e3e80: 0xaea000bc  sw          $zero, 0xBC($s5)
    ctx->pc = 0x3e3e80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 188), GPR_U32(ctx, 0));
label_3e3e84:
    // 0x3e3e84: 0xc0cd518  jal         func_335460
label_3e3e88:
    if (ctx->pc == 0x3E3E88u) {
        ctx->pc = 0x3E3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E84u;
        // 0x3e3e88: 0xaea300c4  sw          $v1, 0xC4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3E8Cu;
        goto label_3e3e8c;
    }
    ctx->pc = 0x3E3E84u;
    SET_GPR_U32(ctx, 31, 0x3E3E8Cu);
    ctx->pc = 0x3E3E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3E84u;
    // 0x3e3e88: 0xaea300c4  sw          $v1, 0xC4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E3E84u, 0x3E3E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3E8Cu;
label_3e3e8c:
    // 0x3e3e8c: 0x3c01c11c  lui         $at, 0xC11C
    ctx->pc = 0x3e3e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49436 << 16));
label_3e3e90:
    // 0x3e3e90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e3e90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e3e94:
    // 0x3e3e94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e3e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e3e98:
    // 0x3e3e98: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3e3e98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3e3e9c:
    // 0x3e3e9c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3e3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3e3ea0:
    // 0x3e3ea0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3e3ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3e3ea4:
    // 0x3e3ea4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3e3ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3e3ea8:
    // 0x3e3ea8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3e3ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3e3eac:
    // 0x3e3eac: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3e3eacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e3eb0:
    // 0x3e3eb0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3e3eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e3eb4:
    // 0x3e3eb4: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x3e3eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3e3eb8:
    // 0x3e3eb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e3eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e3ebc:
    // 0x3e3ebc: 0xe678000c  swc1        $f24, 0xC($s3)
    ctx->pc = 0x3e3ebcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3e3ec0:
    // 0x3e3ec0: 0xe6a000c0  swc1        $f0, 0xC0($s5)
    ctx->pc = 0x3e3ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 192), bits); }
label_3e3ec4:
    // 0x3e3ec4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3e3ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3e3ec8:
    // 0x3e3ec8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e3ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e3ecc:
    // 0x3e3ecc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e3eccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e3ed0:
    // 0x3e3ed0: 0x7ea30010  sq          $v1, 0x10($s5)
    ctx->pc = 0x3e3ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 3));
label_3e3ed4:
    // 0x3e3ed4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3e3ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3e3ed8:
    // 0x3e3ed8: 0x7ec20010  sq          $v0, 0x10($s6)
    ctx->pc = 0x3e3ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), GPR_VEC(ctx, 2));
label_3e3edc:
    // 0x3e3edc: 0x7ac30000  lq          $v1, 0x0($s6)
    ctx->pc = 0x3e3edcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_3e3ee0:
    // 0x3e3ee0: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x3e3ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3e3ee4:
    // 0x3e3ee4: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x3e3ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_3e3ee8:
    // 0x3e3ee8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3e3ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3e3eec:
    // 0x3e3eec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e3eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e3ef0:
    // 0x3e3ef0: 0x86110070  lh          $s1, 0x70($s0)
    ctx->pc = 0x3e3ef0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
label_3e3ef4:
    // 0x3e3ef4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3e3ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3e3ef8:
    // 0x3e3ef8: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x3e3ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_3e3efc:
    // 0x3e3efc: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3e3efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3e3f00:
    // 0x3e3f00: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x3e3f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_3e3f04:
    // 0x3e3f04: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3e3f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3e3f08:
    // 0x3e3f08: 0xe4d8000c  swc1        $f24, 0xC($a2)
    ctx->pc = 0x3e3f08u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_3e3f0c:
    // 0x3e3f0c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x3e3f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_3e3f10:
    // 0x3e3f10: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3e3f10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e3f14:
    // 0x3e3f14: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3e3f14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e3f18:
    // 0x3e3f18: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3e3f18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3e3f1c:
    // 0x3e3f1c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3e3f1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3e3f20:
    // 0x3e3f20: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e3f20u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e3f24:
    // 0x3e3f24: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x3e3f24u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3e3f28:
    // 0x3e3f28: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3e3f28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3e3f2c:
    // 0x3e3f2c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3e3f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3e3f30:
    // 0x3e3f30: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3e3f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3e3f34:
    // 0x3e3f34: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3e3f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3e3f38:
    // 0x3e3f38: 0xc136b24  jal         func_4DAC90
label_3e3f3c:
    if (ctx->pc == 0x3E3F3Cu) {
        ctx->pc = 0x3E3F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3F38u;
        // 0x3e3f3c: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3F40u;
        goto label_3e3f40;
    }
    ctx->pc = 0x3E3F38u;
    SET_GPR_U32(ctx, 31, 0x3E3F40u);
    ctx->pc = 0x3E3F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F38u;
    // 0x3e3f3c: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E3F38u, 0x3E3F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3F40u;
label_3e3f40:
    // 0x3e3f40: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3e3f40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e3f44:
    // 0x3e3f44: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x3e3f44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e3f48:
    // 0x3e3f48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e3f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e3f4c:
    // 0x3e3f4c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3e3f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3e3f50:
    // 0x3e3f50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e3f54:
    // 0x3e3f54: 0x40f809  jalr        $v0
label_3e3f58:
    if (ctx->pc == 0x3E3F58u) {
        ctx->pc = 0x3E3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3F54u;
        // 0x3e3f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3F5Cu;
        goto label_3e3f5c;
    }
    ctx->pc = 0x3E3F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E3F5Cu);
        ctx->pc = 0x3E3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3F54u;
        // 0x3e3f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3F54u, 0x3E3F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E3F5Cu;
label_3e3f5c:
    // 0x3e3f5c: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x3e3f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3e3f60:
    // 0x3e3f60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e3f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e3f64:
    // 0x3e3f64: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e3f64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e3f68:
    // 0x3e3f68: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3e3f68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3e3f6c:
    // 0x3e3f6c: 0x86300078  lh          $s0, 0x78($s1)
    ctx->pc = 0x3e3f6cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_3e3f70:
    // 0x3e3f70: 0x26310078  addiu       $s1, $s1, 0x78
    ctx->pc = 0x3e3f70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3e3f74:
    // 0x3e3f74: 0xc0cd518  jal         func_335460
label_3e3f78:
    if (ctx->pc == 0x3E3F78u) {
        ctx->pc = 0x3E3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3F74u;
        // 0x3e3f78: 0x2b08021  addu        $s0, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3F7Cu;
        goto label_3e3f7c;
    }
    ctx->pc = 0x3E3F74u;
    SET_GPR_U32(ctx, 31, 0x3E3F7Cu);
    ctx->pc = 0x3E3F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F74u;
    // 0x3e3f78: 0x2b08021  addu        $s0, $s5, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E3F74u, 0x3E3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3F7Cu;
label_3e3f7c:
    // 0x3e3f7c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3e3f7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3e3f80:
    // 0x3e3f80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e3f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e3f84:
    // 0x3e3f84: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e3f84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e3f88:
    // 0x3e3f88: 0xc0cd518  jal         func_335460
label_3e3f8c:
    if (ctx->pc == 0x3E3F8Cu) {
        ctx->pc = 0x3E3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3F88u;
        // 0x3e3f8c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3F90u;
        goto label_3e3f90;
    }
    ctx->pc = 0x3E3F88u;
    SET_GPR_U32(ctx, 31, 0x3E3F90u);
    ctx->pc = 0x3E3F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F88u;
    // 0x3e3f8c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E3F88u, 0x3E3F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3F90u;
label_3e3f90:
    // 0x3e3f90: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e3f90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e3f94:
    // 0x3e3f94: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3e3f94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3e3f98:
    // 0x3e3f98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e3f98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e3f9c:
    // 0x3e3f9c: 0xc0cd518  jal         func_335460
label_3e3fa0:
    if (ctx->pc == 0x3E3FA0u) {
        ctx->pc = 0x3E3FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3F9Cu;
        // 0x3e3fa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3FA4u;
        goto label_3e3fa4;
    }
    ctx->pc = 0x3E3F9Cu;
    SET_GPR_U32(ctx, 31, 0x3E3FA4u);
    ctx->pc = 0x3E3FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3F9Cu;
    // 0x3e3fa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E3F9Cu, 0x3E3FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3FA4u;
label_3e3fa4:
    // 0x3e3fa4: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x3e3fa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3e3fa8:
    // 0x3e3fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3fac:
    // 0x3e3fac: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x3e3facu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3e3fb0:
    // 0x3e3fb0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3e3fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3e3fb4:
    // 0x3e3fb4: 0xe678000c  swc1        $f24, 0xC($s3)
    ctx->pc = 0x3e3fb4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3e3fb8:
    // 0x3e3fb8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e3fb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e3fbc:
    // 0x3e3fbc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3e3fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3e3fc0:
    // 0x3e3fc0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e3fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e3fc4:
    // 0x3e3fc4: 0x60f809  jalr        $v1
label_3e3fc8:
    if (ctx->pc == 0x3E3FC8u) {
        ctx->pc = 0x3E3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3FC4u;
        // 0x3e3fc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3FCCu;
        goto label_3e3fcc;
    }
    ctx->pc = 0x3E3FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E3FCCu);
        ctx->pc = 0x3E3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3FC4u;
        // 0x3e3fc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3FC4u, 0x3E3FCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E3FCCu;
label_3e3fcc:
    // 0x3e3fcc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3e3fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3e3fd0:
    // 0x3e3fd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e3fd4:
    // 0x3e3fd4: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x3e3fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
label_3e3fd8:
    // 0x3e3fd8: 0x3442ffaf  ori         $v0, $v0, 0xFFAF
    ctx->pc = 0x3e3fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65455);
label_3e3fdc:
    // 0x3e3fdc: 0xaea200b4  sw          $v0, 0xB4($s5)
    ctx->pc = 0x3e3fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 2));
label_3e3fe0:
    // 0x3e3fe0: 0xaea400b0  sw          $a0, 0xB0($s5)
    ctx->pc = 0x3e3fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 4));
label_3e3fe4:
    // 0x3e3fe4: 0xaec00020  sw          $zero, 0x20($s6)
    ctx->pc = 0x3e3fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 0));
label_3e3fe8:
    // 0x3e3fe8: 0xaec00024  sw          $zero, 0x24($s6)
    ctx->pc = 0x3e3fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 0));
label_3e3fec:
    // 0x3e3fec: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x3e3fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3e3ff0:
    // 0x3e3ff0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e3ff0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e3ff4:
    // 0x3e3ff4: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x3e3ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3e3ff8:
    // 0x3e3ff8: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x3e3ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
label_3e3ffc:
    // 0x3e3ffc: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x3e3ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3e4000:
    // 0x3e4000: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x3e4000u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3e4004:
    // 0x3e4004: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x3e4004u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3e4008:
    // 0x3e4008: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x3e4008u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3e400c:
    // 0x3e400c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x3e400cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3e4010:
    // 0x3e4010: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3e4010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3e4014:
    // 0x3e4014: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x3e4014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3e4018:
    // 0x3e4018: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x3e4018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3e401c:
    // 0x3e401c: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x3e401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3e4020:
    // 0x3e4020: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x3e4020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e4024:
    // 0x3e4024: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x3e4024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e4028:
    // 0x3e4028: 0x3e00008  jr          $ra
label_3e402c:
    if (ctx->pc == 0x3E402Cu) {
        ctx->pc = 0x3E402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4028u;
        // 0x3e402c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4030u;
        goto label_fallthrough_0x3e4028;
    }
    ctx->pc = 0x3E4028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4028u;
        // 0x3e402c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e4028:
    ctx->pc = 0x3E4030u;
}
