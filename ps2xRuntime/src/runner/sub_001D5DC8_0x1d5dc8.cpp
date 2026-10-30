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

// Function: sub_001D5DC8
// Address: 0x1d5dc8 - 0x1d6060
void sub_001D5DC8_0x1d5dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5DC8_0x1d5dc8");
#endif

    switch (ctx->pc) {
        case 0x1d5dc8u: goto label_1d5dc8;
        case 0x1d5dccu: goto label_1d5dcc;
        case 0x1d5dd0u: goto label_1d5dd0;
        case 0x1d5dd4u: goto label_1d5dd4;
        case 0x1d5dd8u: goto label_1d5dd8;
        case 0x1d5ddcu: goto label_1d5ddc;
        case 0x1d5de0u: goto label_1d5de0;
        case 0x1d5de4u: goto label_1d5de4;
        case 0x1d5de8u: goto label_1d5de8;
        case 0x1d5decu: goto label_1d5dec;
        case 0x1d5df0u: goto label_1d5df0;
        case 0x1d5df4u: goto label_1d5df4;
        case 0x1d5df8u: goto label_1d5df8;
        case 0x1d5dfcu: goto label_1d5dfc;
        case 0x1d5e00u: goto label_1d5e00;
        case 0x1d5e04u: goto label_1d5e04;
        case 0x1d5e08u: goto label_1d5e08;
        case 0x1d5e0cu: goto label_1d5e0c;
        case 0x1d5e10u: goto label_1d5e10;
        case 0x1d5e14u: goto label_1d5e14;
        case 0x1d5e18u: goto label_1d5e18;
        case 0x1d5e1cu: goto label_1d5e1c;
        case 0x1d5e20u: goto label_1d5e20;
        case 0x1d5e24u: goto label_1d5e24;
        case 0x1d5e28u: goto label_1d5e28;
        case 0x1d5e2cu: goto label_1d5e2c;
        case 0x1d5e30u: goto label_1d5e30;
        case 0x1d5e34u: goto label_1d5e34;
        case 0x1d5e38u: goto label_1d5e38;
        case 0x1d5e3cu: goto label_1d5e3c;
        case 0x1d5e40u: goto label_1d5e40;
        case 0x1d5e44u: goto label_1d5e44;
        case 0x1d5e48u: goto label_1d5e48;
        case 0x1d5e4cu: goto label_1d5e4c;
        case 0x1d5e50u: goto label_1d5e50;
        case 0x1d5e54u: goto label_1d5e54;
        case 0x1d5e58u: goto label_1d5e58;
        case 0x1d5e5cu: goto label_1d5e5c;
        case 0x1d5e60u: goto label_1d5e60;
        case 0x1d5e64u: goto label_1d5e64;
        case 0x1d5e68u: goto label_1d5e68;
        case 0x1d5e6cu: goto label_1d5e6c;
        case 0x1d5e70u: goto label_1d5e70;
        case 0x1d5e74u: goto label_1d5e74;
        case 0x1d5e78u: goto label_1d5e78;
        case 0x1d5e7cu: goto label_1d5e7c;
        case 0x1d5e80u: goto label_1d5e80;
        case 0x1d5e84u: goto label_1d5e84;
        case 0x1d5e88u: goto label_1d5e88;
        case 0x1d5e8cu: goto label_1d5e8c;
        case 0x1d5e90u: goto label_1d5e90;
        case 0x1d5e94u: goto label_1d5e94;
        case 0x1d5e98u: goto label_1d5e98;
        case 0x1d5e9cu: goto label_1d5e9c;
        case 0x1d5ea0u: goto label_1d5ea0;
        case 0x1d5ea4u: goto label_1d5ea4;
        case 0x1d5ea8u: goto label_1d5ea8;
        case 0x1d5eacu: goto label_1d5eac;
        case 0x1d5eb0u: goto label_1d5eb0;
        case 0x1d5eb4u: goto label_1d5eb4;
        case 0x1d5eb8u: goto label_1d5eb8;
        case 0x1d5ebcu: goto label_1d5ebc;
        case 0x1d5ec0u: goto label_1d5ec0;
        case 0x1d5ec4u: goto label_1d5ec4;
        case 0x1d5ec8u: goto label_1d5ec8;
        case 0x1d5eccu: goto label_1d5ecc;
        case 0x1d5ed0u: goto label_1d5ed0;
        case 0x1d5ed4u: goto label_1d5ed4;
        case 0x1d5ed8u: goto label_1d5ed8;
        case 0x1d5edcu: goto label_1d5edc;
        case 0x1d5ee0u: goto label_1d5ee0;
        case 0x1d5ee4u: goto label_1d5ee4;
        case 0x1d5ee8u: goto label_1d5ee8;
        case 0x1d5eecu: goto label_1d5eec;
        case 0x1d5ef0u: goto label_1d5ef0;
        case 0x1d5ef4u: goto label_1d5ef4;
        case 0x1d5ef8u: goto label_1d5ef8;
        case 0x1d5efcu: goto label_1d5efc;
        case 0x1d5f00u: goto label_1d5f00;
        case 0x1d5f04u: goto label_1d5f04;
        case 0x1d5f08u: goto label_1d5f08;
        case 0x1d5f0cu: goto label_1d5f0c;
        case 0x1d5f10u: goto label_1d5f10;
        case 0x1d5f14u: goto label_1d5f14;
        case 0x1d5f18u: goto label_1d5f18;
        case 0x1d5f1cu: goto label_1d5f1c;
        case 0x1d5f20u: goto label_1d5f20;
        case 0x1d5f24u: goto label_1d5f24;
        case 0x1d5f28u: goto label_1d5f28;
        case 0x1d5f2cu: goto label_1d5f2c;
        case 0x1d5f30u: goto label_1d5f30;
        case 0x1d5f34u: goto label_1d5f34;
        case 0x1d5f38u: goto label_1d5f38;
        case 0x1d5f3cu: goto label_1d5f3c;
        case 0x1d5f40u: goto label_1d5f40;
        case 0x1d5f44u: goto label_1d5f44;
        case 0x1d5f48u: goto label_1d5f48;
        case 0x1d5f4cu: goto label_1d5f4c;
        case 0x1d5f50u: goto label_1d5f50;
        case 0x1d5f54u: goto label_1d5f54;
        case 0x1d5f58u: goto label_1d5f58;
        case 0x1d5f5cu: goto label_1d5f5c;
        case 0x1d5f60u: goto label_1d5f60;
        case 0x1d5f64u: goto label_1d5f64;
        case 0x1d5f68u: goto label_1d5f68;
        case 0x1d5f6cu: goto label_1d5f6c;
        case 0x1d5f70u: goto label_1d5f70;
        case 0x1d5f74u: goto label_1d5f74;
        case 0x1d5f78u: goto label_1d5f78;
        case 0x1d5f7cu: goto label_1d5f7c;
        case 0x1d5f80u: goto label_1d5f80;
        case 0x1d5f84u: goto label_1d5f84;
        case 0x1d5f88u: goto label_1d5f88;
        case 0x1d5f8cu: goto label_1d5f8c;
        case 0x1d5f90u: goto label_1d5f90;
        case 0x1d5f94u: goto label_1d5f94;
        case 0x1d5f98u: goto label_1d5f98;
        case 0x1d5f9cu: goto label_1d5f9c;
        case 0x1d5fa0u: goto label_1d5fa0;
        case 0x1d5fa4u: goto label_1d5fa4;
        case 0x1d5fa8u: goto label_1d5fa8;
        case 0x1d5facu: goto label_1d5fac;
        case 0x1d5fb0u: goto label_1d5fb0;
        case 0x1d5fb4u: goto label_1d5fb4;
        case 0x1d5fb8u: goto label_1d5fb8;
        case 0x1d5fbcu: goto label_1d5fbc;
        case 0x1d5fc0u: goto label_1d5fc0;
        case 0x1d5fc4u: goto label_1d5fc4;
        case 0x1d5fc8u: goto label_1d5fc8;
        case 0x1d5fccu: goto label_1d5fcc;
        case 0x1d5fd0u: goto label_1d5fd0;
        case 0x1d5fd4u: goto label_1d5fd4;
        case 0x1d5fd8u: goto label_1d5fd8;
        case 0x1d5fdcu: goto label_1d5fdc;
        case 0x1d5fe0u: goto label_1d5fe0;
        case 0x1d5fe4u: goto label_1d5fe4;
        case 0x1d5fe8u: goto label_1d5fe8;
        case 0x1d5fecu: goto label_1d5fec;
        case 0x1d5ff0u: goto label_1d5ff0;
        case 0x1d5ff4u: goto label_1d5ff4;
        case 0x1d5ff8u: goto label_1d5ff8;
        case 0x1d5ffcu: goto label_1d5ffc;
        case 0x1d6000u: goto label_1d6000;
        case 0x1d6004u: goto label_1d6004;
        case 0x1d6008u: goto label_1d6008;
        case 0x1d600cu: goto label_1d600c;
        case 0x1d6010u: goto label_1d6010;
        case 0x1d6014u: goto label_1d6014;
        case 0x1d6018u: goto label_1d6018;
        case 0x1d601cu: goto label_1d601c;
        case 0x1d6020u: goto label_1d6020;
        case 0x1d6024u: goto label_1d6024;
        case 0x1d6028u: goto label_1d6028;
        case 0x1d602cu: goto label_1d602c;
        case 0x1d6030u: goto label_1d6030;
        case 0x1d6034u: goto label_1d6034;
        case 0x1d6038u: goto label_1d6038;
        case 0x1d603cu: goto label_1d603c;
        case 0x1d6040u: goto label_1d6040;
        case 0x1d6044u: goto label_1d6044;
        case 0x1d6048u: goto label_1d6048;
        case 0x1d604cu: goto label_1d604c;
        case 0x1d6050u: goto label_1d6050;
        case 0x1d6054u: goto label_1d6054;
        case 0x1d6058u: goto label_1d6058;
        case 0x1d605cu: goto label_1d605c;
        default: break;
    }

    ctx->pc = 0x1d5dc8u;

label_1d5dc8:
    // 0x1d5dc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d5dcc:
    // 0x1d5dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d5dd0:
    // 0x1d5dd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d5dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d5dd4:
    // 0x1d5dd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d5dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5dd8:
    // 0x1d5dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d5ddc:
    // 0x1d5ddc: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x1d5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_1d5de0:
    // 0x1d5de0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d5de4:
    if (ctx->pc == 0x1D5DE4u) {
        ctx->pc = 0x1D5DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DE0u;
        // 0x1d5de4: 0x2ca20007  sltiu       $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5DE8u;
        goto label_1d5de8;
    }
    ctx->pc = 0x1D5DE0u;
    {
        const bool branch_taken_0x1d5de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DE0u;
        // 0x1d5de4: 0x2ca20007  sltiu       $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5de0) {
            ctx->pc = 0x1D5E04u;
            goto label_1d5e04;
        }
    }
    ctx->pc = 0x1D5DE8u;
label_1d5de8:
    // 0x1d5de8: 0xc07573c  jal         func_1D5CF0
label_1d5dec:
    if (ctx->pc == 0x1D5DECu) {
        ctx->pc = 0x1D5DF0u;
        goto label_1d5df0;
    }
    ctx->pc = 0x1D5DE8u;
    SET_GPR_U32(ctx, 31, 0x1D5DF0u);
    ctx->pc = 0x1D5CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CF0u, 0x1D5DE8u, 0x1D5DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DF0u;
label_1d5df0:
    // 0x1d5df0: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x1d5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_1d5df4:
    // 0x1d5df4: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
label_1d5df8:
    if (ctx->pc == 0x1D5DF8u) {
        ctx->pc = 0x1D5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DF4u;
        // 0x1d5df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5DFCu;
        goto label_1d5dfc;
    }
    ctx->pc = 0x1D5DF4u;
    {
        const bool branch_taken_0x1d5df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DF4u;
        // 0x1d5df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5df4) {
            ctx->pc = 0x1D6048u;
            goto label_1d6048;
        }
    }
    ctx->pc = 0x1D5DFCu;
label_1d5dfc:
    // 0x1d5dfc: 0x10000093  b           . + 4 + (0x93 << 2)
label_1d5e00:
    if (ctx->pc == 0x1D5E00u) {
        ctx->pc = 0x1D5E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DFCu;
        // 0x1d5e00: 0xae200218  sw          $zero, 0x218($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5E04u;
        goto label_1d5e04;
    }
    ctx->pc = 0x1D5DFCu;
    {
        const bool branch_taken_0x1d5dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DFCu;
        // 0x1d5e00: 0xae200218  sw          $zero, 0x218($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5dfc) {
            ctx->pc = 0x1D604Cu;
            goto label_1d604c;
        }
    }
    ctx->pc = 0x1D5E04u;
label_1d5e04:
    // 0x1d5e04: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
label_1d5e08:
    if (ctx->pc == 0x1D5E08u) {
        ctx->pc = 0x1D5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E04u;
        // 0x1d5e08: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5E0Cu;
        goto label_1d5e0c;
    }
    ctx->pc = 0x1D5E04u;
    {
        const bool branch_taken_0x1d5e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E04u;
        // 0x1d5e08: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e04) {
            ctx->pc = 0x1D6048u;
            goto label_1d6048;
        }
    }
    ctx->pc = 0x1D5E0Cu;
label_1d5e0c:
    // 0x1d5e0c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1d5e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d5e10:
    // 0x1d5e10: 0x24426080  addiu       $v0, $v0, 0x6080
    ctx->pc = 0x1d5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24704));
label_1d5e14:
    // 0x1d5e14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d5e18:
    // 0x1d5e18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d5e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d5e1c:
    // 0x1d5e1c: 0x800008  jr          $a0
label_1d5e20:
    if (ctx->pc == 0x1D5E20u) {
        ctx->pc = 0x1D5E24u;
        goto label_1d5e24;
    }
    ctx->pc = 0x1D5E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5E24u: goto label_1d5e24;
            case 0x1D5E94u: goto label_1d5e94;
            case 0x1D5F38u: goto label_1d5f38;
            case 0x1D5F44u: goto label_1d5f44;
            case 0x1D5F74u: goto label_1d5f74;
            case 0x1D5FF0u: goto label_1d5ff0;
            case 0x1D6048u: goto label_1d6048;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5E1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D5E24u;
label_1d5e24:
    // 0x1d5e24: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d5e28:
    // 0x1d5e28: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1d5e2c:
    if (ctx->pc == 0x1D5E2Cu) {
        ctx->pc = 0x1D5E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E28u;
        // 0x1d5e2c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5E30u;
        goto label_1d5e30;
    }
    ctx->pc = 0x1D5E28u;
    {
        const bool branch_taken_0x1d5e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E28u;
        // 0x1d5e2c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e28) {
            ctx->pc = 0x1D5E5Cu;
            goto label_1d5e5c;
        }
    }
    ctx->pc = 0x1D5E30u;
label_1d5e30:
    // 0x1d5e30: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d5e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d5e34:
    // 0x1d5e34: 0xc04444c  jal         func_111130
label_1d5e38:
    if (ctx->pc == 0x1D5E38u) {
        ctx->pc = 0x1D5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E34u;
        // 0x1d5e38: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5E3Cu;
        goto label_1d5e3c;
    }
    ctx->pc = 0x1D5E34u;
    SET_GPR_U32(ctx, 31, 0x1D5E3Cu);
    ctx->pc = 0x1D5E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E34u;
    // 0x1d5e38: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D5E34u, 0x1D5E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E3Cu;
label_1d5e3c:
    // 0x1d5e3c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d5e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d5e40:
    // 0x1d5e40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5e44:
    // 0x1d5e44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5e48:
    // 0x1d5e48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5e4c:
    // 0x1d5e4c: 0xc043f36  jal         func_10FCD8
label_1d5e50:
    if (ctx->pc == 0x1D5E50u) {
        ctx->pc = 0x1D5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E4Cu;
        // 0x1d5e50: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5E54u;
        goto label_1d5e54;
    }
    ctx->pc = 0x1D5E4Cu;
    SET_GPR_U32(ctx, 31, 0x1D5E54u);
    ctx->pc = 0x1D5E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E4Cu;
    // 0x1d5e50: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D5E4Cu, 0x1D5E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E54u;
label_1d5e54:
    // 0x1d5e54: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d5e58:
    if (ctx->pc == 0x1D5E58u) {
        ctx->pc = 0x1D5E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E54u;
        // 0x1d5e58: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5E5Cu;
        goto label_1d5e5c;
    }
    ctx->pc = 0x1D5E54u;
    {
        const bool branch_taken_0x1d5e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E54u;
        // 0x1d5e58: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e54) {
            ctx->pc = 0x1D5E84u;
            goto label_1d5e84;
        }
    }
    ctx->pc = 0x1D5E5Cu;
label_1d5e5c:
    // 0x1d5e5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d5e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d5e60:
    // 0x1d5e60: 0xc04444c  jal         func_111130
label_1d5e64:
    if (ctx->pc == 0x1D5E64u) {
        ctx->pc = 0x1D5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E60u;
        // 0x1d5e64: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5E68u;
        goto label_1d5e68;
    }
    ctx->pc = 0x1D5E60u;
    SET_GPR_U32(ctx, 31, 0x1D5E68u);
    ctx->pc = 0x1D5E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E60u;
    // 0x1d5e64: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D5E60u, 0x1D5E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E68u;
label_1d5e68:
    // 0x1d5e68: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d5e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d5e6c:
    // 0x1d5e6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5e70:
    // 0x1d5e70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5e74:
    // 0x1d5e74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5e78:
    // 0x1d5e78: 0xc043f36  jal         func_10FCD8
label_1d5e7c:
    if (ctx->pc == 0x1D5E7Cu) {
        ctx->pc = 0x1D5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E78u;
        // 0x1d5e7c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5E80u;
        goto label_1d5e80;
    }
    ctx->pc = 0x1D5E78u;
    SET_GPR_U32(ctx, 31, 0x1D5E80u);
    ctx->pc = 0x1D5E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E78u;
    // 0x1d5e7c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D5E78u, 0x1D5E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E80u;
label_1d5e80:
    // 0x1d5e80: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1d5e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d5e84:
    // 0x1d5e84: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_1d5e88:
    if (ctx->pc == 0x1D5E88u) {
        ctx->pc = 0x1D5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E84u;
        // 0x1d5e88: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5E8Cu;
        goto label_1d5e8c;
    }
    ctx->pc = 0x1D5E84u;
    {
        const bool branch_taken_0x1d5e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E84u;
        // 0x1d5e88: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e84) {
            ctx->pc = 0x1D5F24u;
            goto label_1d5f24;
        }
    }
    ctx->pc = 0x1D5E8Cu;
label_1d5e8c:
    // 0x1d5e8c: 0x10000021  b           . + 4 + (0x21 << 2)
label_1d5e90:
    if (ctx->pc == 0x1D5E90u) {
        ctx->pc = 0x1D5E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E8Cu;
        // 0x1d5e90: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5E94u;
        goto label_1d5e94;
    }
    ctx->pc = 0x1D5E8Cu;
    {
        const bool branch_taken_0x1d5e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E8Cu;
        // 0x1d5e90: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e8c) {
            ctx->pc = 0x1D5F14u;
            goto label_1d5f14;
        }
    }
    ctx->pc = 0x1D5E94u;
label_1d5e94:
    // 0x1d5e94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d5e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5e98:
    // 0x1d5e98: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1d5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d5e9c:
    // 0x1d5e9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d5ea0:
    // 0x1d5ea0: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_1d5ea4:
    if (ctx->pc == 0x1D5EA4u) {
        ctx->pc = 0x1D5EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EA0u;
        // 0x1d5ea4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5EA8u;
        goto label_1d5ea8;
    }
    ctx->pc = 0x1D5EA0u;
    {
        const bool branch_taken_0x1d5ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EA0u;
        // 0x1d5ea4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ea0) {
            ctx->pc = 0x1D5ED4u;
            goto label_1d5ed4;
        }
    }
    ctx->pc = 0x1D5EA8u;
label_1d5ea8:
    // 0x1d5ea8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d5ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d5eac:
    // 0x1d5eac: 0xc04444c  jal         func_111130
label_1d5eb0:
    if (ctx->pc == 0x1D5EB0u) {
        ctx->pc = 0x1D5EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EACu;
        // 0x1d5eb0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5EB4u;
        goto label_1d5eb4;
    }
    ctx->pc = 0x1D5EACu;
    SET_GPR_U32(ctx, 31, 0x1D5EB4u);
    ctx->pc = 0x1D5EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EACu;
    // 0x1d5eb0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D5EACu, 0x1D5EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EB4u;
label_1d5eb4:
    // 0x1d5eb4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d5eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d5eb8:
    // 0x1d5eb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ebc:
    // 0x1d5ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ec0:
    // 0x1d5ec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ec4:
    // 0x1d5ec4: 0xc043f36  jal         func_10FCD8
label_1d5ec8:
    if (ctx->pc == 0x1D5EC8u) {
        ctx->pc = 0x1D5EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EC4u;
        // 0x1d5ec8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5ECCu;
        goto label_1d5ecc;
    }
    ctx->pc = 0x1D5EC4u;
    SET_GPR_U32(ctx, 31, 0x1D5ECCu);
    ctx->pc = 0x1D5EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EC4u;
    // 0x1d5ec8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D5EC4u, 0x1D5ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ECCu;
label_1d5ecc:
    // 0x1d5ecc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d5ed0:
    if (ctx->pc == 0x1D5ED0u) {
        ctx->pc = 0x1D5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ECCu;
        // 0x1d5ed0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5ED4u;
        goto label_1d5ed4;
    }
    ctx->pc = 0x1D5ECCu;
    {
        const bool branch_taken_0x1d5ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ECCu;
        // 0x1d5ed0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ecc) {
            ctx->pc = 0x1D5EFCu;
            goto label_1d5efc;
        }
    }
    ctx->pc = 0x1D5ED4u;
label_1d5ed4:
    // 0x1d5ed4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d5ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d5ed8:
    // 0x1d5ed8: 0xc04444c  jal         func_111130
label_1d5edc:
    if (ctx->pc == 0x1D5EDCu) {
        ctx->pc = 0x1D5EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ED8u;
        // 0x1d5edc: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5EE0u;
        goto label_1d5ee0;
    }
    ctx->pc = 0x1D5ED8u;
    SET_GPR_U32(ctx, 31, 0x1D5EE0u);
    ctx->pc = 0x1D5EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5ED8u;
    // 0x1d5edc: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D5ED8u, 0x1D5EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EE0u;
label_1d5ee0:
    // 0x1d5ee0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d5ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d5ee4:
    // 0x1d5ee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ee8:
    // 0x1d5ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5eec:
    // 0x1d5eec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5eecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ef0:
    // 0x1d5ef0: 0xc043f36  jal         func_10FCD8
label_1d5ef4:
    if (ctx->pc == 0x1D5EF4u) {
        ctx->pc = 0x1D5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EF0u;
        // 0x1d5ef4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5EF8u;
        goto label_1d5ef8;
    }
    ctx->pc = 0x1D5EF0u;
    SET_GPR_U32(ctx, 31, 0x1D5EF8u);
    ctx->pc = 0x1D5EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EF0u;
    // 0x1d5ef4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D5EF0u, 0x1D5EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EF8u;
label_1d5ef8:
    // 0x1d5ef8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5efc:
    // 0x1d5efc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1d5efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d5f00:
    // 0x1d5f00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d5f04:
    // 0x1d5f04: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1d5f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d5f08:
    // 0x1d5f08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d5f0c:
    if (ctx->pc == 0x1D5F0Cu) {
        ctx->pc = 0x1D5F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F08u;
        // 0x1d5f0c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5F10u;
        goto label_1d5f10;
    }
    ctx->pc = 0x1D5F08u;
    {
        const bool branch_taken_0x1d5f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F08u;
        // 0x1d5f0c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f08) {
            ctx->pc = 0x1D5F24u;
            goto label_1d5f24;
        }
    }
    ctx->pc = 0x1D5F10u;
label_1d5f10:
    // 0x1d5f10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d5f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d5f14:
    // 0x1d5f14: 0x8c44ecec  lw          $a0, -0x1314($v0)
    ctx->pc = 0x1d5f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
label_1d5f18:
    // 0x1d5f18: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1d5f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1d5f1c:
    // 0x1d5f1c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1d5f20:
    if (ctx->pc == 0x1D5F20u) {
        ctx->pc = 0x1D5F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F1Cu;
        // 0x1d5f20: 0xac8045cc  sw          $zero, 0x45CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 17868), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5F24u;
        goto label_1d5f24;
    }
    ctx->pc = 0x1D5F1Cu;
    {
        const bool branch_taken_0x1d5f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F1Cu;
        // 0x1d5f20: 0xac8045cc  sw          $zero, 0x45CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 17868), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f1c) {
            ctx->pc = 0x1D6048u;
            goto label_1d6048;
        }
    }
    ctx->pc = 0x1D5F24u;
label_1d5f24:
    // 0x1d5f24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d5f28:
    // 0x1d5f28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d5f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5f2c:
    // 0x1d5f2c: 0x8c43ecec  lw          $v1, -0x1314($v0)
    ctx->pc = 0x1d5f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
label_1d5f30:
    // 0x1d5f30: 0x10000045  b           . + 4 + (0x45 << 2)
label_1d5f34:
    if (ctx->pc == 0x1D5F34u) {
        ctx->pc = 0x1D5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F30u;
        // 0x1d5f34: 0xac6445cc  sw          $a0, 0x45CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17868), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5F38u;
        goto label_1d5f38;
    }
    ctx->pc = 0x1D5F30u;
    {
        const bool branch_taken_0x1d5f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F30u;
        // 0x1d5f34: 0xac6445cc  sw          $a0, 0x45CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17868), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f30) {
            ctx->pc = 0x1D6048u;
            goto label_1d6048;
        }
    }
    ctx->pc = 0x1D5F38u;
label_1d5f38:
    // 0x1d5f38: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d5f3c:
    // 0x1d5f3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d5f40:
    if (ctx->pc == 0x1D5F40u) {
        ctx->pc = 0x1D5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F3Cu;
        // 0x1d5f40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5F44u;
        goto label_1d5f44;
    }
    ctx->pc = 0x1D5F3Cu;
    {
        const bool branch_taken_0x1d5f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F3Cu;
        // 0x1d5f40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f3c) {
            ctx->pc = 0x1D5F4Cu;
            goto label_1d5f4c;
        }
    }
    ctx->pc = 0x1D5F44u;
label_1d5f44:
    // 0x1d5f44: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d5f48:
    // 0x1d5f48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d5f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d5f4c:
    // 0x1d5f4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d5f50:
    // 0x1d5f50: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1d5f54:
    // 0x1d5f54: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1d5f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d5f58:
    // 0x1d5f58: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1d5f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d5f5c:
    // 0x1d5f5c: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1d5f5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_1d5f60:
    // 0x1d5f60: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1d5f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_1d5f64:
    // 0x1d5f64: 0x40f809  jalr        $v0
label_1d5f68:
    if (ctx->pc == 0x1D5F68u) {
        ctx->pc = 0x1D5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F64u;
        // 0x1d5f68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5F6Cu;
        goto label_1d5f6c;
    }
    ctx->pc = 0x1D5F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5F6Cu);
        ctx->pc = 0x1D5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F64u;
        // 0x1d5f68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F64u, 0x1D5F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5F6Cu;
label_1d5f6c:
    // 0x1d5f6c: 0x10000037  b           . + 4 + (0x37 << 2)
label_1d5f70:
    if (ctx->pc == 0x1D5F70u) {
        ctx->pc = 0x1D5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F6Cu;
        // 0x1d5f70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5F74u;
        goto label_1d5f74;
    }
    ctx->pc = 0x1D5F6Cu;
    {
        const bool branch_taken_0x1d5f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F6Cu;
        // 0x1d5f70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f6c) {
            ctx->pc = 0x1D604Cu;
            goto label_1d604c;
        }
    }
    ctx->pc = 0x1D5F74u;
label_1d5f74:
    // 0x1d5f74: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1d5f74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1d5f78:
    // 0x1d5f78: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d5f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d5f7c:
    // 0x1d5f7c: 0xc04444c  jal         func_111130
label_1d5f80:
    if (ctx->pc == 0x1D5F80u) {
        ctx->pc = 0x1D5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F7Cu;
        // 0x1d5f80: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5F84u;
        goto label_1d5f84;
    }
    ctx->pc = 0x1D5F7Cu;
    SET_GPR_U32(ctx, 31, 0x1D5F84u);
    ctx->pc = 0x1D5F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F7Cu;
    // 0x1d5f80: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D5F7Cu, 0x1D5F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F84u;
label_1d5f84:
    // 0x1d5f84: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d5f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d5f88:
    // 0x1d5f88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5f8c:
    // 0x1d5f8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5f90:
    // 0x1d5f90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5f94:
    // 0x1d5f94: 0xc043f36  jal         func_10FCD8
label_1d5f98:
    if (ctx->pc == 0x1D5F98u) {
        ctx->pc = 0x1D5F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F94u;
        // 0x1d5f98: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5F9Cu;
        goto label_1d5f9c;
    }
    ctx->pc = 0x1D5F94u;
    SET_GPR_U32(ctx, 31, 0x1D5F9Cu);
    ctx->pc = 0x1D5F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F94u;
    // 0x1d5f98: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D5F94u, 0x1D5F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F9Cu;
label_1d5f9c:
    // 0x1d5f9c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d5f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d5fa0:
    // 0x1d5fa0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d5fa4:
    // 0x1d5fa4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1d5fa8:
    if (ctx->pc == 0x1D5FA8u) {
        ctx->pc = 0x1D5FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FA4u;
        // 0x1d5fa8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5FACu;
        goto label_1d5fac;
    }
    ctx->pc = 0x1D5FA4u;
    {
        const bool branch_taken_0x1d5fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FA4u;
        // 0x1d5fa8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fa4) {
            ctx->pc = 0x1D5FD0u;
            goto label_1d5fd0;
        }
    }
    ctx->pc = 0x1D5FACu;
label_1d5fac:
    // 0x1d5fac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d5facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d5fb0:
    // 0x1d5fb0: 0x8c62ecf0  lw          $v0, -0x1310($v1)
    ctx->pc = 0x1d5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962416)));
label_1d5fb4:
    // 0x1d5fb4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1d5fb8:
    if (ctx->pc == 0x1D5FB8u) {
        ctx->pc = 0x1D5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FB4u;
        // 0x1d5fb8: 0xac60ecf0  sw          $zero, -0x1310($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5FBCu;
        goto label_1d5fbc;
    }
    ctx->pc = 0x1D5FB4u;
    {
        const bool branch_taken_0x1d5fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5fb4) {
            ctx->pc = 0x1D5FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5FB4u;
            // 0x1d5fb8: 0xac60ecf0  sw          $zero, -0x1310($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294962416), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5FC8u;
            goto label_1d5fc8;
        }
    }
    ctx->pc = 0x1D5FBCu;
label_1d5fbc:
    // 0x1d5fbc: 0xa040001d  sb          $zero, 0x1D($v0)
    ctx->pc = 0x1d5fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 0));
label_1d5fc0:
    // 0x1d5fc0: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x1d5fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
label_1d5fc4:
    // 0x1d5fc4: 0xac60ecf0  sw          $zero, -0x1310($v1)
    ctx->pc = 0x1d5fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962416), GPR_U32(ctx, 0));
label_1d5fc8:
    // 0x1d5fc8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d5fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d5fcc:
    // 0x1d5fcc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d5fd0:
    // 0x1d5fd0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1d5fd4:
    if (ctx->pc == 0x1D5FD4u) {
        ctx->pc = 0x1D5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FD0u;
        // 0x1d5fd4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5FD8u;
        goto label_1d5fd8;
    }
    ctx->pc = 0x1D5FD0u;
    {
        const bool branch_taken_0x1d5fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FD0u;
        // 0x1d5fd4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fd0) {
            ctx->pc = 0x1D5FE0u;
            goto label_1d5fe0;
        }
    }
    ctx->pc = 0x1D5FD8u;
label_1d5fd8:
    // 0x1d5fd8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d5fdc:
    if (ctx->pc == 0x1D5FDCu) {
        ctx->pc = 0x1D5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FD8u;
        // 0x1d5fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5FE0u;
        goto label_1d5fe0;
    }
    ctx->pc = 0x1D5FD8u;
    {
        const bool branch_taken_0x1d5fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FD8u;
        // 0x1d5fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fd8) {
            ctx->pc = 0x1D604Cu;
            goto label_1d604c;
        }
    }
    ctx->pc = 0x1D5FE0u;
label_1d5fe0:
    // 0x1d5fe0: 0xc076a74  jal         func_1DA9D0
label_1d5fe4:
    if (ctx->pc == 0x1D5FE4u) {
        ctx->pc = 0x1D5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FE0u;
        // 0x1d5fe4: 0x8c44ecec  lw          $a0, -0x1314($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5FE8u;
        goto label_1d5fe8;
    }
    ctx->pc = 0x1D5FE0u;
    SET_GPR_U32(ctx, 31, 0x1D5FE8u);
    ctx->pc = 0x1D5FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FE0u;
    // 0x1d5fe4: 0x8c44ecec  lw          $a0, -0x1314($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA9D0u, 0x1D5FE0u, 0x1D5FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FE8u;
label_1d5fe8:
    // 0x1d5fe8: 0x10000018  b           . + 4 + (0x18 << 2)
label_1d5fec:
    if (ctx->pc == 0x1D5FECu) {
        ctx->pc = 0x1D5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FE8u;
        // 0x1d5fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5FF0u;
        goto label_1d5ff0;
    }
    ctx->pc = 0x1D5FE8u;
    {
        const bool branch_taken_0x1d5fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FE8u;
        // 0x1d5fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fe8) {
            ctx->pc = 0x1D604Cu;
            goto label_1d604c;
        }
    }
    ctx->pc = 0x1D5FF0u;
label_1d5ff0:
    // 0x1d5ff0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d5ff4:
    // 0x1d5ff4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d5ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d5ff8:
    // 0x1d5ff8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1d5ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1d5ffc:
    // 0x1d5ffc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d6000:
    // 0x1d6000: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d6000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1d6004:
    // 0x1d6004: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1d6004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d6008:
    // 0x1d6008: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1d6008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d600c:
    // 0x1d600c: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1d600cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_1d6010:
    // 0x1d6010: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1d6010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_1d6014:
    // 0x1d6014: 0x40f809  jalr        $v0
label_1d6018:
    if (ctx->pc == 0x1D6018u) {
        ctx->pc = 0x1D6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6014u;
        // 0x1d6018: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D601Cu;
        goto label_1d601c;
    }
    ctx->pc = 0x1D6014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D601Cu);
        ctx->pc = 0x1D6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6014u;
        // 0x1d6018: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6014u, 0x1D601Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D601Cu;
label_1d601c:
    // 0x1d601c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d601cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d6020:
    // 0x1d6020: 0xc04444c  jal         func_111130
label_1d6024:
    if (ctx->pc == 0x1D6024u) {
        ctx->pc = 0x1D6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6020u;
        // 0x1d6024: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6028u;
        goto label_1d6028;
    }
    ctx->pc = 0x1D6020u;
    SET_GPR_U32(ctx, 31, 0x1D6028u);
    ctx->pc = 0x1D6024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6020u;
    // 0x1d6024: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D6020u, 0x1D6028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6028u;
label_1d6028:
    // 0x1d6028: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d6028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d602c:
    // 0x1d602c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d602cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d6030:
    // 0x1d6030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d6030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6034:
    // 0x1d6034: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d6034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6038:
    // 0x1d6038: 0xc043f36  jal         func_10FCD8
label_1d603c:
    if (ctx->pc == 0x1D603Cu) {
        ctx->pc = 0x1D603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6038u;
        // 0x1d603c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6040u;
        goto label_1d6040;
    }
    ctx->pc = 0x1D6038u;
    SET_GPR_U32(ctx, 31, 0x1D6040u);
    ctx->pc = 0x1D603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6038u;
    // 0x1d603c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D6038u, 0x1D6040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6040u;
label_1d6040:
    // 0x1d6040: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d6044:
    if (ctx->pc == 0x1D6044u) {
        ctx->pc = 0x1D6044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6040u;
        // 0x1d6044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6048u;
        goto label_1d6048;
    }
    ctx->pc = 0x1D6040u;
    {
        const bool branch_taken_0x1d6040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6040u;
        // 0x1d6044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6040) {
            ctx->pc = 0x1D604Cu;
            goto label_1d604c;
        }
    }
    ctx->pc = 0x1D6048u;
label_1d6048:
    // 0x1d6048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d604c:
    // 0x1d604c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d604cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d6050:
    // 0x1d6050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6054:
    // 0x1d6054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6058:
    // 0x1d6058: 0x3e00008  jr          $ra
label_1d605c:
    if (ctx->pc == 0x1D605Cu) {
        ctx->pc = 0x1D605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6058u;
        // 0x1d605c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6060u;
        goto label_fallthrough_0x1d6058;
    }
    ctx->pc = 0x1D6058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6058u;
        // 0x1d605c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d6058:
    ctx->pc = 0x1D6060u;
}
