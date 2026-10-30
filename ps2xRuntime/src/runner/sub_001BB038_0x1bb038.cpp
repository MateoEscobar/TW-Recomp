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

// Function: sub_001BB038
// Address: 0x1bb038 - 0x1bb1c0
void sub_001BB038_0x1bb038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB038_0x1bb038");
#endif

    switch (ctx->pc) {
        case 0x1bb038u: goto label_1bb038;
        case 0x1bb03cu: goto label_1bb03c;
        case 0x1bb040u: goto label_1bb040;
        case 0x1bb044u: goto label_1bb044;
        case 0x1bb048u: goto label_1bb048;
        case 0x1bb04cu: goto label_1bb04c;
        case 0x1bb050u: goto label_1bb050;
        case 0x1bb054u: goto label_1bb054;
        case 0x1bb058u: goto label_1bb058;
        case 0x1bb05cu: goto label_1bb05c;
        case 0x1bb060u: goto label_1bb060;
        case 0x1bb064u: goto label_1bb064;
        case 0x1bb068u: goto label_1bb068;
        case 0x1bb06cu: goto label_1bb06c;
        case 0x1bb070u: goto label_1bb070;
        case 0x1bb074u: goto label_1bb074;
        case 0x1bb078u: goto label_1bb078;
        case 0x1bb07cu: goto label_1bb07c;
        case 0x1bb080u: goto label_1bb080;
        case 0x1bb084u: goto label_1bb084;
        case 0x1bb088u: goto label_1bb088;
        case 0x1bb08cu: goto label_1bb08c;
        case 0x1bb090u: goto label_1bb090;
        case 0x1bb094u: goto label_1bb094;
        case 0x1bb098u: goto label_1bb098;
        case 0x1bb09cu: goto label_1bb09c;
        case 0x1bb0a0u: goto label_1bb0a0;
        case 0x1bb0a4u: goto label_1bb0a4;
        case 0x1bb0a8u: goto label_1bb0a8;
        case 0x1bb0acu: goto label_1bb0ac;
        case 0x1bb0b0u: goto label_1bb0b0;
        case 0x1bb0b4u: goto label_1bb0b4;
        case 0x1bb0b8u: goto label_1bb0b8;
        case 0x1bb0bcu: goto label_1bb0bc;
        case 0x1bb0c0u: goto label_1bb0c0;
        case 0x1bb0c4u: goto label_1bb0c4;
        case 0x1bb0c8u: goto label_1bb0c8;
        case 0x1bb0ccu: goto label_1bb0cc;
        case 0x1bb0d0u: goto label_1bb0d0;
        case 0x1bb0d4u: goto label_1bb0d4;
        case 0x1bb0d8u: goto label_1bb0d8;
        case 0x1bb0dcu: goto label_1bb0dc;
        case 0x1bb0e0u: goto label_1bb0e0;
        case 0x1bb0e4u: goto label_1bb0e4;
        case 0x1bb0e8u: goto label_1bb0e8;
        case 0x1bb0ecu: goto label_1bb0ec;
        case 0x1bb0f0u: goto label_1bb0f0;
        case 0x1bb0f4u: goto label_1bb0f4;
        case 0x1bb0f8u: goto label_1bb0f8;
        case 0x1bb0fcu: goto label_1bb0fc;
        case 0x1bb100u: goto label_1bb100;
        case 0x1bb104u: goto label_1bb104;
        case 0x1bb108u: goto label_1bb108;
        case 0x1bb10cu: goto label_1bb10c;
        case 0x1bb110u: goto label_1bb110;
        case 0x1bb114u: goto label_1bb114;
        case 0x1bb118u: goto label_1bb118;
        case 0x1bb11cu: goto label_1bb11c;
        case 0x1bb120u: goto label_1bb120;
        case 0x1bb124u: goto label_1bb124;
        case 0x1bb128u: goto label_1bb128;
        case 0x1bb12cu: goto label_1bb12c;
        case 0x1bb130u: goto label_1bb130;
        case 0x1bb134u: goto label_1bb134;
        case 0x1bb138u: goto label_1bb138;
        case 0x1bb13cu: goto label_1bb13c;
        case 0x1bb140u: goto label_1bb140;
        case 0x1bb144u: goto label_1bb144;
        case 0x1bb148u: goto label_1bb148;
        case 0x1bb14cu: goto label_1bb14c;
        case 0x1bb150u: goto label_1bb150;
        case 0x1bb154u: goto label_1bb154;
        case 0x1bb158u: goto label_1bb158;
        case 0x1bb15cu: goto label_1bb15c;
        case 0x1bb160u: goto label_1bb160;
        case 0x1bb164u: goto label_1bb164;
        case 0x1bb168u: goto label_1bb168;
        case 0x1bb16cu: goto label_1bb16c;
        case 0x1bb170u: goto label_1bb170;
        case 0x1bb174u: goto label_1bb174;
        case 0x1bb178u: goto label_1bb178;
        case 0x1bb17cu: goto label_1bb17c;
        case 0x1bb180u: goto label_1bb180;
        case 0x1bb184u: goto label_1bb184;
        case 0x1bb188u: goto label_1bb188;
        case 0x1bb18cu: goto label_1bb18c;
        case 0x1bb190u: goto label_1bb190;
        case 0x1bb194u: goto label_1bb194;
        case 0x1bb198u: goto label_1bb198;
        case 0x1bb19cu: goto label_1bb19c;
        case 0x1bb1a0u: goto label_1bb1a0;
        case 0x1bb1a4u: goto label_1bb1a4;
        case 0x1bb1a8u: goto label_1bb1a8;
        case 0x1bb1acu: goto label_1bb1ac;
        case 0x1bb1b0u: goto label_1bb1b0;
        case 0x1bb1b4u: goto label_1bb1b4;
        case 0x1bb1b8u: goto label_1bb1b8;
        case 0x1bb1bcu: goto label_1bb1bc;
        default: break;
    }

    ctx->pc = 0x1bb038u;

label_1bb038:
    // 0x1bb038: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x1bb038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
label_1bb03c:
    // 0x1bb03c: 0x7fb00440  sq          $s0, 0x440($sp)
    ctx->pc = 0x1bb03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 16));
label_1bb040:
    // 0x1bb040: 0x7fb20420  sq          $s2, 0x420($sp)
    ctx->pc = 0x1bb040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 18));
label_1bb044:
    // 0x1bb044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb048:
    // 0x1bb048: 0x7fb10430  sq          $s1, 0x430($sp)
    ctx->pc = 0x1bb048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 17));
label_1bb04c:
    // 0x1bb04c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bb04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bb050:
    // 0x1bb050: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x1bb050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_1bb054:
    // 0x1bb054: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x1bb054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
label_1bb058:
    // 0x1bb058: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bb058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb05c:
    // 0x1bb05c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1bb05cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1bb060:
    // 0x1bb060: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1bb060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1bb064:
    // 0x1bb064: 0x40f809  jalr        $v0
label_1bb068:
    if (ctx->pc == 0x1BB068u) {
        ctx->pc = 0x1BB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB064u;
        // 0x1bb068: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB06Cu;
        goto label_1bb06c;
    }
    ctx->pc = 0x1BB064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BB06Cu);
        ctx->pc = 0x1BB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB064u;
        // 0x1bb068: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB064u, 0x1BB06Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB06Cu;
label_1bb06c:
    // 0x1bb06c: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
label_1bb070:
    if (ctx->pc == 0x1BB070u) {
        ctx->pc = 0x1BB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB06Cu;
        // 0x1bb070: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB074u;
        goto label_1bb074;
    }
    ctx->pc = 0x1BB06Cu;
    {
        const bool branch_taken_0x1bb06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb06c) {
            ctx->pc = 0x1BB070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB06Cu;
            // 0x1bb070: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB1ACu;
            goto label_1bb1ac;
        }
    }
    ctx->pc = 0x1BB074u;
label_1bb074:
    // 0x1bb074: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bb074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb078:
    // 0x1bb078: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1bb078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1bb07c:
    // 0x1bb07c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1bb07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1bb080:
    // 0x1bb080: 0x40f809  jalr        $v0
label_1bb084:
    if (ctx->pc == 0x1BB084u) {
        ctx->pc = 0x1BB084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB080u;
        // 0x1bb084: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB088u;
        goto label_1bb088;
    }
    ctx->pc = 0x1BB080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BB088u);
        ctx->pc = 0x1BB084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB080u;
        // 0x1bb084: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB080u, 0x1BB088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB088u;
label_1bb088:
    // 0x1bb088: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
label_1bb08c:
    if (ctx->pc == 0x1BB08Cu) {
        ctx->pc = 0x1BB08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB088u;
        // 0x1bb08c: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB090u;
        goto label_1bb090;
    }
    ctx->pc = 0x1BB088u;
    {
        const bool branch_taken_0x1bb088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb088) {
            ctx->pc = 0x1BB08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB088u;
            // 0x1bb08c: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB1ACu;
            goto label_1bb1ac;
        }
    }
    ctx->pc = 0x1BB090u;
label_1bb090:
    // 0x1bb090: 0xc06ecbc  jal         func_1BB2F0
label_1bb094:
    if (ctx->pc == 0x1BB094u) {
        ctx->pc = 0x1BB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB090u;
        // 0x1bb094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB098u;
        goto label_1bb098;
    }
    ctx->pc = 0x1BB090u;
    SET_GPR_U32(ctx, 31, 0x1BB098u);
    ctx->pc = 0x1BB094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB090u;
    // 0x1bb094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB2F0u, 0x1BB090u, 0x1BB098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB098u;
label_1bb098:
    // 0x1bb098: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
label_1bb09c:
    if (ctx->pc == 0x1BB09Cu) {
        ctx->pc = 0x1BB09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB098u;
        // 0x1bb09c: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0A0u;
        goto label_1bb0a0;
    }
    ctx->pc = 0x1BB098u;
    {
        const bool branch_taken_0x1bb098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb098) {
            ctx->pc = 0x1BB09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB098u;
            // 0x1bb09c: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB1ACu;
            goto label_1bb1ac;
        }
    }
    ctx->pc = 0x1BB0A0u;
label_1bb0a0:
    // 0x1bb0a0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1bb0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_1bb0a4:
    // 0x1bb0a4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1bb0a8:
    if (ctx->pc == 0x1BB0A8u) {
        ctx->pc = 0x1BB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0A4u;
        // 0x1bb0a8: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0ACu;
        goto label_1bb0ac;
    }
    ctx->pc = 0x1BB0A4u;
    {
        const bool branch_taken_0x1bb0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0a4) {
            ctx->pc = 0x1BB0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB0A4u;
            // 0x1bb0a8: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB0C0u;
            goto label_1bb0c0;
        }
    }
    ctx->pc = 0x1BB0ACu;
label_1bb0ac:
    // 0x1bb0ac: 0xc06e4e8  jal         func_1B93A0
label_1bb0b0:
    if (ctx->pc == 0x1BB0B0u) {
        ctx->pc = 0x1BB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0ACu;
        // 0x1bb0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0B4u;
        goto label_1bb0b4;
    }
    ctx->pc = 0x1BB0ACu;
    SET_GPR_U32(ctx, 31, 0x1BB0B4u);
    ctx->pc = 0x1BB0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0ACu;
    // 0x1bb0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A0u, 0x1BB0ACu, 0x1BB0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0B4u;
label_1bb0b4:
    // 0x1bb0b4: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
label_1bb0b8:
    if (ctx->pc == 0x1BB0B8u) {
        ctx->pc = 0x1BB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0B4u;
        // 0x1bb0b8: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0BCu;
        goto label_1bb0bc;
    }
    ctx->pc = 0x1BB0B4u;
    {
        const bool branch_taken_0x1bb0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0b4) {
            ctx->pc = 0x1BB0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB0B4u;
            // 0x1bb0b8: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB1ACu;
            goto label_1bb1ac;
        }
    }
    ctx->pc = 0x1BB0BCu;
label_1bb0bc:
    // 0x1bb0bc: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x1bb0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_1bb0c0:
    // 0x1bb0c0: 0x50800033  beql        $a0, $zero, . + 4 + (0x33 << 2)
label_1bb0c4:
    if (ctx->pc == 0x1BB0C4u) {
        ctx->pc = 0x1BB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0C0u;
        // 0x1bb0c4: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0C8u;
        goto label_1bb0c8;
    }
    ctx->pc = 0x1BB0C0u;
    {
        const bool branch_taken_0x1bb0c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0c0) {
            ctx->pc = 0x1BB0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB0C0u;
            // 0x1bb0c4: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB190u;
            goto label_1bb190;
        }
    }
    ctx->pc = 0x1BB0C8u;
label_1bb0c8:
    // 0x1bb0c8: 0xc10c3ac  jal         func_430EB0
label_1bb0cc:
    if (ctx->pc == 0x1BB0CCu) {
        ctx->pc = 0x1BB0D0u;
        goto label_1bb0d0;
    }
    ctx->pc = 0x1BB0C8u;
    SET_GPR_U32(ctx, 31, 0x1BB0D0u);
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BB0C8u, 0x1BB0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0D0u;
label_1bb0d0:
    // 0x1bb0d0: 0x27b10200  addiu       $s1, $sp, 0x200
    ctx->pc = 0x1bb0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1bb0d4:
    // 0x1bb0d4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x1bb0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_1bb0d8:
    // 0x1bb0d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1bb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1bb0dc:
    // 0x1bb0dc: 0xc10c3ac  jal         func_430EB0
label_1bb0e0:
    if (ctx->pc == 0x1BB0E0u) {
        ctx->pc = 0x1BB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0DCu;
        // 0x1bb0e0: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0E4u;
        goto label_1bb0e4;
    }
    ctx->pc = 0x1BB0DCu;
    SET_GPR_U32(ctx, 31, 0x1BB0E4u);
    ctx->pc = 0x1BB0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0DCu;
    // 0x1bb0e0: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BB0DCu, 0x1BB0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0E4u;
label_1bb0e4:
    // 0x1bb0e4: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x1bb0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_1bb0e8:
    // 0x1bb0e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bb0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb0ec:
    // 0x1bb0ec: 0xc10c4de  jal         func_431378
label_1bb0f0:
    if (ctx->pc == 0x1BB0F0u) {
        ctx->pc = 0x1BB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0ECu;
        // 0x1bb0f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0F4u;
        goto label_1bb0f4;
    }
    ctx->pc = 0x1BB0ECu;
    SET_GPR_U32(ctx, 31, 0x1BB0F4u);
    ctx->pc = 0x1BB0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0ECu;
    // 0x1bb0f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1BB0ECu, 0x1BB0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0F4u;
label_1bb0f4:
    // 0x1bb0f4: 0x8e0301b8  lw          $v1, 0x1B8($s0)
    ctx->pc = 0x1bb0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_1bb0f8:
    // 0x1bb0f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1bb0fc:
    if (ctx->pc == 0x1BB0FCu) {
        ctx->pc = 0x1BB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0F8u;
        // 0x1bb0fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB100u;
        goto label_1bb100;
    }
    ctx->pc = 0x1BB0F8u;
    {
        const bool branch_taken_0x1bb0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0F8u;
        // 0x1bb0fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0f8) {
            ctx->pc = 0x1BB110u;
            goto label_1bb110;
        }
    }
    ctx->pc = 0x1BB100u;
label_1bb100:
    // 0x1bb100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb104:
    // 0x1bb104: 0xc06eb08  jal         func_1BAC20
label_1bb108:
    if (ctx->pc == 0x1BB108u) {
        ctx->pc = 0x1BB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB104u;
        // 0x1bb108: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB10Cu;
        goto label_1bb10c;
    }
    ctx->pc = 0x1BB104u;
    SET_GPR_U32(ctx, 31, 0x1BB10Cu);
    ctx->pc = 0x1BB108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB104u;
    // 0x1bb108: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAC20u, 0x1BB104u, 0x1BB10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB10Cu;
label_1bb10c:
    // 0x1bb10c: 0xae1d0068  sw          $sp, 0x68($s0)
    ctx->pc = 0x1bb10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 29));
label_1bb110:
    // 0x1bb110: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x1bb110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_1bb114:
    // 0x1bb114: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1bb118:
    if (ctx->pc == 0x1BB118u) {
        ctx->pc = 0x1BB118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB114u;
        // 0x1bb118: 0x8e050194  lw          $a1, 0x194($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB11Cu;
        goto label_1bb11c;
    }
    ctx->pc = 0x1BB114u;
    {
        const bool branch_taken_0x1bb114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb114) {
            ctx->pc = 0x1BB118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB114u;
            // 0x1bb118: 0x8e050194  lw          $a1, 0x194($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB138u;
            goto label_1bb138;
        }
    }
    ctx->pc = 0x1BB11Cu;
label_1bb11c:
    // 0x1bb11c: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x1bb11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_1bb120:
    // 0x1bb120: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bb124:
    if (ctx->pc == 0x1BB124u) {
        ctx->pc = 0x1BB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB120u;
        // 0x1bb124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB128u;
        goto label_1bb128;
    }
    ctx->pc = 0x1BB120u;
    {
        const bool branch_taken_0x1bb120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB120u;
        // 0x1bb124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb120) {
            ctx->pc = 0x1BB134u;
            goto label_1bb134;
        }
    }
    ctx->pc = 0x1BB128u;
label_1bb128:
    // 0x1bb128: 0xc06ebb8  jal         func_1BAEE0
label_1bb12c:
    if (ctx->pc == 0x1BB12Cu) {
        ctx->pc = 0x1BB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB128u;
        // 0x1bb12c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB130u;
        goto label_1bb130;
    }
    ctx->pc = 0x1BB128u;
    SET_GPR_U32(ctx, 31, 0x1BB130u);
    ctx->pc = 0x1BB12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB128u;
    // 0x1bb12c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAEE0u, 0x1BB128u, 0x1BB130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB130u;
label_1bb130:
    // 0x1bb130: 0xae1d0068  sw          $sp, 0x68($s0)
    ctx->pc = 0x1bb130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 29));
label_1bb134:
    // 0x1bb134: 0x8e050194  lw          $a1, 0x194($s0)
    ctx->pc = 0x1bb134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
label_1bb138:
    // 0x1bb138: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1bb13c:
    if (ctx->pc == 0x1BB13Cu) {
        ctx->pc = 0x1BB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB138u;
        // 0x1bb13c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB140u;
        goto label_1bb140;
    }
    ctx->pc = 0x1BB138u;
    {
        const bool branch_taken_0x1bb138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB138u;
        // 0x1bb13c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb138) {
            ctx->pc = 0x1BB158u;
            goto label_1bb158;
        }
    }
    ctx->pc = 0x1BB140u;
label_1bb140:
    // 0x1bb140: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb144:
    // 0x1bb144: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1bb144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_1bb148:
    // 0x1bb148: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb14c:
    // 0x1bb14c: 0xc043f36  jal         func_10FCD8
label_1bb150:
    if (ctx->pc == 0x1BB150u) {
        ctx->pc = 0x1BB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB14Cu;
        // 0x1bb150: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB154u;
        goto label_1bb154;
    }
    ctx->pc = 0x1BB14Cu;
    SET_GPR_U32(ctx, 31, 0x1BB154u);
    ctx->pc = 0x1BB150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB14Cu;
    // 0x1bb150: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1BB14Cu, 0x1BB154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB154u;
label_1bb154:
    // 0x1bb154: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x1bb154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
label_1bb158:
    // 0x1bb158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb15c:
    // 0x1bb15c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bb15cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bb160:
    // 0x1bb160: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x1bb160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_1bb164:
    // 0x1bb164: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x1bb164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_1bb168:
    // 0x1bb168: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bb168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb16c:
    // 0x1bb16c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bb16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb170:
    // 0x1bb170: 0xc06e580  jal         func_1B9600
label_1bb174:
    if (ctx->pc == 0x1BB174u) {
        ctx->pc = 0x1BB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB170u;
        // 0x1bb174: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB178u;
        goto label_1bb178;
    }
    ctx->pc = 0x1BB170u;
    SET_GPR_U32(ctx, 31, 0x1BB178u);
    ctx->pc = 0x1BB174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB170u;
    // 0x1bb174: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9600u, 0x1BB170u, 0x1BB178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB178u;
label_1bb178:
    // 0x1bb178: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x1bb178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_1bb17c:
    // 0x1bb17c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1bb180:
    if (ctx->pc == 0x1BB180u) {
        ctx->pc = 0x1BB180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB17Cu;
        // 0x1bb180: 0xae0001b4  sw          $zero, 0x1B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB184u;
        goto label_1bb184;
    }
    ctx->pc = 0x1BB17Cu;
    {
        const bool branch_taken_0x1bb17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb17c) {
            ctx->pc = 0x1BB180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB17Cu;
            // 0x1bb180: 0xae0001b4  sw          $zero, 0x1B4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB1A8u;
            goto label_1bb1a8;
        }
    }
    ctx->pc = 0x1BB184u;
label_1bb184:
    // 0x1bb184: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1bb184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_1bb188:
    // 0x1bb188: 0x10000006  b           . + 4 + (0x6 << 2)
label_1bb18c:
    if (ctx->pc == 0x1BB18Cu) {
        ctx->pc = 0x1BB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB188u;
        // 0x1bb18c: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB190u;
        goto label_1bb190;
    }
    ctx->pc = 0x1BB188u;
    {
        const bool branch_taken_0x1bb188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB188u;
        // 0x1bb18c: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb188) {
            ctx->pc = 0x1BB1A4u;
            goto label_1bb1a4;
        }
    }
    ctx->pc = 0x1BB190u;
label_1bb190:
    // 0x1bb190: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bb190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1bb194:
    // 0x1bb194: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1bb198:
    if (ctx->pc == 0x1BB198u) {
        ctx->pc = 0x1BB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB194u;
        // 0x1bb198: 0xae0001b4  sw          $zero, 0x1B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB19Cu;
        goto label_1bb19c;
    }
    ctx->pc = 0x1BB194u;
    {
        const bool branch_taken_0x1bb194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb194) {
            ctx->pc = 0x1BB198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB194u;
            // 0x1bb198: 0xae0001b4  sw          $zero, 0x1B4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB1A8u;
            goto label_1bb1a8;
        }
    }
    ctx->pc = 0x1BB19Cu;
label_1bb19c:
    // 0x1bb19c: 0xc068998  jal         func_1A2660
label_1bb1a0:
    if (ctx->pc == 0x1BB1A0u) {
        ctx->pc = 0x1BB1A4u;
        goto label_1bb1a4;
    }
    ctx->pc = 0x1BB19Cu;
    SET_GPR_U32(ctx, 31, 0x1BB1A4u);
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1BB19Cu, 0x1BB1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1A4u;
label_1bb1a4:
    // 0x1bb1a4: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x1bb1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
label_1bb1a8:
    // 0x1bb1a8: 0x7bb00440  lq          $s0, 0x440($sp)
    ctx->pc = 0x1bb1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_1bb1ac:
    // 0x1bb1ac: 0x7bb10430  lq          $s1, 0x430($sp)
    ctx->pc = 0x1bb1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_1bb1b0:
    // 0x1bb1b0: 0x7bb20420  lq          $s2, 0x420($sp)
    ctx->pc = 0x1bb1b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_1bb1b4:
    // 0x1bb1b4: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x1bb1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_1bb1b8:
    // 0x1bb1b8: 0x3e00008  jr          $ra
label_1bb1bc:
    if (ctx->pc == 0x1BB1BCu) {
        ctx->pc = 0x1BB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1B8u;
        // 0x1bb1bc: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB1C0u;
        goto label_fallthrough_0x1bb1b8;
    }
    ctx->pc = 0x1BB1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1B8u;
        // 0x1bb1bc: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bb1b8:
    ctx->pc = 0x1BB1C0u;
}
