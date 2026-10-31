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

// Function: sub_001A6D28
// Address: 0x1a6d28 - 0x1a7000
void sub_001A6D28_0x1a6d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6D28_0x1a6d28");
#endif

    switch (ctx->pc) {
        case 0x1a6d28u: goto label_1a6d28;
        case 0x1a6d2cu: goto label_1a6d2c;
        case 0x1a6d30u: goto label_1a6d30;
        case 0x1a6d34u: goto label_1a6d34;
        case 0x1a6d38u: goto label_1a6d38;
        case 0x1a6d3cu: goto label_1a6d3c;
        case 0x1a6d40u: goto label_1a6d40;
        case 0x1a6d44u: goto label_1a6d44;
        case 0x1a6d48u: goto label_1a6d48;
        case 0x1a6d4cu: goto label_1a6d4c;
        case 0x1a6d50u: goto label_1a6d50;
        case 0x1a6d54u: goto label_1a6d54;
        case 0x1a6d58u: goto label_1a6d58;
        case 0x1a6d5cu: goto label_1a6d5c;
        case 0x1a6d60u: goto label_1a6d60;
        case 0x1a6d64u: goto label_1a6d64;
        case 0x1a6d68u: goto label_1a6d68;
        case 0x1a6d6cu: goto label_1a6d6c;
        case 0x1a6d70u: goto label_1a6d70;
        case 0x1a6d74u: goto label_1a6d74;
        case 0x1a6d78u: goto label_1a6d78;
        case 0x1a6d7cu: goto label_1a6d7c;
        case 0x1a6d80u: goto label_1a6d80;
        case 0x1a6d84u: goto label_1a6d84;
        case 0x1a6d88u: goto label_1a6d88;
        case 0x1a6d8cu: goto label_1a6d8c;
        case 0x1a6d90u: goto label_1a6d90;
        case 0x1a6d94u: goto label_1a6d94;
        case 0x1a6d98u: goto label_1a6d98;
        case 0x1a6d9cu: goto label_1a6d9c;
        case 0x1a6da0u: goto label_1a6da0;
        case 0x1a6da4u: goto label_1a6da4;
        case 0x1a6da8u: goto label_1a6da8;
        case 0x1a6dacu: goto label_1a6dac;
        case 0x1a6db0u: goto label_1a6db0;
        case 0x1a6db4u: goto label_1a6db4;
        case 0x1a6db8u: goto label_1a6db8;
        case 0x1a6dbcu: goto label_1a6dbc;
        case 0x1a6dc0u: goto label_1a6dc0;
        case 0x1a6dc4u: goto label_1a6dc4;
        case 0x1a6dc8u: goto label_1a6dc8;
        case 0x1a6dccu: goto label_1a6dcc;
        case 0x1a6dd0u: goto label_1a6dd0;
        case 0x1a6dd4u: goto label_1a6dd4;
        case 0x1a6dd8u: goto label_1a6dd8;
        case 0x1a6ddcu: goto label_1a6ddc;
        case 0x1a6de0u: goto label_1a6de0;
        case 0x1a6de4u: goto label_1a6de4;
        case 0x1a6de8u: goto label_1a6de8;
        case 0x1a6decu: goto label_1a6dec;
        case 0x1a6df0u: goto label_1a6df0;
        case 0x1a6df4u: goto label_1a6df4;
        case 0x1a6df8u: goto label_1a6df8;
        case 0x1a6dfcu: goto label_1a6dfc;
        case 0x1a6e00u: goto label_1a6e00;
        case 0x1a6e04u: goto label_1a6e04;
        case 0x1a6e08u: goto label_1a6e08;
        case 0x1a6e0cu: goto label_1a6e0c;
        case 0x1a6e10u: goto label_1a6e10;
        case 0x1a6e14u: goto label_1a6e14;
        case 0x1a6e18u: goto label_1a6e18;
        case 0x1a6e1cu: goto label_1a6e1c;
        case 0x1a6e20u: goto label_1a6e20;
        case 0x1a6e24u: goto label_1a6e24;
        case 0x1a6e28u: goto label_1a6e28;
        case 0x1a6e2cu: goto label_1a6e2c;
        case 0x1a6e30u: goto label_1a6e30;
        case 0x1a6e34u: goto label_1a6e34;
        case 0x1a6e38u: goto label_1a6e38;
        case 0x1a6e3cu: goto label_1a6e3c;
        case 0x1a6e40u: goto label_1a6e40;
        case 0x1a6e44u: goto label_1a6e44;
        case 0x1a6e48u: goto label_1a6e48;
        case 0x1a6e4cu: goto label_1a6e4c;
        case 0x1a6e50u: goto label_1a6e50;
        case 0x1a6e54u: goto label_1a6e54;
        case 0x1a6e58u: goto label_1a6e58;
        case 0x1a6e5cu: goto label_1a6e5c;
        case 0x1a6e60u: goto label_1a6e60;
        case 0x1a6e64u: goto label_1a6e64;
        case 0x1a6e68u: goto label_1a6e68;
        case 0x1a6e6cu: goto label_1a6e6c;
        case 0x1a6e70u: goto label_1a6e70;
        case 0x1a6e74u: goto label_1a6e74;
        case 0x1a6e78u: goto label_1a6e78;
        case 0x1a6e7cu: goto label_1a6e7c;
        case 0x1a6e80u: goto label_1a6e80;
        case 0x1a6e84u: goto label_1a6e84;
        case 0x1a6e88u: goto label_1a6e88;
        case 0x1a6e8cu: goto label_1a6e8c;
        case 0x1a6e90u: goto label_1a6e90;
        case 0x1a6e94u: goto label_1a6e94;
        case 0x1a6e98u: goto label_1a6e98;
        case 0x1a6e9cu: goto label_1a6e9c;
        case 0x1a6ea0u: goto label_1a6ea0;
        case 0x1a6ea4u: goto label_1a6ea4;
        case 0x1a6ea8u: goto label_1a6ea8;
        case 0x1a6eacu: goto label_1a6eac;
        case 0x1a6eb0u: goto label_1a6eb0;
        case 0x1a6eb4u: goto label_1a6eb4;
        case 0x1a6eb8u: goto label_1a6eb8;
        case 0x1a6ebcu: goto label_1a6ebc;
        case 0x1a6ec0u: goto label_1a6ec0;
        case 0x1a6ec4u: goto label_1a6ec4;
        case 0x1a6ec8u: goto label_1a6ec8;
        case 0x1a6eccu: goto label_1a6ecc;
        case 0x1a6ed0u: goto label_1a6ed0;
        case 0x1a6ed4u: goto label_1a6ed4;
        case 0x1a6ed8u: goto label_1a6ed8;
        case 0x1a6edcu: goto label_1a6edc;
        case 0x1a6ee0u: goto label_1a6ee0;
        case 0x1a6ee4u: goto label_1a6ee4;
        case 0x1a6ee8u: goto label_1a6ee8;
        case 0x1a6eecu: goto label_1a6eec;
        case 0x1a6ef0u: goto label_1a6ef0;
        case 0x1a6ef4u: goto label_1a6ef4;
        case 0x1a6ef8u: goto label_1a6ef8;
        case 0x1a6efcu: goto label_1a6efc;
        case 0x1a6f00u: goto label_1a6f00;
        case 0x1a6f04u: goto label_1a6f04;
        case 0x1a6f08u: goto label_1a6f08;
        case 0x1a6f0cu: goto label_1a6f0c;
        case 0x1a6f10u: goto label_1a6f10;
        case 0x1a6f14u: goto label_1a6f14;
        case 0x1a6f18u: goto label_1a6f18;
        case 0x1a6f1cu: goto label_1a6f1c;
        case 0x1a6f20u: goto label_1a6f20;
        case 0x1a6f24u: goto label_1a6f24;
        case 0x1a6f28u: goto label_1a6f28;
        case 0x1a6f2cu: goto label_1a6f2c;
        case 0x1a6f30u: goto label_1a6f30;
        case 0x1a6f34u: goto label_1a6f34;
        case 0x1a6f38u: goto label_1a6f38;
        case 0x1a6f3cu: goto label_1a6f3c;
        case 0x1a6f40u: goto label_1a6f40;
        case 0x1a6f44u: goto label_1a6f44;
        case 0x1a6f48u: goto label_1a6f48;
        case 0x1a6f4cu: goto label_1a6f4c;
        case 0x1a6f50u: goto label_1a6f50;
        case 0x1a6f54u: goto label_1a6f54;
        case 0x1a6f58u: goto label_1a6f58;
        case 0x1a6f5cu: goto label_1a6f5c;
        case 0x1a6f60u: goto label_1a6f60;
        case 0x1a6f64u: goto label_1a6f64;
        case 0x1a6f68u: goto label_1a6f68;
        case 0x1a6f6cu: goto label_1a6f6c;
        case 0x1a6f70u: goto label_1a6f70;
        case 0x1a6f74u: goto label_1a6f74;
        case 0x1a6f78u: goto label_1a6f78;
        case 0x1a6f7cu: goto label_1a6f7c;
        case 0x1a6f80u: goto label_1a6f80;
        case 0x1a6f84u: goto label_1a6f84;
        case 0x1a6f88u: goto label_1a6f88;
        case 0x1a6f8cu: goto label_1a6f8c;
        case 0x1a6f90u: goto label_1a6f90;
        case 0x1a6f94u: goto label_1a6f94;
        case 0x1a6f98u: goto label_1a6f98;
        case 0x1a6f9cu: goto label_1a6f9c;
        case 0x1a6fa0u: goto label_1a6fa0;
        case 0x1a6fa4u: goto label_1a6fa4;
        case 0x1a6fa8u: goto label_1a6fa8;
        case 0x1a6facu: goto label_1a6fac;
        case 0x1a6fb0u: goto label_1a6fb0;
        case 0x1a6fb4u: goto label_1a6fb4;
        case 0x1a6fb8u: goto label_1a6fb8;
        case 0x1a6fbcu: goto label_1a6fbc;
        case 0x1a6fc0u: goto label_1a6fc0;
        case 0x1a6fc4u: goto label_1a6fc4;
        case 0x1a6fc8u: goto label_1a6fc8;
        case 0x1a6fccu: goto label_1a6fcc;
        case 0x1a6fd0u: goto label_1a6fd0;
        case 0x1a6fd4u: goto label_1a6fd4;
        case 0x1a6fd8u: goto label_1a6fd8;
        case 0x1a6fdcu: goto label_1a6fdc;
        case 0x1a6fe0u: goto label_1a6fe0;
        case 0x1a6fe4u: goto label_1a6fe4;
        case 0x1a6fe8u: goto label_1a6fe8;
        case 0x1a6fecu: goto label_1a6fec;
        case 0x1a6ff0u: goto label_1a6ff0;
        case 0x1a6ff4u: goto label_1a6ff4;
        case 0x1a6ff8u: goto label_1a6ff8;
        case 0x1a6ffcu: goto label_1a6ffc;
        default: break;
    }

    ctx->pc = 0x1a6d28u;

label_1a6d28:
    // 0x1a6d28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a6d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1a6d2c:
    // 0x1a6d2c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1a6d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1a6d30:
    // 0x1a6d30: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1a6d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1a6d34:
    // 0x1a6d34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a6d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6d38:
    // 0x1a6d38: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1a6d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1a6d3c:
    // 0x1a6d3c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a6d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1a6d40:
    // 0x1a6d40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a6d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a6d44:
    // 0x1a6d44: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1a6d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1a6d48:
    // 0x1a6d48: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1a6d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1a6d4c:
    // 0x1a6d4c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1a6d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_1a6d50:
    // 0x1a6d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a6d54:
    // 0x1a6d54: 0x8e42155c  lw          $v0, 0x155C($s2)
    ctx->pc = 0x1a6d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5468)));
label_1a6d58:
    // 0x1a6d58: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
label_1a6d5c:
    if (ctx->pc == 0x1A6D5Cu) {
        ctx->pc = 0x1A6D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D58u;
        // 0x1a6d5c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D60u;
        goto label_1a6d60;
    }
    ctx->pc = 0x1A6D58u;
    {
        const bool branch_taken_0x1a6d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D58u;
        // 0x1a6d5c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d58) {
            ctx->pc = 0x1A6FD4u;
            goto label_1a6fd4;
        }
    }
    ctx->pc = 0x1A6D60u;
label_1a6d60:
    // 0x1a6d60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a6d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a6d64:
    // 0x1a6d64: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1a6d64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1a6d68:
    // 0x1a6d68: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1a6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1a6d6c:
    // 0x1a6d6c: 0x40f809  jalr        $v0
label_1a6d70:
    if (ctx->pc == 0x1A6D70u) {
        ctx->pc = 0x1A6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D6Cu;
        // 0x1a6d70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D74u;
        goto label_1a6d74;
    }
    ctx->pc = 0x1A6D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6D74u);
        ctx->pc = 0x1A6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D6Cu;
        // 0x1a6d70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6D6Cu, 0x1A6D74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6D74u;
label_1a6d74:
    // 0x1a6d74: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
label_1a6d78:
    if (ctx->pc == 0x1A6D78u) {
        ctx->pc = 0x1A6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D74u;
        // 0x1a6d78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D7Cu;
        goto label_1a6d7c;
    }
    ctx->pc = 0x1A6D74u;
    {
        const bool branch_taken_0x1a6d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D74u;
        // 0x1a6d78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d74) {
            ctx->pc = 0x1A6FD0u;
            goto label_1a6fd0;
        }
    }
    ctx->pc = 0x1A6D7Cu;
label_1a6d7c:
    // 0x1a6d7c: 0xae40156c  sw          $zero, 0x156C($s2)
    ctx->pc = 0x1a6d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5484), GPR_U32(ctx, 0));
label_1a6d80:
    // 0x1a6d80: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1a6d80u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_1a6d84:
    // 0x1a6d84: 0x0  nop
    ctx->pc = 0x1a6d84u;
    // NOP
label_1a6d88:
    // 0x1a6d88: 0x8ec3489c  lw          $v1, 0x489C($s6)
    ctx->pc = 0x1a6d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1a6d8c:
    // 0x1a6d8c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1a6d8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_1a6d90:
    // 0x1a6d90: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a6d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a6d94:
    // 0x1a6d94: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1a6d98:
    if (ctx->pc == 0x1A6D98u) {
        ctx->pc = 0x1A6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D94u;
        // 0x1a6d98: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D9Cu;
        goto label_1a6d9c;
    }
    ctx->pc = 0x1A6D94u;
    {
        const bool branch_taken_0x1a6d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d94) {
            ctx->pc = 0x1A6D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6D94u;
            // 0x1a6d98: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6DC8u;
            goto label_1a6dc8;
        }
    }
    ctx->pc = 0x1A6D9Cu;
label_1a6d9c:
    // 0x1a6d9c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1a6d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1a6da0:
    // 0x1a6da0: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1a6da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_1a6da4:
    // 0x1a6da4: 0xc0e409a  jal         func_390268
label_1a6da8:
    if (ctx->pc == 0x1A6DA8u) {
        ctx->pc = 0x1A6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DA4u;
        // 0x1a6da8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DACu;
        goto label_1a6dac;
    }
    ctx->pc = 0x1A6DA4u;
    SET_GPR_U32(ctx, 31, 0x1A6DACu);
    ctx->pc = 0x1A6DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6DA4u;
    // 0x1a6da8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1A6DA4u, 0x1A6DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DACu;
label_1a6dac:
    // 0x1a6dac: 0xae42156c  sw          $v0, 0x156C($s2)
    ctx->pc = 0x1a6dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5484), GPR_U32(ctx, 2));
label_1a6db0:
    // 0x1a6db0: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1a6db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1a6db4:
    // 0x1a6db4: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x1a6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
label_1a6db8:
    // 0x1a6db8: 0x5464fff3  bnel        $v1, $a0, . + 4 + (-0xD << 2)
label_1a6dbc:
    if (ctx->pc == 0x1A6DBCu) {
        ctx->pc = 0x1A6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DB8u;
        // 0x1a6dbc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DC0u;
        goto label_1a6dc0;
    }
    ctx->pc = 0x1A6DB8u;
    {
        const bool branch_taken_0x1a6db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a6db8) {
            ctx->pc = 0x1A6DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6DB8u;
            // 0x1a6dbc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6d88;
        }
    }
    ctx->pc = 0x1A6DC0u;
label_1a6dc0:
    // 0x1a6dc0: 0xae501574  sw          $s0, 0x1574($s2)
    ctx->pc = 0x1a6dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5492), GPR_U32(ctx, 16));
label_1a6dc4:
    // 0x1a6dc4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a6dc8:
    // 0x1a6dc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6dcc:
    // 0x1a6dcc: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1a6dccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1a6dd0:
    // 0x1a6dd0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1a6dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1a6dd4:
    // 0x1a6dd4: 0x60f809  jalr        $v1
label_1a6dd8:
    if (ctx->pc == 0x1A6DD8u) {
        ctx->pc = 0x1A6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DD4u;
        // 0x1a6dd8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DDCu;
        goto label_1a6ddc;
    }
    ctx->pc = 0x1A6DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6DDCu);
        ctx->pc = 0x1A6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DD4u;
        // 0x1a6dd8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6DD4u, 0x1A6DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6DDCu;
label_1a6ddc:
    // 0x1a6ddc: 0x8e44156c  lw          $a0, 0x156C($s2)
    ctx->pc = 0x1a6ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5484)));
label_1a6de0:
    // 0x1a6de0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1a6de4:
    if (ctx->pc == 0x1A6DE4u) {
        ctx->pc = 0x1A6DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DE0u;
        // 0x1a6de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DE8u;
        goto label_1a6de8;
    }
    ctx->pc = 0x1A6DE0u;
    {
        const bool branch_taken_0x1a6de0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DE0u;
        // 0x1a6de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6de0) {
            ctx->pc = 0x1A6E04u;
            goto label_1a6e04;
        }
    }
    ctx->pc = 0x1A6DE8u;
label_1a6de8:
    // 0x1a6de8: 0x909403ac  lbu         $s4, 0x3AC($a0)
    ctx->pc = 0x1a6de8u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 940)));
label_1a6dec:
    // 0x1a6dec: 0x56820006  bnel        $s4, $v0, . + 4 + (0x6 << 2)
label_1a6df0:
    if (ctx->pc == 0x1A6DF0u) {
        ctx->pc = 0x1A6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DECu;
        // 0x1a6df0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DF4u;
        goto label_1a6df4;
    }
    ctx->pc = 0x1A6DECu;
    {
        const bool branch_taken_0x1a6dec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6dec) {
            ctx->pc = 0x1A6DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6DECu;
            // 0x1a6df0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6E08u;
            goto label_1a6e08;
        }
    }
    ctx->pc = 0x1A6DF4u;
label_1a6df4:
    // 0x1a6df4: 0x8ec2489c  lw          $v0, 0x489C($s6)
    ctx->pc = 0x1a6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1a6df8:
    // 0x1a6df8: 0x84430224  lh          $v1, 0x224($v0)
    ctx->pc = 0x1a6df8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
label_1a6dfc:
    // 0x1a6dfc: 0x16030009  bne         $s0, $v1, . + 4 + (0x9 << 2)
label_1a6e00:
    if (ctx->pc == 0x1A6E00u) {
        ctx->pc = 0x1A6E04u;
        goto label_1a6e04;
    }
    ctx->pc = 0x1A6DFCu;
    {
        const bool branch_taken_0x1a6dfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a6dfc) {
            ctx->pc = 0x1A6E24u;
            goto label_1a6e24;
        }
    }
    ctx->pc = 0x1A6E04u;
label_1a6e04:
    // 0x1a6e04: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a6e08:
    // 0x1a6e08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e0c:
    // 0x1a6e0c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1a6e0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1a6e10:
    // 0x1a6e10: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1a6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1a6e14:
    // 0x1a6e14: 0x60f809  jalr        $v1
label_1a6e18:
    if (ctx->pc == 0x1A6E18u) {
        ctx->pc = 0x1A6E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E14u;
        // 0x1a6e18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E1Cu;
        goto label_1a6e1c;
    }
    ctx->pc = 0x1A6E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6E1Cu);
        ctx->pc = 0x1A6E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E14u;
        // 0x1a6e18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E14u, 0x1A6E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6E1Cu;
label_1a6e1c:
    // 0x1a6e1c: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1a6e20:
    if (ctx->pc == 0x1A6E20u) {
        ctx->pc = 0x1A6E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E1Cu;
        // 0x1a6e20: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E24u;
        goto label_1a6e24;
    }
    ctx->pc = 0x1A6E1Cu;
    {
        const bool branch_taken_0x1a6e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E1Cu;
        // 0x1a6e20: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e1c) {
            ctx->pc = 0x1A6FD4u;
            goto label_1a6fd4;
        }
    }
    ctx->pc = 0x1A6E24u;
label_1a6e24:
    // 0x1a6e24: 0xc0874fa  jal         func_21D3E8
label_1a6e28:
    if (ctx->pc == 0x1A6E28u) {
        ctx->pc = 0x1A6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E24u;
        // 0x1a6e28: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E2Cu;
        goto label_1a6e2c;
    }
    ctx->pc = 0x1A6E24u;
    SET_GPR_U32(ctx, 31, 0x1A6E2Cu);
    ctx->pc = 0x1A6E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E24u;
    // 0x1a6e28: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x1A6E24u, 0x1A6E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6E2Cu;
label_1a6e2c:
    // 0x1a6e2c: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x1a6e2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_1a6e30:
    // 0x1a6e30: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x1a6e30u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
label_1a6e34:
    // 0x1a6e34: 0xae540244  sw          $s4, 0x244($s2)
    ctx->pc = 0x1a6e34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 580), GPR_U32(ctx, 20));
label_1a6e38:
    // 0x1a6e38: 0x26500f40  addiu       $s0, $s2, 0xF40
    ctx->pc = 0x1a6e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3904));
label_1a6e3c:
    // 0x1a6e3c: 0xae431570  sw          $v1, 0x1570($s2)
    ctx->pc = 0x1a6e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5488), GPR_U32(ctx, 3));
label_1a6e40:
    // 0x1a6e40: 0x26530340  addiu       $s3, $s2, 0x340
    ctx->pc = 0x1a6e40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
label_1a6e44:
    // 0x1a6e44: 0xae541554  sw          $s4, 0x1554($s2)
    ctx->pc = 0x1a6e44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5460), GPR_U32(ctx, 20));
label_1a6e48:
    // 0x1a6e48: 0x26510940  addiu       $s1, $s2, 0x940
    ctx->pc = 0x1a6e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
label_1a6e4c:
    // 0x1a6e4c: 0xae401548  sw          $zero, 0x1548($s2)
    ctx->pc = 0x1a6e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5448), GPR_U32(ctx, 0));
label_1a6e50:
    // 0x1a6e50: 0xae401568  sw          $zero, 0x1568($s2)
    ctx->pc = 0x1a6e50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5480), GPR_U32(ctx, 0));
label_1a6e54:
    // 0x1a6e54: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1a6e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1a6e58:
    // 0x1a6e58: 0xae540054  sw          $s4, 0x54($s2)
    ctx->pc = 0x1a6e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 20));
label_1a6e5c:
    // 0x1a6e5c: 0x0  nop
    ctx->pc = 0x1a6e5cu;
    // NOP
label_1a6e60:
    // 0x1a6e60: 0x8e03fa00  lw          $v1, -0x600($s0)
    ctx->pc = 0x1a6e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
label_1a6e64:
    // 0x1a6e64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6e68:
    // 0x1a6e68: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1a6e68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1a6e6c:
    // 0x1a6e6c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1a6e6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1a6e70:
    // 0x1a6e70: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1a6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1a6e74:
    // 0x1a6e74: 0x40f809  jalr        $v0
label_1a6e78:
    if (ctx->pc == 0x1A6E78u) {
        ctx->pc = 0x1A6E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E74u;
        // 0x1a6e78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E7Cu;
        goto label_1a6e7c;
    }
    ctx->pc = 0x1A6E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6E7Cu);
        ctx->pc = 0x1A6E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E74u;
        // 0x1a6e78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E74u, 0x1A6E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6E7Cu;
label_1a6e7c:
    // 0x1a6e7c: 0x8e03fa00  lw          $v1, -0x600($s0)
    ctx->pc = 0x1a6e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
label_1a6e80:
    // 0x1a6e80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6e84:
    // 0x1a6e84: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1a6e84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1a6e88:
    // 0x1a6e88: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1a6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1a6e8c:
    // 0x1a6e8c: 0x40f809  jalr        $v0
label_1a6e90:
    if (ctx->pc == 0x1A6E90u) {
        ctx->pc = 0x1A6E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E8Cu;
        // 0x1a6e90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E94u;
        goto label_1a6e94;
    }
    ctx->pc = 0x1A6E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6E94u);
        ctx->pc = 0x1A6E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E8Cu;
        // 0x1a6e90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E8Cu, 0x1A6E94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6E94u;
label_1a6e94:
    // 0x1a6e94: 0xc06896e  jal         func_1A25B8
label_1a6e98:
    if (ctx->pc == 0x1A6E98u) {
        ctx->pc = 0x1A6E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E94u;
        // 0x1a6e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E9Cu;
        goto label_1a6e9c;
    }
    ctx->pc = 0x1A6E94u;
    SET_GPR_U32(ctx, 31, 0x1A6E9Cu);
    ctx->pc = 0x1A6E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E94u;
    // 0x1a6e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A25B8u, 0x1A6E94u, 0x1A6E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6E9Cu;
label_1a6e9c:
    // 0x1a6e9c: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1a6e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1a6ea0:
    // 0x1a6ea0: 0x8e02f400  lw          $v0, -0xC00($s0)
    ctx->pc = 0x1a6ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964224)));
label_1a6ea4:
    // 0x1a6ea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6ea8:
    // 0x1a6ea8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1a6ea8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1a6eac:
    // 0x1a6eac: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1a6eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1a6eb0:
    // 0x1a6eb0: 0x60f809  jalr        $v1
label_1a6eb4:
    if (ctx->pc == 0x1A6EB4u) {
        ctx->pc = 0x1A6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EB0u;
        // 0x1a6eb4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EB8u;
        goto label_1a6eb8;
    }
    ctx->pc = 0x1A6EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6EB8u);
        ctx->pc = 0x1A6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EB0u;
        // 0x1a6eb4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6EB0u, 0x1A6EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6EB8u;
label_1a6eb8:
    // 0x1a6eb8: 0x8e02f400  lw          $v0, -0xC00($s0)
    ctx->pc = 0x1a6eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964224)));
label_1a6ebc:
    // 0x1a6ebc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6ec0:
    // 0x1a6ec0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a6ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a6ec4:
    // 0x1a6ec4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a6ec8:
    // 0x1a6ec8: 0x60f809  jalr        $v1
label_1a6ecc:
    if (ctx->pc == 0x1A6ECCu) {
        ctx->pc = 0x1A6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EC8u;
        // 0x1a6ecc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6ED0u;
        goto label_1a6ed0;
    }
    ctx->pc = 0x1A6EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6ED0u);
        ctx->pc = 0x1A6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EC8u;
        // 0x1a6ecc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6EC8u, 0x1A6ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6ED0u;
label_1a6ed0:
    // 0x1a6ed0: 0xc06896e  jal         func_1A25B8
label_1a6ed4:
    if (ctx->pc == 0x1A6ED4u) {
        ctx->pc = 0x1A6ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6ED0u;
        // 0x1a6ed4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6ED8u;
        goto label_1a6ed8;
    }
    ctx->pc = 0x1A6ED0u;
    SET_GPR_U32(ctx, 31, 0x1A6ED8u);
    ctx->pc = 0x1A6ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6ED0u;
    // 0x1a6ed4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A25B8u, 0x1A6ED0u, 0x1A6ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6ED8u;
label_1a6ed8:
    // 0x1a6ed8: 0x26730100  addiu       $s3, $s3, 0x100
    ctx->pc = 0x1a6ed8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_1a6edc:
    // 0x1a6edc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6ee0:
    // 0x1a6ee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6ee4:
    // 0x1a6ee4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1a6ee4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1a6ee8:
    // 0x1a6ee8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1a6ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1a6eec:
    // 0x1a6eec: 0x60f809  jalr        $v1
label_1a6ef0:
    if (ctx->pc == 0x1A6EF0u) {
        ctx->pc = 0x1A6EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EECu;
        // 0x1a6ef0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EF4u;
        goto label_1a6ef4;
    }
    ctx->pc = 0x1A6EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6EF4u);
        ctx->pc = 0x1A6EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EECu;
        // 0x1a6ef0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6EECu, 0x1A6EF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6EF4u;
label_1a6ef4:
    // 0x1a6ef4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6ef8:
    // 0x1a6ef8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6efc:
    // 0x1a6efc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a6efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a6f00:
    // 0x1a6f00: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a6f04:
    // 0x1a6f04: 0x60f809  jalr        $v1
label_1a6f08:
    if (ctx->pc == 0x1A6F08u) {
        ctx->pc = 0x1A6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F04u;
        // 0x1a6f08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F0Cu;
        goto label_1a6f0c;
    }
    ctx->pc = 0x1A6F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6F0Cu);
        ctx->pc = 0x1A6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F04u;
        // 0x1a6f08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F04u, 0x1A6F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6F0Cu;
label_1a6f0c:
    // 0x1a6f0c: 0xc06896e  jal         func_1A25B8
label_1a6f10:
    if (ctx->pc == 0x1A6F10u) {
        ctx->pc = 0x1A6F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F0Cu;
        // 0x1a6f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F14u;
        goto label_1a6f14;
    }
    ctx->pc = 0x1A6F0Cu;
    SET_GPR_U32(ctx, 31, 0x1A6F14u);
    ctx->pc = 0x1A6F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F0Cu;
    // 0x1a6f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A25B8u, 0x1A6F0Cu, 0x1A6F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F14u;
label_1a6f14:
    // 0x1a6f14: 0x2ea20006  sltiu       $v0, $s5, 0x6
    ctx->pc = 0x1a6f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1a6f18:
    // 0x1a6f18: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_1a6f1c:
    if (ctx->pc == 0x1A6F1Cu) {
        ctx->pc = 0x1A6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F18u;
        // 0x1a6f1c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F20u;
        goto label_1a6f20;
    }
    ctx->pc = 0x1A6F18u;
    {
        const bool branch_taken_0x1a6f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F18u;
        // 0x1a6f1c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f18) {
            ctx->pc = 0x1A6E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6e60;
        }
    }
    ctx->pc = 0x1A6F20u;
label_1a6f20:
    // 0x1a6f20: 0x8e421574  lw          $v0, 0x1574($s2)
    ctx->pc = 0x1a6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5492)));
label_1a6f24:
    // 0x1a6f24: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a6f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a6f28:
    // 0x1a6f28: 0x2463b1b0  addiu       $v1, $v1, -0x4E50
    ctx->pc = 0x1a6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947248));
label_1a6f2c:
    // 0x1a6f2c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a6f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6f30:
    // 0x1a6f30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a6f34:
    // 0x1a6f34: 0x8ed1489c  lw          $s1, 0x489C($s6)
    ctx->pc = 0x1a6f34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1a6f38:
    // 0x1a6f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6f3c:
    // 0x1a6f3c: 0xae401578  sw          $zero, 0x1578($s2)
    ctx->pc = 0x1a6f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5496), GPR_U32(ctx, 0));
label_1a6f40:
    // 0x1a6f40: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x1a6f40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
label_1a6f44:
    // 0x1a6f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6f48:
    // 0x1a6f48: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a6f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1a6f4c:
    // 0x1a6f4c: 0xc136ad6  jal         func_4DAB58
label_1a6f50:
    if (ctx->pc == 0x1A6F50u) {
        ctx->pc = 0x1A6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F4Cu;
        // 0x1a6f50: 0xae401550  sw          $zero, 0x1550($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F54u;
        goto label_1a6f54;
    }
    ctx->pc = 0x1A6F4Cu;
    SET_GPR_U32(ctx, 31, 0x1A6F54u);
    ctx->pc = 0x1A6F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F4Cu;
    // 0x1a6f50: 0xae401550  sw          $zero, 0x1550($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5456), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x1A6F4Cu, 0x1A6F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F54u;
label_1a6f54:
    // 0x1a6f54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6f58:
    // 0x1a6f58: 0xc136ad4  jal         func_4DAB50
label_1a6f5c:
    if (ctx->pc == 0x1A6F5Cu) {
        ctx->pc = 0x1A6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F58u;
        // 0x1a6f5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F60u;
        goto label_1a6f60;
    }
    ctx->pc = 0x1A6F58u;
    SET_GPR_U32(ctx, 31, 0x1A6F60u);
    ctx->pc = 0x1A6F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F58u;
    // 0x1a6f5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x1A6F58u, 0x1A6F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F60u;
label_1a6f60:
    // 0x1a6f60: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1a6f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1a6f64:
    // 0x1a6f64: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1a6f64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a6f68:
    // 0x1a6f68: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a6f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a6f6c:
    // 0x1a6f6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6f70:
    // 0x1a6f70: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x1a6f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_1a6f74:
    // 0x1a6f74: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1a6f78:
    if (ctx->pc == 0x1A6F78u) {
        ctx->pc = 0x1A6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F74u;
        // 0x1a6f78: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F7Cu;
        goto label_1a6f7c;
    }
    ctx->pc = 0x1A6F74u;
    {
        const bool branch_taken_0x1a6f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f74) {
            ctx->pc = 0x1A6F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6F74u;
            // 0x1a6f78: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6FB8u;
            goto label_1a6fb8;
        }
    }
    ctx->pc = 0x1A6F7Cu;
label_1a6f7c:
    // 0x1a6f7c: 0xc07f866  jal         func_1FE198
label_1a6f80:
    if (ctx->pc == 0x1A6F80u) {
        ctx->pc = 0x1A6F84u;
        goto label_1a6f84;
    }
    ctx->pc = 0x1A6F7Cu;
    SET_GPR_U32(ctx, 31, 0x1A6F84u);
    ctx->pc = 0x1FE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE198u, 0x1A6F7Cu, 0x1A6F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F84u;
label_1a6f84:
    // 0x1a6f84: 0x1453000c  bne         $v0, $s3, . + 4 + (0xC << 2)
label_1a6f88:
    if (ctx->pc == 0x1A6F88u) {
        ctx->pc = 0x1A6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F84u;
        // 0x1a6f88: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F8Cu;
        goto label_1a6f8c;
    }
    ctx->pc = 0x1A6F84u;
    {
        const bool branch_taken_0x1a6f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F84u;
        // 0x1a6f88: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f84) {
            ctx->pc = 0x1A6FB8u;
            goto label_1a6fb8;
        }
    }
    ctx->pc = 0x1A6F8Cu;
label_1a6f8c:
    // 0x1a6f8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a6f90:
    if (ctx->pc == 0x1A6F90u) {
        ctx->pc = 0x1A6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F8Cu;
        // 0x1a6f90: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F94u;
        goto label_1a6f94;
    }
    ctx->pc = 0x1A6F8Cu;
    {
        const bool branch_taken_0x1a6f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F8Cu;
        // 0x1a6f90: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f8c) {
            ctx->pc = 0x1A6FA4u;
            goto label_1a6fa4;
        }
    }
    ctx->pc = 0x1A6F94u;
label_1a6f94:
    // 0x1a6f94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a6f98:
    // 0x1a6f98: 0xc440d250  lwc1        $f0, -0x2DB0($v0)
    ctx->pc = 0x1a6f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6f9c:
    // 0x1a6f9c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a6fa0:
    if (ctx->pc == 0x1A6FA0u) {
        ctx->pc = 0x1A6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F9Cu;
        // 0x1a6fa0: 0xe6e006a0  swc1        $f0, 0x6A0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 1696), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6FA4u;
        goto label_1a6fa4;
    }
    ctx->pc = 0x1A6F9Cu;
    {
        const bool branch_taken_0x1a6f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F9Cu;
        // 0x1a6fa0: 0xe6e006a0  swc1        $f0, 0x6A0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 1696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f9c) {
            ctx->pc = 0x1A6FD0u;
            goto label_1a6fd0;
        }
    }
    ctx->pc = 0x1A6FA4u;
label_1a6fa4:
    // 0x1a6fa4: 0x26e406a0  addiu       $a0, $s7, 0x6A0
    ctx->pc = 0x1a6fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1696));
label_1a6fa8:
    // 0x1a6fa8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a6fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1a6fac:
    // 0x1a6fac: 0xc460d254  lwc1        $f0, -0x2DAC($v1)
    ctx->pc = 0x1a6facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6fb0:
    // 0x1a6fb0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a6fb4:
    if (ctx->pc == 0x1A6FB4u) {
        ctx->pc = 0x1A6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FB0u;
        // 0x1a6fb4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6FB8u;
        goto label_1a6fb8;
    }
    ctx->pc = 0x1A6FB0u;
    {
        const bool branch_taken_0x1a6fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FB0u;
        // 0x1a6fb4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fb0) {
            ctx->pc = 0x1A6FCCu;
            goto label_1a6fcc;
        }
    }
    ctx->pc = 0x1A6FB8u;
label_1a6fb8:
    // 0x1a6fb8: 0x26e306a0  addiu       $v1, $s7, 0x6A0
    ctx->pc = 0x1a6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1696));
label_1a6fbc:
    // 0x1a6fbc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a6fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a6fc0:
    // 0x1a6fc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a6fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6fc4:
    // 0x1a6fc4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a6fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1a6fc8:
    // 0x1a6fc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6fcc:
    // 0x1a6fcc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1a6fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1a6fd0:
    // 0x1a6fd0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1a6fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a6fd4:
    // 0x1a6fd4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1a6fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a6fd8:
    // 0x1a6fd8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1a6fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a6fdc:
    // 0x1a6fdc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1a6fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a6fe0:
    // 0x1a6fe0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a6fe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a6fe4:
    // 0x1a6fe4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1a6fe4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6fe8:
    // 0x1a6fe8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1a6fe8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6fec:
    // 0x1a6fec: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1a6fecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6ff0:
    // 0x1a6ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6ff4:
    // 0x1a6ff4: 0x3e00008  jr          $ra
label_1a6ff8:
    if (ctx->pc == 0x1A6FF8u) {
        ctx->pc = 0x1A6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FF4u;
        // 0x1a6ff8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6FFCu;
        goto label_1a6ffc;
    }
    ctx->pc = 0x1A6FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FF4u;
        // 0x1a6ff8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6FFCu;
label_1a6ffc:
    // 0x1a6ffc: 0x0  nop
    ctx->pc = 0x1a6ffcu;
    // NOP
    ctx->pc = 0x1a7000u;
}
