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

// Function: sub_0011FBB0
// Address: 0x11fbb0 - 0x11fc98
void sub_0011FBB0_0x11fbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FBB0_0x11fbb0");
#endif

    switch (ctx->pc) {
        case 0x11fbb0u: goto label_11fbb0;
        case 0x11fbb4u: goto label_11fbb4;
        case 0x11fbb8u: goto label_11fbb8;
        case 0x11fbbcu: goto label_11fbbc;
        case 0x11fbc0u: goto label_11fbc0;
        case 0x11fbc4u: goto label_11fbc4;
        case 0x11fbc8u: goto label_11fbc8;
        case 0x11fbccu: goto label_11fbcc;
        case 0x11fbd0u: goto label_11fbd0;
        case 0x11fbd4u: goto label_11fbd4;
        case 0x11fbd8u: goto label_11fbd8;
        case 0x11fbdcu: goto label_11fbdc;
        case 0x11fbe0u: goto label_11fbe0;
        case 0x11fbe4u: goto label_11fbe4;
        case 0x11fbe8u: goto label_11fbe8;
        case 0x11fbecu: goto label_11fbec;
        case 0x11fbf0u: goto label_11fbf0;
        case 0x11fbf4u: goto label_11fbf4;
        case 0x11fbf8u: goto label_11fbf8;
        case 0x11fbfcu: goto label_11fbfc;
        case 0x11fc00u: goto label_11fc00;
        case 0x11fc04u: goto label_11fc04;
        case 0x11fc08u: goto label_11fc08;
        case 0x11fc0cu: goto label_11fc0c;
        case 0x11fc10u: goto label_11fc10;
        case 0x11fc14u: goto label_11fc14;
        case 0x11fc18u: goto label_11fc18;
        case 0x11fc1cu: goto label_11fc1c;
        case 0x11fc20u: goto label_11fc20;
        case 0x11fc24u: goto label_11fc24;
        case 0x11fc28u: goto label_11fc28;
        case 0x11fc2cu: goto label_11fc2c;
        case 0x11fc30u: goto label_11fc30;
        case 0x11fc34u: goto label_11fc34;
        case 0x11fc38u: goto label_11fc38;
        case 0x11fc3cu: goto label_11fc3c;
        case 0x11fc40u: goto label_11fc40;
        case 0x11fc44u: goto label_11fc44;
        case 0x11fc48u: goto label_11fc48;
        case 0x11fc4cu: goto label_11fc4c;
        case 0x11fc50u: goto label_11fc50;
        case 0x11fc54u: goto label_11fc54;
        case 0x11fc58u: goto label_11fc58;
        case 0x11fc5cu: goto label_11fc5c;
        case 0x11fc60u: goto label_11fc60;
        case 0x11fc64u: goto label_11fc64;
        case 0x11fc68u: goto label_11fc68;
        case 0x11fc6cu: goto label_11fc6c;
        case 0x11fc70u: goto label_11fc70;
        case 0x11fc74u: goto label_11fc74;
        case 0x11fc78u: goto label_11fc78;
        case 0x11fc7cu: goto label_11fc7c;
        case 0x11fc80u: goto label_11fc80;
        case 0x11fc84u: goto label_11fc84;
        case 0x11fc88u: goto label_11fc88;
        case 0x11fc8cu: goto label_11fc8c;
        case 0x11fc90u: goto label_11fc90;
        case 0x11fc94u: goto label_11fc94;
        default: break;
    }

    ctx->pc = 0x11fbb0u;

label_11fbb0:
    // 0x11fbb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11fbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11fbb4:
    // 0x11fbb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11fbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_11fbb8:
    // 0x11fbb8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11fbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_11fbbc:
    // 0x11fbbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11fbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11fbc0:
    // 0x11fbc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11fbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11fbc4:
    // 0x11fbc4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11fbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_11fbc8:
    // 0x11fbc8: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_11fbcc:
    if (ctx->pc == 0x11FBCCu) {
        ctx->pc = 0x11FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBC8u;
        // 0x11fbcc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FBD0u;
        goto label_11fbd0;
    }
    ctx->pc = 0x11FBC8u;
    {
        const bool branch_taken_0x11fbc8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBC8u;
        // 0x11fbcc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbc8) {
            ctx->pc = 0x11FBD8u;
            goto label_11fbd8;
        }
    }
    ctx->pc = 0x11FBD0u;
label_11fbd0:
    // 0x11fbd0: 0x10000029  b           . + 4 + (0x29 << 2)
label_11fbd4:
    if (ctx->pc == 0x11FBD4u) {
        ctx->pc = 0x11FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBD0u;
        // 0x11fbd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FBD8u;
        goto label_11fbd8;
    }
    ctx->pc = 0x11FBD0u;
    {
        const bool branch_taken_0x11fbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBD0u;
        // 0x11fbd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbd0) {
            ctx->pc = 0x11FC78u;
            goto label_11fc78;
        }
    }
    ctx->pc = 0x11FBD8u;
label_11fbd8:
    // 0x11fbd8: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x11fbd8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_11fbdc:
    // 0x11fbdc: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_11fbe0:
    if (ctx->pc == 0x11FBE0u) {
        ctx->pc = 0x11FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBDCu;
        // 0x11fbe0: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FBE4u;
        goto label_11fbe4;
    }
    ctx->pc = 0x11FBDCu;
    {
        const bool branch_taken_0x11fbdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBDCu;
        // 0x11fbe0: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbdc) {
            ctx->pc = 0x11FC6Cu;
            goto label_11fc6c;
        }
    }
    ctx->pc = 0x11FBE4u;
label_11fbe4:
    // 0x11fbe4: 0x26629160  addiu       $v0, $s3, -0x6EA0
    ctx->pc = 0x11fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938976));
label_11fbe8:
    // 0x11fbe8: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x11fbe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_11fbec:
    // 0x11fbec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11fbf0:
    // 0x11fbf0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_11fbf4:
    if (ctx->pc == 0x11FBF4u) {
        ctx->pc = 0x11FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBF0u;
        // 0x11fbf4: 0x26639160  addiu       $v1, $s3, -0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FBF8u;
        goto label_11fbf8;
    }
    ctx->pc = 0x11FBF0u;
    {
        const bool branch_taken_0x11fbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBF0u;
        // 0x11fbf4: 0x26639160  addiu       $v1, $s3, -0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbf0) {
            ctx->pc = 0x11FC70u;
            goto label_11fc70;
        }
    }
    ctx->pc = 0x11FBF8u;
label_11fbf8:
    // 0x11fbf8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11fbfc:
    // 0x11fbfc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x11fbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_11fc00:
    // 0x11fc00: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x11fc00u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_11fc04:
    // 0x11fc04: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x11fc04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_11fc08:
    // 0x11fc08: 0x240603f0  addiu       $a2, $zero, 0x3F0
    ctx->pc = 0x11fc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
label_11fc0c:
    // 0x11fc0c: 0x24a586c0  addiu       $a1, $a1, -0x7940
    ctx->pc = 0x11fc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936256));
label_11fc10:
    // 0x11fc10: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x11fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_11fc14:
    // 0x11fc14: 0x25088550  addiu       $t0, $t0, -0x7AB0
    ctx->pc = 0x11fc14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935888));
label_11fc18:
    // 0x11fc18: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x11fc18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fc1c:
    // 0x11fc1c: 0x24090469  addiu       $t1, $zero, 0x469
    ctx->pc = 0x11fc1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1129));
label_11fc20:
    // 0x11fc20: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x11fc20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_11fc24:
    // 0x11fc24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11fc24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fc28:
    // 0x11fc28: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x11fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_11fc2c:
    // 0x11fc2c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11fc2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fc30:
    // 0x11fc30: 0x40f809  jalr        $v0
label_11fc34:
    if (ctx->pc == 0x11FC34u) {
        ctx->pc = 0x11FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC30u;
        // 0x11fc34: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC38u;
        goto label_11fc38;
    }
    ctx->pc = 0x11FC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11FC38u);
        ctx->pc = 0x11FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC30u;
        // 0x11fc34: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC30u, 0x11FC38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FC38u;
label_11fc38:
    // 0x11fc38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11fc38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fc3c:
    // 0x11fc3c: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
label_11fc40:
    if (ctx->pc == 0x11FC40u) {
        ctx->pc = 0x11FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC3Cu;
        // 0x11fc40: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC44u;
        goto label_11fc44;
    }
    ctx->pc = 0x11FC3Cu;
    {
        const bool branch_taken_0x11fc3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fc3c) {
            ctx->pc = 0x11FC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FC3Cu;
            // 0x11fc40: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC54u;
            goto label_11fc54;
        }
    }
    ctx->pc = 0x11FC44u;
label_11fc44:
    // 0x11fc44: 0xc04ec46  jal         func_13B118
label_11fc48:
    if (ctx->pc == 0x11FC48u) {
        ctx->pc = 0x11FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC44u;
        // 0x11fc48: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC4Cu;
        goto label_11fc4c;
    }
    ctx->pc = 0x11FC44u;
    SET_GPR_U32(ctx, 31, 0x11FC4Cu);
    ctx->pc = 0x11FC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC44u;
    // 0x11fc48: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B118u, 0x11FC44u, 0x11FC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC4Cu;
label_11fc4c:
    // 0x11fc4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11fc4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fc50:
    // 0x11fc50: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x11fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_11fc54:
    // 0x11fc54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11fc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11fc58:
    // 0x11fc58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11fc5c:
    // 0x11fc5c: 0x84440270  lh          $a0, 0x270($v0)
    ctx->pc = 0x11fc5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
label_11fc60:
    // 0x11fc60: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x11fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_11fc64:
    // 0x11fc64: 0x60f809  jalr        $v1
label_11fc68:
    if (ctx->pc == 0x11FC68u) {
        ctx->pc = 0x11FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC64u;
        // 0x11fc68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC6Cu;
        goto label_11fc6c;
    }
    ctx->pc = 0x11FC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11FC6Cu);
        ctx->pc = 0x11FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC64u;
        // 0x11fc68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC64u, 0x11FC6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FC6Cu;
label_11fc6c:
    // 0x11fc6c: 0x26639160  addiu       $v1, $s3, -0x6EA0
    ctx->pc = 0x11fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938976));
label_11fc70:
    // 0x11fc70: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x11fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_11fc74:
    // 0x11fc74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11fc78:
    // 0x11fc78: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11fc78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11fc7c:
    // 0x11fc7c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11fc7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11fc80:
    // 0x11fc80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11fc80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11fc84:
    // 0x11fc84: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11fc84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11fc88:
    // 0x11fc88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11fc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11fc8c:
    // 0x11fc8c: 0x3e00008  jr          $ra
label_11fc90:
    if (ctx->pc == 0x11FC90u) {
        ctx->pc = 0x11FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC8Cu;
        // 0x11fc90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC94u;
        goto label_11fc94;
    }
    ctx->pc = 0x11FC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC8Cu;
        // 0x11fc90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC94u;
label_11fc94:
    // 0x11fc94: 0x0  nop
    ctx->pc = 0x11fc94u;
    // NOP
    ctx->pc = 0x11fc98u;
}
