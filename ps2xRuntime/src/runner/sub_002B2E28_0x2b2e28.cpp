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

// Function: sub_002B2E28
// Address: 0x2b2e28 - 0x2b2fc8
void sub_002B2E28_0x2b2e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2E28_0x2b2e28");
#endif

    switch (ctx->pc) {
        case 0x2b2e70u: goto label_2b2e70;
        case 0x2b2e88u: goto label_2b2e88;
        case 0x2b2edcu: goto label_2b2edc;
        case 0x2b2ef8u: goto label_2b2ef8;
        case 0x2b2f0cu: goto label_2b2f0c;
        case 0x2b2f1cu: goto label_2b2f1c;
        case 0x2b2f44u: goto label_2b2f44;
        case 0x2b2f5cu: goto label_2b2f5c;
        case 0x2b2f84u: goto label_2b2f84;
        default: break;
    }

    ctx->pc = 0x2b2e28u;

    // 0x2b2e28: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b2e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b2e2c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2b2e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2b2e30: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2b2e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2b2e34: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2b2e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2b2e38: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2b2e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2b2e3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b2e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e40: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2b2e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2b2e44: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2b2e44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e48: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b2e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b2e4c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2b2e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2b2e50: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2b2e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2b2e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2e58: 0x8c64caa8  lw          $a0, -0x3558($v1)
    ctx->pc = 0x2b2e58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CAA8u));
    // 0x2b2e5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2e60: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2b2e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2b2e64: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2b2e64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b2e68: 0xc059156  jal         func_164558
    ctx->pc = 0x2B2E68u;
    SET_GPR_U32(ctx, 31, 0x2B2E70u);
    ctx->pc = 0x2B2E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E68u;
    // 0x2b2e6c: 0x8c65002c  lw          $a1, 0x2C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164558u, 0x2B2E68u, 0x2B2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E70u;
label_2b2e70:
    // 0x2b2e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e74: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B2E74u;
    {
        const bool branch_taken_0x2b2e74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2e74) {
            ctx->pc = 0x2B2E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2E74u;
            // 0x2b2e78: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2E94u;
            goto label_2b2e94;
        }
    }
    ctx->pc = 0x2B2E7Cu;
    // 0x2b2e7c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b2e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2e80: 0xc0a447e  jal         func_2911F8
    ctx->pc = 0x2B2E80u;
    SET_GPR_U32(ctx, 31, 0x2B2E88u);
    ctx->pc = 0x2B2E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E80u;
    // 0x2b2e84: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911F8u, 0x2B2E80u, 0x2B2E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E88u;
label_2b2e88:
    // 0x2b2e88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2E88u;
    {
        const bool branch_taken_0x2b2e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E88u;
        // 0x2b2e8c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e88) {
            ctx->pc = 0x2B2EA0u;
            goto label_2b2ea0;
        }
    }
    ctx->pc = 0x2B2E90u;
    // 0x2b2e90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b2e94:
    // 0x2b2e94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e98: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2B2E98u;
    {
        const bool branch_taken_0x2b2e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E98u;
        // 0x2b2e9c: 0xa4600148  sh          $zero, 0x148($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e98) {
            ctx->pc = 0x2B2F9Cu;
            goto label_2b2f9c;
        }
    }
    ctx->pc = 0x2B2EA0u;
label_2b2ea0:
    // 0x2b2ea0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2b2ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b2ea4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2b2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b2ea8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b2ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2eac: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2b2eacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b2eb0: 0x84a30148  lh          $v1, 0x148($a1)
    ctx->pc = 0x2b2eb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x2b2eb4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2b2eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b2eb8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2B2EB8u;
    {
        const bool branch_taken_0x2b2eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EB8u;
        // 0x2b2ebc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2eb8) {
            ctx->pc = 0x2B2F98u;
            goto label_2b2f98;
        }
    }
    ctx->pc = 0x2B2EC0u;
    // 0x2b2ec0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b2ec4: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2EC4u;
    {
        const bool branch_taken_0x2b2ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EC4u;
        // 0x2b2ec8: 0x24160015  addiu       $s6, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ec4) {
            ctx->pc = 0x2B2EE8u;
            goto label_2b2ee8;
        }
    }
    ctx->pc = 0x2B2ECCu;
    // 0x2b2ecc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b2eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2b2ed0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2b2ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b2ed4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2B2ED4u;
    SET_GPR_U32(ctx, 31, 0x2B2EDCu);
    ctx->pc = 0x2B2ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2ED4u;
    // 0x2b2ed8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B2ED4u, 0x2B2EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2EDCu;
label_2b2edc:
    // 0x2b2edc: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x2b2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x2b2ee0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2b2ee0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b2ee4: 0x3b00a  movz        $s6, $zero, $v1
    ctx->pc = 0x2b2ee4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_2b2ee8:
    // 0x2b2ee8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b2ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2eec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b2eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2ef0: 0xc0891de  jal         func_224778
    ctx->pc = 0x2B2EF0u;
    SET_GPR_U32(ctx, 31, 0x2B2EF8u);
    ctx->pc = 0x2B2EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2EF0u;
    // 0x2b2ef4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2B2EF0u, 0x2B2EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2EF8u;
label_2b2ef8:
    // 0x2b2ef8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b2ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2efc: 0x16500027  bne         $s2, $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B2EFCu;
    {
        const bool branch_taken_0x2b2efc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EFCu;
        // 0x2b2f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2efc) {
            ctx->pc = 0x2B2F9Cu;
            goto label_2b2f9c;
        }
    }
    ctx->pc = 0x2B2F04u;
    // 0x2b2f04: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B2F04u;
    SET_GPR_U32(ctx, 31, 0x2B2F0Cu);
    ctx->pc = 0x2B2F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2F04u;
    // 0x2b2f08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B2F04u, 0x2B2F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F0Cu;
label_2b2f0c:
    // 0x2b2f0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b2f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f14: 0xc0a43aa  jal         func_290EA8
    ctx->pc = 0x2B2F14u;
    SET_GPR_U32(ctx, 31, 0x2B2F1Cu);
    ctx->pc = 0x2B2F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2F14u;
    // 0x2b2f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290EA8u, 0x2B2F14u, 0x2B2F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F1Cu;
label_2b2f1c:
    // 0x2b2f1c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b2f1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f20: 0x1692001e  bne         $s4, $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B2F20u;
    {
        const bool branch_taken_0x2b2f20 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 18));
        ctx->pc = 0x2B2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F20u;
        // 0x2b2f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f20) {
            ctx->pc = 0x2B2F9Cu;
            goto label_2b2f9c;
        }
    }
    ctx->pc = 0x2B2F28u;
    // 0x2b2f28: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x2b2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x2b2f2c: 0x8c4305e8  lw          $v1, 0x5E8($v0)
    ctx->pc = 0x2b2f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1512)));
    // 0x2b2f30: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2F30u;
    {
        const bool branch_taken_0x2b2f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F30u;
        // 0x2b2f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f30) {
            ctx->pc = 0x2B2F4Cu;
            goto label_2b2f4c;
        }
    }
    ctx->pc = 0x2B2F38u;
    // 0x2b2f38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b2f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2f3c: 0xc0a37a6  jal         func_28DE98
    ctx->pc = 0x2B2F3Cu;
    SET_GPR_U32(ctx, 31, 0x2B2F44u);
    ctx->pc = 0x2B2F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2F3Cu;
    // 0x2b2f40: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE98u, 0x2B2F3Cu, 0x2B2F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F44u;
label_2b2f44:
    // 0x2b2f44: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B2F44u;
    {
        const bool branch_taken_0x2b2f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F44u;
        // 0x2b2f48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f44) {
            ctx->pc = 0x2B2F9Cu;
            goto label_2b2f9c;
        }
    }
    ctx->pc = 0x2B2F4Cu;
label_2b2f4c:
    // 0x2b2f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b2f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b2f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f54: 0xc0a4402  jal         func_291008
    ctx->pc = 0x2B2F54u;
    SET_GPR_U32(ctx, 31, 0x2B2F5Cu);
    ctx->pc = 0x2B2F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2F54u;
    // 0x2b2f58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291008u, 0x2B2F54u, 0x2B2F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F5Cu;
label_2b2f5c:
    // 0x2b2f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f60: 0x1614000e  bne         $s0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2B2F60u;
    {
        const bool branch_taken_0x2b2f60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x2B2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F60u;
        // 0x2b2f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f60) {
            ctx->pc = 0x2B2F9Cu;
            goto label_2b2f9c;
        }
    }
    ctx->pc = 0x2B2F68u;
    // 0x2b2f68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b2f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2f6c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b2f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f70: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b2f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b2f74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b2f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b2f78: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2b2f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f7c: 0xc0a3892  jal         func_28E248
    ctx->pc = 0x2B2F7Cu;
    SET_GPR_U32(ctx, 31, 0x2B2F84u);
    ctx->pc = 0x2B2F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2F7Cu;
    // 0x2b2f80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2B2F7Cu, 0x2B2F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F84u;
label_2b2f84:
    // 0x2b2f84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b2f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2f88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2f8c: 0xa4600148  sh          $zero, 0x148($v1)
    ctx->pc = 0x2b2f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b2f90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2F90u;
    {
        const bool branch_taken_0x2b2f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F90u;
        // 0x2b2f94: 0xa2300028  sb          $s0, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f90) {
            ctx->pc = 0x2B2F9Cu;
            goto label_2b2f9c;
        }
    }
    ctx->pc = 0x2B2F98u;
label_2b2f98:
    // 0x2b2f98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2f9c:
    // 0x2b2f9c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2b2f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b2fa0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2b2fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b2fa4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2b2fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b2fa8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b2fa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b2fac: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2b2facu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b2fb0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2b2fb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2fb4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2b2fb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FBCu;
        // 0x2b2fc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2FC4u;
    // 0x2b2fc4: 0x0  nop
    ctx->pc = 0x2b2fc4u;
    // NOP
    ctx->pc = 0x2b2fc8u;
}
