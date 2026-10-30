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

// Function: sub_001F4D58
// Address: 0x1f4d58 - 0x1f4fc8
void sub_001F4D58_0x1f4d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4D58_0x1f4d58");
#endif

    switch (ctx->pc) {
        case 0x1f4d58u: goto label_1f4d58;
        case 0x1f4d5cu: goto label_1f4d5c;
        case 0x1f4d60u: goto label_1f4d60;
        case 0x1f4d64u: goto label_1f4d64;
        case 0x1f4d68u: goto label_1f4d68;
        case 0x1f4d6cu: goto label_1f4d6c;
        case 0x1f4d70u: goto label_1f4d70;
        case 0x1f4d74u: goto label_1f4d74;
        case 0x1f4d78u: goto label_1f4d78;
        case 0x1f4d7cu: goto label_1f4d7c;
        case 0x1f4d80u: goto label_1f4d80;
        case 0x1f4d84u: goto label_1f4d84;
        case 0x1f4d88u: goto label_1f4d88;
        case 0x1f4d8cu: goto label_1f4d8c;
        case 0x1f4d90u: goto label_1f4d90;
        case 0x1f4d94u: goto label_1f4d94;
        case 0x1f4d98u: goto label_1f4d98;
        case 0x1f4d9cu: goto label_1f4d9c;
        case 0x1f4da0u: goto label_1f4da0;
        case 0x1f4da4u: goto label_1f4da4;
        case 0x1f4da8u: goto label_1f4da8;
        case 0x1f4dacu: goto label_1f4dac;
        case 0x1f4db0u: goto label_1f4db0;
        case 0x1f4db4u: goto label_1f4db4;
        case 0x1f4db8u: goto label_1f4db8;
        case 0x1f4dbcu: goto label_1f4dbc;
        case 0x1f4dc0u: goto label_1f4dc0;
        case 0x1f4dc4u: goto label_1f4dc4;
        case 0x1f4dc8u: goto label_1f4dc8;
        case 0x1f4dccu: goto label_1f4dcc;
        case 0x1f4dd0u: goto label_1f4dd0;
        case 0x1f4dd4u: goto label_1f4dd4;
        case 0x1f4dd8u: goto label_1f4dd8;
        case 0x1f4ddcu: goto label_1f4ddc;
        case 0x1f4de0u: goto label_1f4de0;
        case 0x1f4de4u: goto label_1f4de4;
        case 0x1f4de8u: goto label_1f4de8;
        case 0x1f4decu: goto label_1f4dec;
        case 0x1f4df0u: goto label_1f4df0;
        case 0x1f4df4u: goto label_1f4df4;
        case 0x1f4df8u: goto label_1f4df8;
        case 0x1f4dfcu: goto label_1f4dfc;
        case 0x1f4e00u: goto label_1f4e00;
        case 0x1f4e04u: goto label_1f4e04;
        case 0x1f4e08u: goto label_1f4e08;
        case 0x1f4e0cu: goto label_1f4e0c;
        case 0x1f4e10u: goto label_1f4e10;
        case 0x1f4e14u: goto label_1f4e14;
        case 0x1f4e18u: goto label_1f4e18;
        case 0x1f4e1cu: goto label_1f4e1c;
        case 0x1f4e20u: goto label_1f4e20;
        case 0x1f4e24u: goto label_1f4e24;
        case 0x1f4e28u: goto label_1f4e28;
        case 0x1f4e2cu: goto label_1f4e2c;
        case 0x1f4e30u: goto label_1f4e30;
        case 0x1f4e34u: goto label_1f4e34;
        case 0x1f4e38u: goto label_1f4e38;
        case 0x1f4e3cu: goto label_1f4e3c;
        case 0x1f4e40u: goto label_1f4e40;
        case 0x1f4e44u: goto label_1f4e44;
        case 0x1f4e48u: goto label_1f4e48;
        case 0x1f4e4cu: goto label_1f4e4c;
        case 0x1f4e50u: goto label_1f4e50;
        case 0x1f4e54u: goto label_1f4e54;
        case 0x1f4e58u: goto label_1f4e58;
        case 0x1f4e5cu: goto label_1f4e5c;
        case 0x1f4e60u: goto label_1f4e60;
        case 0x1f4e64u: goto label_1f4e64;
        case 0x1f4e68u: goto label_1f4e68;
        case 0x1f4e6cu: goto label_1f4e6c;
        case 0x1f4e70u: goto label_1f4e70;
        case 0x1f4e74u: goto label_1f4e74;
        case 0x1f4e78u: goto label_1f4e78;
        case 0x1f4e7cu: goto label_1f4e7c;
        case 0x1f4e80u: goto label_1f4e80;
        case 0x1f4e84u: goto label_1f4e84;
        case 0x1f4e88u: goto label_1f4e88;
        case 0x1f4e8cu: goto label_1f4e8c;
        case 0x1f4e90u: goto label_1f4e90;
        case 0x1f4e94u: goto label_1f4e94;
        case 0x1f4e98u: goto label_1f4e98;
        case 0x1f4e9cu: goto label_1f4e9c;
        case 0x1f4ea0u: goto label_1f4ea0;
        case 0x1f4ea4u: goto label_1f4ea4;
        case 0x1f4ea8u: goto label_1f4ea8;
        case 0x1f4eacu: goto label_1f4eac;
        case 0x1f4eb0u: goto label_1f4eb0;
        case 0x1f4eb4u: goto label_1f4eb4;
        case 0x1f4eb8u: goto label_1f4eb8;
        case 0x1f4ebcu: goto label_1f4ebc;
        case 0x1f4ec0u: goto label_1f4ec0;
        case 0x1f4ec4u: goto label_1f4ec4;
        case 0x1f4ec8u: goto label_1f4ec8;
        case 0x1f4eccu: goto label_1f4ecc;
        case 0x1f4ed0u: goto label_1f4ed0;
        case 0x1f4ed4u: goto label_1f4ed4;
        case 0x1f4ed8u: goto label_1f4ed8;
        case 0x1f4edcu: goto label_1f4edc;
        case 0x1f4ee0u: goto label_1f4ee0;
        case 0x1f4ee4u: goto label_1f4ee4;
        case 0x1f4ee8u: goto label_1f4ee8;
        case 0x1f4eecu: goto label_1f4eec;
        case 0x1f4ef0u: goto label_1f4ef0;
        case 0x1f4ef4u: goto label_1f4ef4;
        case 0x1f4ef8u: goto label_1f4ef8;
        case 0x1f4efcu: goto label_1f4efc;
        case 0x1f4f00u: goto label_1f4f00;
        case 0x1f4f04u: goto label_1f4f04;
        case 0x1f4f08u: goto label_1f4f08;
        case 0x1f4f0cu: goto label_1f4f0c;
        case 0x1f4f10u: goto label_1f4f10;
        case 0x1f4f14u: goto label_1f4f14;
        case 0x1f4f18u: goto label_1f4f18;
        case 0x1f4f1cu: goto label_1f4f1c;
        case 0x1f4f20u: goto label_1f4f20;
        case 0x1f4f24u: goto label_1f4f24;
        case 0x1f4f28u: goto label_1f4f28;
        case 0x1f4f2cu: goto label_1f4f2c;
        case 0x1f4f30u: goto label_1f4f30;
        case 0x1f4f34u: goto label_1f4f34;
        case 0x1f4f38u: goto label_1f4f38;
        case 0x1f4f3cu: goto label_1f4f3c;
        case 0x1f4f40u: goto label_1f4f40;
        case 0x1f4f44u: goto label_1f4f44;
        case 0x1f4f48u: goto label_1f4f48;
        case 0x1f4f4cu: goto label_1f4f4c;
        case 0x1f4f50u: goto label_1f4f50;
        case 0x1f4f54u: goto label_1f4f54;
        case 0x1f4f58u: goto label_1f4f58;
        case 0x1f4f5cu: goto label_1f4f5c;
        case 0x1f4f60u: goto label_1f4f60;
        case 0x1f4f64u: goto label_1f4f64;
        case 0x1f4f68u: goto label_1f4f68;
        case 0x1f4f6cu: goto label_1f4f6c;
        case 0x1f4f70u: goto label_1f4f70;
        case 0x1f4f74u: goto label_1f4f74;
        case 0x1f4f78u: goto label_1f4f78;
        case 0x1f4f7cu: goto label_1f4f7c;
        case 0x1f4f80u: goto label_1f4f80;
        case 0x1f4f84u: goto label_1f4f84;
        case 0x1f4f88u: goto label_1f4f88;
        case 0x1f4f8cu: goto label_1f4f8c;
        case 0x1f4f90u: goto label_1f4f90;
        case 0x1f4f94u: goto label_1f4f94;
        case 0x1f4f98u: goto label_1f4f98;
        case 0x1f4f9cu: goto label_1f4f9c;
        case 0x1f4fa0u: goto label_1f4fa0;
        case 0x1f4fa4u: goto label_1f4fa4;
        case 0x1f4fa8u: goto label_1f4fa8;
        case 0x1f4facu: goto label_1f4fac;
        case 0x1f4fb0u: goto label_1f4fb0;
        case 0x1f4fb4u: goto label_1f4fb4;
        case 0x1f4fb8u: goto label_1f4fb8;
        case 0x1f4fbcu: goto label_1f4fbc;
        case 0x1f4fc0u: goto label_1f4fc0;
        case 0x1f4fc4u: goto label_1f4fc4;
        default: break;
    }

    ctx->pc = 0x1f4d58u;

label_1f4d58:
    // 0x1f4d58: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f4d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1f4d5c:
    // 0x1f4d5c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1f4d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1f4d60:
    // 0x1f4d60: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1f4d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1f4d64:
    // 0x1f4d64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f4d64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d68:
    // 0x1f4d68: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1f4d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1f4d6c:
    // 0x1f4d6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f4d6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d70:
    // 0x1f4d70: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1f4d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1f4d74:
    // 0x1f4d74: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1f4d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1f4d78:
    // 0x1f4d78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f4d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f4d7c:
    // 0x1f4d7c: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1f4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_1f4d80:
    // 0x1f4d80: 0xac4000c4  sw          $zero, 0xC4($v0)
    ctx->pc = 0x1f4d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
label_1f4d84:
    // 0x1f4d84: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x1f4d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1f4d88:
    // 0x1f4d88: 0x10730086  beq         $v1, $s3, . + 4 + (0x86 << 2)
label_1f4d8c:
    if (ctx->pc == 0x1F4D8Cu) {
        ctx->pc = 0x1F4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D88u;
        // 0x1f4d8c: 0x2e620009  sltiu       $v0, $s3, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4D90u;
        goto label_1f4d90;
    }
    ctx->pc = 0x1F4D88u;
    {
        const bool branch_taken_0x1f4d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1F4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D88u;
        // 0x1f4d8c: 0x2e620009  sltiu       $v0, $s3, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4d88) {
            ctx->pc = 0x1F4FA4u;
            goto label_1f4fa4;
        }
    }
    ctx->pc = 0x1F4D90u;
label_1f4d90:
    // 0x1f4d90: 0x50400085  beql        $v0, $zero, . + 4 + (0x85 << 2)
label_1f4d94:
    if (ctx->pc == 0x1F4D94u) {
        ctx->pc = 0x1F4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D90u;
        // 0x1f4d94: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4D98u;
        goto label_1f4d98;
    }
    ctx->pc = 0x1F4D90u;
    {
        const bool branch_taken_0x1f4d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4d90) {
            ctx->pc = 0x1F4D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4D90u;
            // 0x1f4d94: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4FA8u;
            goto label_1f4fa8;
        }
    }
    ctx->pc = 0x1F4D98u;
label_1f4d98:
    // 0x1f4d98: 0xc07d2e2  jal         func_1F4B88
label_1f4d9c:
    if (ctx->pc == 0x1F4D9Cu) {
        ctx->pc = 0x1F4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D98u;
        // 0x1f4d9c: 0xae5300ac  sw          $s3, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4DA0u;
        goto label_1f4da0;
    }
    ctx->pc = 0x1F4D98u;
    SET_GPR_U32(ctx, 31, 0x1F4DA0u);
    ctx->pc = 0x1F4D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4D98u;
    // 0x1f4d9c: 0xae5300ac  sw          $s3, 0xAC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x1F4D98u, 0x1F4DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4DA0u;
label_1f4da0:
    // 0x1f4da0: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x1f4da0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_1f4da4:
    // 0x1f4da4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f4da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4da8:
    // 0x1f4da8: 0x2610ef80  addiu       $s0, $s0, -0x1080
    ctx->pc = 0x1f4da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963072));
label_1f4dac:
    // 0x1f4dac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f4dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4db0:
    // 0x1f4db0: 0xc080b0e  jal         func_202C38
label_1f4db4:
    if (ctx->pc == 0x1F4DB4u) {
        ctx->pc = 0x1F4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DB0u;
        // 0x1f4db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4DB8u;
        goto label_1f4db8;
    }
    ctx->pc = 0x1F4DB0u;
    SET_GPR_U32(ctx, 31, 0x1F4DB8u);
    ctx->pc = 0x1F4DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4DB0u;
    // 0x1f4db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C38u, 0x1F4DB0u, 0x1F4DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4DB8u;
label_1f4db8:
    // 0x1f4db8: 0xc080b0c  jal         func_202C30
label_1f4dbc:
    if (ctx->pc == 0x1F4DBCu) {
        ctx->pc = 0x1F4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DB8u;
        // 0x1f4dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4DC0u;
        goto label_1f4dc0;
    }
    ctx->pc = 0x1F4DB8u;
    SET_GPR_U32(ctx, 31, 0x1F4DC0u);
    ctx->pc = 0x1F4DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4DB8u;
    // 0x1f4dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C30u, 0x1F4DB8u, 0x1F4DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4DC0u;
label_1f4dc0:
    // 0x1f4dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4dc4:
    // 0x1f4dc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f4dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4dc8:
    // 0x1f4dc8: 0xc080b38  jal         func_202CE0
label_1f4dcc:
    if (ctx->pc == 0x1F4DCCu) {
        ctx->pc = 0x1F4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DC8u;
        // 0x1f4dcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4DD0u;
        goto label_1f4dd0;
    }
    ctx->pc = 0x1F4DC8u;
    SET_GPR_U32(ctx, 31, 0x1F4DD0u);
    ctx->pc = 0x1F4DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4DC8u;
    // 0x1f4dcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CE0u, 0x1F4DC8u, 0x1F4DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4DD0u;
label_1f4dd0:
    // 0x1f4dd0: 0xc07f80e  jal         func_1FE038
label_1f4dd4:
    if (ctx->pc == 0x1F4DD4u) {
        ctx->pc = 0x1F4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DD0u;
        // 0x1f4dd4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4DD8u;
        goto label_1f4dd8;
    }
    ctx->pc = 0x1F4DD0u;
    SET_GPR_U32(ctx, 31, 0x1F4DD8u);
    ctx->pc = 0x1F4DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4DD0u;
    // 0x1f4dd4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE038u, 0x1F4DD0u, 0x1F4DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4DD8u;
label_1f4dd8:
    // 0x1f4dd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f4dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ddc:
    // 0x1f4ddc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f4ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f4de0:
    // 0x1f4de0: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x1f4de0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f4de4:
    // 0x1f4de4: 0xa7b00000  sh          $s0, 0x0($sp)
    ctx->pc = 0x1f4de4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 16));
label_1f4de8:
    // 0x1f4de8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f4de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4dec:
    // 0x1f4dec: 0xc13a798  jal         func_4E9E60
label_1f4df0:
    if (ctx->pc == 0x1F4DF0u) {
        ctx->pc = 0x1F4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DECu;
        // 0x1f4df0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4DF4u;
        goto label_1f4df4;
    }
    ctx->pc = 0x1F4DECu;
    SET_GPR_U32(ctx, 31, 0x1F4DF4u);
    ctx->pc = 0x1F4DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4DECu;
    // 0x1f4df0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9E60u, 0x1F4DECu, 0x1F4DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4DF4u;
label_1f4df4:
    // 0x1f4df4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1f4df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f4df8:
    // 0x1f4df8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f4df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4dfc:
    // 0x1f4dfc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f4dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4e00:
    // 0x1f4e00: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1f4e04:
    if (ctx->pc == 0x1F4E04u) {
        ctx->pc = 0x1F4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E00u;
        // 0x1f4e04: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4E08u;
        goto label_1f4e08;
    }
    ctx->pc = 0x1F4E00u;
    {
        const bool branch_taken_0x1f4e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E00u;
        // 0x1f4e04: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e00) {
            ctx->pc = 0x1F4E1Cu;
            goto label_1f4e1c;
        }
    }
    ctx->pc = 0x1F4E08u;
label_1f4e08:
    // 0x1f4e08: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x1f4e08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1f4e0c:
    // 0x1f4e0c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x1f4e0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4e10:
    // 0x1f4e10: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1f4e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f4e14:
    // 0x1f4e14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1f4e18:
    if (ctx->pc == 0x1F4E18u) {
        ctx->pc = 0x1F4E1Cu;
        goto label_1f4e1c;
    }
    ctx->pc = 0x1F4E14u;
    {
        const bool branch_taken_0x1f4e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4e14) {
            ctx->pc = 0x1F4E20u;
            goto label_1f4e20;
        }
    }
    ctx->pc = 0x1F4E1Cu;
label_1f4e1c:
    // 0x1f4e1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f4e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4e20:
    // 0x1f4e20: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1f4e24:
    if (ctx->pc == 0x1F4E24u) {
        ctx->pc = 0x1F4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E20u;
        // 0x1f4e24: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4E28u;
        goto label_1f4e28;
    }
    ctx->pc = 0x1F4E20u;
    {
        const bool branch_taken_0x1f4e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E20u;
        // 0x1f4e24: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e20) {
            ctx->pc = 0x1F4E58u;
            goto label_1f4e58;
        }
    }
    ctx->pc = 0x1F4E28u;
label_1f4e28:
    // 0x1f4e28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f4e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e2c:
    // 0x1f4e2c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f4e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f4e30:
    // 0x1f4e30: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1f4e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1f4e34:
    // 0x1f4e34: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1f4e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1f4e38:
    // 0x1f4e38: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1f4e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f4e3c:
    // 0x1f4e3c: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x1f4e3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_1f4e40:
    // 0x1f4e40: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1f4e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_1f4e44:
    // 0x1f4e44: 0xa7a20050  sh          $v0, 0x50($sp)
    ctx->pc = 0x1f4e44u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 2));
label_1f4e48:
    // 0x1f4e48: 0xc13a8f2  jal         func_4EA3C8
label_1f4e4c:
    if (ctx->pc == 0x1F4E4Cu) {
        ctx->pc = 0x1F4E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E48u;
        // 0x1f4e4c: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4E50u;
        goto label_1f4e50;
    }
    ctx->pc = 0x1F4E48u;
    SET_GPR_U32(ctx, 31, 0x1F4E50u);
    ctx->pc = 0x1F4E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4E48u;
    // 0x1f4e4c: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA3C8u, 0x1F4E48u, 0x1F4E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4E50u;
label_1f4e50:
    // 0x1f4e50: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f4e54:
    // 0x1f4e54: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f4e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f4e58:
    // 0x1f4e58: 0x8e470098  lw          $a3, 0x98($s2)
    ctx->pc = 0x1f4e58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1f4e5c:
    // 0x1f4e5c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1f4e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1f4e60:
    // 0x1f4e60: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f4e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4e64:
    // 0x1f4e64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f4e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4e68:
    // 0x1f4e68: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f4e6c:
    // 0x1f4e6c: 0xc48cf42c  lwc1        $f12, -0xBD4($a0)
    ctx->pc = 0x1f4e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f4e70:
    // 0x1f4e70: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x1f4e70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1f4e74:
    // 0x1f4e74: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1f4e74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1f4e78:
    // 0x1f4e78: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1f4e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4e7c:
    // 0x1f4e7c: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1f4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1f4e80:
    // 0x1f4e80: 0x60f809  jalr        $v1
label_1f4e84:
    if (ctx->pc == 0x1F4E84u) {
        ctx->pc = 0x1F4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E80u;
        // 0x1f4e84: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4E88u;
        goto label_1f4e88;
    }
    ctx->pc = 0x1F4E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4E88u);
        ctx->pc = 0x1F4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E80u;
        // 0x1f4e84: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4E80u, 0x1F4E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4E88u;
label_1f4e88:
    // 0x1f4e88: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x1f4e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f4e8c:
    // 0x1f4e8c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1f4e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1f4e90:
    // 0x1f4e90: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f4e90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f4e94:
    // 0x1f4e94: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f4e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f4e98:
    // 0x1f4e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4e9c:
    // 0x1f4e9c: 0x0  nop
    ctx->pc = 0x1f4e9cu;
    // NOP
label_1f4ea0:
    // 0x1f4ea0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f4ea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f4ea4:
    // 0x1f4ea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f4ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f4ea8:
    // 0x1f4ea8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f4ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f4eac:
    // 0x1f4eac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f4eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f4eb0:
    // 0x1f4eb0: 0x8e430178  lw          $v1, 0x178($s2)
    ctx->pc = 0x1f4eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
label_1f4eb4:
    // 0x1f4eb4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1f4eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1f4eb8:
    // 0x1f4eb8: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1f4eb8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_1f4ebc:
    // 0x1f4ebc: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x1f4ebcu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
label_1f4ec0:
    // 0x1f4ec0: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x1f4ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_1f4ec4:
    // 0x1f4ec4: 0xc07f952  jal         func_1FE548
label_1f4ec8:
    if (ctx->pc == 0x1F4EC8u) {
        ctx->pc = 0x1F4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4EC4u;
        // 0x1f4ec8: 0x9204000d  lbu         $a0, 0xD($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4ECCu;
        goto label_1f4ecc;
    }
    ctx->pc = 0x1F4EC4u;
    SET_GPR_U32(ctx, 31, 0x1F4ECCu);
    ctx->pc = 0x1F4EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4EC4u;
    // 0x1f4ec8: 0x9204000d  lbu         $a0, 0xD($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE548u, 0x1F4EC4u, 0x1F4ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4ECCu;
label_1f4ecc:
    // 0x1f4ecc: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x1f4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1f4ed0:
    // 0x1f4ed0: 0xc073478  jal         func_1CD1E0
label_1f4ed4:
    if (ctx->pc == 0x1F4ED4u) {
        ctx->pc = 0x1F4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4ED0u;
        // 0x1f4ed4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4ED8u;
        goto label_1f4ed8;
    }
    ctx->pc = 0x1F4ED0u;
    SET_GPR_U32(ctx, 31, 0x1F4ED8u);
    ctx->pc = 0x1F4ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4ED0u;
    // 0x1f4ed4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1F4ED0u, 0x1F4ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4ED8u;
label_1f4ed8:
    // 0x1f4ed8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1f4ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f4edc:
    // 0x1f4edc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f4edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ee0:
    // 0x1f4ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ee4:
    // 0x1f4ee4: 0xc07d316  jal         func_1F4C58
label_1f4ee8:
    if (ctx->pc == 0x1F4EE8u) {
        ctx->pc = 0x1F4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4EE4u;
        // 0x1f4ee8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4EECu;
        goto label_1f4eec;
    }
    ctx->pc = 0x1F4EE4u;
    SET_GPR_U32(ctx, 31, 0x1F4EECu);
    ctx->pc = 0x1F4EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4EE4u;
    // 0x1f4ee8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C58u, 0x1F4EE4u, 0x1F4EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4EECu;
label_1f4eec:
    // 0x1f4eec: 0x8e470170  lw          $a3, 0x170($s2)
    ctx->pc = 0x1f4eecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_1f4ef0:
    // 0x1f4ef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ef4:
    // 0x1f4ef4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f4ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4ef8:
    // 0x1f4ef8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f4efc:
    // 0x1f4efc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f4efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f4f00:
    // 0x1f4f00: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f4f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f4f04:
    // 0x1f4f04: 0x60f809  jalr        $v1
label_1f4f08:
    if (ctx->pc == 0x1F4F08u) {
        ctx->pc = 0x1F4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F04u;
        // 0x1f4f08: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4F0Cu;
        goto label_1f4f0c;
    }
    ctx->pc = 0x1F4F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4F0Cu);
        ctx->pc = 0x1F4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F04u;
        // 0x1f4f08: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4F04u, 0x1F4F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4F0Cu;
label_1f4f0c:
    // 0x1f4f0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f4f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f4f10:
    // 0x1f4f10: 0x8e470098  lw          $a3, 0x98($s2)
    ctx->pc = 0x1f4f10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1f4f14:
    // 0x1f4f14: 0xc440f404  lwc1        $f0, -0xBFC($v0)
    ctx->pc = 0x1f4f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4f18:
    // 0x1f4f18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f1c:
    // 0x1f4f1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f4f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4f20:
    // 0x1f4f20: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1f4f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1f4f24:
    // 0x1f4f24: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f4f28:
    // 0x1f4f28: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f4f28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f4f2c:
    // 0x1f4f2c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f4f30:
    // 0x1f4f30: 0x60f809  jalr        $v1
label_1f4f34:
    if (ctx->pc == 0x1F4F34u) {
        ctx->pc = 0x1F4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F30u;
        // 0x1f4f34: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4F38u;
        goto label_1f4f38;
    }
    ctx->pc = 0x1F4F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4F38u);
        ctx->pc = 0x1F4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F30u;
        // 0x1f4f34: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4F30u, 0x1F4F38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4F38u;
label_1f4f38:
    // 0x1f4f38: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f4f3c:
    // 0x1f4f3c: 0x8e470174  lw          $a3, 0x174($s2)
    ctx->pc = 0x1f4f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1f4f40:
    // 0x1f4f40: 0xc440f408  lwc1        $f0, -0xBF8($v0)
    ctx->pc = 0x1f4f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4f44:
    // 0x1f4f44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f48:
    // 0x1f4f48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f4f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4f4c:
    // 0x1f4f4c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1f4f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1f4f50:
    // 0x1f4f50: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f4f54:
    // 0x1f4f54: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f4f54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f4f58:
    // 0x1f4f58: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f4f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f4f5c:
    // 0x1f4f5c: 0x60f809  jalr        $v1
label_1f4f60:
    if (ctx->pc == 0x1F4F60u) {
        ctx->pc = 0x1F4F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F5Cu;
        // 0x1f4f60: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4F64u;
        goto label_1f4f64;
    }
    ctx->pc = 0x1F4F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4F64u);
        ctx->pc = 0x1F4F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F5Cu;
        // 0x1f4f60: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4F5Cu, 0x1F4F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4F64u;
label_1f4f64:
    // 0x1f4f64: 0x8e440178  lw          $a0, 0x178($s2)
    ctx->pc = 0x1f4f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
label_1f4f68:
    // 0x1f4f68: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f4f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f4f6c:
    // 0x1f4f6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f4f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f4f70:
    // 0x1f4f70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f4f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f4f74:
    // 0x1f4f74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f4f78:
    // 0x1f4f78: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1f4f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4f7c:
    // 0x1f4f7c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1f4f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4f80:
    // 0x1f4f80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f4f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1f4f84:
    // 0x1f4f84: 0xc463f40c  lwc1        $f3, -0xBF4($v1)
    ctx->pc = 0x1f4f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f4f88:
    // 0x1f4f88: 0xc442f410  lwc1        $f2, -0xBF0($v0)
    ctx->pc = 0x1f4f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f4f8c:
    // 0x1f4f8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f4f8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f4f90:
    // 0x1f4f90: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1f4f90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1f4f94:
    // 0x1f4f94: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f4f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1f4f98:
    // 0x1f4f98: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1f4f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1f4f9c:
    // 0x1f4f9c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1f4f9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4fa0:
    // 0x1f4fa0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x1f4fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_1f4fa4:
    // 0x1f4fa4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1f4fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1f4fa8:
    // 0x1f4fa8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1f4fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1f4fac:
    // 0x1f4fac: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1f4facu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f4fb0:
    // 0x1f4fb0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1f4fb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f4fb4:
    // 0x1f4fb4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1f4fb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f4fb8:
    // 0x1f4fb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f4fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f4fbc:
    // 0x1f4fbc: 0x3e00008  jr          $ra
label_1f4fc0:
    if (ctx->pc == 0x1F4FC0u) {
        ctx->pc = 0x1F4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FBCu;
        // 0x1f4fc0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4FC4u;
        goto label_1f4fc4;
    }
    ctx->pc = 0x1F4FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FBCu;
        // 0x1f4fc0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4FC4u;
label_1f4fc4:
    // 0x1f4fc4: 0x0  nop
    ctx->pc = 0x1f4fc4u;
    // NOP
    ctx->pc = 0x1f4fc8u;
}
