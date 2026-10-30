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

// Function: sub_004B7160
// Address: 0x4b7160 - 0x4b7280
void sub_004B7160_0x4b7160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7160_0x4b7160");
#endif

    switch (ctx->pc) {
        case 0x4b7160u: goto label_4b7160;
        case 0x4b7164u: goto label_4b7164;
        case 0x4b7168u: goto label_4b7168;
        case 0x4b716cu: goto label_4b716c;
        case 0x4b7170u: goto label_4b7170;
        case 0x4b7174u: goto label_4b7174;
        case 0x4b7178u: goto label_4b7178;
        case 0x4b717cu: goto label_4b717c;
        case 0x4b7180u: goto label_4b7180;
        case 0x4b7184u: goto label_4b7184;
        case 0x4b7188u: goto label_4b7188;
        case 0x4b718cu: goto label_4b718c;
        case 0x4b7190u: goto label_4b7190;
        case 0x4b7194u: goto label_4b7194;
        case 0x4b7198u: goto label_4b7198;
        case 0x4b719cu: goto label_4b719c;
        case 0x4b71a0u: goto label_4b71a0;
        case 0x4b71a4u: goto label_4b71a4;
        case 0x4b71a8u: goto label_4b71a8;
        case 0x4b71acu: goto label_4b71ac;
        case 0x4b71b0u: goto label_4b71b0;
        case 0x4b71b4u: goto label_4b71b4;
        case 0x4b71b8u: goto label_4b71b8;
        case 0x4b71bcu: goto label_4b71bc;
        case 0x4b71c0u: goto label_4b71c0;
        case 0x4b71c4u: goto label_4b71c4;
        case 0x4b71c8u: goto label_4b71c8;
        case 0x4b71ccu: goto label_4b71cc;
        case 0x4b71d0u: goto label_4b71d0;
        case 0x4b71d4u: goto label_4b71d4;
        case 0x4b71d8u: goto label_4b71d8;
        case 0x4b71dcu: goto label_4b71dc;
        case 0x4b71e0u: goto label_4b71e0;
        case 0x4b71e4u: goto label_4b71e4;
        case 0x4b71e8u: goto label_4b71e8;
        case 0x4b71ecu: goto label_4b71ec;
        case 0x4b71f0u: goto label_4b71f0;
        case 0x4b71f4u: goto label_4b71f4;
        case 0x4b71f8u: goto label_4b71f8;
        case 0x4b71fcu: goto label_4b71fc;
        case 0x4b7200u: goto label_4b7200;
        case 0x4b7204u: goto label_4b7204;
        case 0x4b7208u: goto label_4b7208;
        case 0x4b720cu: goto label_4b720c;
        case 0x4b7210u: goto label_4b7210;
        case 0x4b7214u: goto label_4b7214;
        case 0x4b7218u: goto label_4b7218;
        case 0x4b721cu: goto label_4b721c;
        case 0x4b7220u: goto label_4b7220;
        case 0x4b7224u: goto label_4b7224;
        case 0x4b7228u: goto label_4b7228;
        case 0x4b722cu: goto label_4b722c;
        case 0x4b7230u: goto label_4b7230;
        case 0x4b7234u: goto label_4b7234;
        case 0x4b7238u: goto label_4b7238;
        case 0x4b723cu: goto label_4b723c;
        case 0x4b7240u: goto label_4b7240;
        case 0x4b7244u: goto label_4b7244;
        case 0x4b7248u: goto label_4b7248;
        case 0x4b724cu: goto label_4b724c;
        case 0x4b7250u: goto label_4b7250;
        case 0x4b7254u: goto label_4b7254;
        case 0x4b7258u: goto label_4b7258;
        case 0x4b725cu: goto label_4b725c;
        case 0x4b7260u: goto label_4b7260;
        case 0x4b7264u: goto label_4b7264;
        case 0x4b7268u: goto label_4b7268;
        case 0x4b726cu: goto label_4b726c;
        case 0x4b7270u: goto label_4b7270;
        case 0x4b7274u: goto label_4b7274;
        case 0x4b7278u: goto label_4b7278;
        case 0x4b727cu: goto label_4b727c;
        default: break;
    }

    ctx->pc = 0x4b7160u;

label_4b7160:
    // 0x4b7160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b7160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4b7164:
    // 0x4b7164: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b7164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_4b7168:
    // 0x4b7168: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b7168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4b716c:
    // 0x4b716c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4b716cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b7170:
    // 0x4b7170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b7174:
    // 0x4b7174: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4b7174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b7178:
    // 0x4b7178: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b7178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4b717c:
    // 0x4b717c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b717cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b7180:
    // 0x4b7180: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b7180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4b7184:
    // 0x4b7184: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
label_4b7188:
    if (ctx->pc == 0x4B7188u) {
        ctx->pc = 0x4B7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7184u;
        // 0x4b7188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B718Cu;
        goto label_4b718c;
    }
    ctx->pc = 0x4B7184u;
    {
        const bool branch_taken_0x4b7184 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7184u;
        // 0x4b7188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7184) {
            ctx->pc = 0x4B7260u;
            goto label_4b7260;
        }
    }
    ctx->pc = 0x4B718Cu;
label_4b718c:
    // 0x4b718c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b7190:
    // 0x4b7190: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x4b7190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_4b7194:
    // 0x4b7194: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4b7198:
    if (ctx->pc == 0x4B7198u) {
        ctx->pc = 0x4B7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7194u;
        // 0x4b7198: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B719Cu;
        goto label_4b719c;
    }
    ctx->pc = 0x4B7194u;
    {
        const bool branch_taken_0x4b7194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7194u;
        // 0x4b7198: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7194) {
            ctx->pc = 0x4B71A4u;
            goto label_4b71a4;
        }
    }
    ctx->pc = 0x4B719Cu;
label_4b719c:
    // 0x4b719c: 0x1000000f  b           . + 4 + (0xF << 2)
label_4b71a0:
    if (ctx->pc == 0x4B71A0u) {
        ctx->pc = 0x4B71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B719Cu;
        // 0x4b71a0: 0xfe020040  sd          $v0, 0x40($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B71A4u;
        goto label_4b71a4;
    }
    ctx->pc = 0x4B719Cu;
    {
        const bool branch_taken_0x4b719c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B719Cu;
        // 0x4b71a0: 0xfe020040  sd          $v0, 0x40($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b719c) {
            ctx->pc = 0x4B71DCu;
            goto label_4b71dc;
        }
    }
    ctx->pc = 0x4B71A4u;
label_4b71a4:
    // 0x4b71a4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4b71a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b71a8:
    // 0x4b71a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4b71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4b71ac:
    // 0x4b71ac: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_4b71b0:
    if (ctx->pc == 0x4B71B0u) {
        ctx->pc = 0x4B71B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B71ACu;
        // 0x4b71b0: 0x442823  subu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B71B4u;
        goto label_4b71b4;
    }
    ctx->pc = 0x4B71ACu;
    {
        const bool branch_taken_0x4b71ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B71B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B71ACu;
        // 0x4b71b0: 0x442823  subu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b71ac) {
            ctx->pc = 0x4B71DCu;
            goto label_4b71dc;
        }
    }
    ctx->pc = 0x4B71B4u;
label_4b71b4:
    // 0x4b71b4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b71b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b71b8:
    // 0x4b71b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b71b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b71bc:
    // 0x4b71bc: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x4b71bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_4b71c0:
    // 0x4b71c0: 0x40f809  jalr        $v0
label_4b71c4:
    if (ctx->pc == 0x4B71C4u) {
        ctx->pc = 0x4B71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B71C0u;
        // 0x4b71c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B71C8u;
        goto label_4b71c8;
    }
    ctx->pc = 0x4B71C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B71C8u);
        ctx->pc = 0x4B71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B71C0u;
        // 0x4b71c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B71C0u, 0x4B71C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B71C8u;
label_4b71c8:
    // 0x4b71c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4b71c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b71cc:
    // 0x4b71cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b71d0:
    // 0x4b71d0: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
label_4b71d4:
    if (ctx->pc == 0x4B71D4u) {
        ctx->pc = 0x4B71D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B71D0u;
        // 0x4b71d4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B71D8u;
        goto label_4b71d8;
    }
    ctx->pc = 0x4B71D0u;
    {
        const bool branch_taken_0x4b71d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B71D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B71D0u;
        // 0x4b71d4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b71d0) {
            ctx->pc = 0x4B7264u;
            goto label_4b7264;
        }
    }
    ctx->pc = 0x4B71D8u;
label_4b71d8:
    // 0x4b71d8: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x4b71d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
label_4b71dc:
    // 0x4b71dc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b71dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b71e0:
    // 0x4b71e0: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x4b71e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
label_4b71e4:
    // 0x4b71e4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x4b71e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_4b71e8:
    // 0x4b71e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b71e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b71ec:
    // 0x4b71ec: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x4b71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_4b71f0:
    // 0x4b71f0: 0x40f809  jalr        $v0
label_4b71f4:
    if (ctx->pc == 0x4B71F4u) {
        ctx->pc = 0x4B71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B71F0u;
        // 0x4b71f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B71F8u;
        goto label_4b71f8;
    }
    ctx->pc = 0x4B71F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B71F8u);
        ctx->pc = 0x4B71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B71F0u;
        // 0x4b71f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B71F0u, 0x4B71F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B71F8u;
label_4b71f8:
    // 0x4b71f8: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x4b71f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
label_4b71fc:
    // 0x4b71fc: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x4b71fcu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_4b7200:
    // 0x4b7200: 0x96020048  lhu         $v0, 0x48($s0)
    ctx->pc = 0x4b7200u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
label_4b7204:
    // 0x4b7204: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4b7208:
    if (ctx->pc == 0x4B7208u) {
        ctx->pc = 0x4B7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7204u;
        // 0x4b7208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B720Cu;
        goto label_4b720c;
    }
    ctx->pc = 0x4B7204u;
    {
        const bool branch_taken_0x4b7204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7204u;
        // 0x4b7208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7204) {
            ctx->pc = 0x4B7224u;
            goto label_4b7224;
        }
    }
    ctx->pc = 0x4B720Cu;
label_4b720c:
    // 0x4b720c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4b720cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b7210:
    // 0x4b7210: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4b7210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b7214:
    // 0x4b7214: 0xc12c53c  jal         func_4B14F0
label_4b7218:
    if (ctx->pc == 0x4B7218u) {
        ctx->pc = 0x4B7218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7214u;
        // 0x4b7218: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B721Cu;
        goto label_4b721c;
    }
    ctx->pc = 0x4B7214u;
    SET_GPR_U32(ctx, 31, 0x4B721Cu);
    ctx->pc = 0x4B7218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7214u;
    // 0x4b7218: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B14F0u, 0x4B7214u, 0x4B721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B721Cu;
label_4b721c:
    // 0x4b721c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b721cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b7220:
    // 0x4b7220: 0xa6020048  sh          $v0, 0x48($s0)
    ctx->pc = 0x4b7220u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 2));
label_4b7224:
    // 0x4b7224: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4b7224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4b7228:
    // 0x4b7228: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b7228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b722c:
    // 0x4b722c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b722cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b7230:
    // 0x4b7230: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4b7230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4b7234:
    // 0x4b7234: 0x30630202  andi        $v1, $v1, 0x202
    ctx->pc = 0x4b7234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)514);
label_4b7238:
    // 0x4b7238: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4b7238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4b723c:
    // 0x4b723c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4b723cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_4b7240:
    // 0x4b7240: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4b7240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_4b7244:
    // 0x4b7244: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_4b7248:
    if (ctx->pc == 0x4B7248u) {
        ctx->pc = 0x4B7248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7244u;
        // 0x4b7248: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B724Cu;
        goto label_4b724c;
    }
    ctx->pc = 0x4B7244u;
    {
        const bool branch_taken_0x4b7244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7244u;
        // 0x4b7248: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7244) {
            ctx->pc = 0x4B7250u;
            goto label_4b7250;
        }
    }
    ctx->pc = 0x4B724Cu;
label_4b724c:
    // 0x4b724c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x4b724cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4b7250:
    // 0x4b7250: 0x2511826  xor         $v1, $s2, $s1
    ctx->pc = 0x4b7250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 17));
label_4b7254:
    // 0x4b7254: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b7254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b7258:
    // 0x4b7258: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x4b7258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_4b725c:
    // 0x4b725c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x4b725cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_4b7260:
    // 0x4b7260: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b7260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4b7264:
    // 0x4b7264: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b7264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4b7268:
    // 0x4b7268: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b7268u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b726c:
    // 0x4b726c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b726cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b7270:
    // 0x4b7270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b7274:
    // 0x4b7274: 0x3e00008  jr          $ra
label_4b7278:
    if (ctx->pc == 0x4B7278u) {
        ctx->pc = 0x4B7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7274u;
        // 0x4b7278: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B727Cu;
        goto label_4b727c;
    }
    ctx->pc = 0x4B7274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7274u;
        // 0x4b7278: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B727Cu;
label_4b727c:
    // 0x4b727c: 0x0  nop
    ctx->pc = 0x4b727cu;
    // NOP
    ctx->pc = 0x4b7280u;
}
