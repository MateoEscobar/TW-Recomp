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

// Function: sub_002DB918
// Address: 0x2db918 - 0x2dbaa0
void sub_002DB918_0x2db918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB918_0x2db918");
#endif

    switch (ctx->pc) {
        case 0x2db950u: goto label_2db950;
        case 0x2db964u: goto label_2db964;
        case 0x2db974u: goto label_2db974;
        case 0x2db9dcu: goto label_2db9dc;
        case 0x2db9f0u: goto label_2db9f0;
        case 0x2dba00u: goto label_2dba00;
        case 0x2dba14u: goto label_2dba14;
        case 0x2dba2cu: goto label_2dba2c;
        case 0x2dba68u: goto label_2dba68;
        case 0x2dba80u: goto label_2dba80;
        default: break;
    }

    ctx->pc = 0x2db918u;

    // 0x2db918: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2db918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2db91c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2db91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2db920: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2db920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2db924: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2db924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db928: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2db928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2db92c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2db92cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db930: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2db930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2db934: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2db934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2db938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db93c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2db93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2db940: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2db940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2db944: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2db944u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db948: 0xc1058b4  jal         func_4162D0
    ctx->pc = 0x2DB948u;
    SET_GPR_U32(ctx, 31, 0x2DB950u);
    ctx->pc = 0x2DB94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB948u;
    // 0x2db94c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4162D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4162D0u, 0x2DB948u, 0x2DB950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB950u;
label_2db950:
    // 0x2db950: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2db950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2db954: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2db954u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db95c: 0xc089998  jal         func_226660
    ctx->pc = 0x2DB95Cu;
    SET_GPR_U32(ctx, 31, 0x2DB964u);
    ctx->pc = 0x2DB960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB95Cu;
    // 0x2db960: 0x34a56a40  ori         $a1, $a1, 0x6A40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2DB95Cu, 0x2DB964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB964u;
label_2db964:
    // 0x2db964: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2DB964u;
    {
        const bool branch_taken_0x2db964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db964) {
            ctx->pc = 0x2DB9F0u;
            goto label_2db9f0;
        }
    }
    ctx->pc = 0x2DB96Cu;
    // 0x2db96c: 0xc089f98  jal         func_227E60
    ctx->pc = 0x2DB96Cu;
    SET_GPR_U32(ctx, 31, 0x2DB974u);
    ctx->pc = 0x2DB970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB96Cu;
    // 0x2db970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2DB96Cu, 0x2DB974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB974u;
label_2db974:
    // 0x2db974: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DB974u;
    {
        const bool branch_taken_0x2db974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB974u;
        // 0x2db978: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db974) {
            ctx->pc = 0x2DB9F0u;
            goto label_2db9f0;
        }
    }
    ctx->pc = 0x2DB97Cu;
    // 0x2db97c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x2db97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2db980: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DB980u;
    {
        const bool branch_taken_0x2db980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB980u;
        // 0x2db984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db980) {
            ctx->pc = 0x2DB9E0u;
            goto label_2db9e0;
        }
    }
    ctx->pc = 0x2DB988u;
    // 0x2db988: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2db988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2db98c: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x2db98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2db990: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2db990u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2db994: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2db994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2db998: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2db998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2db99c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB99Cu;
    {
        const bool branch_taken_0x2db99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB99Cu;
        // 0x2db9a0: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db99c) {
            ctx->pc = 0x2DB9DCu;
            goto label_2db9dc;
        }
    }
    ctx->pc = 0x2DB9A4u;
    // 0x2db9a4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2DB9A4u;
    {
        const bool branch_taken_0x2db9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB9A4u;
        // 0x2db9a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db9a4) {
            ctx->pc = 0x2DB9E0u;
            goto label_2db9e0;
        }
    }
    ctx->pc = 0x2DB9ACu;
    // 0x2db9ac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2db9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2db9b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2db9b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2db9b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2db9b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2db9b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db9bc: 0x240502a1  addiu       $a1, $zero, 0x2A1
    ctx->pc = 0x2db9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    // 0x2db9c0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2db9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2db9c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2db9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db9c8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2db9c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2db9cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2db9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db9d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2db9d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db9d4: 0xc0968f8  jal         func_25A3E0
    ctx->pc = 0x2DB9D4u;
    SET_GPR_U32(ctx, 31, 0x2DB9DCu);
    ctx->pc = 0x2DB9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB9D4u;
    // 0x2db9d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2DB9D4u, 0x2DB9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB9DCu;
label_2db9dc:
    // 0x2db9dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db9e0:
    // 0x2db9e0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB9E0u;
    {
        const bool branch_taken_0x2db9e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db9e0) {
            ctx->pc = 0x2DB9F0u;
            goto label_2db9f0;
        }
    }
    ctx->pc = 0x2DB9E8u;
    // 0x2db9e8: 0xc097ddc  jal         func_25F770
    ctx->pc = 0x2DB9E8u;
    SET_GPR_U32(ctx, 31, 0x2DB9F0u);
    ctx->pc = 0x2DB9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB9E8u;
    // 0x2db9ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F770u, 0x2DB9E8u, 0x2DB9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB9F0u;
label_2db9f0:
    // 0x2db9f0: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x2DB9F0u;
    {
        const bool branch_taken_0x2db9f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB9F0u;
        // 0x2db9f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db9f0) {
            ctx->pc = 0x2DBA20u;
            goto label_2dba20;
        }
    }
    ctx->pc = 0x2DB9F8u;
    // 0x2db9f8: 0x26500468  addiu       $s0, $s2, 0x468
    ctx->pc = 0x2db9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    // 0x2db9fc: 0x0  nop
    ctx->pc = 0x2db9fcu;
    // NOP
label_2dba00:
    // 0x2dba00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dba00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dba04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dba08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba0c: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2DBA0Cu;
    SET_GPR_U32(ctx, 31, 0x2DBA14u);
    ctx->pc = 0x2DBA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBA0Cu;
    // 0x2dba10: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2DBA0Cu, 0x2DBA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA14u;
label_2dba14:
    // 0x2dba14: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x2dba14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2dba18: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DBA18u;
    {
        const bool branch_taken_0x2dba18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA18u;
        // 0x2dba1c: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba18) {
            ctx->pc = 0x2DBA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dba00;
        }
    }
    ctx->pc = 0x2DBA20u;
label_2dba20:
    // 0x2dba20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dba20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba24: 0xc087612  jal         func_21D848
    ctx->pc = 0x2DBA24u;
    SET_GPR_U32(ctx, 31, 0x2DBA2Cu);
    ctx->pc = 0x2DBA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBA24u;
    // 0x2dba28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2DBA24u, 0x2DBA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA2Cu;
label_2dba2c:
    // 0x2dba2c: 0x9263002c  lbu         $v1, 0x2C($s3)
    ctx->pc = 0x2dba2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x2dba30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dba30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dba34: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DBA34u;
    {
        const bool branch_taken_0x2dba34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dba34) {
            ctx->pc = 0x2DBA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBA34u;
            // 0x2dba38: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBA6Cu;
            goto label_2dba6c;
        }
    }
    ctx->pc = 0x2DBA3Cu;
    // 0x2dba3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2dba40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dba40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dba44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dba44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dba48: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2dba48u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2dba4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba50: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2dba50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dba54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dba54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dba58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dba5c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dba5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dba60: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2DBA60u;
    SET_GPR_U32(ctx, 31, 0x2DBA68u);
    ctx->pc = 0x2DBA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBA60u;
    // 0x2dba64: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2DBA60u, 0x2DBA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA68u;
label_2dba68:
    // 0x2dba68: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2dba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2dba6c:
    // 0x2dba6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dba6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba70: 0x9262002e  lbu         $v0, 0x2E($s3)
    ctx->pc = 0x2dba70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 46)));
    // 0x2dba74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dba74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dba78: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x2DBA78u;
    SET_GPR_U32(ctx, 31, 0x2DBA80u);
    ctx->pc = 0x2DBA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBA78u;
    // 0x2dba7c: 0xa0620265  sb          $v0, 0x265($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 613), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x2DBA78u, 0x2DBA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA80u;
label_2dba80:
    // 0x2dba80: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2dba80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dba84: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2dba84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dba88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2dba88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dba8c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2dba8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dba90: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2dba90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dba94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dba94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dba98: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA98u;
        // 0x2dba9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBAA0u;
}
