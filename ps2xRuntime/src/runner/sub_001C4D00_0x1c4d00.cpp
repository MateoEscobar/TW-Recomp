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

// Function: sub_001C4D00
// Address: 0x1c4d00 - 0x1c4ff8
void sub_001C4D00_0x1c4d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4D00_0x1c4d00");
#endif

    switch (ctx->pc) {
        case 0x1c4d00u: goto label_1c4d00;
        case 0x1c4d04u: goto label_1c4d04;
        case 0x1c4d08u: goto label_1c4d08;
        case 0x1c4d0cu: goto label_1c4d0c;
        case 0x1c4d10u: goto label_1c4d10;
        case 0x1c4d14u: goto label_1c4d14;
        case 0x1c4d18u: goto label_1c4d18;
        case 0x1c4d1cu: goto label_1c4d1c;
        case 0x1c4d20u: goto label_1c4d20;
        case 0x1c4d24u: goto label_1c4d24;
        case 0x1c4d28u: goto label_1c4d28;
        case 0x1c4d2cu: goto label_1c4d2c;
        case 0x1c4d30u: goto label_1c4d30;
        case 0x1c4d34u: goto label_1c4d34;
        case 0x1c4d38u: goto label_1c4d38;
        case 0x1c4d3cu: goto label_1c4d3c;
        case 0x1c4d40u: goto label_1c4d40;
        case 0x1c4d44u: goto label_1c4d44;
        case 0x1c4d48u: goto label_1c4d48;
        case 0x1c4d4cu: goto label_1c4d4c;
        case 0x1c4d50u: goto label_1c4d50;
        case 0x1c4d54u: goto label_1c4d54;
        case 0x1c4d58u: goto label_1c4d58;
        case 0x1c4d5cu: goto label_1c4d5c;
        case 0x1c4d60u: goto label_1c4d60;
        case 0x1c4d64u: goto label_1c4d64;
        case 0x1c4d68u: goto label_1c4d68;
        case 0x1c4d6cu: goto label_1c4d6c;
        case 0x1c4d70u: goto label_1c4d70;
        case 0x1c4d74u: goto label_1c4d74;
        case 0x1c4d78u: goto label_1c4d78;
        case 0x1c4d7cu: goto label_1c4d7c;
        case 0x1c4d80u: goto label_1c4d80;
        case 0x1c4d84u: goto label_1c4d84;
        case 0x1c4d88u: goto label_1c4d88;
        case 0x1c4d8cu: goto label_1c4d8c;
        case 0x1c4d90u: goto label_1c4d90;
        case 0x1c4d94u: goto label_1c4d94;
        case 0x1c4d98u: goto label_1c4d98;
        case 0x1c4d9cu: goto label_1c4d9c;
        case 0x1c4da0u: goto label_1c4da0;
        case 0x1c4da4u: goto label_1c4da4;
        case 0x1c4da8u: goto label_1c4da8;
        case 0x1c4dacu: goto label_1c4dac;
        case 0x1c4db0u: goto label_1c4db0;
        case 0x1c4db4u: goto label_1c4db4;
        case 0x1c4db8u: goto label_1c4db8;
        case 0x1c4dbcu: goto label_1c4dbc;
        case 0x1c4dc0u: goto label_1c4dc0;
        case 0x1c4dc4u: goto label_1c4dc4;
        case 0x1c4dc8u: goto label_1c4dc8;
        case 0x1c4dccu: goto label_1c4dcc;
        case 0x1c4dd0u: goto label_1c4dd0;
        case 0x1c4dd4u: goto label_1c4dd4;
        case 0x1c4dd8u: goto label_1c4dd8;
        case 0x1c4ddcu: goto label_1c4ddc;
        case 0x1c4de0u: goto label_1c4de0;
        case 0x1c4de4u: goto label_1c4de4;
        case 0x1c4de8u: goto label_1c4de8;
        case 0x1c4decu: goto label_1c4dec;
        case 0x1c4df0u: goto label_1c4df0;
        case 0x1c4df4u: goto label_1c4df4;
        case 0x1c4df8u: goto label_1c4df8;
        case 0x1c4dfcu: goto label_1c4dfc;
        case 0x1c4e00u: goto label_1c4e00;
        case 0x1c4e04u: goto label_1c4e04;
        case 0x1c4e08u: goto label_1c4e08;
        case 0x1c4e0cu: goto label_1c4e0c;
        case 0x1c4e10u: goto label_1c4e10;
        case 0x1c4e14u: goto label_1c4e14;
        case 0x1c4e18u: goto label_1c4e18;
        case 0x1c4e1cu: goto label_1c4e1c;
        case 0x1c4e20u: goto label_1c4e20;
        case 0x1c4e24u: goto label_1c4e24;
        case 0x1c4e28u: goto label_1c4e28;
        case 0x1c4e2cu: goto label_1c4e2c;
        case 0x1c4e30u: goto label_1c4e30;
        case 0x1c4e34u: goto label_1c4e34;
        case 0x1c4e38u: goto label_1c4e38;
        case 0x1c4e3cu: goto label_1c4e3c;
        case 0x1c4e40u: goto label_1c4e40;
        case 0x1c4e44u: goto label_1c4e44;
        case 0x1c4e48u: goto label_1c4e48;
        case 0x1c4e4cu: goto label_1c4e4c;
        case 0x1c4e50u: goto label_1c4e50;
        case 0x1c4e54u: goto label_1c4e54;
        case 0x1c4e58u: goto label_1c4e58;
        case 0x1c4e5cu: goto label_1c4e5c;
        case 0x1c4e60u: goto label_1c4e60;
        case 0x1c4e64u: goto label_1c4e64;
        case 0x1c4e68u: goto label_1c4e68;
        case 0x1c4e6cu: goto label_1c4e6c;
        case 0x1c4e70u: goto label_1c4e70;
        case 0x1c4e74u: goto label_1c4e74;
        case 0x1c4e78u: goto label_1c4e78;
        case 0x1c4e7cu: goto label_1c4e7c;
        case 0x1c4e80u: goto label_1c4e80;
        case 0x1c4e84u: goto label_1c4e84;
        case 0x1c4e88u: goto label_1c4e88;
        case 0x1c4e8cu: goto label_1c4e8c;
        case 0x1c4e90u: goto label_1c4e90;
        case 0x1c4e94u: goto label_1c4e94;
        case 0x1c4e98u: goto label_1c4e98;
        case 0x1c4e9cu: goto label_1c4e9c;
        case 0x1c4ea0u: goto label_1c4ea0;
        case 0x1c4ea4u: goto label_1c4ea4;
        case 0x1c4ea8u: goto label_1c4ea8;
        case 0x1c4eacu: goto label_1c4eac;
        case 0x1c4eb0u: goto label_1c4eb0;
        case 0x1c4eb4u: goto label_1c4eb4;
        case 0x1c4eb8u: goto label_1c4eb8;
        case 0x1c4ebcu: goto label_1c4ebc;
        case 0x1c4ec0u: goto label_1c4ec0;
        case 0x1c4ec4u: goto label_1c4ec4;
        case 0x1c4ec8u: goto label_1c4ec8;
        case 0x1c4eccu: goto label_1c4ecc;
        case 0x1c4ed0u: goto label_1c4ed0;
        case 0x1c4ed4u: goto label_1c4ed4;
        case 0x1c4ed8u: goto label_1c4ed8;
        case 0x1c4edcu: goto label_1c4edc;
        case 0x1c4ee0u: goto label_1c4ee0;
        case 0x1c4ee4u: goto label_1c4ee4;
        case 0x1c4ee8u: goto label_1c4ee8;
        case 0x1c4eecu: goto label_1c4eec;
        case 0x1c4ef0u: goto label_1c4ef0;
        case 0x1c4ef4u: goto label_1c4ef4;
        case 0x1c4ef8u: goto label_1c4ef8;
        case 0x1c4efcu: goto label_1c4efc;
        case 0x1c4f00u: goto label_1c4f00;
        case 0x1c4f04u: goto label_1c4f04;
        case 0x1c4f08u: goto label_1c4f08;
        case 0x1c4f0cu: goto label_1c4f0c;
        case 0x1c4f10u: goto label_1c4f10;
        case 0x1c4f14u: goto label_1c4f14;
        case 0x1c4f18u: goto label_1c4f18;
        case 0x1c4f1cu: goto label_1c4f1c;
        case 0x1c4f20u: goto label_1c4f20;
        case 0x1c4f24u: goto label_1c4f24;
        case 0x1c4f28u: goto label_1c4f28;
        case 0x1c4f2cu: goto label_1c4f2c;
        case 0x1c4f30u: goto label_1c4f30;
        case 0x1c4f34u: goto label_1c4f34;
        case 0x1c4f38u: goto label_1c4f38;
        case 0x1c4f3cu: goto label_1c4f3c;
        case 0x1c4f40u: goto label_1c4f40;
        case 0x1c4f44u: goto label_1c4f44;
        case 0x1c4f48u: goto label_1c4f48;
        case 0x1c4f4cu: goto label_1c4f4c;
        case 0x1c4f50u: goto label_1c4f50;
        case 0x1c4f54u: goto label_1c4f54;
        case 0x1c4f58u: goto label_1c4f58;
        case 0x1c4f5cu: goto label_1c4f5c;
        case 0x1c4f60u: goto label_1c4f60;
        case 0x1c4f64u: goto label_1c4f64;
        case 0x1c4f68u: goto label_1c4f68;
        case 0x1c4f6cu: goto label_1c4f6c;
        case 0x1c4f70u: goto label_1c4f70;
        case 0x1c4f74u: goto label_1c4f74;
        case 0x1c4f78u: goto label_1c4f78;
        case 0x1c4f7cu: goto label_1c4f7c;
        case 0x1c4f80u: goto label_1c4f80;
        case 0x1c4f84u: goto label_1c4f84;
        case 0x1c4f88u: goto label_1c4f88;
        case 0x1c4f8cu: goto label_1c4f8c;
        case 0x1c4f90u: goto label_1c4f90;
        case 0x1c4f94u: goto label_1c4f94;
        case 0x1c4f98u: goto label_1c4f98;
        case 0x1c4f9cu: goto label_1c4f9c;
        case 0x1c4fa0u: goto label_1c4fa0;
        case 0x1c4fa4u: goto label_1c4fa4;
        case 0x1c4fa8u: goto label_1c4fa8;
        case 0x1c4facu: goto label_1c4fac;
        case 0x1c4fb0u: goto label_1c4fb0;
        case 0x1c4fb4u: goto label_1c4fb4;
        case 0x1c4fb8u: goto label_1c4fb8;
        case 0x1c4fbcu: goto label_1c4fbc;
        case 0x1c4fc0u: goto label_1c4fc0;
        case 0x1c4fc4u: goto label_1c4fc4;
        case 0x1c4fc8u: goto label_1c4fc8;
        case 0x1c4fccu: goto label_1c4fcc;
        case 0x1c4fd0u: goto label_1c4fd0;
        case 0x1c4fd4u: goto label_1c4fd4;
        case 0x1c4fd8u: goto label_1c4fd8;
        case 0x1c4fdcu: goto label_1c4fdc;
        case 0x1c4fe0u: goto label_1c4fe0;
        case 0x1c4fe4u: goto label_1c4fe4;
        case 0x1c4fe8u: goto label_1c4fe8;
        case 0x1c4fecu: goto label_1c4fec;
        case 0x1c4ff0u: goto label_1c4ff0;
        case 0x1c4ff4u: goto label_1c4ff4;
        default: break;
    }

    ctx->pc = 0x1c4d00u;

label_1c4d00:
    // 0x1c4d00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c4d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1c4d04:
    // 0x1c4d04: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1c4d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1c4d08:
    // 0x1c4d08: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c4d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1c4d0c:
    // 0x1c4d0c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1c4d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d10:
    // 0x1c4d10: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1c4d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1c4d14:
    // 0x1c4d14: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1c4d14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d18:
    // 0x1c4d18: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1c4d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_1c4d1c:
    // 0x1c4d1c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1c4d1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d20:
    // 0x1c4d20: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1c4d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1c4d24:
    // 0x1c4d24: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1c4d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1c4d28:
    // 0x1c4d28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c4d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d2c:
    // 0x1c4d2c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1c4d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1c4d30:
    // 0x1c4d30: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1c4d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1c4d34:
    // 0x1c4d34: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1c4d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1c4d38:
    // 0x1c4d38: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1c4d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1c4d3c:
    // 0x1c4d3c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c4d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1c4d40:
    // 0x1c4d40: 0xc071462  jal         func_1C5188
label_1c4d44:
    if (ctx->pc == 0x1C4D44u) {
        ctx->pc = 0x1C4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D40u;
        // 0x1c4d44: 0xafa50034  sw          $a1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D48u;
        goto label_1c4d48;
    }
    ctx->pc = 0x1C4D40u;
    SET_GPR_U32(ctx, 31, 0x1C4D48u);
    ctx->pc = 0x1C4D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D40u;
    // 0x1c4d44: 0xafa50034  sw          $a1, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x1C4D40u, 0x1C4D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D48u;
label_1c4d48:
    // 0x1c4d48: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1c4d48u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d4c:
    // 0x1c4d4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c4d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c4d50:
    // 0x1c4d50: 0x13c20003  beq         $fp, $v0, . + 4 + (0x3 << 2)
label_1c4d54:
    if (ctx->pc == 0x1C4D54u) {
        ctx->pc = 0x1C4D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D50u;
        // 0x1c4d54: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D58u;
        goto label_1c4d58;
    }
    ctx->pc = 0x1C4D50u;
    {
        const bool branch_taken_0x1c4d50 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D50u;
        // 0x1c4d54: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d50) {
            ctx->pc = 0x1C4D60u;
            goto label_1c4d60;
        }
    }
    ctx->pc = 0x1C4D58u;
label_1c4d58:
    // 0x1c4d58: 0xc0713fe  jal         func_1C4FF8
label_1c4d5c:
    if (ctx->pc == 0x1C4D5Cu) {
        ctx->pc = 0x1C4D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D58u;
        // 0x1c4d5c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D60u;
        goto label_1c4d60;
    }
    ctx->pc = 0x1C4D58u;
    SET_GPR_U32(ctx, 31, 0x1C4D60u);
    ctx->pc = 0x1C4D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D58u;
    // 0x1c4d5c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FF8u, 0x1C4D58u, 0x1C4D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D60u;
label_1c4d60:
    // 0x1c4d60: 0xc071456  jal         func_1C5158
label_1c4d64:
    if (ctx->pc == 0x1C4D64u) {
        ctx->pc = 0x1C4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D60u;
        // 0x1c4d64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D68u;
        goto label_1c4d68;
    }
    ctx->pc = 0x1C4D60u;
    SET_GPR_U32(ctx, 31, 0x1C4D68u);
    ctx->pc = 0x1C4D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D60u;
    // 0x1c4d64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5158u, 0x1C4D60u, 0x1C4D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D68u;
label_1c4d68:
    // 0x1c4d68: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1c4d68u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d6c:
    // 0x1c4d6c: 0x3ae20009  xori        $v0, $s7, 0x9
    ctx->pc = 0x1c4d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)9);
label_1c4d70:
    // 0x1c4d70: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1c4d74:
    if (ctx->pc == 0x1C4D74u) {
        ctx->pc = 0x1C4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D70u;
        // 0x1c4d74: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D78u;
        goto label_1c4d78;
    }
    ctx->pc = 0x1C4D70u;
    {
        const bool branch_taken_0x1c4d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D70u;
        // 0x1c4d74: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d70) {
            ctx->pc = 0x1C4DD8u;
            goto label_1c4dd8;
        }
    }
    ctx->pc = 0x1C4D78u;
label_1c4d78:
    // 0x1c4d78: 0x16e20003  bne         $s7, $v0, . + 4 + (0x3 << 2)
label_1c4d7c:
    if (ctx->pc == 0x1C4D7Cu) {
        ctx->pc = 0x1C4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D78u;
        // 0x1c4d7c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D80u;
        goto label_1c4d80;
    }
    ctx->pc = 0x1C4D78u;
    {
        const bool branch_taken_0x1c4d78 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D78u;
        // 0x1c4d7c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d78) {
            ctx->pc = 0x1C4D88u;
            goto label_1c4d88;
        }
    }
    ctx->pc = 0x1C4D80u;
label_1c4d80:
    // 0x1c4d80: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1c4d84:
    if (ctx->pc == 0x1C4D84u) {
        ctx->pc = 0x1C4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D80u;
        // 0x1c4d84: 0x8ed5004c  lw          $s5, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D88u;
        goto label_1c4d88;
    }
    ctx->pc = 0x1C4D80u;
    {
        const bool branch_taken_0x1c4d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D80u;
        // 0x1c4d84: 0x8ed5004c  lw          $s5, 0x4C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d80) {
            ctx->pc = 0x1C4EC0u;
            goto label_1c4ec0;
        }
    }
    ctx->pc = 0x1C4D88u;
label_1c4d88:
    // 0x1c4d88: 0x12e20005  beq         $s7, $v0, . + 4 + (0x5 << 2)
label_1c4d8c:
    if (ctx->pc == 0x1C4D8Cu) {
        ctx->pc = 0x1C4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D88u;
        // 0x1c4d8c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D90u;
        goto label_1c4d90;
    }
    ctx->pc = 0x1C4D88u;
    {
        const bool branch_taken_0x1c4d88 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D88u;
        // 0x1c4d8c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d88) {
            ctx->pc = 0x1C4DA0u;
            goto label_1c4da0;
        }
    }
    ctx->pc = 0x1C4D90u;
label_1c4d90:
    // 0x1c4d90: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
label_1c4d94:
    if (ctx->pc == 0x1C4D94u) {
        ctx->pc = 0x1C4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D90u;
        // 0x1c4d94: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D98u;
        goto label_1c4d98;
    }
    ctx->pc = 0x1C4D90u;
    {
        const bool branch_taken_0x1c4d90 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D90u;
        // 0x1c4d94: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d90) {
            ctx->pc = 0x1C4DA0u;
            goto label_1c4da0;
        }
    }
    ctx->pc = 0x1C4D98u;
label_1c4d98:
    // 0x1c4d98: 0x16e20005  bne         $s7, $v0, . + 4 + (0x5 << 2)
label_1c4d9c:
    if (ctx->pc == 0x1C4D9Cu) {
        ctx->pc = 0x1C4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D98u;
        // 0x1c4d9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DA0u;
        goto label_1c4da0;
    }
    ctx->pc = 0x1C4D98u;
    {
        const bool branch_taken_0x1c4d98 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D98u;
        // 0x1c4d9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d98) {
            ctx->pc = 0x1C4DB0u;
            goto label_1c4db0;
        }
    }
    ctx->pc = 0x1C4DA0u;
label_1c4da0:
    // 0x1c4da0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1c4da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1c4da4:
    // 0x1c4da4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1c4da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1c4da8:
    // 0x1c4da8: 0x10000045  b           . + 4 + (0x45 << 2)
label_1c4dac:
    if (ctx->pc == 0x1C4DACu) {
        ctx->pc = 0x1C4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DA8u;
        // 0x1c4dac: 0x8c55005c  lw          $s5, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DB0u;
        goto label_1c4db0;
    }
    ctx->pc = 0x1C4DA8u;
    {
        const bool branch_taken_0x1c4da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DA8u;
        // 0x1c4dac: 0x8c55005c  lw          $s5, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4da8) {
            ctx->pc = 0x1C4EC0u;
            goto label_1c4ec0;
        }
    }
    ctx->pc = 0x1C4DB0u;
label_1c4db0:
    // 0x1c4db0: 0x16e20003  bne         $s7, $v0, . + 4 + (0x3 << 2)
label_1c4db4:
    if (ctx->pc == 0x1C4DB4u) {
        ctx->pc = 0x1C4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DB0u;
        // 0x1c4db4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DB8u;
        goto label_1c4db8;
    }
    ctx->pc = 0x1C4DB0u;
    {
        const bool branch_taken_0x1c4db0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DB0u;
        // 0x1c4db4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4db0) {
            ctx->pc = 0x1C4DC0u;
            goto label_1c4dc0;
        }
    }
    ctx->pc = 0x1C4DB8u;
label_1c4db8:
    // 0x1c4db8: 0x10000041  b           . + 4 + (0x41 << 2)
label_1c4dbc:
    if (ctx->pc == 0x1C4DBCu) {
        ctx->pc = 0x1C4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DB8u;
        // 0x1c4dbc: 0x8ed50058  lw          $s5, 0x58($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DC0u;
        goto label_1c4dc0;
    }
    ctx->pc = 0x1C4DB8u;
    {
        const bool branch_taken_0x1c4db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DB8u;
        // 0x1c4dbc: 0x8ed50058  lw          $s5, 0x58($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4db8) {
            ctx->pc = 0x1C4EC0u;
            goto label_1c4ec0;
        }
    }
    ctx->pc = 0x1C4DC0u;
label_1c4dc0:
    // 0x1c4dc0: 0x16e20003  bne         $s7, $v0, . + 4 + (0x3 << 2)
label_1c4dc4:
    if (ctx->pc == 0x1C4DC4u) {
        ctx->pc = 0x1C4DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DC0u;
        // 0x1c4dc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DC8u;
        goto label_1c4dc8;
    }
    ctx->pc = 0x1C4DC0u;
    {
        const bool branch_taken_0x1c4dc0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DC0u;
        // 0x1c4dc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4dc0) {
            ctx->pc = 0x1C4DD0u;
            goto label_1c4dd0;
        }
    }
    ctx->pc = 0x1C4DC8u;
label_1c4dc8:
    // 0x1c4dc8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1c4dcc:
    if (ctx->pc == 0x1C4DCCu) {
        ctx->pc = 0x1C4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DC8u;
        // 0x1c4dcc: 0x8ed50054  lw          $s5, 0x54($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DD0u;
        goto label_1c4dd0;
    }
    ctx->pc = 0x1C4DC8u;
    {
        const bool branch_taken_0x1c4dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DC8u;
        // 0x1c4dcc: 0x8ed50054  lw          $s5, 0x54($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4dc8) {
            ctx->pc = 0x1C4EC0u;
            goto label_1c4ec0;
        }
    }
    ctx->pc = 0x1C4DD0u;
label_1c4dd0:
    // 0x1c4dd0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1c4dd4:
    if (ctx->pc == 0x1C4DD4u) {
        ctx->pc = 0x1C4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DD0u;
        // 0x1c4dd4: 0x8ed50050  lw          $s5, 0x50($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DD8u;
        goto label_1c4dd8;
    }
    ctx->pc = 0x1C4DD0u;
    {
        const bool branch_taken_0x1c4dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DD0u;
        // 0x1c4dd4: 0x8ed50050  lw          $s5, 0x50($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4dd0) {
            ctx->pc = 0x1C4EC0u;
            goto label_1c4ec0;
        }
    }
    ctx->pc = 0x1C4DD8u;
label_1c4dd8:
    // 0x1c4dd8: 0x1e1180  sll         $v0, $fp, 6
    ctx->pc = 0x1c4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
label_1c4ddc:
    // 0x1c4ddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4de0:
    // 0x1c4de0: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x1c4de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1c4de4:
    // 0x1c4de4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1c4de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1c4de8:
    // 0x1c4de8: 0xa2030951  sb          $v1, 0x951($s0)
    ctx->pc = 0x1c4de8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2385), (uint8_t)GPR_U32(ctx, 3));
label_1c4dec:
    // 0x1c4dec: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c4decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c4df0:
    // 0x1c4df0: 0xa2000950  sb          $zero, 0x950($s0)
    ctx->pc = 0x1c4df0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2384), (uint8_t)GPR_U32(ctx, 0));
label_1c4df4:
    // 0x1c4df4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1c4df4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1c4df8:
    // 0x1c4df8: 0xa617094c  sh          $s7, 0x94C($s0)
    ctx->pc = 0x1c4df8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2380), (uint16_t)GPR_U32(ctx, 23));
label_1c4dfc:
    // 0x1c4dfc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c4dfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4e00:
    // 0x1c4e00: 0x8c8c27e4  lw          $t4, 0x27E4($a0)
    ctx->pc = 0x1c4e00u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_1c4e04:
    // 0x1c4e04: 0x24a551d0  addiu       $a1, $a1, 0x51D0
    ctx->pc = 0x1c4e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20944));
label_1c4e08:
    // 0x1c4e08: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1c4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1c4e0c:
    // 0x1c4e0c: 0x250851a8  addiu       $t0, $t0, 0x51A8
    ctx->pc = 0x1c4e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20904));
label_1c4e10:
    // 0x1c4e10: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c4e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c4e14:
    // 0x1c4e14: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c4e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c4e18:
    // 0x1c4e18: 0xae020930  sw          $v0, 0x930($s0)
    ctx->pc = 0x1c4e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2352), GPR_U32(ctx, 2));
label_1c4e1c:
    // 0x1c4e1c: 0x24090277  addiu       $t1, $zero, 0x277
    ctx->pc = 0x1c4e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 631));
label_1c4e20:
    // 0x1c4e20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1c4e24:
    // 0x1c4e24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c4e24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4e28:
    // 0x1c4e28: 0xae020934  sw          $v0, 0x934($s0)
    ctx->pc = 0x1c4e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2356), GPR_U32(ctx, 2));
label_1c4e2c:
    // 0x1c4e2c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1c4e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1c4e30:
    // 0x1c4e30: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c4e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c4e34:
    // 0x1c4e34: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c4e38:
    // 0x1c4e38: 0x40f809  jalr        $v0
label_1c4e3c:
    if (ctx->pc == 0x1C4E3Cu) {
        ctx->pc = 0x1C4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E38u;
        // 0x1c4e3c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4E40u;
        goto label_1c4e40;
    }
    ctx->pc = 0x1C4E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C4E40u);
        ctx->pc = 0x1C4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E38u;
        // 0x1c4e3c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4E38u, 0x1C4E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4E40u;
label_1c4e40:
    // 0x1c4e40: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1c4e40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4e44:
    // 0x1c4e44: 0x51400005  beql        $t2, $zero, . + 4 + (0x5 << 2)
label_1c4e48:
    if (ctx->pc == 0x1C4E48u) {
        ctx->pc = 0x1C4E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E44u;
        // 0x1c4e48: 0xae0a0948  sw          $t2, 0x948($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2376), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4E4Cu;
        goto label_1c4e4c;
    }
    ctx->pc = 0x1C4E44u;
    {
        const bool branch_taken_0x1c4e44 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4e44) {
            ctx->pc = 0x1C4E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4E44u;
            // 0x1c4e48: 0xae0a0948  sw          $t2, 0x948($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2376), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4E5Cu;
            goto label_1c4e5c;
        }
    }
    ctx->pc = 0x1C4E4Cu;
label_1c4e4c:
    // 0x1c4e4c: 0xc0686fe  jal         func_1A1BF8
label_1c4e50:
    if (ctx->pc == 0x1C4E50u) {
        ctx->pc = 0x1C4E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E4Cu;
        // 0x1c4e50: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4E54u;
        goto label_1c4e54;
    }
    ctx->pc = 0x1C4E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C4E54u);
    ctx->pc = 0x1C4E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E4Cu;
    // 0x1c4e50: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1C4E4Cu, 0x1C4E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E54u;
label_1c4e54:
    // 0x1c4e54: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1c4e54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4e58:
    // 0x1c4e58: 0xae0a0948  sw          $t2, 0x948($s0)
    ctx->pc = 0x1c4e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2376), GPR_U32(ctx, 10));
label_1c4e5c:
    // 0x1c4e5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4e60:
    // 0x1c4e60: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x1c4e60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c4e64:
    // 0x1c4e64: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c4e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c4e68:
    // 0x1c4e68: 0x8d4b0000  lw          $t3, 0x0($t2)
    ctx->pc = 0x1c4e68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1c4e6c:
    // 0x1c4e6c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c4e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c4e70:
    // 0x1c4e70: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x1c4e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1c4e74:
    // 0x1c4e74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4e78:
    // 0x1c4e78: 0x85640068  lh          $a0, 0x68($t3)
    ctx->pc = 0x1c4e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 104)));
label_1c4e7c:
    // 0x1c4e7c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c4e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4e80:
    // 0x1c4e80: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x1c4e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
label_1c4e84:
    // 0x1c4e84: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1c4e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1c4e88:
    // 0x1c4e88: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1c4e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1c4e8c:
    // 0x1c4e8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c4e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1c4e90:
    // 0x1c4e90: 0x2409016a  addiu       $t1, $zero, 0x16A
    ctx->pc = 0x1c4e90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
label_1c4e94:
    // 0x1c4e94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c4e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c4e98:
    // 0x1c4e98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c4e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c4e9c:
    // 0x1c4e9c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1c4e9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c4ea0:
    // 0x1c4ea0: 0x8d62006c  lw          $v0, 0x6C($t3)
    ctx->pc = 0x1c4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 108)));
label_1c4ea4:
    // 0x1c4ea4: 0x3c01469c  lui         $at, 0x469C
    ctx->pc = 0x1c4ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18076 << 16));
label_1c4ea8:
    // 0x1c4ea8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1c4ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1c4eac:
    // 0x1c4eac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c4eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c4eb0:
    // 0x1c4eb0: 0x40f809  jalr        $v0
label_1c4eb4:
    if (ctx->pc == 0x1C4EB4u) {
        ctx->pc = 0x1C4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EB0u;
        // 0x1c4eb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4EB8u;
        goto label_1c4eb8;
    }
    ctx->pc = 0x1C4EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C4EB8u);
        ctx->pc = 0x1C4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EB0u;
        // 0x1c4eb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4EB0u, 0x1C4EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4EB8u;
label_1c4eb8:
    // 0x1c4eb8: 0x10000043  b           . + 4 + (0x43 << 2)
label_1c4ebc:
    if (ctx->pc == 0x1C4EBCu) {
        ctx->pc = 0x1C4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EB8u;
        // 0x1c4ebc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4EC0u;
        goto label_1c4ec0;
    }
    ctx->pc = 0x1C4EB8u;
    {
        const bool branch_taken_0x1c4eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EB8u;
        // 0x1c4ebc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4eb8) {
            ctx->pc = 0x1C4FC8u;
            goto label_1c4fc8;
        }
    }
    ctx->pc = 0x1C4EC0u;
label_1c4ec0:
    // 0x1c4ec0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1c4ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1c4ec4:
    // 0x1c4ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4ec8:
    // 0x1c4ec8: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x1c4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_1c4ecc:
    // 0x1c4ecc: 0x1ea180  sll         $s4, $fp, 6
    ctx->pc = 0x1c4eccu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
label_1c4ed0:
    // 0x1c4ed0: 0x2968021  addu        $s0, $s4, $s6
    ctx->pc = 0x1c4ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_1c4ed4:
    // 0x1c4ed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4ed8:
    // 0x1c4ed8: 0xc0e8b20  jal         func_3A2C80
label_1c4edc:
    if (ctx->pc == 0x1C4EDCu) {
        ctx->pc = 0x1C4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4ED8u;
        // 0x1c4edc: 0x8c52082c  lw          $s2, 0x82C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4EE0u;
        goto label_1c4ee0;
    }
    ctx->pc = 0x1C4ED8u;
    SET_GPR_U32(ctx, 31, 0x1C4EE0u);
    ctx->pc = 0x1C4EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4ED8u;
    // 0x1c4edc: 0x8c52082c  lw          $s2, 0x82C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x1C4ED8u, 0x1C4EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EE0u;
label_1c4ee0:
    // 0x1c4ee0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c4ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1c4ee4:
    // 0x1c4ee4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1c4ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1c4ee8:
    // 0x1c4ee8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1c4ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c4eec:
    // 0x1c4eec: 0xc07a67e  jal         func_1E99F8
label_1c4ef0:
    if (ctx->pc == 0x1C4EF0u) {
        ctx->pc = 0x1C4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EECu;
        // 0x1c4ef0: 0x248451e0  addiu       $a0, $a0, 0x51E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4EF4u;
        goto label_1c4ef4;
    }
    ctx->pc = 0x1C4EECu;
    SET_GPR_U32(ctx, 31, 0x1C4EF4u);
    ctx->pc = 0x1C4EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EECu;
    // 0x1c4ef0: 0x248451e0  addiu       $a0, $a0, 0x51E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E99F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E99F8u, 0x1C4EECu, 0x1C4EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EF4u;
label_1c4ef4:
    // 0x1c4ef4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x1c4ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_1c4ef8:
    // 0x1c4ef8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c4ef8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4efc:
    // 0x1c4efc: 0xc0e8b20  jal         func_3A2C80
label_1c4f00:
    if (ctx->pc == 0x1C4F00u) {
        ctx->pc = 0x1C4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EFCu;
        // 0x1c4f00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F04u;
        goto label_1c4f04;
    }
    ctx->pc = 0x1C4EFCu;
    SET_GPR_U32(ctx, 31, 0x1C4F04u);
    ctx->pc = 0x1C4F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EFCu;
    // 0x1c4f00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x1C4EFCu, 0x1C4F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F04u;
label_1c4f04:
    // 0x1c4f04: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1c4f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1c4f08:
    // 0x1c4f08: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x1c4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_1c4f0c:
    // 0x1c4f0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4f10:
    // 0x1c4f10: 0xae040930  sw          $a0, 0x930($s0)
    ctx->pc = 0x1c4f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2352), GPR_U32(ctx, 4));
label_1c4f14:
    // 0x1c4f14: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c4f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1c4f18:
    // 0x1c4f18: 0xae020938  sw          $v0, 0x938($s0)
    ctx->pc = 0x1c4f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2360), GPR_U32(ctx, 2));
label_1c4f1c:
    // 0x1c4f1c: 0xae040934  sw          $a0, 0x934($s0)
    ctx->pc = 0x1c4f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2356), GPR_U32(ctx, 4));
label_1c4f20:
    // 0x1c4f20: 0xae150940  sw          $s5, 0x940($s0)
    ctx->pc = 0x1c4f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2368), GPR_U32(ctx, 21));
label_1c4f24:
    // 0x1c4f24: 0xa2030951  sb          $v1, 0x951($s0)
    ctx->pc = 0x1c4f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2385), (uint8_t)GPR_U32(ctx, 3));
label_1c4f28:
    // 0x1c4f28: 0xa617094c  sh          $s7, 0x94C($s0)
    ctx->pc = 0x1c4f28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2380), (uint16_t)GPR_U32(ctx, 23));
label_1c4f2c:
    // 0x1c4f2c: 0xa2000950  sb          $zero, 0x950($s0)
    ctx->pc = 0x1c4f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2384), (uint8_t)GPR_U32(ctx, 0));
label_1c4f30:
    // 0x1c4f30: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1c4f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1c4f34:
    // 0x1c4f34: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1c4f34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1c4f38:
    // 0x1c4f38: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1c4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1c4f3c:
    // 0x1c4f3c: 0x40f809  jalr        $v0
label_1c4f40:
    if (ctx->pc == 0x1C4F40u) {
        ctx->pc = 0x1C4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F3Cu;
        // 0x1c4f40: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F44u;
        goto label_1c4f44;
    }
    ctx->pc = 0x1C4F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C4F44u);
        ctx->pc = 0x1C4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F3Cu;
        // 0x1c4f40: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4F3Cu, 0x1C4F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4F44u;
label_1c4f44:
    // 0x1c4f44: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1c4f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1c4f48:
    // 0x1c4f48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c4f4c:
    // 0x1c4f4c: 0xae020944  sw          $v0, 0x944($s0)
    ctx->pc = 0x1c4f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2372), GPR_U32(ctx, 2));
label_1c4f50:
    // 0x1c4f50: 0xa2030953  sb          $v1, 0x953($s0)
    ctx->pc = 0x1c4f50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2387), (uint8_t)GPR_U32(ctx, 3));
label_1c4f54:
    // 0x1c4f54: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c4f58:
    // 0x1c4f58: 0x12e20008  beq         $s7, $v0, . + 4 + (0x8 << 2)
label_1c4f5c:
    if (ctx->pc == 0x1C4F5Cu) {
        ctx->pc = 0x1C4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F58u;
        // 0x1c4f5c: 0xa2040952  sb          $a0, 0x952($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2386), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F60u;
        goto label_1c4f60;
    }
    ctx->pc = 0x1C4F58u;
    {
        const bool branch_taken_0x1c4f58 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F58u;
        // 0x1c4f5c: 0xa2040952  sb          $a0, 0x952($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2386), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f58) {
            ctx->pc = 0x1C4F7Cu;
            goto label_1c4f7c;
        }
    }
    ctx->pc = 0x1C4F60u;
label_1c4f60:
    // 0x1c4f60: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1c4f64:
    // 0x1c4f64: 0x12e20005  beq         $s7, $v0, . + 4 + (0x5 << 2)
label_1c4f68:
    if (ctx->pc == 0x1C4F68u) {
        ctx->pc = 0x1C4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F64u;
        // 0x1c4f68: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F6Cu;
        goto label_1c4f6c;
    }
    ctx->pc = 0x1C4F64u;
    {
        const bool branch_taken_0x1c4f64 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F64u;
        // 0x1c4f68: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f64) {
            ctx->pc = 0x1C4F7Cu;
            goto label_1c4f7c;
        }
    }
    ctx->pc = 0x1C4F6Cu;
label_1c4f6c:
    // 0x1c4f6c: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
label_1c4f70:
    if (ctx->pc == 0x1C4F70u) {
        ctx->pc = 0x1C4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F6Cu;
        // 0x1c4f70: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F74u;
        goto label_1c4f74;
    }
    ctx->pc = 0x1C4F6Cu;
    {
        const bool branch_taken_0x1c4f6c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F6Cu;
        // 0x1c4f70: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f6c) {
            ctx->pc = 0x1C4F7Cu;
            goto label_1c4f7c;
        }
    }
    ctx->pc = 0x1C4F74u;
label_1c4f74:
    // 0x1c4f74: 0x16e20005  bne         $s7, $v0, . + 4 + (0x5 << 2)
label_1c4f78:
    if (ctx->pc == 0x1C4F78u) {
        ctx->pc = 0x1C4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F74u;
        // 0x1c4f78: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F7Cu;
        goto label_1c4f7c;
    }
    ctx->pc = 0x1C4F74u;
    {
        const bool branch_taken_0x1c4f74 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F74u;
        // 0x1c4f78: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f74) {
            ctx->pc = 0x1C4F8Cu;
            goto label_1c4f8c;
        }
    }
    ctx->pc = 0x1C4F7Cu;
label_1c4f7c:
    // 0x1c4f7c: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x1c4f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_1c4f80:
    // 0x1c4f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4f84:
    // 0x1c4f84: 0xa0620950  sb          $v0, 0x950($v1)
    ctx->pc = 0x1c4f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2384), (uint8_t)GPR_U32(ctx, 2));
label_1c4f88:
    // 0x1c4f88: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x1c4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_1c4f8c:
    // 0x1c4f8c: 0x90430950  lbu         $v1, 0x950($v0)
    ctx->pc = 0x1c4f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2384)));
label_1c4f90:
    // 0x1c4f90: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_1c4f94:
    if (ctx->pc == 0x1C4F94u) {
        ctx->pc = 0x1C4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F90u;
        // 0x1c4f94: 0x2962021  addu        $a0, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F98u;
        goto label_1c4f98;
    }
    ctx->pc = 0x1C4F90u;
    {
        const bool branch_taken_0x1c4f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f90) {
            ctx->pc = 0x1C4F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4F90u;
            // 0x1c4f94: 0x2962021  addu        $a0, $s4, $s6 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4FB4u;
            goto label_1c4fb4;
        }
    }
    ctx->pc = 0x1C4F98u;
label_1c4f98:
    // 0x1c4f98: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1c4f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1c4f9c:
    // 0x1c4f9c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1c4fa0:
    if (ctx->pc == 0x1C4FA0u) {
        ctx->pc = 0x1C4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F9Cu;
        // 0x1c4fa0: 0x2962021  addu        $a0, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FA4u;
        goto label_1c4fa4;
    }
    ctx->pc = 0x1C4F9Cu;
    {
        const bool branch_taken_0x1c4f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f9c) {
            ctx->pc = 0x1C4FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4F9Cu;
            // 0x1c4fa0: 0x2962021  addu        $a0, $s4, $s6 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4FB4u;
            goto label_1c4fb4;
        }
    }
    ctx->pc = 0x1C4FA4u;
label_1c4fa4:
    // 0x1c4fa4: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x1c4fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1c4fa8:
    // 0x1c4fa8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c4fac:
    if (ctx->pc == 0x1C4FACu) {
        ctx->pc = 0x1C4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FA8u;
        // 0x1c4fac: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FB0u;
        goto label_1c4fb0;
    }
    ctx->pc = 0x1C4FA8u;
    {
        const bool branch_taken_0x1c4fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FA8u;
        // 0x1c4fac: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fa8) {
            ctx->pc = 0x1C4FC8u;
            goto label_1c4fc8;
        }
    }
    ctx->pc = 0x1C4FB0u;
label_1c4fb0:
    // 0x1c4fb0: 0x2962021  addu        $a0, $s4, $s6
    ctx->pc = 0x1c4fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_1c4fb4:
    // 0x1c4fb4: 0xc0e4060  jal         func_390180
label_1c4fb8:
    if (ctx->pc == 0x1C4FB8u) {
        ctx->pc = 0x1C4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FB4u;
        // 0x1c4fb8: 0x24840944  addiu       $a0, $a0, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FBCu;
        goto label_1c4fbc;
    }
    ctx->pc = 0x1C4FB4u;
    SET_GPR_U32(ctx, 31, 0x1C4FBCu);
    ctx->pc = 0x1C4FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4FB4u;
    // 0x1c4fb8: 0x24840944  addiu       $a0, $a0, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C4FB4u, 0x1C4FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FBCu;
label_1c4fbc:
    // 0x1c4fbc: 0xc07a6ce  jal         func_1E9B38
label_1c4fc0:
    if (ctx->pc == 0x1C4FC0u) {
        ctx->pc = 0x1C4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FBCu;
        // 0x1c4fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FC4u;
        goto label_1c4fc4;
    }
    ctx->pc = 0x1C4FBCu;
    SET_GPR_U32(ctx, 31, 0x1C4FC4u);
    ctx->pc = 0x1C4FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4FBCu;
    // 0x1c4fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9B38u, 0x1C4FBCu, 0x1C4FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FC4u;
label_1c4fc4:
    // 0x1c4fc4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1c4fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1c4fc8:
    // 0x1c4fc8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1c4fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c4fcc:
    // 0x1c4fcc: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1c4fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1c4fd0:
    // 0x1c4fd0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1c4fd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1c4fd4:
    // 0x1c4fd4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1c4fd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c4fd8:
    // 0x1c4fd8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1c4fd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c4fdc:
    // 0x1c4fdc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1c4fdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c4fe0:
    // 0x1c4fe0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c4fe0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c4fe4:
    // 0x1c4fe4: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1c4fe4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c4fe8:
    // 0x1c4fe8: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1c4fe8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c4fec:
    // 0x1c4fec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c4fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c4ff0:
    // 0x1c4ff0: 0x3e00008  jr          $ra
label_1c4ff4:
    if (ctx->pc == 0x1C4FF4u) {
        ctx->pc = 0x1C4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FF0u;
        // 0x1c4ff4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FF8u;
        goto label_fallthrough_0x1c4ff0;
    }
    ctx->pc = 0x1C4FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FF0u;
        // 0x1c4ff4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c4ff0:
    ctx->pc = 0x1C4FF8u;
}
