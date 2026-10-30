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

// Function: sub_00359D58
// Address: 0x359d58 - 0x35a188
void sub_00359D58_0x359d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359D58_0x359d58");
#endif

    switch (ctx->pc) {
        case 0x359db0u: goto label_359db0;
        case 0x359dc8u: goto label_359dc8;
        case 0x359dd0u: goto label_359dd0;
        case 0x359de8u: goto label_359de8;
        case 0x359e00u: goto label_359e00;
        case 0x359e08u: goto label_359e08;
        case 0x359e20u: goto label_359e20;
        case 0x359e38u: goto label_359e38;
        case 0x359e40u: goto label_359e40;
        case 0x359e58u: goto label_359e58;
        case 0x359e70u: goto label_359e70;
        case 0x359e78u: goto label_359e78;
        case 0x359e90u: goto label_359e90;
        case 0x359ea8u: goto label_359ea8;
        case 0x359eb0u: goto label_359eb0;
        case 0x359ec8u: goto label_359ec8;
        case 0x359ee0u: goto label_359ee0;
        case 0x359ee8u: goto label_359ee8;
        case 0x359f00u: goto label_359f00;
        case 0x359f18u: goto label_359f18;
        case 0x359f20u: goto label_359f20;
        case 0x359f38u: goto label_359f38;
        case 0x359f50u: goto label_359f50;
        case 0x359f58u: goto label_359f58;
        case 0x359f8cu: goto label_359f8c;
        case 0x359f98u: goto label_359f98;
        case 0x359fa8u: goto label_359fa8;
        case 0x359fbcu: goto label_359fbc;
        case 0x359fd0u: goto label_359fd0;
        case 0x359fe0u: goto label_359fe0;
        case 0x359ff4u: goto label_359ff4;
        case 0x35a008u: goto label_35a008;
        case 0x35a018u: goto label_35a018;
        case 0x35a02cu: goto label_35a02c;
        case 0x35a040u: goto label_35a040;
        case 0x35a050u: goto label_35a050;
        case 0x35a064u: goto label_35a064;
        case 0x35a078u: goto label_35a078;
        case 0x35a088u: goto label_35a088;
        case 0x35a09cu: goto label_35a09c;
        case 0x35a0b0u: goto label_35a0b0;
        case 0x35a0c0u: goto label_35a0c0;
        case 0x35a0d4u: goto label_35a0d4;
        case 0x35a0e8u: goto label_35a0e8;
        case 0x35a0f8u: goto label_35a0f8;
        case 0x35a10cu: goto label_35a10c;
        case 0x35a120u: goto label_35a120;
        case 0x35a134u: goto label_35a134;
        case 0x35a148u: goto label_35a148;
        default: break;
    }

    ctx->pc = 0x359d58u;

    // 0x359d58: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x359d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x359d5c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x359d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x359d60: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x359d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x359d64: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x359d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x359d68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x359d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359d6c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x359d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x359d70: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x359d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359d74: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x359d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x359d78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x359d78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359d7c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x359d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x359d80: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x359d80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x359d84: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x359d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x359d88: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x359d88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x359d8c: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x359d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x359d90: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x359d90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x359d94: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x359d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x359d98: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x359d98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x359d9c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x359d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x359da0: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x359da0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x359da4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x359da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x359da8: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x359da8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x359dac: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x359dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_359db0:
    // 0x359db0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x359db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x359db4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x359db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359db8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359dbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x359dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359dc0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x359DC0u;
    SET_GPR_U32(ctx, 31, 0x359DC8u);
    ctx->pc = 0x359DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359DC0u;
    // 0x359dc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x359DC0u, 0x359DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359DC8u;
label_359dc8:
    // 0x359dc8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x359DC8u;
    SET_GPR_U32(ctx, 31, 0x359DD0u);
    ctx->pc = 0x359DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359DC8u;
    // 0x359dcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x359DC8u, 0x359DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359DD0u;
label_359dd0:
    // 0x359dd0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x359dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x359dd4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x359dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x359dd8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x359DD8u;
    {
        const bool branch_taken_0x359dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359DD8u;
        // 0x359ddc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359dd8) {
            ctx->pc = 0x359DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359db0;
        }
    }
    ctx->pc = 0x359DE0u;
    // 0x359de0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x359de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359de4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x359de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_359de8:
    // 0x359de8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x359de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x359dec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x359decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359df0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x359df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x359df4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x359df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359df8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x359DF8u;
    SET_GPR_U32(ctx, 31, 0x359E00u);
    ctx->pc = 0x359DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359DF8u;
    // 0x359dfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x359DF8u, 0x359E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E00u;
label_359e00:
    // 0x359e00: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x359E00u;
    SET_GPR_U32(ctx, 31, 0x359E08u);
    ctx->pc = 0x359E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359E00u;
    // 0x359e04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x359E00u, 0x359E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E08u;
label_359e08:
    // 0x359e08: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x359e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x359e0c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x359e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x359e10: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x359E10u;
    {
        const bool branch_taken_0x359e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359E10u;
        // 0x359e14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359e10) {
            ctx->pc = 0x359DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359de8;
        }
    }
    ctx->pc = 0x359E18u;
    // 0x359e18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x359e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e1c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x359e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_359e20:
    // 0x359e20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x359e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x359e24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x359e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e28: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x359e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x359e2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x359e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e30: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x359E30u;
    SET_GPR_U32(ctx, 31, 0x359E38u);
    ctx->pc = 0x359E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359E30u;
    // 0x359e34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x359E30u, 0x359E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E38u;
label_359e38:
    // 0x359e38: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x359E38u;
    SET_GPR_U32(ctx, 31, 0x359E40u);
    ctx->pc = 0x359E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359E38u;
    // 0x359e3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x359E38u, 0x359E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E40u;
label_359e40:
    // 0x359e40: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x359e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x359e44: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x359e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x359e48: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x359E48u;
    {
        const bool branch_taken_0x359e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359E48u;
        // 0x359e4c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359e48) {
            ctx->pc = 0x359E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359e20;
        }
    }
    ctx->pc = 0x359E50u;
    // 0x359e50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x359e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e54: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x359e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_359e58:
    // 0x359e58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x359e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x359e5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x359e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e60: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x359e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x359e64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x359e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e68: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x359E68u;
    SET_GPR_U32(ctx, 31, 0x359E70u);
    ctx->pc = 0x359E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359E68u;
    // 0x359e6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x359E68u, 0x359E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E70u;
label_359e70:
    // 0x359e70: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x359E70u;
    SET_GPR_U32(ctx, 31, 0x359E78u);
    ctx->pc = 0x359E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359E70u;
    // 0x359e74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x359E70u, 0x359E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E78u;
label_359e78:
    // 0x359e78: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x359e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x359e7c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x359e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x359e80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x359E80u;
    {
        const bool branch_taken_0x359e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359E80u;
        // 0x359e84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359e80) {
            ctx->pc = 0x359E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359e58;
        }
    }
    ctx->pc = 0x359E88u;
    // 0x359e88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x359e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e8c: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x359e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_359e90:
    // 0x359e90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x359e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x359e94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x359e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e98: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x359e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x359e9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x359e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ea0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x359EA0u;
    SET_GPR_U32(ctx, 31, 0x359EA8u);
    ctx->pc = 0x359EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359EA0u;
    // 0x359ea4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x359EA0u, 0x359EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359EA8u;
label_359ea8:
    // 0x359ea8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x359EA8u;
    SET_GPR_U32(ctx, 31, 0x359EB0u);
    ctx->pc = 0x359EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359EA8u;
    // 0x359eac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x359EA8u, 0x359EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359EB0u;
label_359eb0:
    // 0x359eb0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x359eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x359eb4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x359eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x359eb8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x359EB8u;
    {
        const bool branch_taken_0x359eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359EB8u;
        // 0x359ebc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359eb8) {
            ctx->pc = 0x359E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359e90;
        }
    }
    ctx->pc = 0x359EC0u;
    // 0x359ec0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x359ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ec4: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x359ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_359ec8:
    // 0x359ec8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x359ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x359ecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x359eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ed0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x359ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x359ed4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x359ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ed8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x359ED8u;
    SET_GPR_U32(ctx, 31, 0x359EE0u);
    ctx->pc = 0x359EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359ED8u;
    // 0x359edc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x359ED8u, 0x359EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359EE0u;
label_359ee0:
    // 0x359ee0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x359EE0u;
    SET_GPR_U32(ctx, 31, 0x359EE8u);
    ctx->pc = 0x359EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359EE0u;
    // 0x359ee4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x359EE0u, 0x359EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359EE8u;
label_359ee8:
    // 0x359ee8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x359ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x359eec: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x359eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x359ef0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x359EF0u;
    {
        const bool branch_taken_0x359ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359EF0u;
        // 0x359ef4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359ef0) {
            ctx->pc = 0x359EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359ec8;
        }
    }
    ctx->pc = 0x359EF8u;
    // 0x359ef8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x359ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359efc: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x359efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_359f00:
    // 0x359f00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x359f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x359f04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x359f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f08: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x359f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x359f0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x359f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f10: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x359F10u;
    SET_GPR_U32(ctx, 31, 0x359F18u);
    ctx->pc = 0x359F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F10u;
    // 0x359f14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x359F10u, 0x359F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F18u;
label_359f18:
    // 0x359f18: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x359F18u;
    SET_GPR_U32(ctx, 31, 0x359F20u);
    ctx->pc = 0x359F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F18u;
    // 0x359f1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x359F18u, 0x359F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F20u;
label_359f20:
    // 0x359f20: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x359f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x359f24: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x359f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x359f28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x359F28u;
    {
        const bool branch_taken_0x359f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359F28u;
        // 0x359f2c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359f28) {
            ctx->pc = 0x359F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359f00;
        }
    }
    ctx->pc = 0x359F30u;
    // 0x359f30: 0x8fb10080  lw          $s1, 0x80($sp)
    ctx->pc = 0x359f30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x359f34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x359f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359f38:
    // 0x359f38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x359f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x359f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x359f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f40: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x359f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x359f44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x359f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f48: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x359F48u;
    SET_GPR_U32(ctx, 31, 0x359F50u);
    ctx->pc = 0x359F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F48u;
    // 0x359f4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x359F48u, 0x359F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F50u;
label_359f50:
    // 0x359f50: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x359F50u;
    SET_GPR_U32(ctx, 31, 0x359F58u);
    ctx->pc = 0x359F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F50u;
    // 0x359f54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x359F50u, 0x359F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F58u;
label_359f58:
    // 0x359f58: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x359f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x359f5c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x359f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x359f60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x359F60u;
    {
        const bool branch_taken_0x359f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359F60u;
        // 0x359f64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359f60) {
            ctx->pc = 0x359F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359f38;
        }
    }
    ctx->pc = 0x359F68u;
    // 0x359f68: 0x8fab0080  lw          $t3, 0x80($sp)
    ctx->pc = 0x359f68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x359f6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x359f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x359f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f74: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x359f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f78: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x359f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f7c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x359f7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f80: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x359f80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f84: 0xc08d87a  jal         func_2361E8
    ctx->pc = 0x359F84u;
    SET_GPR_U32(ctx, 31, 0x359F8Cu);
    ctx->pc = 0x359F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F84u;
    // 0x359f88: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2361E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2361E8u, 0x359F84u, 0x359F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F8Cu;
label_359f8c:
    // 0x359f8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x359f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f90: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x359f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x359f94: 0x0  nop
    ctx->pc = 0x359f94u;
    // NOP
label_359f98:
    // 0x359f98: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x359f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x359f9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x359f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x359fa0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x359FA0u;
    SET_GPR_U32(ctx, 31, 0x359FA8u);
    ctx->pc = 0x359FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359FA0u;
    // 0x359fa4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x359FA0u, 0x359FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359FA8u;
label_359fa8:
    // 0x359fa8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x359fa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x359facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359fb4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x359FB4u;
    SET_GPR_U32(ctx, 31, 0x359FBCu);
    ctx->pc = 0x359FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359FB4u;
    // 0x359fb8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x359FB4u, 0x359FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359FBCu;
label_359fbc:
    // 0x359fbc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x359fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x359fc0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x359FC0u;
    {
        const bool branch_taken_0x359fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359FC0u;
        // 0x359fc4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359fc0) {
            ctx->pc = 0x359F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359f98;
        }
    }
    ctx->pc = 0x359FC8u;
    // 0x359fc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x359fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fcc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x359fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_359fd0:
    // 0x359fd0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x359fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x359fd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x359fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x359fd8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x359FD8u;
    SET_GPR_U32(ctx, 31, 0x359FE0u);
    ctx->pc = 0x359FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359FD8u;
    // 0x359fdc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x359FD8u, 0x359FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359FE0u;
label_359fe0:
    // 0x359fe0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x359fe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x359fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fe8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x359fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x359fec: 0xc102576  jal         func_4095D8
    ctx->pc = 0x359FECu;
    SET_GPR_U32(ctx, 31, 0x359FF4u);
    ctx->pc = 0x359FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359FECu;
    // 0x359ff0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x359FECu, 0x359FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359FF4u;
label_359ff4:
    // 0x359ff4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x359ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x359ff8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x359FF8u;
    {
        const bool branch_taken_0x359ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359FF8u;
        // 0x359ffc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359ff8) {
            ctx->pc = 0x359FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359fd0;
        }
    }
    ctx->pc = 0x35A000u;
    // 0x35a000: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35a000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a004: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x35a004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_35a008:
    // 0x35a008: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x35a008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x35a00c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35a00cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35a010: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35A010u;
    SET_GPR_U32(ctx, 31, 0x35A018u);
    ctx->pc = 0x35A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A010u;
    // 0x35a014: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35A010u, 0x35A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A018u;
label_35a018:
    // 0x35a018: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35a018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a01c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35a01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a020: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35a020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35a024: 0xc102576  jal         func_4095D8
    ctx->pc = 0x35A024u;
    SET_GPR_U32(ctx, 31, 0x35A02Cu);
    ctx->pc = 0x35A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A024u;
    // 0x35a028: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x35A024u, 0x35A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A02Cu;
label_35a02c:
    // 0x35a02c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x35a02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35a030: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35A030u;
    {
        const bool branch_taken_0x35a030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A030u;
        // 0x35a034: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a030) {
            ctx->pc = 0x35A008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a008;
        }
    }
    ctx->pc = 0x35A038u;
    // 0x35a038: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35a038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a03c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x35a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_35a040:
    // 0x35a040: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x35a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x35a044: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35a044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35a048: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35A048u;
    SET_GPR_U32(ctx, 31, 0x35A050u);
    ctx->pc = 0x35A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A048u;
    // 0x35a04c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35A048u, 0x35A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A050u;
label_35a050:
    // 0x35a050: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35a050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35a054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a058: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35a058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35a05c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x35A05Cu;
    SET_GPR_U32(ctx, 31, 0x35A064u);
    ctx->pc = 0x35A060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A05Cu;
    // 0x35a060: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x35A05Cu, 0x35A064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A064u;
label_35a064:
    // 0x35a064: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x35a064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35a068: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35A068u;
    {
        const bool branch_taken_0x35a068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A068u;
        // 0x35a06c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a068) {
            ctx->pc = 0x35A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a040;
        }
    }
    ctx->pc = 0x35A070u;
    // 0x35a070: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35a070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a074: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x35a074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_35a078:
    // 0x35a078: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x35a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x35a07c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35a07cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35a080: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35A080u;
    SET_GPR_U32(ctx, 31, 0x35A088u);
    ctx->pc = 0x35A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A080u;
    // 0x35a084: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35A080u, 0x35A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A088u;
label_35a088:
    // 0x35a088: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35a088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a08c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35a08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a090: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35a090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35a094: 0xc102576  jal         func_4095D8
    ctx->pc = 0x35A094u;
    SET_GPR_U32(ctx, 31, 0x35A09Cu);
    ctx->pc = 0x35A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A094u;
    // 0x35a098: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x35A094u, 0x35A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A09Cu;
label_35a09c:
    // 0x35a09c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x35a09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35a0a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35A0A0u;
    {
        const bool branch_taken_0x35a0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A0A0u;
        // 0x35a0a4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a0a0) {
            ctx->pc = 0x35A078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a078;
        }
    }
    ctx->pc = 0x35A0A8u;
    // 0x35a0a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35a0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x35a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_35a0b0:
    // 0x35a0b0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x35a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x35a0b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35a0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35a0b8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35A0B8u;
    SET_GPR_U32(ctx, 31, 0x35A0C0u);
    ctx->pc = 0x35A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A0B8u;
    // 0x35a0bc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35A0B8u, 0x35A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A0C0u;
label_35a0c0:
    // 0x35a0c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35a0c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35a0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0c8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35a0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35a0cc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x35A0CCu;
    SET_GPR_U32(ctx, 31, 0x35A0D4u);
    ctx->pc = 0x35A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A0CCu;
    // 0x35a0d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x35A0CCu, 0x35A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A0D4u;
label_35a0d4:
    // 0x35a0d4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x35a0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35a0d8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35A0D8u;
    {
        const bool branch_taken_0x35a0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A0D8u;
        // 0x35a0dc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a0d8) {
            ctx->pc = 0x35A0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a0b0;
        }
    }
    ctx->pc = 0x35A0E0u;
    // 0x35a0e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35a0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0e4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x35a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_35a0e8:
    // 0x35a0e8: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x35a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x35a0ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35a0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35a0f0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35A0F0u;
    SET_GPR_U32(ctx, 31, 0x35A0F8u);
    ctx->pc = 0x35A0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A0F0u;
    // 0x35a0f4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35A0F0u, 0x35A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A0F8u;
label_35a0f8:
    // 0x35a0f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35a0f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a0fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35a0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a100: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35a100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35a104: 0xc102576  jal         func_4095D8
    ctx->pc = 0x35A104u;
    SET_GPR_U32(ctx, 31, 0x35A10Cu);
    ctx->pc = 0x35A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A104u;
    // 0x35a108: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x35A104u, 0x35A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A10Cu;
label_35a10c:
    // 0x35a10c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x35a10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35a110: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35A110u;
    {
        const bool branch_taken_0x35a110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A110u;
        // 0x35a114: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a110) {
            ctx->pc = 0x35A0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a0e8;
        }
    }
    ctx->pc = 0x35A118u;
    // 0x35a118: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35a118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a11c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x35a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_35a120:
    // 0x35a120: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x35a120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35a124: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35a124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35a128: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35a128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35a12c: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35A12Cu;
    SET_GPR_U32(ctx, 31, 0x35A134u);
    ctx->pc = 0x35A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A12Cu;
    // 0x35a130: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35A12Cu, 0x35A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A134u;
label_35a134:
    // 0x35a134: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35a134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35a138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a13c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x35a13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35a140: 0xc102576  jal         func_4095D8
    ctx->pc = 0x35A140u;
    SET_GPR_U32(ctx, 31, 0x35A148u);
    ctx->pc = 0x35A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A140u;
    // 0x35a144: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x35A140u, 0x35A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A148u;
label_35a148:
    // 0x35a148: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x35a148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35a14c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x35A14Cu;
    {
        const bool branch_taken_0x35a14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A14Cu;
        // 0x35a150: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a14c) {
            ctx->pc = 0x35A120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a120;
        }
    }
    ctx->pc = 0x35A154u;
    // 0x35a154: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x35a154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x35a158: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a15c: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x35a15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x35a160: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x35a160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x35a164: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x35a164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x35a168: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x35a168u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x35a16c: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x35a16cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x35a170: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x35a170u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x35a174: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x35a174u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x35a178: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x35a178u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35a17c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x35a17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35a180: 0x3e00008  jr          $ra
    ctx->pc = 0x35A180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A180u;
        // 0x35a184: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A188u;
}
