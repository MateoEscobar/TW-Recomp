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

// Function: sub_0040E1A0
// Address: 0x40e1a0 - 0x40e2d8
void sub_0040E1A0_0x40e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040E1A0_0x40e1a0");
#endif

    switch (ctx->pc) {
        case 0x40e1a0u: goto label_40e1a0;
        case 0x40e1a4u: goto label_40e1a4;
        case 0x40e1a8u: goto label_40e1a8;
        case 0x40e1acu: goto label_40e1ac;
        case 0x40e1b0u: goto label_40e1b0;
        case 0x40e1b4u: goto label_40e1b4;
        case 0x40e1b8u: goto label_40e1b8;
        case 0x40e1bcu: goto label_40e1bc;
        case 0x40e1c0u: goto label_40e1c0;
        case 0x40e1c4u: goto label_40e1c4;
        case 0x40e1c8u: goto label_40e1c8;
        case 0x40e1ccu: goto label_40e1cc;
        case 0x40e1d0u: goto label_40e1d0;
        case 0x40e1d4u: goto label_40e1d4;
        case 0x40e1d8u: goto label_40e1d8;
        case 0x40e1dcu: goto label_40e1dc;
        case 0x40e1e0u: goto label_40e1e0;
        case 0x40e1e4u: goto label_40e1e4;
        case 0x40e1e8u: goto label_40e1e8;
        case 0x40e1ecu: goto label_40e1ec;
        case 0x40e1f0u: goto label_40e1f0;
        case 0x40e1f4u: goto label_40e1f4;
        case 0x40e1f8u: goto label_40e1f8;
        case 0x40e1fcu: goto label_40e1fc;
        case 0x40e200u: goto label_40e200;
        case 0x40e204u: goto label_40e204;
        case 0x40e208u: goto label_40e208;
        case 0x40e20cu: goto label_40e20c;
        case 0x40e210u: goto label_40e210;
        case 0x40e214u: goto label_40e214;
        case 0x40e218u: goto label_40e218;
        case 0x40e21cu: goto label_40e21c;
        case 0x40e220u: goto label_40e220;
        case 0x40e224u: goto label_40e224;
        case 0x40e228u: goto label_40e228;
        case 0x40e22cu: goto label_40e22c;
        case 0x40e230u: goto label_40e230;
        case 0x40e234u: goto label_40e234;
        case 0x40e238u: goto label_40e238;
        case 0x40e23cu: goto label_40e23c;
        case 0x40e240u: goto label_40e240;
        case 0x40e244u: goto label_40e244;
        case 0x40e248u: goto label_40e248;
        case 0x40e24cu: goto label_40e24c;
        case 0x40e250u: goto label_40e250;
        case 0x40e254u: goto label_40e254;
        case 0x40e258u: goto label_40e258;
        case 0x40e25cu: goto label_40e25c;
        case 0x40e260u: goto label_40e260;
        case 0x40e264u: goto label_40e264;
        case 0x40e268u: goto label_40e268;
        case 0x40e26cu: goto label_40e26c;
        case 0x40e270u: goto label_40e270;
        case 0x40e274u: goto label_40e274;
        case 0x40e278u: goto label_40e278;
        case 0x40e27cu: goto label_40e27c;
        case 0x40e280u: goto label_40e280;
        case 0x40e284u: goto label_40e284;
        case 0x40e288u: goto label_40e288;
        case 0x40e28cu: goto label_40e28c;
        case 0x40e290u: goto label_40e290;
        case 0x40e294u: goto label_40e294;
        case 0x40e298u: goto label_40e298;
        case 0x40e29cu: goto label_40e29c;
        case 0x40e2a0u: goto label_40e2a0;
        case 0x40e2a4u: goto label_40e2a4;
        case 0x40e2a8u: goto label_40e2a8;
        case 0x40e2acu: goto label_40e2ac;
        case 0x40e2b0u: goto label_40e2b0;
        case 0x40e2b4u: goto label_40e2b4;
        case 0x40e2b8u: goto label_40e2b8;
        case 0x40e2bcu: goto label_40e2bc;
        case 0x40e2c0u: goto label_40e2c0;
        case 0x40e2c4u: goto label_40e2c4;
        case 0x40e2c8u: goto label_40e2c8;
        case 0x40e2ccu: goto label_40e2cc;
        case 0x40e2d0u: goto label_40e2d0;
        case 0x40e2d4u: goto label_40e2d4;
        default: break;
    }

    ctx->pc = 0x40e1a0u;

label_40e1a0:
    // 0x40e1a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40e1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_40e1a4:
    // 0x40e1a4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x40e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_40e1a8:
    // 0x40e1a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x40e1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_40e1ac:
    // 0x40e1ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x40e1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_40e1b0:
    // 0x40e1b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40e1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40e1b4:
    // 0x40e1b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40e1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40e1b8:
    // 0x40e1b8: 0x24445be0  addiu       $a0, $v0, 0x5BE0
    ctx->pc = 0x40e1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23520));
label_40e1bc:
    // 0x40e1bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40e1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40e1c0:
    // 0x40e1c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x40e1c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40e1c4:
    // 0x40e1c4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x40e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_40e1c8:
    // 0x40e1c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_40e1cc:
    if (ctx->pc == 0x40E1CCu) {
        ctx->pc = 0x40E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E1C8u;
        // 0x40e1cc: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E1D0u;
        goto label_40e1d0;
    }
    ctx->pc = 0x40E1C8u;
    {
        const bool branch_taken_0x40e1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E1C8u;
        // 0x40e1cc: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e1c8) {
            ctx->pc = 0x40E1E0u;
            goto label_40e1e0;
        }
    }
    ctx->pc = 0x40E1D0u;
label_40e1d0:
    // 0x40e1d0: 0xc13d3b6  jal         func_4F4ED8
label_40e1d4:
    if (ctx->pc == 0x40E1D4u) {
        ctx->pc = 0x40E1D8u;
        goto label_40e1d8;
    }
    ctx->pc = 0x40E1D0u;
    SET_GPR_U32(ctx, 31, 0x40E1D8u);
    ctx->pc = 0x4F4ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4ED8u, 0x40E1D0u, 0x40E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E1D8u;
label_40e1d8:
    // 0x40e1d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_40e1dc:
    if (ctx->pc == 0x40E1DCu) {
        ctx->pc = 0x40E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E1D8u;
        // 0x40e1dc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E1E0u;
        goto label_40e1e0;
    }
    ctx->pc = 0x40E1D8u;
    {
        const bool branch_taken_0x40e1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E1D8u;
        // 0x40e1dc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e1d8) {
            ctx->pc = 0x40E1F0u;
            goto label_40e1f0;
        }
    }
    ctx->pc = 0x40E1E0u;
label_40e1e0:
    // 0x40e1e0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x40e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_40e1e4:
    // 0x40e1e4: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x40e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_40e1e8:
    // 0x40e1e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x40e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_40e1ec:
    // 0x40e1ec: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x40e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_40e1f0:
    // 0x40e1f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40e1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40e1f4:
    // 0x40e1f4: 0xc13d3f0  jal         func_4F4FC0
label_40e1f8:
    if (ctx->pc == 0x40E1F8u) {
        ctx->pc = 0x40E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E1F4u;
        // 0x40e1f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E1FCu;
        goto label_40e1fc;
    }
    ctx->pc = 0x40E1F4u;
    SET_GPR_U32(ctx, 31, 0x40E1FCu);
    ctx->pc = 0x40E1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E1F4u;
    // 0x40e1f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4FC0u, 0x40E1F4u, 0x40E1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E1FCu;
label_40e1fc:
    // 0x40e1fc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x40e1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_40e200:
    // 0x40e200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40e200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e204:
    // 0x40e204: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x40e204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40e208:
    // 0x40e208: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x40e208u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40e20c:
    // 0x40e20c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40e20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40e210:
    // 0x40e210: 0xc13d438  jal         func_4F50E0
label_40e214:
    if (ctx->pc == 0x40E214u) {
        ctx->pc = 0x40E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E210u;
        // 0x40e214: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E218u;
        goto label_40e218;
    }
    ctx->pc = 0x40E210u;
    SET_GPR_U32(ctx, 31, 0x40E218u);
    ctx->pc = 0x40E214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E210u;
    // 0x40e214: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F50E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F50E0u, 0x40E210u, 0x40E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E218u;
label_40e218:
    // 0x40e218: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x40e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_40e21c:
    // 0x40e21c: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x40e21cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_40e220:
    // 0x40e220: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x40e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_40e224:
    // 0x40e224: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
label_40e228:
    if (ctx->pc == 0x40E228u) {
        ctx->pc = 0x40E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E224u;
        // 0x40e228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E22Cu;
        goto label_40e22c;
    }
    ctx->pc = 0x40E224u;
    {
        const bool branch_taken_0x40e224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x40E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E224u;
        // 0x40e228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e224) {
            ctx->pc = 0x40E270u;
            goto label_40e270;
        }
    }
    ctx->pc = 0x40E22Cu;
label_40e22c:
    // 0x40e22c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_40e230:
    if (ctx->pc == 0x40E230u) {
        ctx->pc = 0x40E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E22Cu;
        // 0x40e230: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E234u;
        goto label_40e234;
    }
    ctx->pc = 0x40E22Cu;
    {
        const bool branch_taken_0x40e22c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E22Cu;
        // 0x40e230: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e22c) {
            ctx->pc = 0x40E260u;
            goto label_40e260;
        }
    }
    ctx->pc = 0x40E234u;
label_40e234:
    // 0x40e234: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x40e234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_40e238:
    // 0x40e238: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x40e238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_40e23c:
    // 0x40e23c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_40e240:
    if (ctx->pc == 0x40E240u) {
        ctx->pc = 0x40E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E23Cu;
        // 0x40e240: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E244u;
        goto label_40e244;
    }
    ctx->pc = 0x40E23Cu;
    {
        const bool branch_taken_0x40e23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e23c) {
            ctx->pc = 0x40E240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40E23Cu;
            // 0x40e240: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40E254u;
            goto label_40e254;
        }
    }
    ctx->pc = 0x40E244u;
label_40e244:
    // 0x40e244: 0xc13d3b6  jal         func_4F4ED8
label_40e248:
    if (ctx->pc == 0x40E248u) {
        ctx->pc = 0x40E24Cu;
        goto label_40e24c;
    }
    ctx->pc = 0x40E244u;
    SET_GPR_U32(ctx, 31, 0x40E24Cu);
    ctx->pc = 0x4F4ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4ED8u, 0x40E244u, 0x40E24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E24Cu;
label_40e24c:
    // 0x40e24c: 0x10000003  b           . + 4 + (0x3 << 2)
label_40e250:
    if (ctx->pc == 0x40E250u) {
        ctx->pc = 0x40E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E24Cu;
        // 0x40e250: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E254u;
        goto label_40e254;
    }
    ctx->pc = 0x40E24Cu;
    {
        const bool branch_taken_0x40e24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E24Cu;
        // 0x40e250: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e24c) {
            ctx->pc = 0x40E25Cu;
            goto label_40e25c;
        }
    }
    ctx->pc = 0x40E254u;
label_40e254:
    // 0x40e254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x40e254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_40e258:
    // 0x40e258: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x40e258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_40e25c:
    // 0x40e25c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40e25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40e260:
    // 0x40e260: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x40e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_40e264:
    // 0x40e264: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x40e264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_40e268:
    // 0x40e268: 0x10000003  b           . + 4 + (0x3 << 2)
label_40e26c:
    if (ctx->pc == 0x40E26Cu) {
        ctx->pc = 0x40E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E268u;
        // 0x40e26c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E270u;
        goto label_40e270;
    }
    ctx->pc = 0x40E268u;
    {
        const bool branch_taken_0x40e268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E268u;
        // 0x40e26c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e268) {
            ctx->pc = 0x40E278u;
            goto label_40e278;
        }
    }
    ctx->pc = 0x40E270u;
label_40e270:
    // 0x40e270: 0xc13d556  jal         func_4F5558
label_40e274:
    if (ctx->pc == 0x40E274u) {
        ctx->pc = 0x40E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E270u;
        // 0x40e274: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E278u;
        goto label_40e278;
    }
    ctx->pc = 0x40E270u;
    SET_GPR_U32(ctx, 31, 0x40E278u);
    ctx->pc = 0x40E274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E270u;
    // 0x40e274: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5558u, 0x40E270u, 0x40E278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E278u;
label_40e278:
    // 0x40e278: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x40e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_40e27c:
    // 0x40e27c: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x40e27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_40e280:
    // 0x40e280: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x40e280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_40e284:
    // 0x40e284: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x40e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_40e288:
    // 0x40e288: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_40e28c:
    if (ctx->pc == 0x40E28Cu) {
        ctx->pc = 0x40E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E288u;
        // 0x40e28c: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E290u;
        goto label_40e290;
    }
    ctx->pc = 0x40E288u;
    {
        const bool branch_taken_0x40e288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E288u;
        // 0x40e28c: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e288) {
            ctx->pc = 0x40E2BCu;
            goto label_40e2bc;
        }
    }
    ctx->pc = 0x40E290u;
label_40e290:
    // 0x40e290: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_40e294:
    if (ctx->pc == 0x40E294u) {
        ctx->pc = 0x40E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E290u;
        // 0x40e294: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E298u;
        goto label_40e298;
    }
    ctx->pc = 0x40E290u;
    {
        const bool branch_taken_0x40e290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E290u;
        // 0x40e294: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e290) {
            ctx->pc = 0x40E2BCu;
            goto label_40e2bc;
        }
    }
    ctx->pc = 0x40E298u;
label_40e298:
    // 0x40e298: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40e298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_40e29c:
    // 0x40e29c: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x40e29cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_40e2a0:
    // 0x40e2a0: 0x24c68a50  addiu       $a2, $a2, -0x75B0
    ctx->pc = 0x40e2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937168));
label_40e2a4:
    // 0x40e2a4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x40e2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_40e2a8:
    // 0x40e2a8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x40e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_40e2ac:
    // 0x40e2ac: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x40e2acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_40e2b0:
    // 0x40e2b0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x40e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_40e2b4:
    // 0x40e2b4: 0x60f809  jalr        $v1
label_40e2b8:
    if (ctx->pc == 0x40E2B8u) {
        ctx->pc = 0x40E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E2B4u;
        // 0x40e2b8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E2BCu;
        goto label_40e2bc;
    }
    ctx->pc = 0x40E2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40E2BCu);
        ctx->pc = 0x40E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E2B4u;
        // 0x40e2b8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E2B4u, 0x40E2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E2BCu;
label_40e2bc:
    // 0x40e2bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x40e2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40e2c0:
    // 0x40e2c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x40e2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40e2c4:
    // 0x40e2c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40e2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40e2c8:
    // 0x40e2c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40e2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40e2cc:
    // 0x40e2cc: 0x3e00008  jr          $ra
label_40e2d0:
    if (ctx->pc == 0x40E2D0u) {
        ctx->pc = 0x40E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E2CCu;
        // 0x40e2d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E2D4u;
        goto label_40e2d4;
    }
    ctx->pc = 0x40E2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E2CCu;
        // 0x40e2d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40E2D4u;
label_40e2d4:
    // 0x40e2d4: 0x0  nop
    ctx->pc = 0x40e2d4u;
    // NOP
    ctx->pc = 0x40e2d8u;
}
