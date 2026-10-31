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

// Function: sub_001A3D00
// Address: 0x1a3d00 - 0x1a4008
void sub_001A3D00_0x1a3d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3D00_0x1a3d00");
#endif

    switch (ctx->pc) {
        case 0x1a3d00u: goto label_1a3d00;
        case 0x1a3d04u: goto label_1a3d04;
        case 0x1a3d08u: goto label_1a3d08;
        case 0x1a3d0cu: goto label_1a3d0c;
        case 0x1a3d10u: goto label_1a3d10;
        case 0x1a3d14u: goto label_1a3d14;
        case 0x1a3d18u: goto label_1a3d18;
        case 0x1a3d1cu: goto label_1a3d1c;
        case 0x1a3d20u: goto label_1a3d20;
        case 0x1a3d24u: goto label_1a3d24;
        case 0x1a3d28u: goto label_1a3d28;
        case 0x1a3d2cu: goto label_1a3d2c;
        case 0x1a3d30u: goto label_1a3d30;
        case 0x1a3d34u: goto label_1a3d34;
        case 0x1a3d38u: goto label_1a3d38;
        case 0x1a3d3cu: goto label_1a3d3c;
        case 0x1a3d40u: goto label_1a3d40;
        case 0x1a3d44u: goto label_1a3d44;
        case 0x1a3d48u: goto label_1a3d48;
        case 0x1a3d4cu: goto label_1a3d4c;
        case 0x1a3d50u: goto label_1a3d50;
        case 0x1a3d54u: goto label_1a3d54;
        case 0x1a3d58u: goto label_1a3d58;
        case 0x1a3d5cu: goto label_1a3d5c;
        case 0x1a3d60u: goto label_1a3d60;
        case 0x1a3d64u: goto label_1a3d64;
        case 0x1a3d68u: goto label_1a3d68;
        case 0x1a3d6cu: goto label_1a3d6c;
        case 0x1a3d70u: goto label_1a3d70;
        case 0x1a3d74u: goto label_1a3d74;
        case 0x1a3d78u: goto label_1a3d78;
        case 0x1a3d7cu: goto label_1a3d7c;
        case 0x1a3d80u: goto label_1a3d80;
        case 0x1a3d84u: goto label_1a3d84;
        case 0x1a3d88u: goto label_1a3d88;
        case 0x1a3d8cu: goto label_1a3d8c;
        case 0x1a3d90u: goto label_1a3d90;
        case 0x1a3d94u: goto label_1a3d94;
        case 0x1a3d98u: goto label_1a3d98;
        case 0x1a3d9cu: goto label_1a3d9c;
        case 0x1a3da0u: goto label_1a3da0;
        case 0x1a3da4u: goto label_1a3da4;
        case 0x1a3da8u: goto label_1a3da8;
        case 0x1a3dacu: goto label_1a3dac;
        case 0x1a3db0u: goto label_1a3db0;
        case 0x1a3db4u: goto label_1a3db4;
        case 0x1a3db8u: goto label_1a3db8;
        case 0x1a3dbcu: goto label_1a3dbc;
        case 0x1a3dc0u: goto label_1a3dc0;
        case 0x1a3dc4u: goto label_1a3dc4;
        case 0x1a3dc8u: goto label_1a3dc8;
        case 0x1a3dccu: goto label_1a3dcc;
        case 0x1a3dd0u: goto label_1a3dd0;
        case 0x1a3dd4u: goto label_1a3dd4;
        case 0x1a3dd8u: goto label_1a3dd8;
        case 0x1a3ddcu: goto label_1a3ddc;
        case 0x1a3de0u: goto label_1a3de0;
        case 0x1a3de4u: goto label_1a3de4;
        case 0x1a3de8u: goto label_1a3de8;
        case 0x1a3decu: goto label_1a3dec;
        case 0x1a3df0u: goto label_1a3df0;
        case 0x1a3df4u: goto label_1a3df4;
        case 0x1a3df8u: goto label_1a3df8;
        case 0x1a3dfcu: goto label_1a3dfc;
        case 0x1a3e00u: goto label_1a3e00;
        case 0x1a3e04u: goto label_1a3e04;
        case 0x1a3e08u: goto label_1a3e08;
        case 0x1a3e0cu: goto label_1a3e0c;
        case 0x1a3e10u: goto label_1a3e10;
        case 0x1a3e14u: goto label_1a3e14;
        case 0x1a3e18u: goto label_1a3e18;
        case 0x1a3e1cu: goto label_1a3e1c;
        case 0x1a3e20u: goto label_1a3e20;
        case 0x1a3e24u: goto label_1a3e24;
        case 0x1a3e28u: goto label_1a3e28;
        case 0x1a3e2cu: goto label_1a3e2c;
        case 0x1a3e30u: goto label_1a3e30;
        case 0x1a3e34u: goto label_1a3e34;
        case 0x1a3e38u: goto label_1a3e38;
        case 0x1a3e3cu: goto label_1a3e3c;
        case 0x1a3e40u: goto label_1a3e40;
        case 0x1a3e44u: goto label_1a3e44;
        case 0x1a3e48u: goto label_1a3e48;
        case 0x1a3e4cu: goto label_1a3e4c;
        case 0x1a3e50u: goto label_1a3e50;
        case 0x1a3e54u: goto label_1a3e54;
        case 0x1a3e58u: goto label_1a3e58;
        case 0x1a3e5cu: goto label_1a3e5c;
        case 0x1a3e60u: goto label_1a3e60;
        case 0x1a3e64u: goto label_1a3e64;
        case 0x1a3e68u: goto label_1a3e68;
        case 0x1a3e6cu: goto label_1a3e6c;
        case 0x1a3e70u: goto label_1a3e70;
        case 0x1a3e74u: goto label_1a3e74;
        case 0x1a3e78u: goto label_1a3e78;
        case 0x1a3e7cu: goto label_1a3e7c;
        case 0x1a3e80u: goto label_1a3e80;
        case 0x1a3e84u: goto label_1a3e84;
        case 0x1a3e88u: goto label_1a3e88;
        case 0x1a3e8cu: goto label_1a3e8c;
        case 0x1a3e90u: goto label_1a3e90;
        case 0x1a3e94u: goto label_1a3e94;
        case 0x1a3e98u: goto label_1a3e98;
        case 0x1a3e9cu: goto label_1a3e9c;
        case 0x1a3ea0u: goto label_1a3ea0;
        case 0x1a3ea4u: goto label_1a3ea4;
        case 0x1a3ea8u: goto label_1a3ea8;
        case 0x1a3eacu: goto label_1a3eac;
        case 0x1a3eb0u: goto label_1a3eb0;
        case 0x1a3eb4u: goto label_1a3eb4;
        case 0x1a3eb8u: goto label_1a3eb8;
        case 0x1a3ebcu: goto label_1a3ebc;
        case 0x1a3ec0u: goto label_1a3ec0;
        case 0x1a3ec4u: goto label_1a3ec4;
        case 0x1a3ec8u: goto label_1a3ec8;
        case 0x1a3eccu: goto label_1a3ecc;
        case 0x1a3ed0u: goto label_1a3ed0;
        case 0x1a3ed4u: goto label_1a3ed4;
        case 0x1a3ed8u: goto label_1a3ed8;
        case 0x1a3edcu: goto label_1a3edc;
        case 0x1a3ee0u: goto label_1a3ee0;
        case 0x1a3ee4u: goto label_1a3ee4;
        case 0x1a3ee8u: goto label_1a3ee8;
        case 0x1a3eecu: goto label_1a3eec;
        case 0x1a3ef0u: goto label_1a3ef0;
        case 0x1a3ef4u: goto label_1a3ef4;
        case 0x1a3ef8u: goto label_1a3ef8;
        case 0x1a3efcu: goto label_1a3efc;
        case 0x1a3f00u: goto label_1a3f00;
        case 0x1a3f04u: goto label_1a3f04;
        case 0x1a3f08u: goto label_1a3f08;
        case 0x1a3f0cu: goto label_1a3f0c;
        case 0x1a3f10u: goto label_1a3f10;
        case 0x1a3f14u: goto label_1a3f14;
        case 0x1a3f18u: goto label_1a3f18;
        case 0x1a3f1cu: goto label_1a3f1c;
        case 0x1a3f20u: goto label_1a3f20;
        case 0x1a3f24u: goto label_1a3f24;
        case 0x1a3f28u: goto label_1a3f28;
        case 0x1a3f2cu: goto label_1a3f2c;
        case 0x1a3f30u: goto label_1a3f30;
        case 0x1a3f34u: goto label_1a3f34;
        case 0x1a3f38u: goto label_1a3f38;
        case 0x1a3f3cu: goto label_1a3f3c;
        case 0x1a3f40u: goto label_1a3f40;
        case 0x1a3f44u: goto label_1a3f44;
        case 0x1a3f48u: goto label_1a3f48;
        case 0x1a3f4cu: goto label_1a3f4c;
        case 0x1a3f50u: goto label_1a3f50;
        case 0x1a3f54u: goto label_1a3f54;
        case 0x1a3f58u: goto label_1a3f58;
        case 0x1a3f5cu: goto label_1a3f5c;
        case 0x1a3f60u: goto label_1a3f60;
        case 0x1a3f64u: goto label_1a3f64;
        case 0x1a3f68u: goto label_1a3f68;
        case 0x1a3f6cu: goto label_1a3f6c;
        case 0x1a3f70u: goto label_1a3f70;
        case 0x1a3f74u: goto label_1a3f74;
        case 0x1a3f78u: goto label_1a3f78;
        case 0x1a3f7cu: goto label_1a3f7c;
        case 0x1a3f80u: goto label_1a3f80;
        case 0x1a3f84u: goto label_1a3f84;
        case 0x1a3f88u: goto label_1a3f88;
        case 0x1a3f8cu: goto label_1a3f8c;
        case 0x1a3f90u: goto label_1a3f90;
        case 0x1a3f94u: goto label_1a3f94;
        case 0x1a3f98u: goto label_1a3f98;
        case 0x1a3f9cu: goto label_1a3f9c;
        case 0x1a3fa0u: goto label_1a3fa0;
        case 0x1a3fa4u: goto label_1a3fa4;
        case 0x1a3fa8u: goto label_1a3fa8;
        case 0x1a3facu: goto label_1a3fac;
        case 0x1a3fb0u: goto label_1a3fb0;
        case 0x1a3fb4u: goto label_1a3fb4;
        case 0x1a3fb8u: goto label_1a3fb8;
        case 0x1a3fbcu: goto label_1a3fbc;
        case 0x1a3fc0u: goto label_1a3fc0;
        case 0x1a3fc4u: goto label_1a3fc4;
        case 0x1a3fc8u: goto label_1a3fc8;
        case 0x1a3fccu: goto label_1a3fcc;
        case 0x1a3fd0u: goto label_1a3fd0;
        case 0x1a3fd4u: goto label_1a3fd4;
        case 0x1a3fd8u: goto label_1a3fd8;
        case 0x1a3fdcu: goto label_1a3fdc;
        case 0x1a3fe0u: goto label_1a3fe0;
        case 0x1a3fe4u: goto label_1a3fe4;
        case 0x1a3fe8u: goto label_1a3fe8;
        case 0x1a3fecu: goto label_1a3fec;
        case 0x1a3ff0u: goto label_1a3ff0;
        case 0x1a3ff4u: goto label_1a3ff4;
        case 0x1a3ff8u: goto label_1a3ff8;
        case 0x1a3ffcu: goto label_1a3ffc;
        case 0x1a4000u: goto label_1a4000;
        case 0x1a4004u: goto label_1a4004;
        default: break;
    }

    ctx->pc = 0x1a3d00u;

label_1a3d00:
    // 0x1a3d00: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1a3d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1a3d04:
    // 0x1a3d04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a3d08:
    // 0x1a3d08: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1a3d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1a3d0c:
    // 0x1a3d0c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1a3d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1a3d10:
    // 0x1a3d10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a3d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d14:
    // 0x1a3d14: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1a3d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1a3d18:
    // 0x1a3d18: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x1a3d18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d1c:
    // 0x1a3d1c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1a3d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_1a3d20:
    // 0x1a3d20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a3d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d24:
    // 0x1a3d24: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1a3d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_1a3d28:
    // 0x1a3d28: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1a3d28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d2c:
    // 0x1a3d2c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1a3d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_1a3d30:
    // 0x1a3d30: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1a3d30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d34:
    // 0x1a3d34: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1a3d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1a3d38:
    // 0x1a3d38: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1a3d38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d3c:
    // 0x1a3d3c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1a3d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1a3d40:
    // 0x1a3d40: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1a3d40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d44:
    // 0x1a3d44: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x1a3d44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1a3d48:
    // 0x1a3d48: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1a3d48u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1a3d4c:
    // 0x1a3d4c: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1a3d4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1a3d50:
    // 0x1a3d50: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1a3d50u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1a3d54:
    // 0x1a3d54: 0x8c4ccdb4  lw          $t4, -0x324C($v0)
    ctx->pc = 0x1a3d54u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1a3d58:
    // 0x1a3d58: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1a3d58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_1a3d5c:
    // 0x1a3d5c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1a3d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1a3d60:
    // 0x1a3d60: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a3d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a3d64:
    // 0x1a3d64: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x1a3d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
label_1a3d68:
    // 0x1a3d68: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1a3d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_1a3d6c:
    // 0x1a3d6c: 0xafaa0064  sw          $t2, 0x64($sp)
    ctx->pc = 0x1a3d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 10));
label_1a3d70:
    // 0x1a3d70: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1a3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_1a3d74:
    // 0x1a3d74: 0x40f809  jalr        $v0
label_1a3d78:
    if (ctx->pc == 0x1A3D78u) {
        ctx->pc = 0x1A3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D74u;
        // 0x1a3d78: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D7Cu;
        goto label_1a3d7c;
    }
    ctx->pc = 0x1A3D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3D7Cu);
        ctx->pc = 0x1A3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D74u;
        // 0x1a3d78: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3D74u, 0x1A3D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3D7Cu;
label_1a3d7c:
    // 0x1a3d7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a3d80:
    if (ctx->pc == 0x1A3D80u) {
        ctx->pc = 0x1A3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D7Cu;
        // 0x1a3d80: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D84u;
        goto label_1a3d84;
    }
    ctx->pc = 0x1A3D7Cu;
    {
        const bool branch_taken_0x1a3d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D7Cu;
        // 0x1a3d80: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d7c) {
            ctx->pc = 0x1A3DA4u;
            goto label_1a3da4;
        }
    }
    ctx->pc = 0x1A3D84u;
label_1a3d84:
    // 0x1a3d84: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x1a3d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
label_1a3d88:
    // 0x1a3d88: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1a3d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1a3d8c:
    // 0x1a3d8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3d90:
    // 0x1a3d90: 0x3c013e50  lui         $at, 0x3E50
    ctx->pc = 0x1a3d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15952 << 16));
label_1a3d94:
    // 0x1a3d94: 0x3421e560  ori         $at, $at, 0xE560
    ctx->pc = 0x1a3d94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58720);
label_1a3d98:
    // 0x1a3d98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a3d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a3d9c:
    // 0x1a3d9c: 0xe440d180  swc1        $f0, -0x2E80($v0)
    ctx->pc = 0x1a3d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955392), bits); }
label_1a3da0:
    // 0x1a3da0: 0xe7c1d184  swc1        $f1, -0x2E7C($fp)
    ctx->pc = 0x1a3da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294955396), bits); }
label_1a3da4:
    // 0x1a3da4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1a3da4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3da8:
    // 0x1a3da8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a3da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a3dac:
    // 0x1a3dac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3db0:
    // 0x1a3db0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a3db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3db4:
    // 0x1a3db4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1a3db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1a3db8:
    // 0x1a3db8: 0xc048b52  jal         func_122D48
label_1a3dbc:
    if (ctx->pc == 0x1A3DBCu) {
        ctx->pc = 0x1A3DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DB8u;
        // 0x1a3dbc: 0x241000ff  addiu       $s0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3DC0u;
        goto label_1a3dc0;
    }
    ctx->pc = 0x1A3DB8u;
    SET_GPR_U32(ctx, 31, 0x1A3DC0u);
    ctx->pc = 0x1A3DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3DB8u;
    // 0x1a3dbc: 0x241000ff  addiu       $s0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1A3DB8u, 0x1A3DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3DC0u;
label_1a3dc0:
    // 0x1a3dc0: 0x26710120  addiu       $s1, $s3, 0x120
    ctx->pc = 0x1a3dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
label_1a3dc4:
    // 0x1a3dc4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x1a3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_1a3dc8:
    // 0x1a3dc8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a3dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a3dcc:
    // 0x1a3dcc: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1a3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1a3dd0:
    // 0x1a3dd0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1a3dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a3dd4:
    // 0x1a3dd4: 0x8fab0120  lw          $t3, 0x120($sp)
    ctx->pc = 0x1a3dd4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1a3dd8:
    // 0x1a3dd8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1a3dd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ddc:
    // 0x1a3ddc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a3ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1a3de0:
    // 0x1a3de0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1a3de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a3de4:
    // 0x1a3de4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1a3de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1a3de8:
    // 0x1a3de8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1a3de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a3dec:
    // 0x1a3dec: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1a3decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1a3df0:
    // 0x1a3df0: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1a3df0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a3df4:
    // 0x1a3df4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a3df4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1a3df8:
    // 0x1a3df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3dfc:
    // 0x1a3dfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3e00:
    // 0x1a3e00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a3e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a3e04:
    // 0x1a3e04: 0xc06876e  jal         func_1A1DB8
label_1a3e08:
    if (ctx->pc == 0x1A3E08u) {
        ctx->pc = 0x1A3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E04u;
        // 0x1a3e08: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E0Cu;
        goto label_1a3e0c;
    }
    ctx->pc = 0x1A3E04u;
    SET_GPR_U32(ctx, 31, 0x1A3E0Cu);
    ctx->pc = 0x1A3E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E04u;
    // 0x1a3e08: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1A3E04u, 0x1A3E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E0Cu;
label_1a3e0c:
    // 0x1a3e0c: 0x26720050  addiu       $s2, $s3, 0x50
    ctx->pc = 0x1a3e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_1a3e10:
    // 0x1a3e10: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1a3e10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1a3e14:
    // 0x1a3e14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3e18:
    // 0x1a3e18: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a3e18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a3e1c:
    // 0x1a3e1c: 0xc068848  jal         func_1A2120
label_1a3e20:
    if (ctx->pc == 0x1A3E20u) {
        ctx->pc = 0x1A3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E1Cu;
        // 0x1a3e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E24u;
        goto label_1a3e24;
    }
    ctx->pc = 0x1A3E1Cu;
    SET_GPR_U32(ctx, 31, 0x1A3E24u);
    ctx->pc = 0x1A3E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E1Cu;
    // 0x1a3e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A3E1Cu, 0x1A3E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E24u;
label_1a3e24:
    // 0x1a3e24: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a3e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a3e28:
    // 0x1a3e28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a3e2c:
    // 0x1a3e2c: 0xc464d190  lwc1        $f4, -0x2E70($v1)
    ctx->pc = 0x1a3e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a3e30:
    // 0x1a3e30: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1a3e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a3e34:
    // 0x1a3e34: 0xc443d18c  lwc1        $f3, -0x2E74($v0)
    ctx->pc = 0x1a3e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3e38:
    // 0x1a3e38: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a3e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1a3e3c:
    // 0x1a3e3c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a3e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3e40:
    // 0x1a3e40: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a3e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3e44:
    // 0x1a3e44: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a3e44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1a3e48:
    // 0x1a3e48: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1a3e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3e4c:
    // 0x1a3e4c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1a3e4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1a3e50:
    // 0x1a3e50: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1a3e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3e54:
    // 0x1a3e54: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1a3e54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1a3e58:
    // 0x1a3e58: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a3e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a3e5c:
    // 0x1a3e5c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1a3e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1a3e60:
    // 0x1a3e60: 0x7e620310  sq          $v0, 0x310($s3)
    ctx->pc = 0x1a3e60u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 784), GPR_VEC(ctx, 2));
label_1a3e64:
    // 0x1a3e64: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1a3e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1a3e68:
    // 0x1a3e68: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a3e68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1a3e6c:
    // 0x1a3e6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a3e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a3e70:
    // 0x1a3e70: 0xc05e602  jal         func_179808
label_1a3e74:
    if (ctx->pc == 0x1A3E74u) {
        ctx->pc = 0x1A3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E70u;
        // 0x1a3e74: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E78u;
        goto label_1a3e78;
    }
    ctx->pc = 0x1A3E70u;
    SET_GPR_U32(ctx, 31, 0x1A3E78u);
    ctx->pc = 0x1A3E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E70u;
    // 0x1a3e74: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1A3E70u, 0x1A3E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E78u;
label_1a3e78:
    // 0x1a3e78: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x1a3e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a3e7c:
    // 0x1a3e7c: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x1a3e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a3e80:
    // 0x1a3e80: 0x6ba3005f  ldl         $v1, 0x5F($sp)
    ctx->pc = 0x1a3e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a3e84:
    // 0x1a3e84: 0x6fa30058  ldr         $v1, 0x58($sp)
    ctx->pc = 0x1a3e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a3e88:
    // 0x1a3e88: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x1a3e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3e8c:
    // 0x1a3e8c: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x1a3e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3e90:
    // 0x1a3e90: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x1a3e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3e94:
    // 0x1a3e94: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x1a3e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3e98:
    // 0x1a3e98: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1a3e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3e9c:
    // 0x1a3e9c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1a3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a3ea0:
    // 0x1a3ea0: 0xa3b00060  sb          $s0, 0x60($sp)
    ctx->pc = 0x1a3ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 16));
label_1a3ea4:
    // 0x1a3ea4: 0x240300b7  addiu       $v1, $zero, 0xB7
    ctx->pc = 0x1a3ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
label_1a3ea8:
    // 0x1a3ea8: 0xa0500003  sb          $s0, 0x3($v0)
    ctx->pc = 0x1a3ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 16));
label_1a3eac:
    // 0x1a3eac: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1a3eacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1a3eb0:
    // 0x1a3eb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3eb4:
    // 0x1a3eb4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1a3eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1a3eb8:
    // 0x1a3eb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a3eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ebc:
    // 0x1a3ebc: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1a3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_1a3ec0:
    // 0x1a3ec0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a3ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3ec4:
    // 0x1a3ec4: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x1a3ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1a3ec8:
    // 0x1a3ec8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1a3ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a3ecc:
    // 0x1a3ecc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a3eccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3ed0:
    // 0x1a3ed0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a3ed0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ed4:
    // 0x1a3ed4: 0xc073418  jal         func_1CD060
label_1a3ed8:
    if (ctx->pc == 0x1A3ED8u) {
        ctx->pc = 0x1A3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3ED4u;
        // 0x1a3ed8: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EDCu;
        goto label_1a3edc;
    }
    ctx->pc = 0x1A3ED4u;
    SET_GPR_U32(ctx, 31, 0x1A3EDCu);
    ctx->pc = 0x1A3ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3ED4u;
    // 0x1a3ed8: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1A3ED4u, 0x1A3EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3EDCu;
label_1a3edc:
    // 0x1a3edc: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x1a3edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1a3ee0:
    // 0x1a3ee0: 0xc073478  jal         func_1CD1E0
label_1a3ee4:
    if (ctx->pc == 0x1A3EE4u) {
        ctx->pc = 0x1A3EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EE0u;
        // 0x1a3ee4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EE8u;
        goto label_1a3ee8;
    }
    ctx->pc = 0x1A3EE0u;
    SET_GPR_U32(ctx, 31, 0x1A3EE8u);
    ctx->pc = 0x1A3EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3EE0u;
    // 0x1a3ee4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1A3EE0u, 0x1A3EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3EE8u;
label_1a3ee8:
    // 0x1a3ee8: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x1a3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1a3eec:
    // 0x1a3eec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a3ef0:
    if (ctx->pc == 0x1A3EF0u) {
        ctx->pc = 0x1A3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EECu;
        // 0x1a3ef0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EF4u;
        goto label_1a3ef4;
    }
    ctx->pc = 0x1A3EECu;
    {
        const bool branch_taken_0x1a3eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EECu;
        // 0x1a3ef0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3eec) {
            ctx->pc = 0x1A3F04u;
            goto label_1a3f04;
        }
    }
    ctx->pc = 0x1A3EF4u;
label_1a3ef4:
    // 0x1a3ef4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a3ef8:
    // 0x1a3ef8: 0xc7c1d184  lwc1        $f1, -0x2E7C($fp)
    ctx->pc = 0x1a3ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294955396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3efc:
    // 0x1a3efc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a3f00:
    if (ctx->pc == 0x1A3F00u) {
        ctx->pc = 0x1A3F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EFCu;
        // 0x1a3f00: 0xc440d180  lwc1        $f0, -0x2E80($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F04u;
        goto label_1a3f04;
    }
    ctx->pc = 0x1A3EFCu;
    {
        const bool branch_taken_0x1a3efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EFCu;
        // 0x1a3f00: 0xc440d180  lwc1        $f0, -0x2E80($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3efc) {
            ctx->pc = 0x1A3F0Cu;
            goto label_1a3f0c;
        }
    }
    ctx->pc = 0x1A3F04u;
label_1a3f04:
    // 0x1a3f04: 0xc7c1d184  lwc1        $f1, -0x2E7C($fp)
    ctx->pc = 0x1a3f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294955396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3f08:
    // 0x1a3f08: 0xc440d17c  lwc1        $f0, -0x2E84($v0)
    ctx->pc = 0x1a3f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3f0c:
    // 0x1a3f0c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a3f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1a3f10:
    // 0x1a3f10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a3f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a3f14:
    // 0x1a3f14: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a3f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a3f18:
    // 0x1a3f18: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1a3f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1a3f1c:
    // 0x1a3f1c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1a3f1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a3f20:
    // 0x1a3f20: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x1a3f20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1a3f24:
    // 0x1a3f24: 0xa26002e9  sb          $zero, 0x2E9($s3)
    ctx->pc = 0x1a3f24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 745), (uint8_t)GPR_U32(ctx, 0));
label_1a3f28:
    // 0x1a3f28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a3f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a3f2c:
    // 0x1a3f2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a3f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a3f30:
    // 0x1a3f30: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1a3f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1a3f34:
    // 0x1a3f34: 0xc440d188  lwc1        $f0, -0x2E78($v0)
    ctx->pc = 0x1a3f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3f38:
    // 0x1a3f38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3f3c:
    // 0x1a3f3c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1a3f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1a3f40:
    // 0x1a3f40: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a3f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1a3f44:
    // 0x1a3f44: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a3f48:
    // 0x1a3f48: 0x3c014337  lui         $at, 0x4337
    ctx->pc = 0x1a3f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17207 << 16));
label_1a3f4c:
    // 0x1a3f4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a3f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a3f50:
    // 0x1a3f50: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1a3f50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3f54:
    // 0x1a3f54: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1a3f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_1a3f58:
    // 0x1a3f58: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a3f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a3f5c:
    // 0x1a3f5c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1a3f5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1a3f60:
    // 0x1a3f60: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1a3f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1a3f64:
    // 0x1a3f64: 0xe7a4005c  swc1        $f4, 0x5C($sp)
    ctx->pc = 0x1a3f64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1a3f68:
    // 0x1a3f68: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x1a3f68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1a3f6c:
    // 0x1a3f6c: 0xe66302e4  swc1        $f3, 0x2E4($s3)
    ctx->pc = 0x1a3f6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 740), bits); }
label_1a3f70:
    // 0x1a3f70: 0xe660024c  swc1        $f0, 0x24C($s3)
    ctx->pc = 0x1a3f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 588), bits); }
label_1a3f74:
    // 0x1a3f74: 0x7e620230  sq          $v0, 0x230($s3)
    ctx->pc = 0x1a3f74u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 560), GPR_VEC(ctx, 2));
label_1a3f78:
    // 0x1a3f78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3f7c:
    // 0x1a3f7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a3f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a3f80:
    // 0x1a3f80: 0xe6610250  swc1        $f1, 0x250($s3)
    ctx->pc = 0x1a3f80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 592), bits); }
label_1a3f84:
    // 0x1a3f84: 0xe6610254  swc1        $f1, 0x254($s3)
    ctx->pc = 0x1a3f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 596), bits); }
label_1a3f88:
    // 0x1a3f88: 0xe6600240  swc1        $f0, 0x240($s3)
    ctx->pc = 0x1a3f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 576), bits); }
label_1a3f8c:
    // 0x1a3f8c: 0xe6600244  swc1        $f0, 0x244($s3)
    ctx->pc = 0x1a3f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 580), bits); }
label_1a3f90:
    // 0x1a3f90: 0xe6600248  swc1        $f0, 0x248($s3)
    ctx->pc = 0x1a3f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 584), bits); }
label_1a3f94:
    // 0x1a3f94: 0x6ba60057  ldl         $a2, 0x57($sp)
    ctx->pc = 0x1a3f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a3f98:
    // 0x1a3f98: 0x6fa60050  ldr         $a2, 0x50($sp)
    ctx->pc = 0x1a3f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a3f9c:
    // 0x1a3f9c: 0x6ba7005f  ldl         $a3, 0x5F($sp)
    ctx->pc = 0x1a3f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a3fa0:
    // 0x1a3fa0: 0x6fa70058  ldr         $a3, 0x58($sp)
    ctx->pc = 0x1a3fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a3fa4:
    // 0x1a3fa4: 0xb2660273  sdl         $a2, 0x273($s3)
    ctx->pc = 0x1a3fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 627); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3fa8:
    // 0x1a3fa8: 0xb666026c  sdr         $a2, 0x26C($s3)
    ctx->pc = 0x1a3fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 620); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3fac:
    // 0x1a3fac: 0xb267027b  sdl         $a3, 0x27B($s3)
    ctx->pc = 0x1a3facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 635); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3fb0:
    // 0x1a3fb0: 0xb6670274  sdr         $a3, 0x274($s3)
    ctx->pc = 0x1a3fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 628); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3fb4:
    // 0x1a3fb4: 0xae630044  sw          $v1, 0x44($s3)
    ctx->pc = 0x1a3fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
label_1a3fb8:
    // 0x1a3fb8: 0xa264025c  sb          $a0, 0x25C($s3)
    ctx->pc = 0x1a3fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 604), (uint8_t)GPR_U32(ctx, 4));
label_1a3fbc:
    // 0x1a3fbc: 0xe6620288  swc1        $f2, 0x288($s3)
    ctx->pc = 0x1a3fbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 648), bits); }
label_1a3fc0:
    // 0x1a3fc0: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x1a3fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_1a3fc4:
    // 0x1a3fc4: 0xae60028c  sw          $zero, 0x28C($s3)
    ctx->pc = 0x1a3fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 652), GPR_U32(ctx, 0));
label_1a3fc8:
    // 0x1a3fc8: 0xe6620284  swc1        $f2, 0x284($s3)
    ctx->pc = 0x1a3fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 644), bits); }
label_1a3fcc:
    // 0x1a3fcc: 0xa26002f0  sb          $zero, 0x2F0($s3)
    ctx->pc = 0x1a3fccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 752), (uint8_t)GPR_U32(ctx, 0));
label_1a3fd0:
    // 0x1a3fd0: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1a3fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1a3fd4:
    // 0x1a3fd4: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1a3fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a3fd8:
    // 0x1a3fd8: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1a3fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a3fdc:
    // 0x1a3fdc: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1a3fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a3fe0:
    // 0x1a3fe0: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1a3fe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a3fe4:
    // 0x1a3fe4: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1a3fe4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a3fe8:
    // 0x1a3fe8: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1a3fe8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a3fec:
    // 0x1a3fec: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1a3fecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a3ff0:
    // 0x1a3ff0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1a3ff0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a3ff4:
    // 0x1a3ff4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a3ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a3ff8:
    // 0x1a3ff8: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x1a3ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a3ffc:
    // 0x1a3ffc: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1a3ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a4000:
    // 0x1a4000: 0x3e00008  jr          $ra
label_1a4004:
    if (ctx->pc == 0x1A4004u) {
        ctx->pc = 0x1A4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4000u;
        // 0x1a4004: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4008u;
        goto label_fallthrough_0x1a4000;
    }
    ctx->pc = 0x1A4000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4000u;
        // 0x1a4004: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4000:
    ctx->pc = 0x1A4008u;
}
