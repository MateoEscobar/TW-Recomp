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

// Function: sub_002A8F78
// Address: 0x2a8f78 - 0x2a90a0
void sub_002A8F78_0x2a8f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8F78_0x2a8f78");
#endif

    switch (ctx->pc) {
        case 0x2a8f78u: goto label_2a8f78;
        case 0x2a8f7cu: goto label_2a8f7c;
        case 0x2a8f80u: goto label_2a8f80;
        case 0x2a8f84u: goto label_2a8f84;
        case 0x2a8f88u: goto label_2a8f88;
        case 0x2a8f8cu: goto label_2a8f8c;
        case 0x2a8f90u: goto label_2a8f90;
        case 0x2a8f94u: goto label_2a8f94;
        case 0x2a8f98u: goto label_2a8f98;
        case 0x2a8f9cu: goto label_2a8f9c;
        case 0x2a8fa0u: goto label_2a8fa0;
        case 0x2a8fa4u: goto label_2a8fa4;
        case 0x2a8fa8u: goto label_2a8fa8;
        case 0x2a8facu: goto label_2a8fac;
        case 0x2a8fb0u: goto label_2a8fb0;
        case 0x2a8fb4u: goto label_2a8fb4;
        case 0x2a8fb8u: goto label_2a8fb8;
        case 0x2a8fbcu: goto label_2a8fbc;
        case 0x2a8fc0u: goto label_2a8fc0;
        case 0x2a8fc4u: goto label_2a8fc4;
        case 0x2a8fc8u: goto label_2a8fc8;
        case 0x2a8fccu: goto label_2a8fcc;
        case 0x2a8fd0u: goto label_2a8fd0;
        case 0x2a8fd4u: goto label_2a8fd4;
        case 0x2a8fd8u: goto label_2a8fd8;
        case 0x2a8fdcu: goto label_2a8fdc;
        case 0x2a8fe0u: goto label_2a8fe0;
        case 0x2a8fe4u: goto label_2a8fe4;
        case 0x2a8fe8u: goto label_2a8fe8;
        case 0x2a8fecu: goto label_2a8fec;
        case 0x2a8ff0u: goto label_2a8ff0;
        case 0x2a8ff4u: goto label_2a8ff4;
        case 0x2a8ff8u: goto label_2a8ff8;
        case 0x2a8ffcu: goto label_2a8ffc;
        case 0x2a9000u: goto label_2a9000;
        case 0x2a9004u: goto label_2a9004;
        case 0x2a9008u: goto label_2a9008;
        case 0x2a900cu: goto label_2a900c;
        case 0x2a9010u: goto label_2a9010;
        case 0x2a9014u: goto label_2a9014;
        case 0x2a9018u: goto label_2a9018;
        case 0x2a901cu: goto label_2a901c;
        case 0x2a9020u: goto label_2a9020;
        case 0x2a9024u: goto label_2a9024;
        case 0x2a9028u: goto label_2a9028;
        case 0x2a902cu: goto label_2a902c;
        case 0x2a9030u: goto label_2a9030;
        case 0x2a9034u: goto label_2a9034;
        case 0x2a9038u: goto label_2a9038;
        case 0x2a903cu: goto label_2a903c;
        case 0x2a9040u: goto label_2a9040;
        case 0x2a9044u: goto label_2a9044;
        case 0x2a9048u: goto label_2a9048;
        case 0x2a904cu: goto label_2a904c;
        case 0x2a9050u: goto label_2a9050;
        case 0x2a9054u: goto label_2a9054;
        case 0x2a9058u: goto label_2a9058;
        case 0x2a905cu: goto label_2a905c;
        case 0x2a9060u: goto label_2a9060;
        case 0x2a9064u: goto label_2a9064;
        case 0x2a9068u: goto label_2a9068;
        case 0x2a906cu: goto label_2a906c;
        case 0x2a9070u: goto label_2a9070;
        case 0x2a9074u: goto label_2a9074;
        case 0x2a9078u: goto label_2a9078;
        case 0x2a907cu: goto label_2a907c;
        case 0x2a9080u: goto label_2a9080;
        case 0x2a9084u: goto label_2a9084;
        case 0x2a9088u: goto label_2a9088;
        case 0x2a908cu: goto label_2a908c;
        case 0x2a9090u: goto label_2a9090;
        case 0x2a9094u: goto label_2a9094;
        case 0x2a9098u: goto label_2a9098;
        case 0x2a909cu: goto label_2a909c;
        default: break;
    }

    ctx->pc = 0x2a8f78u;

label_2a8f78:
    // 0x2a8f78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a8f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a8f7c:
    // 0x2a8f7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a8f80:
    // 0x2a8f80: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2a8f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2a8f84:
    // 0x2a8f84: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a8f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2a8f88:
    // 0x2a8f88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a8f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a8f8c:
    // 0x2a8f8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a8f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a8f90:
    // 0x2a8f90: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2a8f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2a8f94:
    // 0x2a8f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a8f98:
    // 0x2a8f98: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x2a8f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a8f9c:
    // 0x2a8f9c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2a8f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2a8fa0:
    // 0x2a8fa0: 0x10640038  beq         $v1, $a0, . + 4 + (0x38 << 2)
label_2a8fa4:
    if (ctx->pc == 0x2A8FA4u) {
        ctx->pc = 0x2A8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FA0u;
        // 0x2a8fa4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8FA8u;
        goto label_2a8fa8;
    }
    ctx->pc = 0x2A8FA0u;
    {
        const bool branch_taken_0x2a8fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2A8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FA0u;
        // 0x2a8fa4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fa0) {
            ctx->pc = 0x2A9084u;
            goto label_2a9084;
        }
    }
    ctx->pc = 0x2A8FA8u;
label_2a8fa8:
    // 0x2a8fa8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a8fac:
    // 0x2a8fac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a8facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a8fb0:
    // 0x2a8fb0: 0xc0e409a  jal         func_390268
label_2a8fb4:
    if (ctx->pc == 0x2A8FB4u) {
        ctx->pc = 0x2A8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FB0u;
        // 0x2a8fb4: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8FB8u;
        goto label_2a8fb8;
    }
    ctx->pc = 0x2A8FB0u;
    SET_GPR_U32(ctx, 31, 0x2A8FB8u);
    ctx->pc = 0x2A8FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8FB0u;
    // 0x2a8fb4: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A8FB0u, 0x2A8FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8FB8u;
label_2a8fb8:
    // 0x2a8fb8: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
label_2a8fbc:
    if (ctx->pc == 0x2A8FBCu) {
        ctx->pc = 0x2A8FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FB8u;
        // 0x2a8fbc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8FC0u;
        goto label_2a8fc0;
    }
    ctx->pc = 0x2A8FB8u;
    {
        const bool branch_taken_0x2a8fb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FB8u;
        // 0x2a8fbc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fb8) {
            ctx->pc = 0x2A907Cu;
            goto label_2a907c;
        }
    }
    ctx->pc = 0x2A8FC0u;
label_2a8fc0:
    // 0x2a8fc0: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
label_2a8fc4:
    if (ctx->pc == 0x2A8FC4u) {
        ctx->pc = 0x2A8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FC0u;
        // 0x2a8fc4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8FC8u;
        goto label_2a8fc8;
    }
    ctx->pc = 0x2A8FC0u;
    {
        const bool branch_taken_0x2a8fc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FC0u;
        // 0x2a8fc4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fc0) {
            ctx->pc = 0x2A9080u;
            goto label_2a9080;
        }
    }
    ctx->pc = 0x2A8FC8u;
label_2a8fc8:
    // 0x2a8fc8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2a8fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2a8fcc:
    // 0x2a8fcc: 0x3862000b  xori        $v0, $v1, 0xB
    ctx->pc = 0x2a8fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)11);
label_2a8fd0:
    // 0x2a8fd0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2a8fd4:
    if (ctx->pc == 0x2A8FD4u) {
        ctx->pc = 0x2A8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FD0u;
        // 0x2a8fd4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8FD8u;
        goto label_2a8fd8;
    }
    ctx->pc = 0x2A8FD0u;
    {
        const bool branch_taken_0x2a8fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FD0u;
        // 0x2a8fd4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fd0) {
            ctx->pc = 0x2A9018u;
            goto label_2a9018;
        }
    }
    ctx->pc = 0x2A8FD8u;
label_2a8fd8:
    // 0x2a8fd8: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x2a8fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_2a8fdc:
    // 0x2a8fdc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a8fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a8fe0:
    // 0x2a8fe0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2a8fe4:
    if (ctx->pc == 0x2A8FE4u) {
        ctx->pc = 0x2A8FE8u;
        goto label_2a8fe8;
    }
    ctx->pc = 0x2A8FE0u;
    {
        const bool branch_taken_0x2a8fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8fe0) {
            ctx->pc = 0x2A9018u;
            goto label_2a9018;
        }
    }
    ctx->pc = 0x2A8FE8u;
label_2a8fe8:
    // 0x2a8fe8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a8fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a8fec:
    // 0x2a8fec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a8fecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a8ff0:
    // 0x2a8ff0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a8ff4:
    // 0x2a8ff4: 0x40f809  jalr        $v0
label_2a8ff8:
    if (ctx->pc == 0x2A8FF8u) {
        ctx->pc = 0x2A8FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FF4u;
        // 0x2a8ff8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8FFCu;
        goto label_2a8ffc;
    }
    ctx->pc = 0x2A8FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A8FFCu);
        ctx->pc = 0x2A8FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FF4u;
        // 0x2a8ff8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8FF4u, 0x2A8FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A8FFCu;
label_2a8ffc:
    // 0x2a8ffc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a8ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a9000:
    // 0x2a9000: 0x8c639438  lw          $v1, -0x6BC8($v1)
    ctx->pc = 0x2a9000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939704)));
label_2a9004:
    // 0x2a9004: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2a9008:
    if (ctx->pc == 0x2A9008u) {
        ctx->pc = 0x2A900Cu;
        goto label_2a900c;
    }
    ctx->pc = 0x2A9004u;
    {
        const bool branch_taken_0x2a9004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a9004) {
            ctx->pc = 0x2A9018u;
            goto label_2a9018;
        }
    }
    ctx->pc = 0x2A900Cu;
label_2a900c:
    // 0x2a900c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2a900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2a9010:
    // 0x2a9010: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2a9010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_2a9014:
    // 0x2a9014: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x2a9014u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a9018:
    // 0x2a9018: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_2a901c:
    if (ctx->pc == 0x2A901Cu) {
        ctx->pc = 0x2A901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9018u;
        // 0x2a901c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9020u;
        goto label_2a9020;
    }
    ctx->pc = 0x2A9018u;
    {
        const bool branch_taken_0x2a9018 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9018u;
        // 0x2a901c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9018) {
            ctx->pc = 0x2A9024u;
            goto label_2a9024;
        }
    }
    ctx->pc = 0x2A9020u;
label_2a9020:
    // 0x2a9020: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2a9020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2a9024:
    // 0x2a9024: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2a9024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2a9028:
    // 0x2a9028: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x2a9028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
label_2a902c:
    // 0x2a902c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2a9030:
    if (ctx->pc == 0x2A9030u) {
        ctx->pc = 0x2A9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A902Cu;
        // 0x2a9030: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9034u;
        goto label_2a9034;
    }
    ctx->pc = 0x2A902Cu;
    {
        const bool branch_taken_0x2a902c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A902Cu;
        // 0x2a9030: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a902c) {
            ctx->pc = 0x2A9084u;
            goto label_2a9084;
        }
    }
    ctx->pc = 0x2A9034u;
label_2a9034:
    // 0x2a9034: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2a9034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a9038:
    // 0x2a9038: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a9038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a903c:
    // 0x2a903c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2a903cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2a9040:
    // 0x2a9040: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2a9040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2a9044:
    // 0x2a9044: 0x40f809  jalr        $v0
label_2a9048:
    if (ctx->pc == 0x2A9048u) {
        ctx->pc = 0x2A9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9044u;
        // 0x2a9048: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A904Cu;
        goto label_2a904c;
    }
    ctx->pc = 0x2A9044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A904Cu);
        ctx->pc = 0x2A9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9044u;
        // 0x2a9048: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9044u, 0x2A904Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A904Cu;
label_2a904c:
    // 0x2a904c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a904cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a9050:
    // 0x2a9050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9054:
    // 0x2a9054: 0x8e060fc0  lw          $a2, 0xFC0($s0)
    ctx->pc = 0x2a9054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4032)));
label_2a9058:
    // 0x2a9058: 0x240502a1  addiu       $a1, $zero, 0x2A1
    ctx->pc = 0x2a9058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
label_2a905c:
    // 0x2a905c: 0xc0886a8  jal         func_221AA0
label_2a9060:
    if (ctx->pc == 0x2A9060u) {
        ctx->pc = 0x2A9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A905Cu;
        // 0x2a9060: 0x26100fc0  addiu       $s0, $s0, 0xFC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9064u;
        goto label_2a9064;
    }
    ctx->pc = 0x2A905Cu;
    SET_GPR_U32(ctx, 31, 0x2A9064u);
    ctx->pc = 0x2A9060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A905Cu;
    // 0x2a9060: 0x26100fc0  addiu       $s0, $s0, 0xFC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2A905Cu, 0x2A9064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9064u;
label_2a9064:
    // 0x2a9064: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2a9064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a9068:
    // 0x2a9068: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a9068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a906c:
    // 0x2a906c: 0xc0886a8  jal         func_221AA0
label_2a9070:
    if (ctx->pc == 0x2A9070u) {
        ctx->pc = 0x2A9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A906Cu;
        // 0x2a9070: 0x240502a1  addiu       $a1, $zero, 0x2A1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9074u;
        goto label_2a9074;
    }
    ctx->pc = 0x2A906Cu;
    SET_GPR_U32(ctx, 31, 0x2A9074u);
    ctx->pc = 0x2A9070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A906Cu;
    // 0x2a9070: 0x240502a1  addiu       $a1, $zero, 0x2A1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2A906Cu, 0x2A9074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9074u;
label_2a9074:
    // 0x2a9074: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a9078:
    if (ctx->pc == 0x2A9078u) {
        ctx->pc = 0x2A9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9074u;
        // 0x2a9078: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A907Cu;
        goto label_2a907c;
    }
    ctx->pc = 0x2A9074u;
    {
        const bool branch_taken_0x2a9074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9074u;
        // 0x2a9078: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9074) {
            ctx->pc = 0x2A9088u;
            goto label_2a9088;
        }
    }
    ctx->pc = 0x2A907Cu;
label_2a907c:
    // 0x2a907c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2a907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a9080:
    // 0x2a9080: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2a9080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2a9084:
    // 0x2a9084: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2a9084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a9088:
    // 0x2a9088: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a9088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a908c:
    // 0x2a908c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a908cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9090:
    // 0x2a9090: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2a9090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9094:
    // 0x2a9094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9098:
    // 0x2a9098: 0x3e00008  jr          $ra
label_2a909c:
    if (ctx->pc == 0x2A909Cu) {
        ctx->pc = 0x2A909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9098u;
        // 0x2a909c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A90A0u;
        goto label_fallthrough_0x2a9098;
    }
    ctx->pc = 0x2A9098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9098u;
        // 0x2a909c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a9098:
    ctx->pc = 0x2A90A0u;
}
