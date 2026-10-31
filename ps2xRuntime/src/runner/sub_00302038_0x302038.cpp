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

// Function: sub_00302038
// Address: 0x302038 - 0x302118
void sub_00302038_0x302038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302038_0x302038");
#endif

    switch (ctx->pc) {
        case 0x302038u: goto label_302038;
        case 0x30203cu: goto label_30203c;
        case 0x302040u: goto label_302040;
        case 0x302044u: goto label_302044;
        case 0x302048u: goto label_302048;
        case 0x30204cu: goto label_30204c;
        case 0x302050u: goto label_302050;
        case 0x302054u: goto label_302054;
        case 0x302058u: goto label_302058;
        case 0x30205cu: goto label_30205c;
        case 0x302060u: goto label_302060;
        case 0x302064u: goto label_302064;
        case 0x302068u: goto label_302068;
        case 0x30206cu: goto label_30206c;
        case 0x302070u: goto label_302070;
        case 0x302074u: goto label_302074;
        case 0x302078u: goto label_302078;
        case 0x30207cu: goto label_30207c;
        case 0x302080u: goto label_302080;
        case 0x302084u: goto label_302084;
        case 0x302088u: goto label_302088;
        case 0x30208cu: goto label_30208c;
        case 0x302090u: goto label_302090;
        case 0x302094u: goto label_302094;
        case 0x302098u: goto label_302098;
        case 0x30209cu: goto label_30209c;
        case 0x3020a0u: goto label_3020a0;
        case 0x3020a4u: goto label_3020a4;
        case 0x3020a8u: goto label_3020a8;
        case 0x3020acu: goto label_3020ac;
        case 0x3020b0u: goto label_3020b0;
        case 0x3020b4u: goto label_3020b4;
        case 0x3020b8u: goto label_3020b8;
        case 0x3020bcu: goto label_3020bc;
        case 0x3020c0u: goto label_3020c0;
        case 0x3020c4u: goto label_3020c4;
        case 0x3020c8u: goto label_3020c8;
        case 0x3020ccu: goto label_3020cc;
        case 0x3020d0u: goto label_3020d0;
        case 0x3020d4u: goto label_3020d4;
        case 0x3020d8u: goto label_3020d8;
        case 0x3020dcu: goto label_3020dc;
        case 0x3020e0u: goto label_3020e0;
        case 0x3020e4u: goto label_3020e4;
        case 0x3020e8u: goto label_3020e8;
        case 0x3020ecu: goto label_3020ec;
        case 0x3020f0u: goto label_3020f0;
        case 0x3020f4u: goto label_3020f4;
        case 0x3020f8u: goto label_3020f8;
        case 0x3020fcu: goto label_3020fc;
        case 0x302100u: goto label_302100;
        case 0x302104u: goto label_302104;
        case 0x302108u: goto label_302108;
        case 0x30210cu: goto label_30210c;
        case 0x302110u: goto label_302110;
        case 0x302114u: goto label_302114;
        default: break;
    }

    ctx->pc = 0x302038u;

label_302038:
    // 0x302038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30203c:
    // 0x30203c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x30203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_302040:
    // 0x302040: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x302040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_302044:
    // 0x302044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x302044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_302048:
    // 0x302048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x302048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30204c:
    // 0x30204c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x30204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_302050:
    // 0x302050: 0x8c640288  lw          $a0, 0x288($v1)
    ctx->pc = 0x302050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 648)));
label_302054:
    // 0x302054: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
label_302058:
    if (ctx->pc == 0x302058u) {
        ctx->pc = 0x302058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302054u;
        // 0x302058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30205Cu;
        goto label_30205c;
    }
    ctx->pc = 0x302054u;
    {
        const bool branch_taken_0x302054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x302058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302054u;
        // 0x302058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302054) {
            ctx->pc = 0x302108u;
            goto label_302108;
        }
    }
    ctx->pc = 0x30205Cu;
label_30205c:
    // 0x30205c: 0xc089f98  jal         func_227E60
label_302060:
    if (ctx->pc == 0x302060u) {
        ctx->pc = 0x302060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30205Cu;
        // 0x302060: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302064u;
        goto label_302064;
    }
    ctx->pc = 0x30205Cu;
    SET_GPR_U32(ctx, 31, 0x302064u);
    ctx->pc = 0x302060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30205Cu;
    // 0x302060: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x30205Cu, 0x302064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302064u;
label_302064:
    // 0x302064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302068:
    // 0x302068: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_30206c:
    if (ctx->pc == 0x30206Cu) {
        ctx->pc = 0x30206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302068u;
        // 0x30206c: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302070u;
        goto label_302070;
    }
    ctx->pc = 0x302068u;
    {
        const bool branch_taken_0x302068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x302068) {
            ctx->pc = 0x30206Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302068u;
            // 0x30206c: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302078u;
            goto label_302078;
        }
    }
    ctx->pc = 0x302070u;
label_302070:
    // 0x302070: 0x10000025  b           . + 4 + (0x25 << 2)
label_302074:
    if (ctx->pc == 0x302074u) {
        ctx->pc = 0x302074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302070u;
        // 0x302074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302078u;
        goto label_302078;
    }
    ctx->pc = 0x302070u;
    {
        const bool branch_taken_0x302070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302070u;
        // 0x302074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302070) {
            ctx->pc = 0x302108u;
            goto label_302108;
        }
    }
    ctx->pc = 0x302078u;
label_302078:
    // 0x302078: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_30207c:
    if (ctx->pc == 0x30207Cu) {
        ctx->pc = 0x30207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302078u;
        // 0x30207c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302080u;
        goto label_302080;
    }
    ctx->pc = 0x302078u;
    {
        const bool branch_taken_0x302078 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302078u;
        // 0x30207c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302078) {
            ctx->pc = 0x302090u;
            goto label_302090;
        }
    }
    ctx->pc = 0x302080u;
label_302080:
    // 0x302080: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x302080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_302084:
    // 0x302084: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x302084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_302088:
    // 0x302088: 0x10000002  b           . + 4 + (0x2 << 2)
label_30208c:
    if (ctx->pc == 0x30208Cu) {
        ctx->pc = 0x30208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302088u;
        // 0x30208c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302090u;
        goto label_302090;
    }
    ctx->pc = 0x302088u;
    {
        const bool branch_taken_0x302088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302088u;
        // 0x30208c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302088) {
            ctx->pc = 0x302094u;
            goto label_302094;
        }
    }
    ctx->pc = 0x302090u;
label_302090:
    // 0x302090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x302090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302094:
    // 0x302094: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
label_302098:
    if (ctx->pc == 0x302098u) {
        ctx->pc = 0x302098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302094u;
        // 0x302098: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30209Cu;
        goto label_30209c;
    }
    ctx->pc = 0x302094u;
    {
        const bool branch_taken_0x302094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x302098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302094u;
        // 0x302098: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302094) {
            ctx->pc = 0x302108u;
            goto label_302108;
        }
    }
    ctx->pc = 0x30209Cu;
label_30209c:
    // 0x30209c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x30209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3020a0:
    // 0x3020a0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x3020a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_3020a4:
    // 0x3020a4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3020a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3020a8:
    // 0x3020a8: 0x40f809  jalr        $v0
label_3020ac:
    if (ctx->pc == 0x3020ACu) {
        ctx->pc = 0x3020ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020A8u;
        // 0x3020ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3020B0u;
        goto label_3020b0;
    }
    ctx->pc = 0x3020A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3020B0u);
        ctx->pc = 0x3020ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020A8u;
        // 0x3020ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3020A8u, 0x3020B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3020B0u;
label_3020b0:
    // 0x3020b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3020b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3020b4:
    // 0x3020b4: 0x2462ff8b  addiu       $v0, $v1, -0x75
    ctx->pc = 0x3020b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967179));
label_3020b8:
    // 0x3020b8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3020b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3020bc:
    // 0x3020bc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_3020c0:
    if (ctx->pc == 0x3020C0u) {
        ctx->pc = 0x3020C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020BCu;
        // 0x3020c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3020C4u;
        goto label_3020c4;
    }
    ctx->pc = 0x3020BCu;
    {
        const bool branch_taken_0x3020bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3020C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020BCu;
        // 0x3020c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020bc) {
            ctx->pc = 0x302100u;
            goto label_302100;
        }
    }
    ctx->pc = 0x3020C4u;
label_3020c4:
    // 0x3020c4: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x3020c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_3020c8:
    // 0x3020c8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_3020cc:
    if (ctx->pc == 0x3020CCu) {
        ctx->pc = 0x3020CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020C8u;
        // 0x3020cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3020D0u;
        goto label_3020d0;
    }
    ctx->pc = 0x3020C8u;
    {
        const bool branch_taken_0x3020c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3020CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020C8u;
        // 0x3020cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020c8) {
            ctx->pc = 0x302100u;
            goto label_302100;
        }
    }
    ctx->pc = 0x3020D0u;
label_3020d0:
    // 0x3020d0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_3020d4:
    if (ctx->pc == 0x3020D4u) {
        ctx->pc = 0x3020D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020D0u;
        // 0x3020d4: 0x2402005e  addiu       $v0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3020D8u;
        goto label_3020d8;
    }
    ctx->pc = 0x3020D0u;
    {
        const bool branch_taken_0x3020d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3020D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020D0u;
        // 0x3020d4: 0x2402005e  addiu       $v0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020d0) {
            ctx->pc = 0x302100u;
            goto label_302100;
        }
    }
    ctx->pc = 0x3020D8u;
label_3020d8:
    // 0x3020d8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_3020dc:
    if (ctx->pc == 0x3020DCu) {
        ctx->pc = 0x3020DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020D8u;
        // 0x3020dc: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3020E0u;
        goto label_3020e0;
    }
    ctx->pc = 0x3020D8u;
    {
        const bool branch_taken_0x3020d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3020DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020D8u;
        // 0x3020dc: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020d8) {
            ctx->pc = 0x302100u;
            goto label_302100;
        }
    }
    ctx->pc = 0x3020E0u;
label_3020e0:
    // 0x3020e0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_3020e4:
    if (ctx->pc == 0x3020E4u) {
        ctx->pc = 0x3020E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020E0u;
        // 0x3020e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3020E8u;
        goto label_3020e8;
    }
    ctx->pc = 0x3020E0u;
    {
        const bool branch_taken_0x3020e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3020E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020E0u;
        // 0x3020e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020e0) {
            ctx->pc = 0x302100u;
            goto label_302100;
        }
    }
    ctx->pc = 0x3020E8u;
label_3020e8:
    // 0x3020e8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_3020ec:
    if (ctx->pc == 0x3020ECu) {
        ctx->pc = 0x3020ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020E8u;
        // 0x3020ec: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3020F0u;
        goto label_3020f0;
    }
    ctx->pc = 0x3020E8u;
    {
        const bool branch_taken_0x3020e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3020ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020E8u;
        // 0x3020ec: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020e8) {
            ctx->pc = 0x302100u;
            goto label_302100;
        }
    }
    ctx->pc = 0x3020F0u;
label_3020f0:
    // 0x3020f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3020f4:
    if (ctx->pc == 0x3020F4u) {
        ctx->pc = 0x3020F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020F0u;
        // 0x3020f4: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3020F8u;
        goto label_3020f8;
    }
    ctx->pc = 0x3020F0u;
    {
        const bool branch_taken_0x3020f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3020F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020F0u;
        // 0x3020f4: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020f0) {
            ctx->pc = 0x302100u;
            goto label_302100;
        }
    }
    ctx->pc = 0x3020F8u;
label_3020f8:
    // 0x3020f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3020fc:
    if (ctx->pc == 0x3020FCu) {
        ctx->pc = 0x3020FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020F8u;
        // 0x3020fc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302100u;
        goto label_302100;
    }
    ctx->pc = 0x3020F8u;
    {
        const bool branch_taken_0x3020f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3020FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020F8u;
        // 0x3020fc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020f8) {
            ctx->pc = 0x302108u;
            goto label_302108;
        }
    }
    ctx->pc = 0x302100u;
label_302100:
    // 0x302100: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302104:
    // 0x302104: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x302104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_302108:
    // 0x302108: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x302108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30210c:
    // 0x30210c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30210cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_302110:
    // 0x302110: 0x3e00008  jr          $ra
label_302114:
    if (ctx->pc == 0x302114u) {
        ctx->pc = 0x302114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302110u;
        // 0x302114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302118u;
        goto label_fallthrough_0x302110;
    }
    ctx->pc = 0x302110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302110u;
        // 0x302114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x302110:
    ctx->pc = 0x302118u;
}
