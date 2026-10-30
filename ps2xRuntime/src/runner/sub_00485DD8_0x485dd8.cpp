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

// Function: sub_00485DD8
// Address: 0x485dd8 - 0x485ec0
void sub_00485DD8_0x485dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485DD8_0x485dd8");
#endif

    switch (ctx->pc) {
        case 0x485dd8u: goto label_485dd8;
        case 0x485ddcu: goto label_485ddc;
        case 0x485de0u: goto label_485de0;
        case 0x485de4u: goto label_485de4;
        case 0x485de8u: goto label_485de8;
        case 0x485decu: goto label_485dec;
        case 0x485df0u: goto label_485df0;
        case 0x485df4u: goto label_485df4;
        case 0x485df8u: goto label_485df8;
        case 0x485dfcu: goto label_485dfc;
        case 0x485e00u: goto label_485e00;
        case 0x485e04u: goto label_485e04;
        case 0x485e08u: goto label_485e08;
        case 0x485e0cu: goto label_485e0c;
        case 0x485e10u: goto label_485e10;
        case 0x485e14u: goto label_485e14;
        case 0x485e18u: goto label_485e18;
        case 0x485e1cu: goto label_485e1c;
        case 0x485e20u: goto label_485e20;
        case 0x485e24u: goto label_485e24;
        case 0x485e28u: goto label_485e28;
        case 0x485e2cu: goto label_485e2c;
        case 0x485e30u: goto label_485e30;
        case 0x485e34u: goto label_485e34;
        case 0x485e38u: goto label_485e38;
        case 0x485e3cu: goto label_485e3c;
        case 0x485e40u: goto label_485e40;
        case 0x485e44u: goto label_485e44;
        case 0x485e48u: goto label_485e48;
        case 0x485e4cu: goto label_485e4c;
        case 0x485e50u: goto label_485e50;
        case 0x485e54u: goto label_485e54;
        case 0x485e58u: goto label_485e58;
        case 0x485e5cu: goto label_485e5c;
        case 0x485e60u: goto label_485e60;
        case 0x485e64u: goto label_485e64;
        case 0x485e68u: goto label_485e68;
        case 0x485e6cu: goto label_485e6c;
        case 0x485e70u: goto label_485e70;
        case 0x485e74u: goto label_485e74;
        case 0x485e78u: goto label_485e78;
        case 0x485e7cu: goto label_485e7c;
        case 0x485e80u: goto label_485e80;
        case 0x485e84u: goto label_485e84;
        case 0x485e88u: goto label_485e88;
        case 0x485e8cu: goto label_485e8c;
        case 0x485e90u: goto label_485e90;
        case 0x485e94u: goto label_485e94;
        case 0x485e98u: goto label_485e98;
        case 0x485e9cu: goto label_485e9c;
        case 0x485ea0u: goto label_485ea0;
        case 0x485ea4u: goto label_485ea4;
        case 0x485ea8u: goto label_485ea8;
        case 0x485eacu: goto label_485eac;
        case 0x485eb0u: goto label_485eb0;
        case 0x485eb4u: goto label_485eb4;
        case 0x485eb8u: goto label_485eb8;
        case 0x485ebcu: goto label_485ebc;
        default: break;
    }

    ctx->pc = 0x485dd8u;

label_485dd8:
    // 0x485dd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x485dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_485ddc:
    // 0x485ddc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x485ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_485de0:
    // 0x485de0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x485de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_485de4:
    // 0x485de4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x485de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_485de8:
    // 0x485de8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x485de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_485dec:
    // 0x485dec: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x485decu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_485df0:
    // 0x485df0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x485df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_485df4:
    // 0x485df4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x485df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_485df8:
    // 0x485df8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x485df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_485dfc:
    // 0x485dfc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x485dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_485e00:
    // 0x485e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_485e04:
    // 0x485e04: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x485e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_485e08:
    // 0x485e08: 0x40f809  jalr        $v0
label_485e0c:
    if (ctx->pc == 0x485E0Cu) {
        ctx->pc = 0x485E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E08u;
        // 0x485e0c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485E10u;
        goto label_485e10;
    }
    ctx->pc = 0x485E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485E10u);
        ctx->pc = 0x485E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E08u;
        // 0x485e0c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485E08u, 0x485E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485E10u;
label_485e10:
    // 0x485e10: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x485e10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_485e14:
    // 0x485e14: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x485e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_485e18:
    // 0x485e18: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x485e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_485e1c:
    // 0x485e1c: 0x8c50021c  lw          $s0, 0x21C($v0)
    ctx->pc = 0x485e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_485e20:
    // 0x485e20: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_485e24:
    if (ctx->pc == 0x485E24u) {
        ctx->pc = 0x485E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E20u;
        // 0x485e24: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485E28u;
        goto label_485e28;
    }
    ctx->pc = 0x485E20u;
    {
        const bool branch_taken_0x485e20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x485E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E20u;
        // 0x485e24: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485e20) {
            ctx->pc = 0x485E8Cu;
            goto label_485e8c;
        }
    }
    ctx->pc = 0x485E28u;
label_485e28:
    // 0x485e28: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x485e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_485e2c:
    // 0x485e2c: 0x0  nop
    ctx->pc = 0x485e2cu;
    // NOP
label_485e30:
    // 0x485e30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x485e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_485e34:
    // 0x485e34: 0x40f809  jalr        $v0
label_485e38:
    if (ctx->pc == 0x485E38u) {
        ctx->pc = 0x485E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E34u;
        // 0x485e38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485E3Cu;
        goto label_485e3c;
    }
    ctx->pc = 0x485E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485E3Cu);
        ctx->pc = 0x485E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E34u;
        // 0x485e38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485E34u, 0x485E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485E3Cu;
label_485e3c:
    // 0x485e3c: 0xc130632  jal         func_4C18C8
label_485e40:
    if (ctx->pc == 0x485E40u) {
        ctx->pc = 0x485E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E3Cu;
        // 0x485e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485E44u;
        goto label_485e44;
    }
    ctx->pc = 0x485E3Cu;
    SET_GPR_U32(ctx, 31, 0x485E44u);
    ctx->pc = 0x485E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485E3Cu;
    // 0x485e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C18C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C18C8u, 0x485E3Cu, 0x485E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485E44u;
label_485e44:
    // 0x485e44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_485e48:
    if (ctx->pc == 0x485E48u) {
        ctx->pc = 0x485E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E44u;
        // 0x485e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485E4Cu;
        goto label_485e4c;
    }
    ctx->pc = 0x485E44u;
    {
        const bool branch_taken_0x485e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x485E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E44u;
        // 0x485e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485e44) {
            ctx->pc = 0x485E54u;
            goto label_485e54;
        }
    }
    ctx->pc = 0x485E4Cu;
label_485e4c:
    // 0x485e4c: 0x10000010  b           . + 4 + (0x10 << 2)
label_485e50:
    if (ctx->pc == 0x485E50u) {
        ctx->pc = 0x485E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E4Cu;
        // 0x485e50: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485E54u;
        goto label_485e54;
    }
    ctx->pc = 0x485E4Cu;
    {
        const bool branch_taken_0x485e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E4Cu;
        // 0x485e50: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485e4c) {
            ctx->pc = 0x485E90u;
            goto label_485e90;
        }
    }
    ctx->pc = 0x485E54u;
label_485e54:
    // 0x485e54: 0x26110014  addiu       $s1, $s0, 0x14
    ctx->pc = 0x485e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_485e58:
    // 0x485e58: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x485e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_485e5c:
    // 0x485e5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x485e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_485e60:
    // 0x485e60: 0x40f809  jalr        $v0
label_485e64:
    if (ctx->pc == 0x485E64u) {
        ctx->pc = 0x485E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E60u;
        // 0x485e64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485E68u;
        goto label_485e68;
    }
    ctx->pc = 0x485E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485E68u);
        ctx->pc = 0x485E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E60u;
        // 0x485e64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485E60u, 0x485E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485E68u;
label_485e68:
    // 0x485e68: 0xc130632  jal         func_4C18C8
label_485e6c:
    if (ctx->pc == 0x485E6Cu) {
        ctx->pc = 0x485E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E68u;
        // 0x485e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485E70u;
        goto label_485e70;
    }
    ctx->pc = 0x485E68u;
    SET_GPR_U32(ctx, 31, 0x485E70u);
    ctx->pc = 0x485E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485E68u;
    // 0x485e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C18C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C18C8u, 0x485E68u, 0x485E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485E70u;
label_485e70:
    // 0x485e70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_485e74:
    if (ctx->pc == 0x485E74u) {
        ctx->pc = 0x485E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E70u;
        // 0x485e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485E78u;
        goto label_485e78;
    }
    ctx->pc = 0x485E70u;
    {
        const bool branch_taken_0x485e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x485E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E70u;
        // 0x485e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485e70) {
            ctx->pc = 0x485E80u;
            goto label_485e80;
        }
    }
    ctx->pc = 0x485E78u;
label_485e78:
    // 0x485e78: 0x10000005  b           . + 4 + (0x5 << 2)
label_485e7c:
    if (ctx->pc == 0x485E7Cu) {
        ctx->pc = 0x485E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E78u;
        // 0x485e7c: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485E80u;
        goto label_485e80;
    }
    ctx->pc = 0x485E78u;
    {
        const bool branch_taken_0x485e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E78u;
        // 0x485e7c: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485e78) {
            ctx->pc = 0x485E90u;
            goto label_485e90;
        }
    }
    ctx->pc = 0x485E80u;
label_485e80:
    // 0x485e80: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x485e80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_485e84:
    // 0x485e84: 0x5600ffea  bnel        $s0, $zero, . + 4 + (-0x16 << 2)
label_485e88:
    if (ctx->pc == 0x485E88u) {
        ctx->pc = 0x485E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485E84u;
        // 0x485e88: 0x8ea200cc  lw          $v0, 0xCC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485E8Cu;
        goto label_485e8c;
    }
    ctx->pc = 0x485E84u;
    {
        const bool branch_taken_0x485e84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x485e84) {
            ctx->pc = 0x485E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x485E84u;
            // 0x485e88: 0x8ea200cc  lw          $v0, 0xCC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x485E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_485e30;
        }
    }
    ctx->pc = 0x485E8Cu;
label_485e8c:
    // 0x485e8c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x485e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_485e90:
    // 0x485e90: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x485e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_485e94:
    // 0x485e94: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x485e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_485e98:
    // 0x485e98: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x485e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_485e9c:
    // 0x485e9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x485e9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_485ea0:
    // 0x485ea0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x485ea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_485ea4:
    // 0x485ea4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x485ea4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_485ea8:
    // 0x485ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_485eac:
    // 0x485eac: 0x3e00008  jr          $ra
label_485eb0:
    if (ctx->pc == 0x485EB0u) {
        ctx->pc = 0x485EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485EACu;
        // 0x485eb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485EB4u;
        goto label_485eb4;
    }
    ctx->pc = 0x485EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485EACu;
        // 0x485eb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485EB4u;
label_485eb4:
    // 0x485eb4: 0x0  nop
    ctx->pc = 0x485eb4u;
    // NOP
label_485eb8:
    // 0x485eb8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x485eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_485ebc:
    // 0x485ebc: 0x0  nop
    ctx->pc = 0x485ebcu;
    // NOP
    ctx->pc = 0x485ec0u;
}
