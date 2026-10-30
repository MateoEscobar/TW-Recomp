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

// Function: sub_00316FA0
// Address: 0x316fa0 - 0x317050
void sub_00316FA0_0x316fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316FA0_0x316fa0");
#endif

    switch (ctx->pc) {
        case 0x316fa0u: goto label_316fa0;
        case 0x316fa4u: goto label_316fa4;
        case 0x316fa8u: goto label_316fa8;
        case 0x316facu: goto label_316fac;
        case 0x316fb0u: goto label_316fb0;
        case 0x316fb4u: goto label_316fb4;
        case 0x316fb8u: goto label_316fb8;
        case 0x316fbcu: goto label_316fbc;
        case 0x316fc0u: goto label_316fc0;
        case 0x316fc4u: goto label_316fc4;
        case 0x316fc8u: goto label_316fc8;
        case 0x316fccu: goto label_316fcc;
        case 0x316fd0u: goto label_316fd0;
        case 0x316fd4u: goto label_316fd4;
        case 0x316fd8u: goto label_316fd8;
        case 0x316fdcu: goto label_316fdc;
        case 0x316fe0u: goto label_316fe0;
        case 0x316fe4u: goto label_316fe4;
        case 0x316fe8u: goto label_316fe8;
        case 0x316fecu: goto label_316fec;
        case 0x316ff0u: goto label_316ff0;
        case 0x316ff4u: goto label_316ff4;
        case 0x316ff8u: goto label_316ff8;
        case 0x316ffcu: goto label_316ffc;
        case 0x317000u: goto label_317000;
        case 0x317004u: goto label_317004;
        case 0x317008u: goto label_317008;
        case 0x31700cu: goto label_31700c;
        case 0x317010u: goto label_317010;
        case 0x317014u: goto label_317014;
        case 0x317018u: goto label_317018;
        case 0x31701cu: goto label_31701c;
        case 0x317020u: goto label_317020;
        case 0x317024u: goto label_317024;
        case 0x317028u: goto label_317028;
        case 0x31702cu: goto label_31702c;
        case 0x317030u: goto label_317030;
        case 0x317034u: goto label_317034;
        case 0x317038u: goto label_317038;
        case 0x31703cu: goto label_31703c;
        case 0x317040u: goto label_317040;
        case 0x317044u: goto label_317044;
        case 0x317048u: goto label_317048;
        case 0x31704cu: goto label_31704c;
        default: break;
    }

    ctx->pc = 0x316fa0u;

label_316fa0:
    // 0x316fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x316fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_316fa4:
    // 0x316fa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x316fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_316fa8:
    // 0x316fa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x316fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_316fac:
    // 0x316fac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x316facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_316fb0:
    // 0x316fb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x316fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_316fb4:
    // 0x316fb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x316fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_316fb8:
    // 0x316fb8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x316fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_316fbc:
    // 0x316fbc: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
label_316fc0:
    if (ctx->pc == 0x316FC0u) {
        ctx->pc = 0x316FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FBCu;
        // 0x316fc0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316FC4u;
        goto label_316fc4;
    }
    ctx->pc = 0x316FBCu;
    {
        const bool branch_taken_0x316fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x316FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FBCu;
        // 0x316fc0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316fbc) {
            ctx->pc = 0x317034u;
            goto label_317034;
        }
    }
    ctx->pc = 0x316FC4u;
label_316fc4:
    // 0x316fc4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x316fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_316fc8:
    // 0x316fc8: 0xc05b0e2  jal         func_16C388
label_316fcc:
    if (ctx->pc == 0x316FCCu) {
        ctx->pc = 0x316FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FC8u;
        // 0x316fcc: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316FD0u;
        goto label_316fd0;
    }
    ctx->pc = 0x316FC8u;
    SET_GPR_U32(ctx, 31, 0x316FD0u);
    ctx->pc = 0x316FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316FC8u;
    // 0x316fcc: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x316FC8u, 0x316FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316FD0u;
label_316fd0:
    // 0x316fd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x316fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_316fd4:
    // 0x316fd4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x316fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_316fd8:
    // 0x316fd8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_316fdc:
    if (ctx->pc == 0x316FDCu) {
        ctx->pc = 0x316FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FD8u;
        // 0x316fdc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316FE0u;
        goto label_316fe0;
    }
    ctx->pc = 0x316FD8u;
    {
        const bool branch_taken_0x316fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FD8u;
        // 0x316fdc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316fd8) {
            ctx->pc = 0x317038u;
            goto label_317038;
        }
    }
    ctx->pc = 0x316FE0u;
label_316fe0:
    // 0x316fe0: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x316fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_316fe4:
    // 0x316fe4: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
label_316fe8:
    if (ctx->pc == 0x316FE8u) {
        ctx->pc = 0x316FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FE4u;
        // 0x316fe8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316FECu;
        goto label_316fec;
    }
    ctx->pc = 0x316FE4u;
    {
        const bool branch_taken_0x316fe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x316fe4) {
            ctx->pc = 0x316FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316FE4u;
            // 0x316fe8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317038u;
            goto label_317038;
        }
    }
    ctx->pc = 0x316FECu;
label_316fec:
    // 0x316fec: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x316fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_316ff0:
    // 0x316ff0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x316ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_316ff4:
    // 0x316ff4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x316ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_316ff8:
    // 0x316ff8: 0x40f809  jalr        $v0
label_316ffc:
    if (ctx->pc == 0x316FFCu) {
        ctx->pc = 0x316FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FF8u;
        // 0x316ffc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317000u;
        goto label_317000;
    }
    ctx->pc = 0x316FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x317000u);
        ctx->pc = 0x316FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FF8u;
        // 0x316ffc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316FF8u, 0x317000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317000u;
label_317000:
    // 0x317000: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x317000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_317004:
    // 0x317004: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_317008:
    if (ctx->pc == 0x317008u) {
        ctx->pc = 0x317008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317004u;
        // 0x317008: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31700Cu;
        goto label_31700c;
    }
    ctx->pc = 0x317004u;
    {
        const bool branch_taken_0x317004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x317004) {
            ctx->pc = 0x317008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317004u;
            // 0x317008: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317038u;
            goto label_317038;
        }
    }
    ctx->pc = 0x31700Cu;
label_31700c:
    // 0x31700c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_317010:
    if (ctx->pc == 0x317010u) {
        ctx->pc = 0x317010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31700Cu;
        // 0x317010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317014u;
        goto label_317014;
    }
    ctx->pc = 0x31700Cu;
    {
        const bool branch_taken_0x31700c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x317010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31700Cu;
        // 0x317010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31700c) {
            ctx->pc = 0x317020u;
            goto label_317020;
        }
    }
    ctx->pc = 0x317014u;
label_317014:
    // 0x317014: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x317014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_317018:
    // 0x317018: 0x10000006  b           . + 4 + (0x6 << 2)
label_31701c:
    if (ctx->pc == 0x31701Cu) {
        ctx->pc = 0x31701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317018u;
        // 0x31701c: 0xa202002a  sb          $v0, 0x2A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317020u;
        goto label_317020;
    }
    ctx->pc = 0x317018u;
    {
        const bool branch_taken_0x317018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317018u;
        // 0x31701c: 0xa202002a  sb          $v0, 0x2A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317018) {
            ctx->pc = 0x317034u;
            goto label_317034;
        }
    }
    ctx->pc = 0x317020u;
label_317020:
    // 0x317020: 0x56220005  bnel        $s1, $v0, . + 4 + (0x5 << 2)
label_317024:
    if (ctx->pc == 0x317024u) {
        ctx->pc = 0x317024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317020u;
        // 0x317024: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317028u;
        goto label_317028;
    }
    ctx->pc = 0x317020u;
    {
        const bool branch_taken_0x317020 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x317020) {
            ctx->pc = 0x317024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317020u;
            // 0x317024: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317038u;
            goto label_317038;
        }
    }
    ctx->pc = 0x317028u;
label_317028:
    // 0x317028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x317028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31702c:
    // 0x31702c: 0xc0c3f96  jal         func_30FE58
label_317030:
    if (ctx->pc == 0x317030u) {
        ctx->pc = 0x317030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31702Cu;
        // 0x317030: 0x12282b  sltu        $a1, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317034u;
        goto label_317034;
    }
    ctx->pc = 0x31702Cu;
    SET_GPR_U32(ctx, 31, 0x317034u);
    ctx->pc = 0x317030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31702Cu;
    // 0x317030: 0x12282b  sltu        $a1, $zero, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FE58u, 0x31702Cu, 0x317034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317034u;
label_317034:
    // 0x317034: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x317034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_317038:
    // 0x317038: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x317038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31703c:
    // 0x31703c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31703cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317040:
    // 0x317040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_317044:
    // 0x317044: 0x3e00008  jr          $ra
label_317048:
    if (ctx->pc == 0x317048u) {
        ctx->pc = 0x317048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317044u;
        // 0x317048: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31704Cu;
        goto label_31704c;
    }
    ctx->pc = 0x317044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317044u;
        // 0x317048: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31704Cu;
label_31704c:
    // 0x31704c: 0x0  nop
    ctx->pc = 0x31704cu;
    // NOP
    ctx->pc = 0x317050u;
}
