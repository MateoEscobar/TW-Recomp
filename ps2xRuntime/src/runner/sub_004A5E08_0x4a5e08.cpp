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

// Function: sub_004A5E08
// Address: 0x4a5e08 - 0x4a5fe0
void sub_004A5E08_0x4a5e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5E08_0x4a5e08");
#endif

    switch (ctx->pc) {
        case 0x4a5e50u: goto label_4a5e50;
        case 0x4a5e68u: goto label_4a5e68;
        case 0x4a5e74u: goto label_4a5e74;
        case 0x4a5e9cu: goto label_4a5e9c;
        case 0x4a5ea8u: goto label_4a5ea8;
        case 0x4a5edcu: goto label_4a5edc;
        case 0x4a5ee8u: goto label_4a5ee8;
        case 0x4a5f38u: goto label_4a5f38;
        default: break;
    }

    ctx->pc = 0x4a5e08u;

    // 0x4a5e08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4a5e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4a5e0c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4a5e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x4a5e10: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4a5e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x4a5e14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a5e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5e18: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4a5e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x4a5e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a5e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5e20: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4a5e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x4a5e24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a5e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5e28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a5e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4a5e2c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4a5e2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5e30: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4a5e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x4a5e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a5e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5e38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4a5e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4a5e3c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x4a5e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a5e40: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4a5e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x4a5e44: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4a5e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a5e48: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4A5E48u;
    SET_GPR_U32(ctx, 31, 0x4A5E50u);
    ctx->pc = 0x4A5E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5E48u;
    // 0x4a5e4c: 0x8e90002c  lw          $s0, 0x2C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4A5E48u, 0x4A5E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5E50u;
label_4a5e50:
    // 0x4a5e50: 0x2e030021  sltiu       $v1, $s0, 0x21
    ctx->pc = 0x4a5e50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x4a5e54: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4A5E54u;
    {
        const bool branch_taken_0x4a5e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5e54) {
            ctx->pc = 0x4A5E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5E54u;
            // 0x4a5e58: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5E80u;
            goto label_4a5e80;
        }
    }
    ctx->pc = 0x4A5E5Cu;
    // 0x4a5e5c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x4a5e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x4a5e60: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A5E60u;
    SET_GPR_U32(ctx, 31, 0x4A5E68u);
    ctx->pc = 0x4A5E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5E60u;
    // 0x4a5e64: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A5E60u, 0x4A5E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5E68u;
label_4a5e68:
    // 0x4a5e68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a5e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5e6c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A5E6Cu;
    SET_GPR_U32(ctx, 31, 0x4A5E74u);
    ctx->pc = 0x4A5E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5E6Cu;
    // 0x4a5e70: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A5E6Cu, 0x4A5E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5E74u;
label_4a5e74:
    // 0x4a5e74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a5e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5e78: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x4a5e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x4a5e7c: 0x0  nop
    ctx->pc = 0x4a5e7cu;
    // NOP
label_4a5e80:
    // 0x4a5e80: 0x2c420021  sltiu       $v0, $v0, 0x21
    ctx->pc = 0x4a5e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x4a5e84: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A5E84u;
    {
        const bool branch_taken_0x4a5e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5E84u;
        // 0x4a5e88: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5e84) {
            ctx->pc = 0x4A5EB0u;
            goto label_4a5eb0;
        }
    }
    ctx->pc = 0x4A5E8Cu;
    // 0x4a5e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a5e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a5e90: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x4a5e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a5e94: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A5E94u;
    SET_GPR_U32(ctx, 31, 0x4A5E9Cu);
    ctx->pc = 0x4A5E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5E94u;
    // 0x4a5e98: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A5E94u, 0x4A5E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5E9Cu;
label_4a5e9c:
    // 0x4a5e9c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4a5e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x4a5ea0: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A5EA0u;
    SET_GPR_U32(ctx, 31, 0x4A5EA8u);
    ctx->pc = 0x4A5EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5EA0u;
    // 0x4a5ea4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A5EA0u, 0x4A5EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5EA8u;
label_4a5ea8:
    // 0x4a5ea8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a5ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5eac: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a5eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4a5eb0:
    // 0x4a5eb0: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x4a5eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x4a5eb4: 0x2455ad18  addiu       $s5, $v0, -0x52E8
    ctx->pc = 0x4a5eb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a5eb8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4a5eb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5ebc: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x4a5ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x4a5ec0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x4a5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x4a5ec4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4a5ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a5ec8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A5EC8u;
    {
        const bool branch_taken_0x4a5ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5EC8u;
        // 0x4a5ecc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5ec8) {
            ctx->pc = 0x4A5EF0u;
            goto label_4a5ef0;
        }
    }
    ctx->pc = 0x4A5ED0u;
    // 0x4a5ed0: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x4a5ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x4a5ed4: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A5ED4u;
    SET_GPR_U32(ctx, 31, 0x4A5EDCu);
    ctx->pc = 0x4A5ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5ED4u;
    // 0x4a5ed8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A5ED4u, 0x4A5EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5EDCu;
label_4a5edc:
    // 0x4a5edc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4a5edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4a5ee0: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A5EE0u;
    SET_GPR_U32(ctx, 31, 0x4A5EE8u);
    ctx->pc = 0x4A5EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5EE0u;
    // 0x4a5ee4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A5EE0u, 0x4A5EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5EE8u;
label_4a5ee8:
    // 0x4a5ee8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a5ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5eec: 0x0  nop
    ctx->pc = 0x4a5eecu;
    // NOP
label_4a5ef0:
    // 0x4a5ef0: 0x12400030  beqz        $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x4A5EF0u;
    {
        const bool branch_taken_0x4a5ef0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5EF0u;
        // 0x4a5ef4: 0x8f828a88  lw          $v0, -0x7578($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5ef0) {
            ctx->pc = 0x4A5FB4u;
            goto label_4a5fb4;
        }
    }
    ctx->pc = 0x4A5EF8u;
    // 0x4a5ef8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x4a5ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4a5efc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4a5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x4a5f00: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4a5f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4a5f04: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x4a5f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x4a5f08: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x4a5f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a5f0c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x4a5f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x4a5f10: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4a5f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a5f14: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x4a5f14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x4a5f18: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4a5f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4a5f1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a5f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5f20: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4a5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4a5f24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a5f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a5f28: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A5F28u;
    {
        const bool branch_taken_0x4a5f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5F28u;
        // 0x4a5f2c: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5f28) {
            ctx->pc = 0x4A5F54u;
            goto label_4a5f54;
        }
    }
    ctx->pc = 0x4A5F30u;
    // 0x4a5f30: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a5f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a5f34: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a5f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4a5f38:
    // 0x4a5f38: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4a5f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x4a5f3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4a5f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4a5f40: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4a5f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4a5f44: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4a5f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a5f48: 0x0  nop
    ctx->pc = 0x4a5f48u;
    // NOP
    // 0x4a5f4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A5F4Cu;
    {
        const bool branch_taken_0x4a5f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5F4Cu;
        // 0x4a5f50: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5f4c) {
            ctx->pc = 0x4A5F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5f38;
        }
    }
    ctx->pc = 0x4A5F54u;
label_4a5f54:
    // 0x4a5f54: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x4a5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x4a5f58: 0x26c2ad18  addiu       $v0, $s6, -0x52E8
    ctx->pc = 0x4a5f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946072));
    // 0x4a5f5c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x4a5f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a5f60: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x4a5f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4a5f64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a5f68: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4a5f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a5f6c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x4a5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x4a5f70: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x4a5f70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4a5f74: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x4a5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4a5f78: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x4a5f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4a5f7c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x4a5f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x4a5f80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4a5f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4a5f84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4a5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a5f88: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4a5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4a5f8c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4a5f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4a5f90: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4a5f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4a5f94: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4a5f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x4a5f98: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x4a5f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x4a5f9c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x4a5f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x4a5fa0: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x4a5fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x4a5fa4: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x4a5fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x4a5fa8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4a5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4a5fac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a5facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a5fb0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x4a5fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_4a5fb4:
    // 0x4a5fb4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4a5fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5fb8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4a5fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a5fbc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4a5fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a5fc0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4a5fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a5fc4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4a5fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a5fc8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4a5fc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a5fcc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a5fccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a5fd0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4a5fd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a5fd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4a5fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a5fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5FD8u;
        // 0x4a5fdc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5FE0u;
}
