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

// Function: sub_001C1DA0
// Address: 0x1c1da0 - 0x1c1f80
void sub_001C1DA0_0x1c1da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1DA0_0x1c1da0");
#endif

    switch (ctx->pc) {
        case 0x1c1da0u: goto label_1c1da0;
        case 0x1c1da4u: goto label_1c1da4;
        case 0x1c1da8u: goto label_1c1da8;
        case 0x1c1dacu: goto label_1c1dac;
        case 0x1c1db0u: goto label_1c1db0;
        case 0x1c1db4u: goto label_1c1db4;
        case 0x1c1db8u: goto label_1c1db8;
        case 0x1c1dbcu: goto label_1c1dbc;
        case 0x1c1dc0u: goto label_1c1dc0;
        case 0x1c1dc4u: goto label_1c1dc4;
        case 0x1c1dc8u: goto label_1c1dc8;
        case 0x1c1dccu: goto label_1c1dcc;
        case 0x1c1dd0u: goto label_1c1dd0;
        case 0x1c1dd4u: goto label_1c1dd4;
        case 0x1c1dd8u: goto label_1c1dd8;
        case 0x1c1ddcu: goto label_1c1ddc;
        case 0x1c1de0u: goto label_1c1de0;
        case 0x1c1de4u: goto label_1c1de4;
        case 0x1c1de8u: goto label_1c1de8;
        case 0x1c1decu: goto label_1c1dec;
        case 0x1c1df0u: goto label_1c1df0;
        case 0x1c1df4u: goto label_1c1df4;
        case 0x1c1df8u: goto label_1c1df8;
        case 0x1c1dfcu: goto label_1c1dfc;
        case 0x1c1e00u: goto label_1c1e00;
        case 0x1c1e04u: goto label_1c1e04;
        case 0x1c1e08u: goto label_1c1e08;
        case 0x1c1e0cu: goto label_1c1e0c;
        case 0x1c1e10u: goto label_1c1e10;
        case 0x1c1e14u: goto label_1c1e14;
        case 0x1c1e18u: goto label_1c1e18;
        case 0x1c1e1cu: goto label_1c1e1c;
        case 0x1c1e20u: goto label_1c1e20;
        case 0x1c1e24u: goto label_1c1e24;
        case 0x1c1e28u: goto label_1c1e28;
        case 0x1c1e2cu: goto label_1c1e2c;
        case 0x1c1e30u: goto label_1c1e30;
        case 0x1c1e34u: goto label_1c1e34;
        case 0x1c1e38u: goto label_1c1e38;
        case 0x1c1e3cu: goto label_1c1e3c;
        case 0x1c1e40u: goto label_1c1e40;
        case 0x1c1e44u: goto label_1c1e44;
        case 0x1c1e48u: goto label_1c1e48;
        case 0x1c1e4cu: goto label_1c1e4c;
        case 0x1c1e50u: goto label_1c1e50;
        case 0x1c1e54u: goto label_1c1e54;
        case 0x1c1e58u: goto label_1c1e58;
        case 0x1c1e5cu: goto label_1c1e5c;
        case 0x1c1e60u: goto label_1c1e60;
        case 0x1c1e64u: goto label_1c1e64;
        case 0x1c1e68u: goto label_1c1e68;
        case 0x1c1e6cu: goto label_1c1e6c;
        case 0x1c1e70u: goto label_1c1e70;
        case 0x1c1e74u: goto label_1c1e74;
        case 0x1c1e78u: goto label_1c1e78;
        case 0x1c1e7cu: goto label_1c1e7c;
        case 0x1c1e80u: goto label_1c1e80;
        case 0x1c1e84u: goto label_1c1e84;
        case 0x1c1e88u: goto label_1c1e88;
        case 0x1c1e8cu: goto label_1c1e8c;
        case 0x1c1e90u: goto label_1c1e90;
        case 0x1c1e94u: goto label_1c1e94;
        case 0x1c1e98u: goto label_1c1e98;
        case 0x1c1e9cu: goto label_1c1e9c;
        case 0x1c1ea0u: goto label_1c1ea0;
        case 0x1c1ea4u: goto label_1c1ea4;
        case 0x1c1ea8u: goto label_1c1ea8;
        case 0x1c1eacu: goto label_1c1eac;
        case 0x1c1eb0u: goto label_1c1eb0;
        case 0x1c1eb4u: goto label_1c1eb4;
        case 0x1c1eb8u: goto label_1c1eb8;
        case 0x1c1ebcu: goto label_1c1ebc;
        case 0x1c1ec0u: goto label_1c1ec0;
        case 0x1c1ec4u: goto label_1c1ec4;
        case 0x1c1ec8u: goto label_1c1ec8;
        case 0x1c1eccu: goto label_1c1ecc;
        case 0x1c1ed0u: goto label_1c1ed0;
        case 0x1c1ed4u: goto label_1c1ed4;
        case 0x1c1ed8u: goto label_1c1ed8;
        case 0x1c1edcu: goto label_1c1edc;
        case 0x1c1ee0u: goto label_1c1ee0;
        case 0x1c1ee4u: goto label_1c1ee4;
        case 0x1c1ee8u: goto label_1c1ee8;
        case 0x1c1eecu: goto label_1c1eec;
        case 0x1c1ef0u: goto label_1c1ef0;
        case 0x1c1ef4u: goto label_1c1ef4;
        case 0x1c1ef8u: goto label_1c1ef8;
        case 0x1c1efcu: goto label_1c1efc;
        case 0x1c1f00u: goto label_1c1f00;
        case 0x1c1f04u: goto label_1c1f04;
        case 0x1c1f08u: goto label_1c1f08;
        case 0x1c1f0cu: goto label_1c1f0c;
        case 0x1c1f10u: goto label_1c1f10;
        case 0x1c1f14u: goto label_1c1f14;
        case 0x1c1f18u: goto label_1c1f18;
        case 0x1c1f1cu: goto label_1c1f1c;
        case 0x1c1f20u: goto label_1c1f20;
        case 0x1c1f24u: goto label_1c1f24;
        case 0x1c1f28u: goto label_1c1f28;
        case 0x1c1f2cu: goto label_1c1f2c;
        case 0x1c1f30u: goto label_1c1f30;
        case 0x1c1f34u: goto label_1c1f34;
        case 0x1c1f38u: goto label_1c1f38;
        case 0x1c1f3cu: goto label_1c1f3c;
        case 0x1c1f40u: goto label_1c1f40;
        case 0x1c1f44u: goto label_1c1f44;
        case 0x1c1f48u: goto label_1c1f48;
        case 0x1c1f4cu: goto label_1c1f4c;
        case 0x1c1f50u: goto label_1c1f50;
        case 0x1c1f54u: goto label_1c1f54;
        case 0x1c1f58u: goto label_1c1f58;
        case 0x1c1f5cu: goto label_1c1f5c;
        case 0x1c1f60u: goto label_1c1f60;
        case 0x1c1f64u: goto label_1c1f64;
        case 0x1c1f68u: goto label_1c1f68;
        case 0x1c1f6cu: goto label_1c1f6c;
        case 0x1c1f70u: goto label_1c1f70;
        case 0x1c1f74u: goto label_1c1f74;
        case 0x1c1f78u: goto label_1c1f78;
        case 0x1c1f7cu: goto label_1c1f7c;
        default: break;
    }

    ctx->pc = 0x1c1da0u;

label_1c1da0:
    // 0x1c1da0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1c1da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1c1da4:
    // 0x1c1da4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1c1da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_1c1da8:
    // 0x1c1da8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1c1da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_1c1dac:
    // 0x1c1dac: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1c1dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c1db0:
    // 0x1c1db0: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1c1db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_1c1db4:
    // 0x1c1db4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1db8:
    // 0x1c1db8: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1c1db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_1c1dbc:
    // 0x1c1dbc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c1dbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c1dc0:
    // 0x1c1dc0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1c1dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_1c1dc4:
    // 0x1c1dc4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1c1dc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1c1dc8:
    // 0x1c1dc8: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x1c1dc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1c1dcc:
    // 0x1c1dcc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1c1dccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c1dd0:
    // 0x1c1dd0: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1c1dd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1c1dd4:
    // 0x1c1dd4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1c1dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c1dd8:
    // 0x1c1dd8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1c1dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1c1ddc:
    // 0x1c1ddc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c1ddcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1c1de0:
    // 0x1c1de0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1c1de0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_1c1de4:
    // 0x1c1de4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c1de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c1de8:
    // 0x1c1de8: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x1c1de8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1c1dec:
    // 0x1c1dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1df0:
    // 0x1c1df0: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x1c1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1c1df4:
    // 0x1c1df4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1c1df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1c1df8:
    // 0x1c1df8: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1c1df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_1c1dfc:
    // 0x1c1dfc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1c1dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e00:
    // 0x1c1e00: 0xc0683f4  jal         func_1A0FD0
label_1c1e04:
    if (ctx->pc == 0x1C1E04u) {
        ctx->pc = 0x1C1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E00u;
        // 0x1c1e04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E08u;
        goto label_1c1e08;
    }
    ctx->pc = 0x1C1E00u;
    SET_GPR_U32(ctx, 31, 0x1C1E08u);
    ctx->pc = 0x1C1E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E00u;
    // 0x1c1e04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x1C1E00u, 0x1C1E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E08u;
label_1c1e08:
    // 0x1c1e08: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1c1e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c1e0c:
    // 0x1c1e0c: 0x27ad00b0  addiu       $t5, $sp, 0xB0
    ctx->pc = 0x1c1e0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c1e10:
    // 0x1c1e10: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x1c1e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1c1e14:
    // 0x1c1e14: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x1c1e14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e18:
    // 0x1c1e18: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1c1e18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1c1e1c:
    // 0x1c1e1c: 0x7a040010  lq          $a0, 0x10($s0)
    ctx->pc = 0x1c1e1cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_1c1e20:
    // 0x1c1e20: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1c1e20u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_1c1e24:
    // 0x1c1e24: 0x7ca40010  sq          $a0, 0x10($a1)
    ctx->pc = 0x1c1e24u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 4));
label_1c1e28:
    // 0x1c1e28: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1c1e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1c1e2c:
    // 0x1c1e2c: 0x1602fffa  bne         $s0, $v0, . + 4 + (-0x6 << 2)
label_1c1e30:
    if (ctx->pc == 0x1C1E30u) {
        ctx->pc = 0x1C1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E2Cu;
        // 0x1c1e30: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E34u;
        goto label_1c1e34;
    }
    ctx->pc = 0x1C1E2Cu;
    {
        const bool branch_taken_0x1c1e2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E2Cu;
        // 0x1c1e30: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e2c) {
            ctx->pc = 0x1C1E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1e18;
        }
    }
    ctx->pc = 0x1C1E34u;
label_1c1e34:
    // 0x1c1e34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1c1e38:
    // 0x1c1e38: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1c1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1c1e3c:
    // 0x1c1e3c: 0x7a080000  lq          $t0, 0x0($s0)
    ctx->pc = 0x1c1e3cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1c1e40:
    // 0x1c1e40: 0x246394a0  addiu       $v1, $v1, -0x6B60
    ctx->pc = 0x1c1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939808));
label_1c1e44:
    // 0x1c1e44: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x1c1e44u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
label_1c1e48:
    // 0x1c1e48: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x1c1e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_1c1e4c:
    // 0x1c1e4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c1e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c1e50:
    // 0x1c1e50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c1e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c1e54:
    // 0x1c1e54: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x1c1e54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c1e58:
    // 0x1c1e58: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x1c1e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
label_1c1e5c:
    // 0x1c1e5c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x1c1e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_1c1e60:
    // 0x1c1e60: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1c1e60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_1c1e64:
    // 0x1c1e64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c1e68:
    // 0x1c1e68: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1c1e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1e6c:
    // 0x1c1e6c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1c1e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e70:
    // 0x1c1e70: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1c1e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c1e74:
    // 0x1c1e74: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1c1e74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1c1e78:
    // 0x1c1e78: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c1e78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1c1e7c:
    // 0x1c1e7c: 0xc444e95c  lwc1        $f4, -0x16A4($v0)
    ctx->pc = 0x1c1e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1c1e80:
    // 0x1c1e80: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x1c1e80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_1c1e84:
    // 0x1c1e84: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1c1e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1c1e88:
    // 0x1c1e88: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c1e88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1c1e8c:
    // 0x1c1e8c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c1e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c1e90:
    // 0x1c1e90: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1c1e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c1e94:
    // 0x1c1e94: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1c1e94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e98:
    // 0x1c1e98: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1c1e98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1c1e9c:
    // 0x1c1e9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c1e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c1ea0:
    // 0x1c1ea0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c1ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1c1ea4:
    // 0x1c1ea4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1c1ea4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1c1ea8:
    // 0x1c1ea8: 0xa3a400b0  sb          $a0, 0xB0($sp)
    ctx->pc = 0x1c1ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 4));
label_1c1eac:
    // 0x1c1eac: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x1c1eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
label_1c1eb0:
    // 0x1c1eb0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1c1eb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c1eb4:
    // 0x1c1eb4: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1c1eb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c1eb8:
    // 0x1c1eb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c1eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1ebc:
    // 0x1c1ebc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c1ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c1ec0:
    // 0x1c1ec0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1c1ec0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1c1ec4:
    // 0x1c1ec4: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1c1ec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c1ec8:
    // 0x1c1ec8: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x1c1ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_1c1ecc:
    // 0x1c1ecc: 0xe565000c  swc1        $f5, 0xC($t3)
    ctx->pc = 0x1c1eccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_1c1ed0:
    // 0x1c1ed0: 0xa1a60002  sb          $a2, 0x2($t5)
    ctx->pc = 0x1c1ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 6));
label_1c1ed4:
    // 0x1c1ed4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c1ed4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ed8:
    // 0x1c1ed8: 0xa1ac0003  sb          $t4, 0x3($t5)
    ctx->pc = 0x1c1ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 12));
label_1c1edc:
    // 0x1c1edc: 0xa1a60001  sb          $a2, 0x1($t5)
    ctx->pc = 0x1c1edcu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 6));
label_1c1ee0:
    // 0x1c1ee0: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1c1ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_1c1ee4:
    // 0x1c1ee4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c1ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1c1ee8:
    // 0x1c1ee8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c1ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c1eec:
    // 0x1c1eec: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x1c1eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1c1ef0:
    // 0x1c1ef0: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1c1ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1c1ef4:
    // 0x1c1ef4: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1c1ef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1c1ef8:
    // 0x1c1ef8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c1ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c1efc:
    // 0x1c1efc: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x1c1efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
label_1c1f00:
    // 0x1c1f00: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c1f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1c1f04:
    // 0x1c1f04: 0xc06876e  jal         func_1A1DB8
label_1c1f08:
    if (ctx->pc == 0x1C1F08u) {
        ctx->pc = 0x1C1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F04u;
        // 0x1c1f08: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F0Cu;
        goto label_1c1f0c;
    }
    ctx->pc = 0x1C1F04u;
    SET_GPR_U32(ctx, 31, 0x1C1F0Cu);
    ctx->pc = 0x1C1F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F04u;
    // 0x1c1f08: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1C1F04u, 0x1C1F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F0Cu;
label_1c1f0c:
    // 0x1c1f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1f10:
    // 0x1c1f10: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1c1f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1c1f14:
    // 0x1c1f14: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1c1f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1c1f18:
    // 0x1c1f18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c1f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1f1c:
    // 0x1c1f1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c1f20:
    // 0x1c1f20: 0xae2003a0  sw          $zero, 0x3A0($s1)
    ctx->pc = 0x1c1f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 0));
label_1c1f24:
    // 0x1c1f24: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c1f24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c1f28:
    // 0x1c1f28: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c1f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c1f2c:
    // 0x1c1f2c: 0x60f809  jalr        $v1
label_1c1f30:
    if (ctx->pc == 0x1C1F30u) {
        ctx->pc = 0x1C1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F2Cu;
        // 0x1c1f30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F34u;
        goto label_1c1f34;
    }
    ctx->pc = 0x1C1F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C1F34u);
        ctx->pc = 0x1C1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F2Cu;
        // 0x1c1f30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1F2Cu, 0x1C1F34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1F34u;
label_1c1f34:
    // 0x1c1f34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c1f38:
    // 0x1c1f38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c1f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1f3c:
    // 0x1c1f3c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1c1f3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1c1f40:
    // 0x1c1f40: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1c1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1c1f44:
    // 0x1c1f44: 0x60f809  jalr        $v1
label_1c1f48:
    if (ctx->pc == 0x1C1F48u) {
        ctx->pc = 0x1C1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F44u;
        // 0x1c1f48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F4Cu;
        goto label_1c1f4c;
    }
    ctx->pc = 0x1C1F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C1F4Cu);
        ctx->pc = 0x1C1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F44u;
        // 0x1c1f48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1F44u, 0x1C1F4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1F4Cu;
label_1c1f4c:
    // 0x1c1f4c: 0xae2003a8  sw          $zero, 0x3A8($s1)
    ctx->pc = 0x1c1f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 936), GPR_U32(ctx, 0));
label_1c1f50:
    // 0x1c1f50: 0xae2003a4  sw          $zero, 0x3A4($s1)
    ctx->pc = 0x1c1f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 0));
label_1c1f54:
    // 0x1c1f54: 0xae2003e0  sw          $zero, 0x3E0($s1)
    ctx->pc = 0x1c1f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 992), GPR_U32(ctx, 0));
label_1c1f58:
    // 0x1c1f58: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1c1f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1c1f5c:
    // 0x1c1f5c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1c1f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1c1f60:
    // 0x1c1f60: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1c1f60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1c1f64:
    // 0x1c1f64: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1c1f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1c1f68:
    // 0x1c1f68: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1c1f68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c1f6c:
    // 0x1c1f6c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1c1f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1c1f70:
    // 0x1c1f70: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x1c1f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c1f74:
    // 0x1c1f74: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1c1f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c1f78:
    // 0x1c1f78: 0x3e00008  jr          $ra
label_1c1f7c:
    if (ctx->pc == 0x1C1F7Cu) {
        ctx->pc = 0x1C1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F78u;
        // 0x1c1f7c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F80u;
        goto label_fallthrough_0x1c1f78;
    }
    ctx->pc = 0x1C1F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F78u;
        // 0x1c1f7c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c1f78:
    ctx->pc = 0x1C1F80u;
}
