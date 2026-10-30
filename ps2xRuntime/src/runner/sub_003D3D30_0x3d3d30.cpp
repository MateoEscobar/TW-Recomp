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

// Function: sub_003D3D30
// Address: 0x3d3d30 - 0x3d4038
void sub_003D3D30_0x3d3d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3D30_0x3d3d30");
#endif

    switch (ctx->pc) {
        case 0x3d3d30u: goto label_3d3d30;
        case 0x3d3d34u: goto label_3d3d34;
        case 0x3d3d38u: goto label_3d3d38;
        case 0x3d3d3cu: goto label_3d3d3c;
        case 0x3d3d40u: goto label_3d3d40;
        case 0x3d3d44u: goto label_3d3d44;
        case 0x3d3d48u: goto label_3d3d48;
        case 0x3d3d4cu: goto label_3d3d4c;
        case 0x3d3d50u: goto label_3d3d50;
        case 0x3d3d54u: goto label_3d3d54;
        case 0x3d3d58u: goto label_3d3d58;
        case 0x3d3d5cu: goto label_3d3d5c;
        case 0x3d3d60u: goto label_3d3d60;
        case 0x3d3d64u: goto label_3d3d64;
        case 0x3d3d68u: goto label_3d3d68;
        case 0x3d3d6cu: goto label_3d3d6c;
        case 0x3d3d70u: goto label_3d3d70;
        case 0x3d3d74u: goto label_3d3d74;
        case 0x3d3d78u: goto label_3d3d78;
        case 0x3d3d7cu: goto label_3d3d7c;
        case 0x3d3d80u: goto label_3d3d80;
        case 0x3d3d84u: goto label_3d3d84;
        case 0x3d3d88u: goto label_3d3d88;
        case 0x3d3d8cu: goto label_3d3d8c;
        case 0x3d3d90u: goto label_3d3d90;
        case 0x3d3d94u: goto label_3d3d94;
        case 0x3d3d98u: goto label_3d3d98;
        case 0x3d3d9cu: goto label_3d3d9c;
        case 0x3d3da0u: goto label_3d3da0;
        case 0x3d3da4u: goto label_3d3da4;
        case 0x3d3da8u: goto label_3d3da8;
        case 0x3d3dacu: goto label_3d3dac;
        case 0x3d3db0u: goto label_3d3db0;
        case 0x3d3db4u: goto label_3d3db4;
        case 0x3d3db8u: goto label_3d3db8;
        case 0x3d3dbcu: goto label_3d3dbc;
        case 0x3d3dc0u: goto label_3d3dc0;
        case 0x3d3dc4u: goto label_3d3dc4;
        case 0x3d3dc8u: goto label_3d3dc8;
        case 0x3d3dccu: goto label_3d3dcc;
        case 0x3d3dd0u: goto label_3d3dd0;
        case 0x3d3dd4u: goto label_3d3dd4;
        case 0x3d3dd8u: goto label_3d3dd8;
        case 0x3d3ddcu: goto label_3d3ddc;
        case 0x3d3de0u: goto label_3d3de0;
        case 0x3d3de4u: goto label_3d3de4;
        case 0x3d3de8u: goto label_3d3de8;
        case 0x3d3decu: goto label_3d3dec;
        case 0x3d3df0u: goto label_3d3df0;
        case 0x3d3df4u: goto label_3d3df4;
        case 0x3d3df8u: goto label_3d3df8;
        case 0x3d3dfcu: goto label_3d3dfc;
        case 0x3d3e00u: goto label_3d3e00;
        case 0x3d3e04u: goto label_3d3e04;
        case 0x3d3e08u: goto label_3d3e08;
        case 0x3d3e0cu: goto label_3d3e0c;
        case 0x3d3e10u: goto label_3d3e10;
        case 0x3d3e14u: goto label_3d3e14;
        case 0x3d3e18u: goto label_3d3e18;
        case 0x3d3e1cu: goto label_3d3e1c;
        case 0x3d3e20u: goto label_3d3e20;
        case 0x3d3e24u: goto label_3d3e24;
        case 0x3d3e28u: goto label_3d3e28;
        case 0x3d3e2cu: goto label_3d3e2c;
        case 0x3d3e30u: goto label_3d3e30;
        case 0x3d3e34u: goto label_3d3e34;
        case 0x3d3e38u: goto label_3d3e38;
        case 0x3d3e3cu: goto label_3d3e3c;
        case 0x3d3e40u: goto label_3d3e40;
        case 0x3d3e44u: goto label_3d3e44;
        case 0x3d3e48u: goto label_3d3e48;
        case 0x3d3e4cu: goto label_3d3e4c;
        case 0x3d3e50u: goto label_3d3e50;
        case 0x3d3e54u: goto label_3d3e54;
        case 0x3d3e58u: goto label_3d3e58;
        case 0x3d3e5cu: goto label_3d3e5c;
        case 0x3d3e60u: goto label_3d3e60;
        case 0x3d3e64u: goto label_3d3e64;
        case 0x3d3e68u: goto label_3d3e68;
        case 0x3d3e6cu: goto label_3d3e6c;
        case 0x3d3e70u: goto label_3d3e70;
        case 0x3d3e74u: goto label_3d3e74;
        case 0x3d3e78u: goto label_3d3e78;
        case 0x3d3e7cu: goto label_3d3e7c;
        case 0x3d3e80u: goto label_3d3e80;
        case 0x3d3e84u: goto label_3d3e84;
        case 0x3d3e88u: goto label_3d3e88;
        case 0x3d3e8cu: goto label_3d3e8c;
        case 0x3d3e90u: goto label_3d3e90;
        case 0x3d3e94u: goto label_3d3e94;
        case 0x3d3e98u: goto label_3d3e98;
        case 0x3d3e9cu: goto label_3d3e9c;
        case 0x3d3ea0u: goto label_3d3ea0;
        case 0x3d3ea4u: goto label_3d3ea4;
        case 0x3d3ea8u: goto label_3d3ea8;
        case 0x3d3eacu: goto label_3d3eac;
        case 0x3d3eb0u: goto label_3d3eb0;
        case 0x3d3eb4u: goto label_3d3eb4;
        case 0x3d3eb8u: goto label_3d3eb8;
        case 0x3d3ebcu: goto label_3d3ebc;
        case 0x3d3ec0u: goto label_3d3ec0;
        case 0x3d3ec4u: goto label_3d3ec4;
        case 0x3d3ec8u: goto label_3d3ec8;
        case 0x3d3eccu: goto label_3d3ecc;
        case 0x3d3ed0u: goto label_3d3ed0;
        case 0x3d3ed4u: goto label_3d3ed4;
        case 0x3d3ed8u: goto label_3d3ed8;
        case 0x3d3edcu: goto label_3d3edc;
        case 0x3d3ee0u: goto label_3d3ee0;
        case 0x3d3ee4u: goto label_3d3ee4;
        case 0x3d3ee8u: goto label_3d3ee8;
        case 0x3d3eecu: goto label_3d3eec;
        case 0x3d3ef0u: goto label_3d3ef0;
        case 0x3d3ef4u: goto label_3d3ef4;
        case 0x3d3ef8u: goto label_3d3ef8;
        case 0x3d3efcu: goto label_3d3efc;
        case 0x3d3f00u: goto label_3d3f00;
        case 0x3d3f04u: goto label_3d3f04;
        case 0x3d3f08u: goto label_3d3f08;
        case 0x3d3f0cu: goto label_3d3f0c;
        case 0x3d3f10u: goto label_3d3f10;
        case 0x3d3f14u: goto label_3d3f14;
        case 0x3d3f18u: goto label_3d3f18;
        case 0x3d3f1cu: goto label_3d3f1c;
        case 0x3d3f20u: goto label_3d3f20;
        case 0x3d3f24u: goto label_3d3f24;
        case 0x3d3f28u: goto label_3d3f28;
        case 0x3d3f2cu: goto label_3d3f2c;
        case 0x3d3f30u: goto label_3d3f30;
        case 0x3d3f34u: goto label_3d3f34;
        case 0x3d3f38u: goto label_3d3f38;
        case 0x3d3f3cu: goto label_3d3f3c;
        case 0x3d3f40u: goto label_3d3f40;
        case 0x3d3f44u: goto label_3d3f44;
        case 0x3d3f48u: goto label_3d3f48;
        case 0x3d3f4cu: goto label_3d3f4c;
        case 0x3d3f50u: goto label_3d3f50;
        case 0x3d3f54u: goto label_3d3f54;
        case 0x3d3f58u: goto label_3d3f58;
        case 0x3d3f5cu: goto label_3d3f5c;
        case 0x3d3f60u: goto label_3d3f60;
        case 0x3d3f64u: goto label_3d3f64;
        case 0x3d3f68u: goto label_3d3f68;
        case 0x3d3f6cu: goto label_3d3f6c;
        case 0x3d3f70u: goto label_3d3f70;
        case 0x3d3f74u: goto label_3d3f74;
        case 0x3d3f78u: goto label_3d3f78;
        case 0x3d3f7cu: goto label_3d3f7c;
        case 0x3d3f80u: goto label_3d3f80;
        case 0x3d3f84u: goto label_3d3f84;
        case 0x3d3f88u: goto label_3d3f88;
        case 0x3d3f8cu: goto label_3d3f8c;
        case 0x3d3f90u: goto label_3d3f90;
        case 0x3d3f94u: goto label_3d3f94;
        case 0x3d3f98u: goto label_3d3f98;
        case 0x3d3f9cu: goto label_3d3f9c;
        case 0x3d3fa0u: goto label_3d3fa0;
        case 0x3d3fa4u: goto label_3d3fa4;
        case 0x3d3fa8u: goto label_3d3fa8;
        case 0x3d3facu: goto label_3d3fac;
        case 0x3d3fb0u: goto label_3d3fb0;
        case 0x3d3fb4u: goto label_3d3fb4;
        case 0x3d3fb8u: goto label_3d3fb8;
        case 0x3d3fbcu: goto label_3d3fbc;
        case 0x3d3fc0u: goto label_3d3fc0;
        case 0x3d3fc4u: goto label_3d3fc4;
        case 0x3d3fc8u: goto label_3d3fc8;
        case 0x3d3fccu: goto label_3d3fcc;
        case 0x3d3fd0u: goto label_3d3fd0;
        case 0x3d3fd4u: goto label_3d3fd4;
        case 0x3d3fd8u: goto label_3d3fd8;
        case 0x3d3fdcu: goto label_3d3fdc;
        case 0x3d3fe0u: goto label_3d3fe0;
        case 0x3d3fe4u: goto label_3d3fe4;
        case 0x3d3fe8u: goto label_3d3fe8;
        case 0x3d3fecu: goto label_3d3fec;
        case 0x3d3ff0u: goto label_3d3ff0;
        case 0x3d3ff4u: goto label_3d3ff4;
        case 0x3d3ff8u: goto label_3d3ff8;
        case 0x3d3ffcu: goto label_3d3ffc;
        case 0x3d4000u: goto label_3d4000;
        case 0x3d4004u: goto label_3d4004;
        case 0x3d4008u: goto label_3d4008;
        case 0x3d400cu: goto label_3d400c;
        case 0x3d4010u: goto label_3d4010;
        case 0x3d4014u: goto label_3d4014;
        case 0x3d4018u: goto label_3d4018;
        case 0x3d401cu: goto label_3d401c;
        case 0x3d4020u: goto label_3d4020;
        case 0x3d4024u: goto label_3d4024;
        case 0x3d4028u: goto label_3d4028;
        case 0x3d402cu: goto label_3d402c;
        case 0x3d4030u: goto label_3d4030;
        case 0x3d4034u: goto label_3d4034;
        default: break;
    }

    ctx->pc = 0x3d3d30u;

label_3d3d30:
    // 0x3d3d30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3d3d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3d3d34:
    // 0x3d3d34: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3d3d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3d3d38:
    // 0x3d3d38: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3d3d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3d3d3c:
    // 0x3d3d3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d3d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d3d40:
    // 0x3d3d40: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3d3d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3d3d44:
    // 0x3d3d44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3d3d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d3d48:
    // 0x3d3d48: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3d3d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3d3d4c:
    // 0x3d3d4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d3d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d3d50:
    // 0x3d3d50: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3d3d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3d3d54:
    // 0x3d3d54: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3d3d54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3d3d58:
    // 0x3d3d58: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d3d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d3d5c:
    // 0x3d3d5c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d3d5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d3d60:
    // 0x3d3d60: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d3d64:
    // 0x3d3d64: 0x40f809  jalr        $v0
label_3d3d68:
    if (ctx->pc == 0x3D3D68u) {
        ctx->pc = 0x3D3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D64u;
        // 0x3d3d68: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3D6Cu;
        goto label_3d3d6c;
    }
    ctx->pc = 0x3D3D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3D6Cu);
        ctx->pc = 0x3D3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D64u;
        // 0x3d3d68: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3D64u, 0x3D3D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3D6Cu;
label_3d3d6c:
    // 0x3d3d6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d3d6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d3d70:
    // 0x3d3d70: 0x2e020031  sltiu       $v0, $s0, 0x31
    ctx->pc = 0x3d3d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
label_3d3d74:
    // 0x3d3d74: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_3d3d78:
    if (ctx->pc == 0x3D3D78u) {
        ctx->pc = 0x3D3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D74u;
        // 0x3d3d78: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3D7Cu;
        goto label_3d3d7c;
    }
    ctx->pc = 0x3D3D74u;
    {
        const bool branch_taken_0x3d3d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D74u;
        // 0x3d3d78: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3d74) {
            ctx->pc = 0x3D4038u;
            return;
        }
    }
    ctx->pc = 0x3D3D7Cu;
label_3d3d7c:
    // 0x3d3d7c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3d3d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3d3d80:
    // 0x3d3d80: 0x24424d60  addiu       $v0, $v0, 0x4D60
    ctx->pc = 0x3d3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19808));
label_3d3d84:
    // 0x3d3d84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d3d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d3d88:
    // 0x3d3d88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d3d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d3d8c:
    // 0x3d3d8c: 0x800008  jr          $a0
label_3d3d90:
    if (ctx->pc == 0x3D3D90u) {
        ctx->pc = 0x3D3D94u;
        goto label_3d3d94;
    }
    ctx->pc = 0x3D3D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D3D94u: goto label_3d3d94;
            case 0x3D3DA4u: goto label_3d3da4;
            case 0x3D3E18u: goto label_3d3e18;
            case 0x3D3E44u: goto label_3d3e44;
            case 0x3D3E94u: goto label_3d3e94;
            case 0x3D3F18u: goto label_3d3f18;
            case 0x3D3FFCu: goto label_3d3ffc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3D8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D3D94u;
label_3d3d94:
    // 0x3d3d94: 0xc0ea146  jal         func_3A8518
label_3d3d98:
    if (ctx->pc == 0x3D3D98u) {
        ctx->pc = 0x3D3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D94u;
        // 0x3d3d98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3D9Cu;
        goto label_3d3d9c;
    }
    ctx->pc = 0x3D3D94u;
    SET_GPR_U32(ctx, 31, 0x3D3D9Cu);
    ctx->pc = 0x3D3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3D94u;
    // 0x3d3d98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D3D94u, 0x3D3D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3D9Cu;
label_3d3d9c:
    // 0x3d3d9c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_3d3da0:
    if (ctx->pc == 0x3D3DA0u) {
        ctx->pc = 0x3D3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D9Cu;
        // 0x3d3da0: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3DA4u;
        goto label_3d3da4;
    }
    ctx->pc = 0x3D3D9Cu;
    {
        const bool branch_taken_0x3d3d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D9Cu;
        // 0x3d3da0: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3d9c) {
            ctx->pc = 0x3D4038u;
            return;
        }
    }
    ctx->pc = 0x3D3DA4u;
label_3d3da4:
    // 0x3d3da4: 0xc0ea146  jal         func_3A8518
label_3d3da8:
    if (ctx->pc == 0x3D3DA8u) {
        ctx->pc = 0x3D3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3DA4u;
        // 0x3d3da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3DACu;
        goto label_3d3dac;
    }
    ctx->pc = 0x3D3DA4u;
    SET_GPR_U32(ctx, 31, 0x3D3DACu);
    ctx->pc = 0x3D3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3DA4u;
    // 0x3d3da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D3DA4u, 0x3D3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3DACu;
label_3d3dac:
    // 0x3d3dac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d3dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d3db0:
    // 0x3d3db0: 0xc0ea12a  jal         func_3A84A8
label_3d3db4:
    if (ctx->pc == 0x3D3DB4u) {
        ctx->pc = 0x3D3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3DB0u;
        // 0x3d3db4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3DB8u;
        goto label_3d3db8;
    }
    ctx->pc = 0x3D3DB0u;
    SET_GPR_U32(ctx, 31, 0x3D3DB8u);
    ctx->pc = 0x3D3DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3DB0u;
    // 0x3d3db4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D3DB0u, 0x3D3DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3DB8u;
label_3d3db8:
    // 0x3d3db8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d3db8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3dbc:
    // 0x3d3dbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d3dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d3dc0:
    // 0x3d3dc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d3dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3dc4:
    // 0x3d3dc4: 0xc0ea12a  jal         func_3A84A8
label_3d3dc8:
    if (ctx->pc == 0x3D3DC8u) {
        ctx->pc = 0x3D3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3DC4u;
        // 0x3d3dc8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3DCCu;
        goto label_3d3dcc;
    }
    ctx->pc = 0x3D3DC4u;
    SET_GPR_U32(ctx, 31, 0x3D3DCCu);
    ctx->pc = 0x3D3DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3DC4u;
    // 0x3d3dc8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D3DC4u, 0x3D3DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3DCCu;
label_3d3dcc:
    // 0x3d3dcc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d3dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3dd0:
    // 0x3d3dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d3dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3dd4:
    // 0x3d3dd4: 0xc0ea146  jal         func_3A8518
label_3d3dd8:
    if (ctx->pc == 0x3D3DD8u) {
        ctx->pc = 0x3D3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3DD4u;
        // 0x3d3dd8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3DDCu;
        goto label_3d3ddc;
    }
    ctx->pc = 0x3D3DD4u;
    SET_GPR_U32(ctx, 31, 0x3D3DDCu);
    ctx->pc = 0x3D3DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3DD4u;
    // 0x3d3dd8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D3DD4u, 0x3D3DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3DDCu;
label_3d3ddc:
    // 0x3d3ddc: 0xc0ea14c  jal         func_3A8530
label_3d3de0:
    if (ctx->pc == 0x3D3DE0u) {
        ctx->pc = 0x3D3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3DDCu;
        // 0x3d3de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3DE4u;
        goto label_3d3de4;
    }
    ctx->pc = 0x3D3DDCu;
    SET_GPR_U32(ctx, 31, 0x3D3DE4u);
    ctx->pc = 0x3D3DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3DDCu;
    // 0x3d3de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D3DDCu, 0x3D3DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3DE4u;
label_3d3de4:
    // 0x3d3de4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d3de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d3de8:
    // 0x3d3de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d3de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3dec:
    // 0x3d3dec: 0xc0ea176  jal         func_3A85D8
label_3d3df0:
    if (ctx->pc == 0x3D3DF0u) {
        ctx->pc = 0x3D3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3DECu;
        // 0x3d3df0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3DF4u;
        goto label_3d3df4;
    }
    ctx->pc = 0x3D3DECu;
    SET_GPR_U32(ctx, 31, 0x3D3DF4u);
    ctx->pc = 0x3D3DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3DECu;
    // 0x3d3df0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3D3DECu, 0x3D3DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3DF4u;
label_3d3df4:
    // 0x3d3df4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d3df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d3df8:
    // 0x3d3df8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d3df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3dfc:
    // 0x3d3dfc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d3dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d3e00:
    // 0x3d3e00: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3d3e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3d3e04:
    // 0x3d3e04: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3d3e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3d3e08:
    // 0x3d3e08: 0x40f809  jalr        $v0
label_3d3e0c:
    if (ctx->pc == 0x3D3E0Cu) {
        ctx->pc = 0x3D3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E08u;
        // 0x3d3e0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3E10u;
        goto label_3d3e10;
    }
    ctx->pc = 0x3D3E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3E10u);
        ctx->pc = 0x3D3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E08u;
        // 0x3d3e0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3E08u, 0x3D3E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3E10u;
label_3d3e10:
    // 0x3d3e10: 0x1000008a  b           . + 4 + (0x8A << 2)
label_3d3e14:
    if (ctx->pc == 0x3D3E14u) {
        ctx->pc = 0x3D3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E10u;
        // 0x3d3e14: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3E18u;
        goto label_3d3e18;
    }
    ctx->pc = 0x3D3E10u;
    {
        const bool branch_taken_0x3d3e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E10u;
        // 0x3d3e14: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3e10) {
            ctx->pc = 0x3D403Cu;
            return;
        }
    }
    ctx->pc = 0x3D3E18u;
label_3d3e18:
    // 0x3d3e18: 0xc0ea146  jal         func_3A8518
label_3d3e1c:
    if (ctx->pc == 0x3D3E1Cu) {
        ctx->pc = 0x3D3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E18u;
        // 0x3d3e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3E20u;
        goto label_3d3e20;
    }
    ctx->pc = 0x3D3E18u;
    SET_GPR_U32(ctx, 31, 0x3D3E20u);
    ctx->pc = 0x3D3E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E18u;
    // 0x3d3e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D3E18u, 0x3D3E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E20u;
label_3d3e20:
    // 0x3d3e20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3d3e24:
    if (ctx->pc == 0x3D3E24u) {
        ctx->pc = 0x3D3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E20u;
        // 0x3d3e24: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3E28u;
        goto label_3d3e28;
    }
    ctx->pc = 0x3D3E20u;
    {
        const bool branch_taken_0x3d3e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E20u;
        // 0x3d3e24: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3e20) {
            ctx->pc = 0x3D3E38u;
            goto label_3d3e38;
        }
    }
    ctx->pc = 0x3D3E28u;
label_3d3e28:
    // 0x3d3e28: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3d3e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3d3e2c:
    // 0x3d3e2c: 0x38428000  xori        $v0, $v0, 0x8000
    ctx->pc = 0x3d3e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32768);
label_3d3e30:
    // 0x3d3e30: 0x10000081  b           . + 4 + (0x81 << 2)
label_3d3e34:
    if (ctx->pc == 0x3D3E34u) {
        ctx->pc = 0x3D3E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E30u;
        // 0x3d3e34: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3E38u;
        goto label_3d3e38;
    }
    ctx->pc = 0x3D3E30u;
    {
        const bool branch_taken_0x3d3e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E30u;
        // 0x3d3e34: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3e30) {
            ctx->pc = 0x3D4038u;
            return;
        }
    }
    ctx->pc = 0x3D3E38u;
label_3d3e38:
    // 0x3d3e38: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3d3e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3d3e3c:
    // 0x3d3e3c: 0x1000007e  b           . + 4 + (0x7E << 2)
label_3d3e40:
    if (ctx->pc == 0x3D3E40u) {
        ctx->pc = 0x3D3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E3Cu;
        // 0x3d3e40: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3E44u;
        goto label_3d3e44;
    }
    ctx->pc = 0x3D3E3Cu;
    {
        const bool branch_taken_0x3d3e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E3Cu;
        // 0x3d3e40: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3e3c) {
            ctx->pc = 0x3D4038u;
            return;
        }
    }
    ctx->pc = 0x3D3E44u;
label_3d3e44:
    // 0x3d3e44: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d3e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d3e48:
    // 0x3d3e48: 0xc0ea12a  jal         func_3A84A8
label_3d3e4c:
    if (ctx->pc == 0x3D3E4Cu) {
        ctx->pc = 0x3D3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E48u;
        // 0x3d3e4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3E50u;
        goto label_3d3e50;
    }
    ctx->pc = 0x3D3E48u;
    SET_GPR_U32(ctx, 31, 0x3D3E50u);
    ctx->pc = 0x3D3E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E48u;
    // 0x3d3e4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D3E48u, 0x3D3E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E50u;
label_3d3e50:
    // 0x3d3e50: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d3e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3e54:
    // 0x3d3e54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d3e58:
    // 0x3d3e58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d3e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3e5c:
    // 0x3d3e5c: 0xc0ea12a  jal         func_3A84A8
label_3d3e60:
    if (ctx->pc == 0x3D3E60u) {
        ctx->pc = 0x3D3E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E5Cu;
        // 0x3d3e60: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3E64u;
        goto label_3d3e64;
    }
    ctx->pc = 0x3D3E5Cu;
    SET_GPR_U32(ctx, 31, 0x3D3E64u);
    ctx->pc = 0x3D3E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E5Cu;
    // 0x3d3e60: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D3E5Cu, 0x3D3E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E64u;
label_3d3e64:
    // 0x3d3e64: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d3e64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3e68:
    // 0x3d3e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d3e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3e6c:
    // 0x3d3e6c: 0xc0ea146  jal         func_3A8518
label_3d3e70:
    if (ctx->pc == 0x3D3E70u) {
        ctx->pc = 0x3D3E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E6Cu;
        // 0x3d3e70: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3E74u;
        goto label_3d3e74;
    }
    ctx->pc = 0x3D3E6Cu;
    SET_GPR_U32(ctx, 31, 0x3D3E74u);
    ctx->pc = 0x3D3E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E6Cu;
    // 0x3d3e70: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D3E6Cu, 0x3D3E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E74u;
label_3d3e74:
    // 0x3d3e74: 0xc0ea146  jal         func_3A8518
label_3d3e78:
    if (ctx->pc == 0x3D3E78u) {
        ctx->pc = 0x3D3E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E74u;
        // 0x3d3e78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3E7Cu;
        goto label_3d3e7c;
    }
    ctx->pc = 0x3D3E74u;
    SET_GPR_U32(ctx, 31, 0x3D3E7Cu);
    ctx->pc = 0x3D3E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E74u;
    // 0x3d3e78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D3E74u, 0x3D3E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E7Cu;
label_3d3e7c:
    // 0x3d3e7c: 0xc0ea14c  jal         func_3A8530
label_3d3e80:
    if (ctx->pc == 0x3D3E80u) {
        ctx->pc = 0x3D3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E7Cu;
        // 0x3d3e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3E84u;
        goto label_3d3e84;
    }
    ctx->pc = 0x3D3E7Cu;
    SET_GPR_U32(ctx, 31, 0x3D3E84u);
    ctx->pc = 0x3D3E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E7Cu;
    // 0x3d3e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D3E7Cu, 0x3D3E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E84u;
label_3d3e84:
    // 0x3d3e84: 0xc0ea14c  jal         func_3A8530
label_3d3e88:
    if (ctx->pc == 0x3D3E88u) {
        ctx->pc = 0x3D3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E84u;
        // 0x3d3e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3E8Cu;
        goto label_3d3e8c;
    }
    ctx->pc = 0x3D3E84u;
    SET_GPR_U32(ctx, 31, 0x3D3E8Cu);
    ctx->pc = 0x3D3E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E84u;
    // 0x3d3e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D3E84u, 0x3D3E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E8Cu;
label_3d3e8c:
    // 0x3d3e8c: 0x1000006b  b           . + 4 + (0x6B << 2)
label_3d3e90:
    if (ctx->pc == 0x3D3E90u) {
        ctx->pc = 0x3D3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E8Cu;
        // 0x3d3e90: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3E94u;
        goto label_3d3e94;
    }
    ctx->pc = 0x3D3E8Cu;
    {
        const bool branch_taken_0x3d3e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E8Cu;
        // 0x3d3e90: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3e8c) {
            ctx->pc = 0x3D403Cu;
            return;
        }
    }
    ctx->pc = 0x3D3E94u;
label_3d3e94:
    // 0x3d3e94: 0xc0ea14c  jal         func_3A8530
label_3d3e98:
    if (ctx->pc == 0x3D3E98u) {
        ctx->pc = 0x3D3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E94u;
        // 0x3d3e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3E9Cu;
        goto label_3d3e9c;
    }
    ctx->pc = 0x3D3E94u;
    SET_GPR_U32(ctx, 31, 0x3D3E9Cu);
    ctx->pc = 0x3D3E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E94u;
    // 0x3d3e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D3E94u, 0x3D3E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E9Cu;
label_3d3e9c:
    // 0x3d3e9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d3e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d3ea0:
    // 0x3d3ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d3ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3ea4:
    // 0x3d3ea4: 0xc0ea176  jal         func_3A85D8
label_3d3ea8:
    if (ctx->pc == 0x3D3EA8u) {
        ctx->pc = 0x3D3EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EA4u;
        // 0x3d3ea8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3EACu;
        goto label_3d3eac;
    }
    ctx->pc = 0x3D3EA4u;
    SET_GPR_U32(ctx, 31, 0x3D3EACu);
    ctx->pc = 0x3D3EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3EA4u;
    // 0x3d3ea8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3D3EA4u, 0x3D3EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3EACu;
label_3d3eac:
    // 0x3d3eac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d3eb0:
    // 0x3d3eb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d3eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3eb4:
    // 0x3d3eb4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3d3eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3d3eb8:
    // 0x3d3eb8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d3eb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d3ebc:
    // 0x3d3ebc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d3ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d3ec0:
    // 0x3d3ec0: 0x60f809  jalr        $v1
label_3d3ec4:
    if (ctx->pc == 0x3D3EC4u) {
        ctx->pc = 0x3D3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EC0u;
        // 0x3d3ec4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3EC8u;
        goto label_3d3ec8;
    }
    ctx->pc = 0x3D3EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D3EC8u);
        ctx->pc = 0x3D3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EC0u;
        // 0x3d3ec4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3EC0u, 0x3D3EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3EC8u;
label_3d3ec8:
    // 0x3d3ec8: 0x3c0269b9  lui         $v0, 0x69B9
    ctx->pc = 0x3d3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27065 << 16));
label_3d3ecc:
    // 0x3d3ecc: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x3d3eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3d3ed0:
    // 0x3d3ed0: 0x3442d1a0  ori         $v0, $v0, 0xD1A0
    ctx->pc = 0x3d3ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53664);
label_3d3ed4:
    // 0x3d3ed4: 0x14620059  bne         $v1, $v0, . + 4 + (0x59 << 2)
label_3d3ed8:
    if (ctx->pc == 0x3D3ED8u) {
        ctx->pc = 0x3D3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3ED4u;
        // 0x3d3ed8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3EDCu;
        goto label_3d3edc;
    }
    ctx->pc = 0x3D3ED4u;
    {
        const bool branch_taken_0x3d3ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3ED4u;
        // 0x3d3ed8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ed4) {
            ctx->pc = 0x3D403Cu;
            return;
        }
    }
    ctx->pc = 0x3D3EDCu;
label_3d3edc:
    // 0x3d3edc: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x3d3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_3d3ee0:
    // 0x3d3ee0: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x3d3ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3d3ee4:
    // 0x3d3ee4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d3ee8:
    // 0x3d3ee8: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x3d3ee8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d3eec:
    // 0x3d3eec: 0x14600053  bnez        $v1, . + 4 + (0x53 << 2)
label_3d3ef0:
    if (ctx->pc == 0x3D3EF0u) {
        ctx->pc = 0x3D3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EECu;
        // 0x3d3ef0: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3EF4u;
        goto label_3d3ef4;
    }
    ctx->pc = 0x3D3EECu;
    {
        const bool branch_taken_0x3d3eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EECu;
        // 0x3d3ef0: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3eec) {
            ctx->pc = 0x3D403Cu;
            return;
        }
    }
    ctx->pc = 0x3D3EF4u;
label_3d3ef4:
    // 0x3d3ef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3ef8:
    // 0x3d3ef8: 0xc0e858c  jal         func_3A1630
label_3d3efc:
    if (ctx->pc == 0x3D3EFCu) {
        ctx->pc = 0x3D3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EF8u;
        // 0x3d3efc: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3F00u;
        goto label_3d3f00;
    }
    ctx->pc = 0x3D3EF8u;
    SET_GPR_U32(ctx, 31, 0x3D3F00u);
    ctx->pc = 0x3D3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3EF8u;
    // 0x3d3efc: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D3EF8u, 0x3D3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3F00u;
label_3d3f00:
    // 0x3d3f00: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3d3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3d3f04:
    // 0x3d3f04: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3d3f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3d3f08:
    // 0x3d3f08: 0x38428000  xori        $v0, $v0, 0x8000
    ctx->pc = 0x3d3f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32768);
label_3d3f0c:
    // 0x3d3f0c: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3d3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3d3f10:
    // 0x3d3f10: 0x10000049  b           . + 4 + (0x49 << 2)
label_3d3f14:
    if (ctx->pc == 0x3D3F14u) {
        ctx->pc = 0x3D3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F10u;
        // 0x3d3f14: 0xae63001c  sw          $v1, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3F18u;
        goto label_3d3f18;
    }
    ctx->pc = 0x3D3F10u;
    {
        const bool branch_taken_0x3d3f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F10u;
        // 0x3d3f14: 0xae63001c  sw          $v1, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f10) {
            ctx->pc = 0x3D4038u;
            return;
        }
    }
    ctx->pc = 0x3D3F18u;
label_3d3f18:
    // 0x3d3f18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3d3f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d3f1c:
    // 0x3d3f1c: 0xc0ea12a  jal         func_3A84A8
label_3d3f20:
    if (ctx->pc == 0x3D3F20u) {
        ctx->pc = 0x3D3F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F1Cu;
        // 0x3d3f20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3F24u;
        goto label_3d3f24;
    }
    ctx->pc = 0x3D3F1Cu;
    SET_GPR_U32(ctx, 31, 0x3D3F24u);
    ctx->pc = 0x3D3F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3F1Cu;
    // 0x3d3f20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D3F1Cu, 0x3D3F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3F24u;
label_3d3f24:
    // 0x3d3f24: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3d3f24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d3f28:
    // 0x3d3f28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d3f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3f2c:
    // 0x3d3f2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3d3f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d3f30:
    // 0x3d3f30: 0xc0ea12a  jal         func_3A84A8
label_3d3f34:
    if (ctx->pc == 0x3D3F34u) {
        ctx->pc = 0x3D3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F30u;
        // 0x3d3f34: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3F38u;
        goto label_3d3f38;
    }
    ctx->pc = 0x3D3F30u;
    SET_GPR_U32(ctx, 31, 0x3D3F38u);
    ctx->pc = 0x3D3F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3F30u;
    // 0x3d3f34: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D3F30u, 0x3D3F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3F38u;
label_3d3f38:
    // 0x3d3f38: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x3d3f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3d3f3c:
    // 0x3d3f3c: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x3d3f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_3d3f40:
    // 0x3d3f40: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3d3f40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d3f44:
    // 0x3d3f44: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x3d3f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_3d3f48:
    // 0x3d3f48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3d3f4c:
    if (ctx->pc == 0x3D3F4Cu) {
        ctx->pc = 0x3D3F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F48u;
        // 0x3d3f4c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3F50u;
        goto label_3d3f50;
    }
    ctx->pc = 0x3D3F48u;
    {
        const bool branch_taken_0x3d3f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F48u;
        // 0x3d3f4c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f48) {
            ctx->pc = 0x3D3F58u;
            goto label_3d3f58;
        }
    }
    ctx->pc = 0x3D3F50u;
label_3d3f50:
    // 0x3d3f50: 0x851026  xor         $v0, $a0, $a1
    ctx->pc = 0x3d3f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
label_3d3f54:
    // 0x3d3f54: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3d3f54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3d3f58:
    // 0x3d3f58: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3d3f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d3f5c:
    // 0x3d3f5c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3d3f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3d3f60:
    // 0x3d3f60: 0x24a51720  addiu       $a1, $a1, 0x1720
    ctx->pc = 0x3d3f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
label_3d3f64:
    // 0x3d3f64: 0xc0f3222  jal         func_3CC888
label_3d3f68:
    if (ctx->pc == 0x3D3F68u) {
        ctx->pc = 0x3D3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F64u;
        // 0x3d3f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3F6Cu;
        goto label_3d3f6c;
    }
    ctx->pc = 0x3D3F64u;
    SET_GPR_U32(ctx, 31, 0x3D3F6Cu);
    ctx->pc = 0x3D3F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3F64u;
    // 0x3d3f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3D3F64u, 0x3D3F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3F6Cu;
label_3d3f6c:
    // 0x3d3f6c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3d3f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3d3f70:
    // 0x3d3f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d3f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d3f74:
    // 0x3d3f74: 0x24a51730  addiu       $a1, $a1, 0x1730
    ctx->pc = 0x3d3f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
label_3d3f78:
    // 0x3d3f78: 0xc0f3222  jal         func_3CC888
label_3d3f7c:
    if (ctx->pc == 0x3D3F7Cu) {
        ctx->pc = 0x3D3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F78u;
        // 0x3d3f7c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3F80u;
        goto label_3d3f80;
    }
    ctx->pc = 0x3D3F78u;
    SET_GPR_U32(ctx, 31, 0x3D3F80u);
    ctx->pc = 0x3D3F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3F78u;
    // 0x3d3f7c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3D3F78u, 0x3D3F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3F80u;
label_3d3f80:
    // 0x3d3f80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d3f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d3f84:
    // 0x3d3f84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d3f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d3f88:
    // 0x3d3f88: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x3d3f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d3f8c:
    // 0x3d3f8c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3d3f8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3d3f90:
    // 0x3d3f90: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d3f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d3f94:
    // 0x3d3f94: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3d3f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3d3f98:
    // 0x3d3f98: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d3f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d3f9c:
    // 0x3d3f9c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3d3f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3d3fa0:
    // 0x3d3fa0: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x3d3fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d3fa4:
    // 0x3d3fa4: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3d3fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3d3fa8:
    // 0x3d3fa8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3d3fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d3fac:
    // 0x3d3fac: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3d3facu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d3fb0:
    // 0x3d3fb0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3d3fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3d3fb4:
    // 0x3d3fb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d3fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d3fb8:
    // 0x3d3fb8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3d3fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3d3fbc:
    // 0x3d3fbc: 0xc0cd518  jal         func_335460
label_3d3fc0:
    if (ctx->pc == 0x3D3FC0u) {
        ctx->pc = 0x3D3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3FBCu;
        // 0x3d3fc0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3FC4u;
        goto label_3d3fc4;
    }
    ctx->pc = 0x3D3FBCu;
    SET_GPR_U32(ctx, 31, 0x3D3FC4u);
    ctx->pc = 0x3D3FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3FBCu;
    // 0x3d3fc0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3D3FBCu, 0x3D3FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3FC4u;
label_3d3fc4:
    // 0x3d3fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d3fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d3fc8:
    // 0x3d3fc8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3d3fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d3fcc:
    // 0x3d3fcc: 0xc136b24  jal         func_4DAC90
label_3d3fd0:
    if (ctx->pc == 0x3D3FD0u) {
        ctx->pc = 0x3D3FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3FCCu;
        // 0x3d3fd0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3FD4u;
        goto label_3d3fd4;
    }
    ctx->pc = 0x3D3FCCu;
    SET_GPR_U32(ctx, 31, 0x3D3FD4u);
    ctx->pc = 0x3D3FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3FCCu;
    // 0x3d3fd0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D3FCCu, 0x3D3FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3FD4u;
label_3d3fd4:
    // 0x3d3fd4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3d3fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3d3fd8:
    // 0x3d3fd8: 0x3c050420  lui         $a1, 0x420
    ctx->pc = 0x3d3fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1056 << 16));
label_3d3fdc:
    // 0x3d3fdc: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3d3fdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d3fe0:
    // 0x3d3fe0: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x3d3fe0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d3fe4:
    // 0x3d3fe4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3d3fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3d3fe8:
    // 0x3d3fe8: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3d3fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3d3fec:
    // 0x3d3fec: 0x7e430030  sq          $v1, 0x30($s2)
    ctx->pc = 0x3d3fecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 3));
label_3d3ff0:
    // 0x3d3ff0: 0x7e440040  sq          $a0, 0x40($s2)
    ctx->pc = 0x3d3ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 4));
label_3d3ff4:
    // 0x3d3ff4: 0x10000010  b           . + 4 + (0x10 << 2)
label_3d3ff8:
    if (ctx->pc == 0x3D3FF8u) {
        ctx->pc = 0x3D3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3FF4u;
        // 0x3d3ff8: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3FFCu;
        goto label_3d3ffc;
    }
    ctx->pc = 0x3D3FF4u;
    {
        const bool branch_taken_0x3d3ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3FF4u;
        // 0x3d3ff8: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ff4) {
            ctx->pc = 0x3D4038u;
            return;
        }
    }
    ctx->pc = 0x3D3FFCu;
label_3d3ffc:
    // 0x3d3ffc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3d3ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d4000:
    // 0x3d4000: 0xc0ea12a  jal         func_3A84A8
label_3d4004:
    if (ctx->pc == 0x3D4004u) {
        ctx->pc = 0x3D4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4000u;
        // 0x3d4004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4008u;
        goto label_3d4008;
    }
    ctx->pc = 0x3D4000u;
    SET_GPR_U32(ctx, 31, 0x3D4008u);
    ctx->pc = 0x3D4004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4000u;
    // 0x3d4004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D4000u, 0x3D4008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4008u;
label_3d4008:
    // 0x3d4008: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3d4008u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d400c:
    // 0x3d400c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d400cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4010:
    // 0x3d4010: 0xc0ea14c  jal         func_3A8530
label_3d4014:
    if (ctx->pc == 0x3D4014u) {
        ctx->pc = 0x3D4014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4010u;
        // 0x3d4014: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4018u;
        goto label_3d4018;
    }
    ctx->pc = 0x3D4010u;
    SET_GPR_U32(ctx, 31, 0x3D4018u);
    ctx->pc = 0x3D4014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4010u;
    // 0x3d4014: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D4010u, 0x3D4018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4018u;
label_3d4018:
    // 0x3d4018: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3d4018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3d401c:
    // 0x3d401c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x3d401cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_3d4020:
    // 0x3d4020: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x3d4020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3d4024:
    // 0x3d4024: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3d4028:
    if (ctx->pc == 0x3D4028u) {
        ctx->pc = 0x3D4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4024u;
        // 0x3d4028: 0x641026  xor         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D402Cu;
        goto label_3d402c;
    }
    ctx->pc = 0x3D4024u;
    {
        const bool branch_taken_0x3d4024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4024u;
        // 0x3d4028: 0x641026  xor         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4024) {
            ctx->pc = 0x3D4030u;
            goto label_3d4030;
        }
    }
    ctx->pc = 0x3D402Cu;
label_3d402c:
    // 0x3d402c: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3d402cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3d4030:
    // 0x3d4030: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d4030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d4034:
    // 0x3d4034: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x3d4034u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x3d4038u;
}
