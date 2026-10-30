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

// Function: sub_00311D98
// Address: 0x311d98 - 0x311eb8
void sub_00311D98_0x311d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311D98_0x311d98");
#endif

    switch (ctx->pc) {
        case 0x311dc8u: goto label_311dc8;
        case 0x311dd4u: goto label_311dd4;
        case 0x311de0u: goto label_311de0;
        case 0x311de8u: goto label_311de8;
        case 0x311df8u: goto label_311df8;
        case 0x311e1cu: goto label_311e1c;
        case 0x311e2cu: goto label_311e2c;
        case 0x311e38u: goto label_311e38;
        case 0x311e40u: goto label_311e40;
        case 0x311e48u: goto label_311e48;
        case 0x311e5cu: goto label_311e5c;
        case 0x311e78u: goto label_311e78;
        case 0x311e84u: goto label_311e84;
        default: break;
    }

    ctx->pc = 0x311d98u;

    // 0x311d98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x311d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x311d9c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x311d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x311da0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x311da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311da4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x311da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x311da8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x311da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x311dac: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x311dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x311db0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x311db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x311db4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x311db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x311db8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x311db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x311dbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x311dc0: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x311DC0u;
    SET_GPR_U32(ctx, 31, 0x311DC8u);
    ctx->pc = 0x311DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311DC0u;
    // 0x311dc4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x311DC0u, 0x311DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DC8u;
label_311dc8:
    // 0x311dc8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x311dc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311dcc: 0xc0c46f4  jal         func_311BD0
    ctx->pc = 0x311DCCu;
    SET_GPR_U32(ctx, 31, 0x311DD4u);
    ctx->pc = 0x311DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311DCCu;
    // 0x311dd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311BD0u, 0x311DCCu, 0x311DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DD4u;
label_311dd4:
    // 0x311dd4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x311dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x311dd8: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x311dd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x311ddc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x311ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_311de0:
    // 0x311de0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x311DE0u;
    SET_GPR_U32(ctx, 31, 0x311DE8u);
    ctx->pc = 0x311DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311DE0u;
    // 0x311de4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x311DE0u, 0x311DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DE8u;
label_311de8:
    // 0x311de8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x311de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x311dec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311df0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x311DF0u;
    SET_GPR_U32(ctx, 31, 0x311DF8u);
    ctx->pc = 0x311DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311DF0u;
    // 0x311df4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x311DF0u, 0x311DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DF8u;
label_311df8:
    // 0x311df8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x311df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311dfc: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x311DFCu;
    {
        const bool branch_taken_0x311dfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DFCu;
        // 0x311e00: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311dfc) {
            ctx->pc = 0x311E88u;
            goto label_311e88;
        }
    }
    ctx->pc = 0x311E04u;
    // 0x311e04: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x311e04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x311e08: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x311e08u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x311e0c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x311E0Cu;
    {
        const bool branch_taken_0x311e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E0Cu;
        // 0x311e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e0c) {
            ctx->pc = 0x311E84u;
            goto label_311e84;
        }
    }
    ctx->pc = 0x311E14u;
    // 0x311e14: 0xc089f98  jal         func_227E60
    ctx->pc = 0x311E14u;
    SET_GPR_U32(ctx, 31, 0x311E1Cu);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x311E14u, 0x311E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E1Cu;
label_311e1c:
    // 0x311e1c: 0x1051001a  beq         $v0, $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x311E1Cu;
    {
        const bool branch_taken_0x311e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x311E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E1Cu;
        // 0x311e20: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e1c) {
            ctx->pc = 0x311E88u;
            goto label_311e88;
        }
    }
    ctx->pc = 0x311E24u;
    // 0x311e24: 0xc087502  jal         func_21D408
    ctx->pc = 0x311E24u;
    SET_GPR_U32(ctx, 31, 0x311E2Cu);
    ctx->pc = 0x311E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311E24u;
    // 0x311e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x311E24u, 0x311E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E2Cu;
label_311e2c:
    // 0x311e2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x311e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311e30: 0xc0a3630  jal         func_28D8C0
    ctx->pc = 0x311E30u;
    SET_GPR_U32(ctx, 31, 0x311E38u);
    ctx->pc = 0x311E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311E30u;
    // 0x311e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x311E30u, 0x311E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E38u;
label_311e38:
    // 0x311e38: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x311E38u;
    SET_GPR_U32(ctx, 31, 0x311E40u);
    ctx->pc = 0x311E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311E38u;
    // 0x311e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x311E38u, 0x311E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E40u;
label_311e40:
    // 0x311e40: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x311E40u;
    SET_GPR_U32(ctx, 31, 0x311E48u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x311E40u, 0x311E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E48u;
label_311e48:
    // 0x311e48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x311e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311e4c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x311E4Cu;
    {
        const bool branch_taken_0x311e4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E4Cu;
        // 0x311e50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e4c) {
            ctx->pc = 0x311E78u;
            goto label_311e78;
        }
    }
    ctx->pc = 0x311E54u;
    // 0x311e54: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x311E54u;
    SET_GPR_U32(ctx, 31, 0x311E5Cu);
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x311E54u, 0x311E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E5Cu;
label_311e5c:
    // 0x311e5c: 0x9247003f  lbu         $a3, 0x3F($s2)
    ctx->pc = 0x311e5cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
    // 0x311e60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x311e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311e64: 0xc64c002c  lwc1        $f12, 0x2C($s2)
    ctx->pc = 0x311e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x311e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x311e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311e6c: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x311e6cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x311e70: 0xc0b3a02  jal         func_2CE808
    ctx->pc = 0x311E70u;
    SET_GPR_U32(ctx, 31, 0x311E78u);
    ctx->pc = 0x311E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311E70u;
    // 0x311e74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE808u, 0x311E70u, 0x311E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E78u;
label_311e78:
    // 0x311e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311e7c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x311E7Cu;
    SET_GPR_U32(ctx, 31, 0x311E84u);
    ctx->pc = 0x311E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311E7Cu;
    // 0x311e80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x311E7Cu, 0x311E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E84u;
label_311e84:
    // 0x311e84: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x311e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_311e88:
    // 0x311e88: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x311E88u;
    {
        const bool branch_taken_0x311e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311e88) {
            ctx->pc = 0x311E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311E88u;
            // 0x311e8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311de0;
        }
    }
    ctx->pc = 0x311E90u;
    // 0x311e90: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x311e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x311e94: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x311e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x311e98: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x311e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311e9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x311e9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311ea0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x311ea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311ea4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x311ea4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x311ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311eac: 0x3e00008  jr          $ra
    ctx->pc = 0x311EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311EACu;
        // 0x311eb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311EB4u;
    // 0x311eb4: 0x0  nop
    ctx->pc = 0x311eb4u;
    // NOP
    ctx->pc = 0x311eb8u;
}
