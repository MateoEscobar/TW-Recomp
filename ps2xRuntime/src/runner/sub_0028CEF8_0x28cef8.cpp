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

// Function: sub_0028CEF8
// Address: 0x28cef8 - 0x28cfe0
void sub_0028CEF8_0x28cef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CEF8_0x28cef8");
#endif

    switch (ctx->pc) {
        case 0x28cef8u: goto label_28cef8;
        case 0x28cefcu: goto label_28cefc;
        case 0x28cf00u: goto label_28cf00;
        case 0x28cf04u: goto label_28cf04;
        case 0x28cf08u: goto label_28cf08;
        case 0x28cf0cu: goto label_28cf0c;
        case 0x28cf10u: goto label_28cf10;
        case 0x28cf14u: goto label_28cf14;
        case 0x28cf18u: goto label_28cf18;
        case 0x28cf1cu: goto label_28cf1c;
        case 0x28cf20u: goto label_28cf20;
        case 0x28cf24u: goto label_28cf24;
        case 0x28cf28u: goto label_28cf28;
        case 0x28cf2cu: goto label_28cf2c;
        case 0x28cf30u: goto label_28cf30;
        case 0x28cf34u: goto label_28cf34;
        case 0x28cf38u: goto label_28cf38;
        case 0x28cf3cu: goto label_28cf3c;
        case 0x28cf40u: goto label_28cf40;
        case 0x28cf44u: goto label_28cf44;
        case 0x28cf48u: goto label_28cf48;
        case 0x28cf4cu: goto label_28cf4c;
        case 0x28cf50u: goto label_28cf50;
        case 0x28cf54u: goto label_28cf54;
        case 0x28cf58u: goto label_28cf58;
        case 0x28cf5cu: goto label_28cf5c;
        case 0x28cf60u: goto label_28cf60;
        case 0x28cf64u: goto label_28cf64;
        case 0x28cf68u: goto label_28cf68;
        case 0x28cf6cu: goto label_28cf6c;
        case 0x28cf70u: goto label_28cf70;
        case 0x28cf74u: goto label_28cf74;
        case 0x28cf78u: goto label_28cf78;
        case 0x28cf7cu: goto label_28cf7c;
        case 0x28cf80u: goto label_28cf80;
        case 0x28cf84u: goto label_28cf84;
        case 0x28cf88u: goto label_28cf88;
        case 0x28cf8cu: goto label_28cf8c;
        case 0x28cf90u: goto label_28cf90;
        case 0x28cf94u: goto label_28cf94;
        case 0x28cf98u: goto label_28cf98;
        case 0x28cf9cu: goto label_28cf9c;
        case 0x28cfa0u: goto label_28cfa0;
        case 0x28cfa4u: goto label_28cfa4;
        case 0x28cfa8u: goto label_28cfa8;
        case 0x28cfacu: goto label_28cfac;
        case 0x28cfb0u: goto label_28cfb0;
        case 0x28cfb4u: goto label_28cfb4;
        case 0x28cfb8u: goto label_28cfb8;
        case 0x28cfbcu: goto label_28cfbc;
        case 0x28cfc0u: goto label_28cfc0;
        case 0x28cfc4u: goto label_28cfc4;
        case 0x28cfc8u: goto label_28cfc8;
        case 0x28cfccu: goto label_28cfcc;
        case 0x28cfd0u: goto label_28cfd0;
        case 0x28cfd4u: goto label_28cfd4;
        case 0x28cfd8u: goto label_28cfd8;
        case 0x28cfdcu: goto label_28cfdc;
        default: break;
    }

    ctx->pc = 0x28cef8u;

label_28cef8:
    // 0x28cef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28cef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_28cefc:
    // 0x28cefc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x28cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_28cf00:
    // 0x28cf00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28cf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_28cf04:
    // 0x28cf04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28cf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28cf08:
    // 0x28cf08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28cf08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28cf0c:
    // 0x28cf0c: 0x8c43cab4  lw          $v1, -0x354C($v0)
    ctx->pc = 0x28cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953652)));
label_28cf10:
    // 0x28cf10: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_28cf14:
    if (ctx->pc == 0x28CF14u) {
        ctx->pc = 0x28CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF10u;
        // 0x28cf14: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF18u;
        goto label_28cf18;
    }
    ctx->pc = 0x28CF10u;
    {
        const bool branch_taken_0x28cf10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF10u;
        // 0x28cf14: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf10) {
            ctx->pc = 0x28CFCCu;
            goto label_28cfcc;
        }
    }
    ctx->pc = 0x28CF18u;
label_28cf18:
    // 0x28cf18: 0x90420333  lbu         $v0, 0x333($v0)
    ctx->pc = 0x28cf18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 819)));
label_28cf1c:
    // 0x28cf1c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_28cf20:
    if (ctx->pc == 0x28CF20u) {
        ctx->pc = 0x28CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF1Cu;
        // 0x28cf20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF24u;
        goto label_28cf24;
    }
    ctx->pc = 0x28CF1Cu;
    {
        const bool branch_taken_0x28cf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF1Cu;
        // 0x28cf20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf1c) {
            ctx->pc = 0x28CFD0u;
            goto label_28cfd0;
        }
    }
    ctx->pc = 0x28CF24u;
label_28cf24:
    // 0x28cf24: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28cf24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_28cf28:
    // 0x28cf28: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_28cf2c:
    if (ctx->pc == 0x28CF2Cu) {
        ctx->pc = 0x28CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF28u;
        // 0x28cf2c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF30u;
        goto label_28cf30;
    }
    ctx->pc = 0x28CF28u;
    {
        const bool branch_taken_0x28cf28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF28u;
        // 0x28cf2c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf28) {
            ctx->pc = 0x28CF3Cu;
            goto label_28cf3c;
        }
    }
    ctx->pc = 0x28CF30u;
label_28cf30:
    // 0x28cf30: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28cf34:
    // 0x28cf34: 0x10000002  b           . + 4 + (0x2 << 2)
label_28cf38:
    if (ctx->pc == 0x28CF38u) {
        ctx->pc = 0x28CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF34u;
        // 0x28cf38: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF3Cu;
        goto label_28cf3c;
    }
    ctx->pc = 0x28CF34u;
    {
        const bool branch_taken_0x28cf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF34u;
        // 0x28cf38: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf34) {
            ctx->pc = 0x28CF40u;
            goto label_28cf40;
        }
    }
    ctx->pc = 0x28CF3Cu;
label_28cf3c:
    // 0x28cf3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28cf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cf40:
    // 0x28cf40: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_28cf44:
    if (ctx->pc == 0x28CF44u) {
        ctx->pc = 0x28CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF40u;
        // 0x28cf44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF48u;
        goto label_28cf48;
    }
    ctx->pc = 0x28CF40u;
    {
        const bool branch_taken_0x28cf40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF40u;
        // 0x28cf44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf40) {
            ctx->pc = 0x28CFD0u;
            goto label_28cfd0;
        }
    }
    ctx->pc = 0x28CF48u;
label_28cf48:
    // 0x28cf48: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x28cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_28cf4c:
    // 0x28cf4c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x28cf4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_28cf50:
    // 0x28cf50: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_28cf54:
    // 0x28cf54: 0x40f809  jalr        $v0
label_28cf58:
    if (ctx->pc == 0x28CF58u) {
        ctx->pc = 0x28CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF54u;
        // 0x28cf58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF5Cu;
        goto label_28cf5c;
    }
    ctx->pc = 0x28CF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28CF5Cu);
        ctx->pc = 0x28CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF54u;
        // 0x28cf58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CF54u, 0x28CF5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28CF5Cu;
label_28cf5c:
    // 0x28cf5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28cf5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cf60:
    // 0x28cf60: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x28cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_28cf64:
    // 0x28cf64: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_28cf68:
    if (ctx->pc == 0x28CF68u) {
        ctx->pc = 0x28CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF64u;
        // 0x28cf68: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF6Cu;
        goto label_28cf6c;
    }
    ctx->pc = 0x28CF64u;
    {
        const bool branch_taken_0x28cf64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF64u;
        // 0x28cf68: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf64) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28CF6Cu;
label_28cf6c:
    // 0x28cf6c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_28cf70:
    if (ctx->pc == 0x28CF70u) {
        ctx->pc = 0x28CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF6Cu;
        // 0x28cf70: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF74u;
        goto label_28cf74;
    }
    ctx->pc = 0x28CF6Cu;
    {
        const bool branch_taken_0x28cf6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF6Cu;
        // 0x28cf70: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf6c) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28CF74u;
label_28cf74:
    // 0x28cf74: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_28cf78:
    if (ctx->pc == 0x28CF78u) {
        ctx->pc = 0x28CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF74u;
        // 0x28cf78: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF7Cu;
        goto label_28cf7c;
    }
    ctx->pc = 0x28CF74u;
    {
        const bool branch_taken_0x28cf74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF74u;
        // 0x28cf78: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf74) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28CF7Cu;
label_28cf7c:
    // 0x28cf7c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_28cf80:
    if (ctx->pc == 0x28CF80u) {
        ctx->pc = 0x28CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF7Cu;
        // 0x28cf80: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF84u;
        goto label_28cf84;
    }
    ctx->pc = 0x28CF7Cu;
    {
        const bool branch_taken_0x28cf7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF7Cu;
        // 0x28cf80: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf7c) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28CF84u;
label_28cf84:
    // 0x28cf84: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_28cf88:
    if (ctx->pc == 0x28CF88u) {
        ctx->pc = 0x28CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF84u;
        // 0x28cf88: 0x8e05003c  lw          $a1, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF8Cu;
        goto label_28cf8c;
    }
    ctx->pc = 0x28CF84u;
    {
        const bool branch_taken_0x28cf84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28cf84) {
            ctx->pc = 0x28CF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CF84u;
            // 0x28cf88: 0x8e05003c  lw          $a1, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CFA0u;
            goto label_28cfa0;
        }
    }
    ctx->pc = 0x28CF8Cu;
label_28cf8c:
    // 0x28cf8c: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x28cf8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_28cf90:
    // 0x28cf90: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
label_28cf94:
    if (ctx->pc == 0x28CF94u) {
        ctx->pc = 0x28CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF90u;
        // 0x28cf94: 0x8e05003c  lw          $a1, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF98u;
        goto label_28cf98;
    }
    ctx->pc = 0x28CF90u;
    {
        const bool branch_taken_0x28cf90 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28cf90) {
            ctx->pc = 0x28CF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CF90u;
            // 0x28cf94: 0x8e05003c  lw          $a1, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CFA0u;
            goto label_28cfa0;
        }
    }
    ctx->pc = 0x28CF98u;
label_28cf98:
    // 0x28cf98: 0x1000000d  b           . + 4 + (0xD << 2)
label_28cf9c:
    if (ctx->pc == 0x28CF9Cu) {
        ctx->pc = 0x28CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF98u;
        // 0x28cf9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CFA0u;
        goto label_28cfa0;
    }
    ctx->pc = 0x28CF98u;
    {
        const bool branch_taken_0x28cf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF98u;
        // 0x28cf9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf98) {
            ctx->pc = 0x28CFD0u;
            goto label_28cfd0;
        }
    }
    ctx->pc = 0x28CFA0u;
label_28cfa0:
    // 0x28cfa0: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_28cfa4:
    if (ctx->pc == 0x28CFA4u) {
        ctx->pc = 0x28CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFA0u;
        // 0x28cfa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CFA8u;
        goto label_28cfa8;
    }
    ctx->pc = 0x28CFA0u;
    {
        const bool branch_taken_0x28cfa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cfa0) {
            ctx->pc = 0x28CFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CFA0u;
            // 0x28cfa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CFD0u;
            goto label_28cfd0;
        }
    }
    ctx->pc = 0x28CFA8u;
label_28cfa8:
    // 0x28cfa8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x28cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_28cfac:
    // 0x28cfac: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x28cfacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_28cfb0:
    // 0x28cfb0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_28cfb4:
    // 0x28cfb4: 0x40f809  jalr        $v0
label_28cfb8:
    if (ctx->pc == 0x28CFB8u) {
        ctx->pc = 0x28CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFB4u;
        // 0x28cfb8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CFBCu;
        goto label_28cfbc;
    }
    ctx->pc = 0x28CFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28CFBCu);
        ctx->pc = 0x28CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFB4u;
        // 0x28cfb8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CFB4u, 0x28CFBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28CFBCu;
label_28cfbc:
    // 0x28cfbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28cfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cfc0:
    // 0x28cfc0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x28cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_28cfc4:
    // 0x28cfc4: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_28cfc8:
    if (ctx->pc == 0x28CFC8u) {
        ctx->pc = 0x28CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFC4u;
        // 0x28cfc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CFCCu;
        goto label_28cfcc;
    }
    ctx->pc = 0x28CFC4u;
    {
        const bool branch_taken_0x28cfc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFC4u;
        // 0x28cfc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cfc4) {
            ctx->pc = 0x28CFD0u;
            goto label_28cfd0;
        }
    }
    ctx->pc = 0x28CFCCu;
label_28cfcc:
    // 0x28cfcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28cfccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cfd0:
    // 0x28cfd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28cfd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28cfd4:
    // 0x28cfd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28cfd8:
    // 0x28cfd8: 0x3e00008  jr          $ra
label_28cfdc:
    if (ctx->pc == 0x28CFDCu) {
        ctx->pc = 0x28CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFD8u;
        // 0x28cfdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CFE0u;
        goto label_fallthrough_0x28cfd8;
    }
    ctx->pc = 0x28CFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFD8u;
        // 0x28cfdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28cfd8:
    ctx->pc = 0x28CFE0u;
}
