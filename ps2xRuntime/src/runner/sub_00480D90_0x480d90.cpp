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

// Function: sub_00480D90
// Address: 0x480d90 - 0x480ed8
void sub_00480D90_0x480d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480D90_0x480d90");
#endif

    switch (ctx->pc) {
        case 0x480dc8u: goto label_480dc8;
        case 0x480dd4u: goto label_480dd4;
        case 0x480df0u: goto label_480df0;
        case 0x480e10u: goto label_480e10;
        case 0x480e30u: goto label_480e30;
        case 0x480e70u: goto label_480e70;
        case 0x480e80u: goto label_480e80;
        case 0x480e90u: goto label_480e90;
        case 0x480ea4u: goto label_480ea4;
        default: break;
    }

    ctx->pc = 0x480d90u;

    // 0x480d90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x480d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x480d94: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x480d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x480d98: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x480d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x480d9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x480d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480da0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x480da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x480da4: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x480da4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x480da8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x480da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x480dac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x480dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480db0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x480db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x480db4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x480db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480db8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x480db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x480dbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x480dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x480dc0: 0xc12a66a  jal         func_4A99A8
    ctx->pc = 0x480DC0u;
    SET_GPR_U32(ctx, 31, 0x480DC8u);
    ctx->pc = 0x480DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480DC0u;
    // 0x480dc4: 0x26340030  addiu       $s4, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A99A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A99A8u, 0x480DC0u, 0x480DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480DC8u;
label_480dc8:
    // 0x480dc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x480dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480dcc: 0xc12a66a  jal         func_4A99A8
    ctx->pc = 0x480DCCu;
    SET_GPR_U32(ctx, 31, 0x480DD4u);
    ctx->pc = 0x480DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480DCCu;
    // 0x480dd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A99A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A99A8u, 0x480DCCu, 0x480DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480DD4u;
label_480dd4:
    // 0x480dd4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x480dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x480dd8: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x480dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x480ddc: 0x2475ec08  addiu       $s5, $v1, -0x13F8
    ctx->pc = 0x480ddcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962184));
    // 0x480de0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x480de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x480de4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x480de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480de8: 0xc11fe2c  jal         func_47F8B0
    ctx->pc = 0x480DE8u;
    SET_GPR_U32(ctx, 31, 0x480DF0u);
    ctx->pc = 0x480DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480DE8u;
    // 0x480dec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F8B0u, 0x480DE8u, 0x480DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480DF0u;
label_480df0:
    // 0x480df0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x480df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x480df4: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x480df4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x480df8: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x480df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x480dfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x480dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480e00: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x480e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x480e04: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x480e04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x480e08: 0xc11ef26  jal         func_47BC98
    ctx->pc = 0x480E08u;
    SET_GPR_U32(ctx, 31, 0x480E10u);
    ctx->pc = 0x480E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480E08u;
    // 0x480e0c: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BC98u, 0x480E08u, 0x480E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480E10u;
label_480e10:
    // 0x480e10: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x480E10u;
    {
        const bool branch_taken_0x480e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x480E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480E10u;
        // 0x480e14: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480e10) {
            ctx->pc = 0x480EB0u;
            goto label_480eb0;
        }
    }
    ctx->pc = 0x480E18u;
    // 0x480e18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x480e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480e1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x480e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x480e20: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x480e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x480e24: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x480e24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x480e28: 0xc11ef26  jal         func_47BC98
    ctx->pc = 0x480E28u;
    SET_GPR_U32(ctx, 31, 0x480E30u);
    ctx->pc = 0x480E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480E28u;
    // 0x480e2c: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BC98u, 0x480E28u, 0x480E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480E30u;
label_480e30:
    // 0x480e30: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x480E30u;
    {
        const bool branch_taken_0x480e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x480E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480E30u;
        // 0x480e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480e30) {
            ctx->pc = 0x480EB4u;
            goto label_480eb4;
        }
    }
    ctx->pc = 0x480E38u;
    // 0x480e38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x480e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x480e3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x480E3Cu;
    {
        const bool branch_taken_0x480e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x480E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480E3Cu;
        // 0x480e40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480e3c) {
            ctx->pc = 0x480E50u;
            goto label_480e50;
        }
    }
    ctx->pc = 0x480E44u;
    // 0x480e44: 0x90420023  lbu         $v0, 0x23($v0)
    ctx->pc = 0x480e44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x480e48: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x480e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x480e4c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x480e4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_480e50:
    // 0x480e50: 0x96220050  lhu         $v0, 0x50($s1)
    ctx->pc = 0x480e50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x480e54: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x480e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x480e58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x480e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480e5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x480e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480e60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x480e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x480e64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x480e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x480e68: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x480E68u;
    SET_GPR_U32(ctx, 31, 0x480E70u);
    ctx->pc = 0x480E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480E68u;
    // 0x480e6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x480E68u, 0x480E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480E70u;
label_480e70:
    // 0x480e70: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x480E70u;
    {
        const bool branch_taken_0x480e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x480E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480E70u;
        // 0x480e74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480e70) {
            ctx->pc = 0x480EB0u;
            goto label_480eb0;
        }
    }
    ctx->pc = 0x480E78u;
    // 0x480e78: 0xc12a678  jal         func_4A99E0
    ctx->pc = 0x480E78u;
    SET_GPR_U32(ctx, 31, 0x480E80u);
    ctx->pc = 0x480E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480E78u;
    // 0x480e7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A99E0u, 0x480E78u, 0x480E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480E80u;
label_480e80:
    // 0x480e80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x480E80u;
    {
        const bool branch_taken_0x480e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x480E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480E80u;
        // 0x480e84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480e80) {
            ctx->pc = 0x480EB0u;
            goto label_480eb0;
        }
    }
    ctx->pc = 0x480E88u;
    // 0x480e88: 0xc12a678  jal         func_4A99E0
    ctx->pc = 0x480E88u;
    SET_GPR_U32(ctx, 31, 0x480E90u);
    ctx->pc = 0x480E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480E88u;
    // 0x480e8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A99E0u, 0x480E88u, 0x480E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480E90u;
label_480e90:
    // 0x480e90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x480E90u;
    {
        const bool branch_taken_0x480e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x480E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480E90u;
        // 0x480e94: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480e90) {
            ctx->pc = 0x480EB0u;
            goto label_480eb0;
        }
    }
    ctx->pc = 0x480E98u;
    // 0x480e98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x480e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480e9c: 0xc11fdb2  jal         func_47F6C8
    ctx->pc = 0x480E9Cu;
    SET_GPR_U32(ctx, 31, 0x480EA4u);
    ctx->pc = 0x480EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480E9Cu;
    // 0x480ea0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F6C8u, 0x480E9Cu, 0x480EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480EA4u;
label_480ea4:
    // 0x480ea4: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x480ea4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x480ea8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x480EA8u;
    {
        const bool branch_taken_0x480ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x480EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480EA8u;
        // 0x480eac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480ea8) {
            ctx->pc = 0x480EB4u;
            goto label_480eb4;
        }
    }
    ctx->pc = 0x480EB0u;
label_480eb0:
    // 0x480eb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x480eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_480eb4:
    // 0x480eb4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x480eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x480eb8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x480eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x480ebc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x480ebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x480ec0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x480ec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x480ec4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x480ec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x480ec8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x480ec8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480ecc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x480eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x480ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x480ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480ED0u;
        // 0x480ed4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480ED8u;
}
