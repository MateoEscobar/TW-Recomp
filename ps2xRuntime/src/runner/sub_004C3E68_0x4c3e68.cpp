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

// Function: sub_004C3E68
// Address: 0x4c3e68 - 0x4c4028
void sub_004C3E68_0x4c3e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C3E68_0x4c3e68");
#endif

    switch (ctx->pc) {
        case 0x4c3e68u: goto label_4c3e68;
        case 0x4c3e6cu: goto label_4c3e6c;
        case 0x4c3e70u: goto label_4c3e70;
        case 0x4c3e74u: goto label_4c3e74;
        case 0x4c3e78u: goto label_4c3e78;
        case 0x4c3e7cu: goto label_4c3e7c;
        case 0x4c3e80u: goto label_4c3e80;
        case 0x4c3e84u: goto label_4c3e84;
        case 0x4c3e88u: goto label_4c3e88;
        case 0x4c3e8cu: goto label_4c3e8c;
        case 0x4c3e90u: goto label_4c3e90;
        case 0x4c3e94u: goto label_4c3e94;
        case 0x4c3e98u: goto label_4c3e98;
        case 0x4c3e9cu: goto label_4c3e9c;
        case 0x4c3ea0u: goto label_4c3ea0;
        case 0x4c3ea4u: goto label_4c3ea4;
        case 0x4c3ea8u: goto label_4c3ea8;
        case 0x4c3eacu: goto label_4c3eac;
        case 0x4c3eb0u: goto label_4c3eb0;
        case 0x4c3eb4u: goto label_4c3eb4;
        case 0x4c3eb8u: goto label_4c3eb8;
        case 0x4c3ebcu: goto label_4c3ebc;
        case 0x4c3ec0u: goto label_4c3ec0;
        case 0x4c3ec4u: goto label_4c3ec4;
        case 0x4c3ec8u: goto label_4c3ec8;
        case 0x4c3eccu: goto label_4c3ecc;
        case 0x4c3ed0u: goto label_4c3ed0;
        case 0x4c3ed4u: goto label_4c3ed4;
        case 0x4c3ed8u: goto label_4c3ed8;
        case 0x4c3edcu: goto label_4c3edc;
        case 0x4c3ee0u: goto label_4c3ee0;
        case 0x4c3ee4u: goto label_4c3ee4;
        case 0x4c3ee8u: goto label_4c3ee8;
        case 0x4c3eecu: goto label_4c3eec;
        case 0x4c3ef0u: goto label_4c3ef0;
        case 0x4c3ef4u: goto label_4c3ef4;
        case 0x4c3ef8u: goto label_4c3ef8;
        case 0x4c3efcu: goto label_4c3efc;
        case 0x4c3f00u: goto label_4c3f00;
        case 0x4c3f04u: goto label_4c3f04;
        case 0x4c3f08u: goto label_4c3f08;
        case 0x4c3f0cu: goto label_4c3f0c;
        case 0x4c3f10u: goto label_4c3f10;
        case 0x4c3f14u: goto label_4c3f14;
        case 0x4c3f18u: goto label_4c3f18;
        case 0x4c3f1cu: goto label_4c3f1c;
        case 0x4c3f20u: goto label_4c3f20;
        case 0x4c3f24u: goto label_4c3f24;
        case 0x4c3f28u: goto label_4c3f28;
        case 0x4c3f2cu: goto label_4c3f2c;
        case 0x4c3f30u: goto label_4c3f30;
        case 0x4c3f34u: goto label_4c3f34;
        case 0x4c3f38u: goto label_4c3f38;
        case 0x4c3f3cu: goto label_4c3f3c;
        case 0x4c3f40u: goto label_4c3f40;
        case 0x4c3f44u: goto label_4c3f44;
        case 0x4c3f48u: goto label_4c3f48;
        case 0x4c3f4cu: goto label_4c3f4c;
        case 0x4c3f50u: goto label_4c3f50;
        case 0x4c3f54u: goto label_4c3f54;
        case 0x4c3f58u: goto label_4c3f58;
        case 0x4c3f5cu: goto label_4c3f5c;
        case 0x4c3f60u: goto label_4c3f60;
        case 0x4c3f64u: goto label_4c3f64;
        case 0x4c3f68u: goto label_4c3f68;
        case 0x4c3f6cu: goto label_4c3f6c;
        case 0x4c3f70u: goto label_4c3f70;
        case 0x4c3f74u: goto label_4c3f74;
        case 0x4c3f78u: goto label_4c3f78;
        case 0x4c3f7cu: goto label_4c3f7c;
        case 0x4c3f80u: goto label_4c3f80;
        case 0x4c3f84u: goto label_4c3f84;
        case 0x4c3f88u: goto label_4c3f88;
        case 0x4c3f8cu: goto label_4c3f8c;
        case 0x4c3f90u: goto label_4c3f90;
        case 0x4c3f94u: goto label_4c3f94;
        case 0x4c3f98u: goto label_4c3f98;
        case 0x4c3f9cu: goto label_4c3f9c;
        case 0x4c3fa0u: goto label_4c3fa0;
        case 0x4c3fa4u: goto label_4c3fa4;
        case 0x4c3fa8u: goto label_4c3fa8;
        case 0x4c3facu: goto label_4c3fac;
        case 0x4c3fb0u: goto label_4c3fb0;
        case 0x4c3fb4u: goto label_4c3fb4;
        case 0x4c3fb8u: goto label_4c3fb8;
        case 0x4c3fbcu: goto label_4c3fbc;
        case 0x4c3fc0u: goto label_4c3fc0;
        case 0x4c3fc4u: goto label_4c3fc4;
        case 0x4c3fc8u: goto label_4c3fc8;
        case 0x4c3fccu: goto label_4c3fcc;
        case 0x4c3fd0u: goto label_4c3fd0;
        case 0x4c3fd4u: goto label_4c3fd4;
        case 0x4c3fd8u: goto label_4c3fd8;
        case 0x4c3fdcu: goto label_4c3fdc;
        case 0x4c3fe0u: goto label_4c3fe0;
        case 0x4c3fe4u: goto label_4c3fe4;
        case 0x4c3fe8u: goto label_4c3fe8;
        case 0x4c3fecu: goto label_4c3fec;
        case 0x4c3ff0u: goto label_4c3ff0;
        case 0x4c3ff4u: goto label_4c3ff4;
        case 0x4c3ff8u: goto label_4c3ff8;
        case 0x4c3ffcu: goto label_4c3ffc;
        case 0x4c4000u: goto label_4c4000;
        case 0x4c4004u: goto label_4c4004;
        case 0x4c4008u: goto label_4c4008;
        case 0x4c400cu: goto label_4c400c;
        case 0x4c4010u: goto label_4c4010;
        case 0x4c4014u: goto label_4c4014;
        case 0x4c4018u: goto label_4c4018;
        case 0x4c401cu: goto label_4c401c;
        case 0x4c4020u: goto label_4c4020;
        case 0x4c4024u: goto label_4c4024;
        default: break;
    }

    ctx->pc = 0x4c3e68u;

label_4c3e68:
    // 0x4c3e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c3e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c3e6c:
    // 0x4c3e6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c3e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4c3e70:
    // 0x4c3e70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c3e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4c3e74:
    // 0x4c3e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c3e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c3e78:
    // 0x4c3e78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c3e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4c3e7c:
    // 0x4c3e7c: 0x12000064  beqz        $s0, . + 4 + (0x64 << 2)
label_4c3e80:
    if (ctx->pc == 0x4C3E80u) {
        ctx->pc = 0x4C3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E7Cu;
        // 0x4c3e80: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3E84u;
        goto label_4c3e84;
    }
    ctx->pc = 0x4C3E7Cu;
    {
        const bool branch_taken_0x4c3e7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E7Cu;
        // 0x4c3e80: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3e7c) {
            ctx->pc = 0x4C4010u;
            goto label_4c4010;
        }
    }
    ctx->pc = 0x4C3E84u;
label_4c3e84:
    // 0x4c3e84: 0xc13109c  jal         func_4C4270
label_4c3e88:
    if (ctx->pc == 0x4C3E88u) {
        ctx->pc = 0x4C3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E84u;
        // 0x4c3e88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3E8Cu;
        goto label_4c3e8c;
    }
    ctx->pc = 0x4C3E84u;
    SET_GPR_U32(ctx, 31, 0x4C3E8Cu);
    ctx->pc = 0x4C3E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3E84u;
    // 0x4c3e88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4270u, 0x4C3E84u, 0x4C3E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3E8Cu;
label_4c3e8c:
    // 0x4c3e8c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x4c3e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4c3e90:
    // 0x4c3e90: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x4c3e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_4c3e94:
    // 0x4c3e94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c3e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c3e98:
    // 0x4c3e98: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4c3e9c:
    if (ctx->pc == 0x4C3E9Cu) {
        ctx->pc = 0x4C3E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E98u;
        // 0x4c3e9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3EA0u;
        goto label_4c3ea0;
    }
    ctx->pc = 0x4C3E98u;
    {
        const bool branch_taken_0x4c3e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E98u;
        // 0x4c3e9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3e98) {
            ctx->pc = 0x4C3EB4u;
            goto label_4c3eb4;
        }
    }
    ctx->pc = 0x4C3EA0u;
label_4c3ea0:
    // 0x4c3ea0: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x4c3ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_4c3ea4:
    // 0x4c3ea4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4c3ea8:
    if (ctx->pc == 0x4C3EA8u) {
        ctx->pc = 0x4C3EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3EA4u;
        // 0x4c3ea8: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3EACu;
        goto label_4c3eac;
    }
    ctx->pc = 0x4C3EA4u;
    {
        const bool branch_taken_0x4c3ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3ea4) {
            ctx->pc = 0x4C3EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3EA4u;
            // 0x4c3ea8: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3EB8u;
            goto label_4c3eb8;
        }
    }
    ctx->pc = 0x4C3EACu;
label_4c3eac:
    // 0x4c3eac: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4c3eb0:
    // 0x4c3eb0: 0x8c44278c  lw          $a0, 0x278C($v0)
    ctx->pc = 0x4c3eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10124)));
label_4c3eb4:
    // 0x4c3eb4: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x4c3eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4c3eb8:
    // 0x4c3eb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4c3ebc:
    if (ctx->pc == 0x4C3EBCu) {
        ctx->pc = 0x4C3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3EB8u;
        // 0x4c3ebc: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3EC0u;
        goto label_4c3ec0;
    }
    ctx->pc = 0x4C3EB8u;
    {
        const bool branch_taken_0x4c3eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3EB8u;
        // 0x4c3ebc: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3eb8) {
            ctx->pc = 0x4C3EC8u;
            goto label_4c3ec8;
        }
    }
    ctx->pc = 0x4C3EC0u;
label_4c3ec0:
    // 0x4c3ec0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4c3ec4:
    if (ctx->pc == 0x4C3EC4u) {
        ctx->pc = 0x4C3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3EC0u;
        // 0x4c3ec4: 0x8c462790  lw          $a2, 0x2790($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3EC8u;
        goto label_4c3ec8;
    }
    ctx->pc = 0x4C3EC0u;
    {
        const bool branch_taken_0x4c3ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3EC0u;
        // 0x4c3ec4: 0x8c462790  lw          $a2, 0x2790($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3ec0) {
            ctx->pc = 0x4C3ECCu;
            goto label_4c3ecc;
        }
    }
    ctx->pc = 0x4C3EC8u;
label_4c3ec8:
    // 0x4c3ec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4c3ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c3ecc:
    // 0x4c3ecc: 0x2605020c  addiu       $a1, $s0, 0x20C
    ctx->pc = 0x4c3eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 524));
label_4c3ed0:
    // 0x4c3ed0: 0x26070358  addiu       $a3, $s0, 0x358
    ctx->pc = 0x4c3ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 856));
label_4c3ed4:
    // 0x4c3ed4: 0xc13237c  jal         func_4C8DF0
label_4c3ed8:
    if (ctx->pc == 0x4C3ED8u) {
        ctx->pc = 0x4C3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3ED4u;
        // 0x4c3ed8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3EDCu;
        goto label_4c3edc;
    }
    ctx->pc = 0x4C3ED4u;
    SET_GPR_U32(ctx, 31, 0x4C3EDCu);
    ctx->pc = 0x4C3ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3ED4u;
    // 0x4c3ed8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8DF0u, 0x4C3ED4u, 0x4C3EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3EDCu;
label_4c3edc:
    // 0x4c3edc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4c3edcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c3ee0:
    // 0x4c3ee0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4c3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c3ee4:
    // 0x4c3ee4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_4c3ee8:
    if (ctx->pc == 0x4C3EE8u) {
        ctx->pc = 0x4C3EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3EE4u;
        // 0x4c3ee8: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3EECu;
        goto label_4c3eec;
    }
    ctx->pc = 0x4C3EE4u;
    {
        const bool branch_taken_0x4c3ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C3EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3EE4u;
        // 0x4c3ee8: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3ee4) {
            ctx->pc = 0x4C3F20u;
            goto label_4c3f20;
        }
    }
    ctx->pc = 0x4C3EECu;
label_4c3eec:
    // 0x4c3eec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c3ef0:
    if (ctx->pc == 0x4C3EF0u) {
        ctx->pc = 0x4C3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3EECu;
        // 0x4c3ef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3EF4u;
        goto label_4c3ef4;
    }
    ctx->pc = 0x4C3EECu;
    {
        const bool branch_taken_0x4c3eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3EECu;
        // 0x4c3ef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3eec) {
            ctx->pc = 0x4C3F04u;
            goto label_4c3f04;
        }
    }
    ctx->pc = 0x4C3EF4u;
label_4c3ef4:
    // 0x4c3ef4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_4c3ef8:
    if (ctx->pc == 0x4C3EF8u) {
        ctx->pc = 0x4C3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3EF4u;
        // 0x4c3ef8: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3EFCu;
        goto label_4c3efc;
    }
    ctx->pc = 0x4C3EF4u;
    {
        const bool branch_taken_0x4c3ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3EF4u;
        // 0x4c3ef8: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3ef4) {
            ctx->pc = 0x4C3F18u;
            goto label_4c3f18;
        }
    }
    ctx->pc = 0x4C3EFCu;
label_4c3efc:
    // 0x4c3efc: 0x1000000f  b           . + 4 + (0xF << 2)
label_4c3f00:
    if (ctx->pc == 0x4C3F00u) {
        ctx->pc = 0x4C3F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3EFCu;
        // 0x4c3f00: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3F04u;
        goto label_4c3f04;
    }
    ctx->pc = 0x4C3EFCu;
    {
        const bool branch_taken_0x4c3efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3EFCu;
        // 0x4c3f00: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3efc) {
            ctx->pc = 0x4C3F3Cu;
            goto label_4c3f3c;
        }
    }
    ctx->pc = 0x4C3F04u;
label_4c3f04:
    // 0x4c3f04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c3f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c3f08:
    // 0x4c3f08: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_4c3f0c:
    if (ctx->pc == 0x4C3F0Cu) {
        ctx->pc = 0x4C3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F08u;
        // 0x4c3f0c: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3F10u;
        goto label_4c3f10;
    }
    ctx->pc = 0x4C3F08u;
    {
        const bool branch_taken_0x4c3f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F08u;
        // 0x4c3f0c: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3f08) {
            ctx->pc = 0x4C3F2Cu;
            goto label_4c3f2c;
        }
    }
    ctx->pc = 0x4C3F10u;
label_4c3f10:
    // 0x4c3f10: 0x1000000a  b           . + 4 + (0xA << 2)
label_4c3f14:
    if (ctx->pc == 0x4C3F14u) {
        ctx->pc = 0x4C3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F10u;
        // 0x4c3f14: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3F18u;
        goto label_4c3f18;
    }
    ctx->pc = 0x4C3F10u;
    {
        const bool branch_taken_0x4c3f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F10u;
        // 0x4c3f14: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3f10) {
            ctx->pc = 0x4C3F3Cu;
            goto label_4c3f3c;
        }
    }
    ctx->pc = 0x4C3F18u;
label_4c3f18:
    // 0x4c3f18: 0x10000007  b           . + 4 + (0x7 << 2)
label_4c3f1c:
    if (ctx->pc == 0x4C3F1Cu) {
        ctx->pc = 0x4C3F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F18u;
        // 0x4c3f1c: 0xac40278c  sw          $zero, 0x278C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3F20u;
        goto label_4c3f20;
    }
    ctx->pc = 0x4C3F18u;
    {
        const bool branch_taken_0x4c3f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F18u;
        // 0x4c3f1c: 0xac40278c  sw          $zero, 0x278C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3f18) {
            ctx->pc = 0x4C3F38u;
            goto label_4c3f38;
        }
    }
    ctx->pc = 0x4C3F20u;
label_4c3f20:
    // 0x4c3f20: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4c3f24:
    // 0x4c3f24: 0x10000004  b           . + 4 + (0x4 << 2)
label_4c3f28:
    if (ctx->pc == 0x4C3F28u) {
        ctx->pc = 0x4C3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F24u;
        // 0x4c3f28: 0xac402790  sw          $zero, 0x2790($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3F2Cu;
        goto label_4c3f2c;
    }
    ctx->pc = 0x4C3F24u;
    {
        const bool branch_taken_0x4c3f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F24u;
        // 0x4c3f28: 0xac402790  sw          $zero, 0x2790($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3f24) {
            ctx->pc = 0x4C3F38u;
            goto label_4c3f38;
        }
    }
    ctx->pc = 0x4C3F2Cu;
label_4c3f2c:
    // 0x4c3f2c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4c3f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4c3f30:
    // 0x4c3f30: 0xac40278c  sw          $zero, 0x278C($v0)
    ctx->pc = 0x4c3f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10124), GPR_U32(ctx, 0));
label_4c3f34:
    // 0x4c3f34: 0xac602790  sw          $zero, 0x2790($v1)
    ctx->pc = 0x4c3f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10128), GPR_U32(ctx, 0));
label_4c3f38:
    // 0x4c3f38: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x4c3f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4c3f3c:
    // 0x4c3f3c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_4c3f40:
    if (ctx->pc == 0x4C3F40u) {
        ctx->pc = 0x4C3F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F3Cu;
        // 0x4c3f40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3F44u;
        goto label_4c3f44;
    }
    ctx->pc = 0x4C3F3Cu;
    {
        const bool branch_taken_0x4c3f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F3Cu;
        // 0x4c3f40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3f3c) {
            ctx->pc = 0x4C3F9Cu;
            goto label_4c3f9c;
        }
    }
    ctx->pc = 0x4C3F44u;
label_4c3f44:
    // 0x4c3f44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c3f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c3f48:
    // 0x4c3f48: 0x8e040308  lw          $a0, 0x308($s0)
    ctx->pc = 0x4c3f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
label_4c3f4c:
    // 0x4c3f4c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x4c3f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_4c3f50:
    // 0x4c3f50: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4c3f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4c3f54:
    // 0x4c3f54: 0x60f809  jalr        $v1
label_4c3f58:
    if (ctx->pc == 0x4C3F58u) {
        ctx->pc = 0x4C3F5Cu;
        goto label_4c3f5c;
    }
    ctx->pc = 0x4C3F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4C3F5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C3F54u, 0x4C3F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C3F5Cu;
label_4c3f5c:
    // 0x4c3f5c: 0x8e020308  lw          $v0, 0x308($s0)
    ctx->pc = 0x4c3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
label_4c3f60:
    // 0x4c3f60: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4c3f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c3f64:
    // 0x4c3f64: 0xc134488  jal         func_4D1220
label_4c3f68:
    if (ctx->pc == 0x4C3F68u) {
        ctx->pc = 0x4C3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F64u;
        // 0x4c3f68: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3F6Cu;
        goto label_4c3f6c;
    }
    ctx->pc = 0x4C3F64u;
    SET_GPR_U32(ctx, 31, 0x4C3F6Cu);
    ctx->pc = 0x4C3F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3F64u;
    // 0x4c3f68: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D1220u, 0x4C3F64u, 0x4C3F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3F6Cu;
label_4c3f6c:
    // 0x4c3f6c: 0x8e020308  lw          $v0, 0x308($s0)
    ctx->pc = 0x4c3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
label_4c3f70:
    // 0x4c3f70: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4c3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c3f74:
    // 0x4c3f74: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x4c3f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_4c3f78:
    // 0x4c3f78: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_4c3f7c:
    if (ctx->pc == 0x4C3F7Cu) {
        ctx->pc = 0x4C3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F78u;
        // 0x4c3f7c: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3F80u;
        goto label_4c3f80;
    }
    ctx->pc = 0x4C3F78u;
    {
        const bool branch_taken_0x4c3f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3f78) {
            ctx->pc = 0x4C3F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3F78u;
            // 0x4c3f7c: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3F8Cu;
            goto label_4c3f8c;
        }
    }
    ctx->pc = 0x4C3F80u;
label_4c3f80:
    // 0x4c3f80: 0xc132364  jal         func_4C8D90
label_4c3f84:
    if (ctx->pc == 0x4C3F84u) {
        ctx->pc = 0x4C3F88u;
        goto label_4c3f88;
    }
    ctx->pc = 0x4C3F80u;
    SET_GPR_U32(ctx, 31, 0x4C3F88u);
    ctx->pc = 0x4C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8D90u, 0x4C3F80u, 0x4C3F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3F88u;
label_4c3f88:
    // 0x4c3f88: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x4c3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4c3f8c:
    // 0x4c3f8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4c3f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4c3f90:
    // 0x4c3f90: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4c3f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c3f94:
    // 0x4c3f94: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_4c3f98:
    if (ctx->pc == 0x4C3F98u) {
        ctx->pc = 0x4C3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F94u;
        // 0x4c3f98: 0x2631017c  addiu       $s1, $s1, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 380));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3F9Cu;
        goto label_4c3f9c;
    }
    ctx->pc = 0x4C3F94u;
    {
        const bool branch_taken_0x4c3f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F94u;
        // 0x4c3f98: 0x2631017c  addiu       $s1, $s1, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3f94) {
            ctx->pc = 0x4C3F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c3f48;
        }
    }
    ctx->pc = 0x4C3F9Cu;
label_4c3f9c:
    // 0x4c3f9c: 0xc132d2a  jal         func_4CB4A8
label_4c3fa0:
    if (ctx->pc == 0x4C3FA0u) {
        ctx->pc = 0x4C3FA4u;
        goto label_4c3fa4;
    }
    ctx->pc = 0x4C3F9Cu;
    SET_GPR_U32(ctx, 31, 0x4C3FA4u);
    ctx->pc = 0x4CB4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB4A8u, 0x4C3F9Cu, 0x4C3FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3FA4u;
label_4c3fa4:
    // 0x4c3fa4: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x4c3fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_4c3fa8:
    // 0x4c3fa8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_4c3fac:
    if (ctx->pc == 0x4C3FACu) {
        ctx->pc = 0x4C3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3FA8u;
        // 0x4c3fac: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3FB0u;
        goto label_4c3fb0;
    }
    ctx->pc = 0x4C3FA8u;
    {
        const bool branch_taken_0x4c3fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3FA8u;
        // 0x4c3fac: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3fa8) {
            ctx->pc = 0x4C3FD0u;
            goto label_4c3fd0;
        }
    }
    ctx->pc = 0x4C3FB0u;
label_4c3fb0:
    // 0x4c3fb0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4c3fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4c3fb4:
    // 0x4c3fb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c3fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4c3fb8:
    // 0x4c3fb8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_4c3fbc:
    if (ctx->pc == 0x4C3FBCu) {
        ctx->pc = 0x4C3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3FB8u;
        // 0x4c3fbc: 0x8e0400bc  lw          $a0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3FC0u;
        goto label_4c3fc0;
    }
    ctx->pc = 0x4C3FB8u;
    {
        const bool branch_taken_0x4c3fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3fb8) {
            ctx->pc = 0x4C3FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3FB8u;
            // 0x4c3fbc: 0x8e0400bc  lw          $a0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3FE8u;
            goto label_4c3fe8;
        }
    }
    ctx->pc = 0x4C3FC0u;
label_4c3fc0:
    // 0x4c3fc0: 0xc132364  jal         func_4C8D90
label_4c3fc4:
    if (ctx->pc == 0x4C3FC4u) {
        ctx->pc = 0x4C3FC8u;
        goto label_4c3fc8;
    }
    ctx->pc = 0x4C3FC0u;
    SET_GPR_U32(ctx, 31, 0x4C3FC8u);
    ctx->pc = 0x4C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8D90u, 0x4C3FC0u, 0x4C3FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3FC8u;
label_4c3fc8:
    // 0x4c3fc8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4c3fcc:
    if (ctx->pc == 0x4C3FCCu) {
        ctx->pc = 0x4C3FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3FC8u;
        // 0x4c3fcc: 0x8e0400bc  lw          $a0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3FD0u;
        goto label_4c3fd0;
    }
    ctx->pc = 0x4C3FC8u;
    {
        const bool branch_taken_0x4c3fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3FC8u;
        // 0x4c3fcc: 0x8e0400bc  lw          $a0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3fc8) {
            ctx->pc = 0x4C3FE8u;
            goto label_4c3fe8;
        }
    }
    ctx->pc = 0x4C3FD0u;
label_4c3fd0:
    // 0x4c3fd0: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x4c3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_4c3fd4:
    // 0x4c3fd4: 0x40f809  jalr        $v0
label_4c3fd8:
    if (ctx->pc == 0x4C3FD8u) {
        ctx->pc = 0x4C3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3FD4u;
        // 0x4c3fd8: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3FDCu;
        goto label_4c3fdc;
    }
    ctx->pc = 0x4C3FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C3FDCu);
        ctx->pc = 0x4C3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3FD4u;
        // 0x4c3fd8: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C3FD4u, 0x4C3FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C3FDCu;
label_4c3fdc:
    // 0x4c3fdc: 0xc132364  jal         func_4C8D90
label_4c3fe0:
    if (ctx->pc == 0x4C3FE0u) {
        ctx->pc = 0x4C3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3FDCu;
        // 0x4c3fe0: 0x8e04024c  lw          $a0, 0x24C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3FE4u;
        goto label_4c3fe4;
    }
    ctx->pc = 0x4C3FDCu;
    SET_GPR_U32(ctx, 31, 0x4C3FE4u);
    ctx->pc = 0x4C3FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3FDCu;
    // 0x4c3fe0: 0x8e04024c  lw          $a0, 0x24C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8D90u, 0x4C3FDCu, 0x4C3FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3FE4u;
label_4c3fe4:
    // 0x4c3fe4: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x4c3fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_4c3fe8:
    // 0x4c3fe8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_4c3fec:
    if (ctx->pc == 0x4C3FECu) {
        ctx->pc = 0x4C3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3FE8u;
        // 0x4c3fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3FF0u;
        goto label_4c3ff0;
    }
    ctx->pc = 0x4C3FE8u;
    {
        const bool branch_taken_0x4c3fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3fe8) {
            ctx->pc = 0x4C3FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3FE8u;
            // 0x4c3fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3FFCu;
            goto label_4c3ffc;
        }
    }
    ctx->pc = 0x4C3FF0u;
label_4c3ff0:
    // 0x4c3ff0: 0xc132364  jal         func_4C8D90
label_4c3ff4:
    if (ctx->pc == 0x4C3FF4u) {
        ctx->pc = 0x4C3FF8u;
        goto label_4c3ff8;
    }
    ctx->pc = 0x4C3FF0u;
    SET_GPR_U32(ctx, 31, 0x4C3FF8u);
    ctx->pc = 0x4C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8D90u, 0x4C3FF0u, 0x4C3FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3FF8u;
label_4c3ff8:
    // 0x4c3ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c3ffc:
    // 0x4c3ffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c3ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4000:
    // 0x4c4000: 0xc13372a  jal         func_4CDCA8
label_4c4004:
    if (ctx->pc == 0x4C4004u) {
        ctx->pc = 0x4C4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4000u;
        // 0x4c4004: 0x24060398  addiu       $a2, $zero, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4008u;
        goto label_4c4008;
    }
    ctx->pc = 0x4C4000u;
    SET_GPR_U32(ctx, 31, 0x4C4008u);
    ctx->pc = 0x4C4004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4000u;
    // 0x4c4004: 0x24060398  addiu       $a2, $zero, 0x398 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4C4000u, 0x4C4008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4008u;
label_4c4008:
    // 0x4c4008: 0xc132364  jal         func_4C8D90
label_4c400c:
    if (ctx->pc == 0x4C400Cu) {
        ctx->pc = 0x4C400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4008u;
        // 0x4c400c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4010u;
        goto label_4c4010;
    }
    ctx->pc = 0x4C4008u;
    SET_GPR_U32(ctx, 31, 0x4C4010u);
    ctx->pc = 0x4C400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4008u;
    // 0x4c400c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8D90u, 0x4C4008u, 0x4C4010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4010u;
label_4c4010:
    // 0x4c4010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c4014:
    // 0x4c4014: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c4014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4c4018:
    // 0x4c4018: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c4018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c401c:
    // 0x4c401c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4c401cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4c4020:
    // 0x4c4020: 0x3e00008  jr          $ra
label_4c4024:
    if (ctx->pc == 0x4C4024u) {
        ctx->pc = 0x4C4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4020u;
        // 0x4c4024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C4028u;
        goto label_fallthrough_0x4c4020;
    }
    ctx->pc = 0x4C4020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4020u;
        // 0x4c4024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4c4020:
    ctx->pc = 0x4C4028u;
}
