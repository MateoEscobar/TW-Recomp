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

// Function: sub_0029CBB8
// Address: 0x29cbb8 - 0x29cc78
void sub_0029CBB8_0x29cbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CBB8_0x29cbb8");
#endif

    switch (ctx->pc) {
        case 0x29cbb8u: goto label_29cbb8;
        case 0x29cbbcu: goto label_29cbbc;
        case 0x29cbc0u: goto label_29cbc0;
        case 0x29cbc4u: goto label_29cbc4;
        case 0x29cbc8u: goto label_29cbc8;
        case 0x29cbccu: goto label_29cbcc;
        case 0x29cbd0u: goto label_29cbd0;
        case 0x29cbd4u: goto label_29cbd4;
        case 0x29cbd8u: goto label_29cbd8;
        case 0x29cbdcu: goto label_29cbdc;
        case 0x29cbe0u: goto label_29cbe0;
        case 0x29cbe4u: goto label_29cbe4;
        case 0x29cbe8u: goto label_29cbe8;
        case 0x29cbecu: goto label_29cbec;
        case 0x29cbf0u: goto label_29cbf0;
        case 0x29cbf4u: goto label_29cbf4;
        case 0x29cbf8u: goto label_29cbf8;
        case 0x29cbfcu: goto label_29cbfc;
        case 0x29cc00u: goto label_29cc00;
        case 0x29cc04u: goto label_29cc04;
        case 0x29cc08u: goto label_29cc08;
        case 0x29cc0cu: goto label_29cc0c;
        case 0x29cc10u: goto label_29cc10;
        case 0x29cc14u: goto label_29cc14;
        case 0x29cc18u: goto label_29cc18;
        case 0x29cc1cu: goto label_29cc1c;
        case 0x29cc20u: goto label_29cc20;
        case 0x29cc24u: goto label_29cc24;
        case 0x29cc28u: goto label_29cc28;
        case 0x29cc2cu: goto label_29cc2c;
        case 0x29cc30u: goto label_29cc30;
        case 0x29cc34u: goto label_29cc34;
        case 0x29cc38u: goto label_29cc38;
        case 0x29cc3cu: goto label_29cc3c;
        case 0x29cc40u: goto label_29cc40;
        case 0x29cc44u: goto label_29cc44;
        case 0x29cc48u: goto label_29cc48;
        case 0x29cc4cu: goto label_29cc4c;
        case 0x29cc50u: goto label_29cc50;
        case 0x29cc54u: goto label_29cc54;
        case 0x29cc58u: goto label_29cc58;
        case 0x29cc5cu: goto label_29cc5c;
        case 0x29cc60u: goto label_29cc60;
        case 0x29cc64u: goto label_29cc64;
        case 0x29cc68u: goto label_29cc68;
        case 0x29cc6cu: goto label_29cc6c;
        case 0x29cc70u: goto label_29cc70;
        case 0x29cc74u: goto label_29cc74;
        default: break;
    }

    ctx->pc = 0x29cbb8u;

label_29cbb8:
    // 0x29cbb8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29cbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_29cbbc:
    // 0x29cbbc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x29cbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_29cbc0:
    // 0x29cbc0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x29cbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_29cbc4:
    // 0x29cbc4: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x29cbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29cbc8:
    // 0x29cbc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29cbc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29cbcc:
    // 0x29cbcc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x29cbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_29cbd0:
    // 0x29cbd0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29cbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_29cbd4:
    // 0x29cbd4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x29cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_29cbd8:
    // 0x29cbd8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x29cbd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_29cbdc:
    // 0x29cbdc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x29cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29cbe0:
    // 0x29cbe0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_29cbe4:
    // 0x29cbe4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29cbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29cbe8:
    // 0x29cbe8: 0x0  nop
    ctx->pc = 0x29cbe8u;
    // NOP
label_29cbec:
    // 0x29cbec: 0x0  nop
    ctx->pc = 0x29cbecu;
    // NOP
label_29cbf0:
    // 0x29cbf0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
label_29cbf4:
    if (ctx->pc == 0x29CBF4u) {
        ctx->pc = 0x29CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBF0u;
        // 0x29cbf4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CBF8u;
        goto label_29cbf8;
    }
    ctx->pc = 0x29CBF0u;
    {
        const bool branch_taken_0x29cbf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBF0u;
        // 0x29cbf4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cbf0) {
            ctx->pc = 0x29CBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cbe0;
        }
    }
    ctx->pc = 0x29CBF8u;
label_29cbf8:
    // 0x29cbf8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x29cbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29cbfc:
    // 0x29cbfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29cbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29cc00:
    // 0x29cc00: 0xc0a71fa  jal         func_29C7E8
label_29cc04:
    if (ctx->pc == 0x29CC04u) {
        ctx->pc = 0x29CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC00u;
        // 0x29cc04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC08u;
        goto label_29cc08;
    }
    ctx->pc = 0x29CC00u;
    SET_GPR_U32(ctx, 31, 0x29CC08u);
    ctx->pc = 0x29CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC00u;
    // 0x29cc04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C7E8u, 0x29CC00u, 0x29CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC08u;
label_29cc08:
    // 0x29cc08: 0xc137832  jal         func_4DE0C8
label_29cc0c:
    if (ctx->pc == 0x29CC0Cu) {
        ctx->pc = 0x29CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC08u;
        // 0x29cc0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC10u;
        goto label_29cc10;
    }
    ctx->pc = 0x29CC08u;
    SET_GPR_U32(ctx, 31, 0x29CC10u);
    ctx->pc = 0x29CC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC08u;
    // 0x29cc0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x29CC08u, 0x29CC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC10u;
label_29cc10:
    // 0x29cc10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29cc14:
    // 0x29cc14: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_29cc18:
    if (ctx->pc == 0x29CC18u) {
        ctx->pc = 0x29CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC14u;
        // 0x29cc18: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC1Cu;
        goto label_29cc1c;
    }
    ctx->pc = 0x29CC14u;
    {
        const bool branch_taken_0x29cc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x29CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC14u;
        // 0x29cc18: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc14) {
            ctx->pc = 0x29CC54u;
            goto label_29cc54;
        }
    }
    ctx->pc = 0x29CC1Cu;
label_29cc1c:
    // 0x29cc1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29cc20:
    // 0x29cc20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29cc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29cc24:
    // 0x29cc24: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x29cc24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_29cc28:
    // 0x29cc28: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x29cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_29cc2c:
    // 0x29cc2c: 0x40f809  jalr        $v0
label_29cc30:
    if (ctx->pc == 0x29CC30u) {
        ctx->pc = 0x29CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC2Cu;
        // 0x29cc30: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC34u;
        goto label_29cc34;
    }
    ctx->pc = 0x29CC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29CC34u);
        ctx->pc = 0x29CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC2Cu;
        // 0x29cc30: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC2Cu, 0x29CC34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CC34u;
label_29cc34:
    // 0x29cc34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29cc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29cc38:
    // 0x29cc38: 0xc13b782  jal         func_4EDE08
label_29cc3c:
    if (ctx->pc == 0x29CC3Cu) {
        ctx->pc = 0x29CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC38u;
        // 0x29cc3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC40u;
        goto label_29cc40;
    }
    ctx->pc = 0x29CC38u;
    SET_GPR_U32(ctx, 31, 0x29CC40u);
    ctx->pc = 0x29CC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC38u;
    // 0x29cc3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x29CC38u, 0x29CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC40u;
label_29cc40:
    // 0x29cc40: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x29cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_29cc44:
    // 0x29cc44: 0xc0e409a  jal         func_390268
label_29cc48:
    if (ctx->pc == 0x29CC48u) {
        ctx->pc = 0x29CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC44u;
        // 0x29cc48: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC4Cu;
        goto label_29cc4c;
    }
    ctx->pc = 0x29CC44u;
    SET_GPR_U32(ctx, 31, 0x29CC4Cu);
    ctx->pc = 0x29CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC44u;
    // 0x29cc48: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29CC44u, 0x29CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC4Cu;
label_29cc4c:
    // 0x29cc4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_29cc50:
    if (ctx->pc == 0x29CC50u) {
        ctx->pc = 0x29CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC4Cu;
        // 0x29cc50: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC54u;
        goto label_29cc54;
    }
    ctx->pc = 0x29CC4Cu;
    {
        const bool branch_taken_0x29cc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC4Cu;
        // 0x29cc50: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc4c) {
            ctx->pc = 0x29CC5Cu;
            goto label_29cc5c;
        }
    }
    ctx->pc = 0x29CC54u;
label_29cc54:
    // 0x29cc54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29cc54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cc58:
    // 0x29cc58: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x29cc58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_29cc5c:
    // 0x29cc5c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x29cc5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_29cc60:
    // 0x29cc60: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29cc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29cc64:
    // 0x29cc64: 0x3e00008  jr          $ra
label_29cc68:
    if (ctx->pc == 0x29CC68u) {
        ctx->pc = 0x29CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC64u;
        // 0x29cc68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC6Cu;
        goto label_29cc6c;
    }
    ctx->pc = 0x29CC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC64u;
        // 0x29cc68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CC6Cu;
label_29cc6c:
    // 0x29cc6c: 0x0  nop
    ctx->pc = 0x29cc6cu;
    // NOP
label_29cc70:
    // 0x29cc70: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x29cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_29cc74:
    // 0x29cc74: 0x0  nop
    ctx->pc = 0x29cc74u;
    // NOP
    ctx->pc = 0x29cc78u;
}
