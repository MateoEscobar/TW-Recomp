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

// Function: sub_004A71E8
// Address: 0x4a71e8 - 0x4a7310
void sub_004A71E8_0x4a71e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A71E8_0x4a71e8");
#endif

    switch (ctx->pc) {
        case 0x4a71e8u: goto label_4a71e8;
        case 0x4a71ecu: goto label_4a71ec;
        case 0x4a71f0u: goto label_4a71f0;
        case 0x4a71f4u: goto label_4a71f4;
        case 0x4a71f8u: goto label_4a71f8;
        case 0x4a71fcu: goto label_4a71fc;
        case 0x4a7200u: goto label_4a7200;
        case 0x4a7204u: goto label_4a7204;
        case 0x4a7208u: goto label_4a7208;
        case 0x4a720cu: goto label_4a720c;
        case 0x4a7210u: goto label_4a7210;
        case 0x4a7214u: goto label_4a7214;
        case 0x4a7218u: goto label_4a7218;
        case 0x4a721cu: goto label_4a721c;
        case 0x4a7220u: goto label_4a7220;
        case 0x4a7224u: goto label_4a7224;
        case 0x4a7228u: goto label_4a7228;
        case 0x4a722cu: goto label_4a722c;
        case 0x4a7230u: goto label_4a7230;
        case 0x4a7234u: goto label_4a7234;
        case 0x4a7238u: goto label_4a7238;
        case 0x4a723cu: goto label_4a723c;
        case 0x4a7240u: goto label_4a7240;
        case 0x4a7244u: goto label_4a7244;
        case 0x4a7248u: goto label_4a7248;
        case 0x4a724cu: goto label_4a724c;
        case 0x4a7250u: goto label_4a7250;
        case 0x4a7254u: goto label_4a7254;
        case 0x4a7258u: goto label_4a7258;
        case 0x4a725cu: goto label_4a725c;
        case 0x4a7260u: goto label_4a7260;
        case 0x4a7264u: goto label_4a7264;
        case 0x4a7268u: goto label_4a7268;
        case 0x4a726cu: goto label_4a726c;
        case 0x4a7270u: goto label_4a7270;
        case 0x4a7274u: goto label_4a7274;
        case 0x4a7278u: goto label_4a7278;
        case 0x4a727cu: goto label_4a727c;
        case 0x4a7280u: goto label_4a7280;
        case 0x4a7284u: goto label_4a7284;
        case 0x4a7288u: goto label_4a7288;
        case 0x4a728cu: goto label_4a728c;
        case 0x4a7290u: goto label_4a7290;
        case 0x4a7294u: goto label_4a7294;
        case 0x4a7298u: goto label_4a7298;
        case 0x4a729cu: goto label_4a729c;
        case 0x4a72a0u: goto label_4a72a0;
        case 0x4a72a4u: goto label_4a72a4;
        case 0x4a72a8u: goto label_4a72a8;
        case 0x4a72acu: goto label_4a72ac;
        case 0x4a72b0u: goto label_4a72b0;
        case 0x4a72b4u: goto label_4a72b4;
        case 0x4a72b8u: goto label_4a72b8;
        case 0x4a72bcu: goto label_4a72bc;
        case 0x4a72c0u: goto label_4a72c0;
        case 0x4a72c4u: goto label_4a72c4;
        case 0x4a72c8u: goto label_4a72c8;
        case 0x4a72ccu: goto label_4a72cc;
        case 0x4a72d0u: goto label_4a72d0;
        case 0x4a72d4u: goto label_4a72d4;
        case 0x4a72d8u: goto label_4a72d8;
        case 0x4a72dcu: goto label_4a72dc;
        case 0x4a72e0u: goto label_4a72e0;
        case 0x4a72e4u: goto label_4a72e4;
        case 0x4a72e8u: goto label_4a72e8;
        case 0x4a72ecu: goto label_4a72ec;
        case 0x4a72f0u: goto label_4a72f0;
        case 0x4a72f4u: goto label_4a72f4;
        case 0x4a72f8u: goto label_4a72f8;
        case 0x4a72fcu: goto label_4a72fc;
        case 0x4a7300u: goto label_4a7300;
        case 0x4a7304u: goto label_4a7304;
        case 0x4a7308u: goto label_4a7308;
        case 0x4a730cu: goto label_4a730c;
        default: break;
    }

    ctx->pc = 0x4a71e8u;

label_4a71e8:
    // 0x4a71e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a71e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4a71ec:
    // 0x4a71ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a71ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a71f0:
    // 0x4a71f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a71f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4a71f4:
    // 0x4a71f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a71f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a71f8:
    // 0x4a71f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a71f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a71fc:
    // 0x4a71fc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a71fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_4a7200:
    // 0x4a7200: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4a7200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a7204:
    // 0x4a7204: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a7204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4a7208:
    // 0x4a7208: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4a7208u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a720c:
    // 0x4a720c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a720cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_4a7210:
    // 0x4a7210: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4a7210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_4a7214:
    // 0x4a7214: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_4a7218:
    if (ctx->pc == 0x4A7218u) {
        ctx->pc = 0x4A7218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7214u;
        // 0x4a7218: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A721Cu;
        goto label_4a721c;
    }
    ctx->pc = 0x4A7214u;
    {
        const bool branch_taken_0x4a7214 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7214u;
        // 0x4a7218: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7214) {
            ctx->pc = 0x4A722Cu;
            goto label_4a722c;
        }
    }
    ctx->pc = 0x4A721Cu;
label_4a721c:
    // 0x4a721c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_4a7220:
    if (ctx->pc == 0x4A7220u) {
        ctx->pc = 0x4A7224u;
        goto label_4a7224;
    }
    ctx->pc = 0x4A721Cu;
    {
        const bool branch_taken_0x4a721c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a721c) {
            ctx->pc = 0x4A722Cu;
            goto label_4a722c;
        }
    }
    ctx->pc = 0x4A7224u;
label_4a7224:
    // 0x4a7224: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a7224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a7228:
    // 0x4a7228: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4a7228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a722c:
    // 0x4a722c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_4a7230:
    if (ctx->pc == 0x4A7230u) {
        ctx->pc = 0x4A7234u;
        goto label_4a7234;
    }
    ctx->pc = 0x4A722Cu;
    {
        const bool branch_taken_0x4a722c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a722c) {
            ctx->pc = 0x4A72C0u;
            goto label_4a72c0;
        }
    }
    ctx->pc = 0x4A7234u;
label_4a7234:
    // 0x4a7234: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x4a7234u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a7238:
    // 0x4a7238: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_4a723c:
    if (ctx->pc == 0x4A723Cu) {
        ctx->pc = 0x4A723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7238u;
        // 0x4a723c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7240u;
        goto label_4a7240;
    }
    ctx->pc = 0x4A7238u;
    {
        const bool branch_taken_0x4a7238 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7238u;
        // 0x4a723c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7238) {
            ctx->pc = 0x4A7268u;
            goto label_4a7268;
        }
    }
    ctx->pc = 0x4A7240u;
label_4a7240:
    // 0x4a7240: 0x12260008  beq         $s1, $a2, . + 4 + (0x8 << 2)
label_4a7244:
    if (ctx->pc == 0x4A7244u) {
        ctx->pc = 0x4A7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7240u;
        // 0x4a7244: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7248u;
        goto label_4a7248;
    }
    ctx->pc = 0x4A7240u;
    {
        const bool branch_taken_0x4a7240 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x4A7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7240u;
        // 0x4a7244: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7240) {
            ctx->pc = 0x4A7264u;
            goto label_4a7264;
        }
    }
    ctx->pc = 0x4A7248u;
label_4a7248:
    // 0x4a7248: 0x1a000006  blez        $s0, . + 4 + (0x6 << 2)
label_4a724c:
    if (ctx->pc == 0x4A724Cu) {
        ctx->pc = 0x4A7250u;
        goto label_4a7250;
    }
    ctx->pc = 0x4A7248u;
    {
        const bool branch_taken_0x4a7248 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x4a7248) {
            ctx->pc = 0x4A7264u;
            goto label_4a7264;
        }
    }
    ctx->pc = 0x4A7250u;
label_4a7250:
    // 0x4a7250: 0x12260003  beq         $s1, $a2, . + 4 + (0x3 << 2)
label_4a7254:
    if (ctx->pc == 0x4A7254u) {
        ctx->pc = 0x4A7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7250u;
        // 0x4a7254: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7258u;
        goto label_4a7258;
    }
    ctx->pc = 0x4A7250u;
    {
        const bool branch_taken_0x4a7250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x4A7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7250u;
        // 0x4a7254: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7250) {
            ctx->pc = 0x4A7260u;
            goto label_4a7260;
        }
    }
    ctx->pc = 0x4A7258u;
label_4a7258:
    // 0x4a7258: 0x5e00fffd  bgtzl       $s0, . + 4 + (-0x3 << 2)
label_4a725c:
    if (ctx->pc == 0x4A725Cu) {
        ctx->pc = 0x4A725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7258u;
        // 0x4a725c: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7260u;
        goto label_4a7260;
    }
    ctx->pc = 0x4A7258u;
    {
        const bool branch_taken_0x4a7258 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x4a7258) {
            ctx->pc = 0x4A725Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7258u;
            // 0x4a725c: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7250;
        }
    }
    ctx->pc = 0x4A7260u;
label_4a7260:
    // 0x4a7260: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x4a7260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_4a7264:
    // 0x4a7264: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4a7264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4a7268:
    // 0x4a7268: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
label_4a726c:
    if (ctx->pc == 0x4A726Cu) {
        ctx->pc = 0x4A726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7268u;
        // 0x4a726c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7270u;
        goto label_4a7270;
    }
    ctx->pc = 0x4A7268u;
    {
        const bool branch_taken_0x4a7268 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4A726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7268u;
        // 0x4a726c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7268) {
            ctx->pc = 0x4A72C0u;
            goto label_4a72c0;
        }
    }
    ctx->pc = 0x4A7270u;
label_4a7270:
    // 0x4a7270: 0x2455ad18  addiu       $s5, $v0, -0x52E8
    ctx->pc = 0x4a7270u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4a7274:
    // 0x4a7274: 0x0  nop
    ctx->pc = 0x4a7274u;
    // NOP
label_4a7278:
    // 0x4a7278: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4a7278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a727c:
    // 0x4a727c: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
label_4a7280:
    if (ctx->pc == 0x4A7280u) {
        ctx->pc = 0x4A7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A727Cu;
        // 0x4a7280: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7284u;
        goto label_4a7284;
    }
    ctx->pc = 0x4A727Cu;
    {
        const bool branch_taken_0x4a727c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a727c) {
            ctx->pc = 0x4A7280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A727Cu;
            // 0x4a7280: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A72B8u;
            goto label_4a72b8;
        }
    }
    ctx->pc = 0x4A7284u;
label_4a7284:
    // 0x4a7284: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4a7284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a7288:
    // 0x4a7288: 0x8ea200e8  lw          $v0, 0xE8($s5)
    ctx->pc = 0x4a7288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 232)));
label_4a728c:
    // 0x4a728c: 0x40f809  jalr        $v0
label_4a7290:
    if (ctx->pc == 0x4A7290u) {
        ctx->pc = 0x4A7290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A728Cu;
        // 0x4a7290: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7294u;
        goto label_4a7294;
    }
    ctx->pc = 0x4A728Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A7294u);
        ctx->pc = 0x4A7290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A728Cu;
        // 0x4a7290: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A728Cu, 0x4A7294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A7294u;
label_4a7294:
    // 0x4a7294: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_4a7298:
    if (ctx->pc == 0x4A7298u) {
        ctx->pc = 0x4A7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7294u;
        // 0x4a7298: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A729Cu;
        goto label_4a729c;
    }
    ctx->pc = 0x4A7294u;
    {
        const bool branch_taken_0x4a7294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7294) {
            ctx->pc = 0x4A7298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7294u;
            // 0x4a7298: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A72B8u;
            goto label_4a72b8;
        }
    }
    ctx->pc = 0x4A729Cu;
label_4a729c:
    // 0x4a729c: 0x5260000c  beql        $s3, $zero, . + 4 + (0xC << 2)
label_4a72a0:
    if (ctx->pc == 0x4A72A0u) {
        ctx->pc = 0x4A72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A729Cu;
        // 0x4a72a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A72A4u;
        goto label_4a72a4;
    }
    ctx->pc = 0x4A729Cu;
    {
        const bool branch_taken_0x4a729c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a729c) {
            ctx->pc = 0x4A72A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A729Cu;
            // 0x4a72a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A72D0u;
            goto label_4a72d0;
        }
    }
    ctx->pc = 0x4A72A4u;
label_4a72a4:
    // 0x4a72a4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a72a8:
    // 0x4a72a8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4a72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4a72ac:
    // 0x4a72ac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4a72acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4a72b0:
    // 0x4a72b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4a72b4:
    if (ctx->pc == 0x4A72B4u) {
        ctx->pc = 0x4A72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72B0u;
        // 0x4a72b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A72B8u;
        goto label_4a72b8;
    }
    ctx->pc = 0x4A72B0u;
    {
        const bool branch_taken_0x4a72b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72B0u;
        // 0x4a72b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a72b0) {
            ctx->pc = 0x4A72D0u;
            goto label_4a72d0;
        }
    }
    ctx->pc = 0x4A72B8u;
label_4a72b8:
    // 0x4a72b8: 0x1e00ffef  bgtz        $s0, . + 4 + (-0x11 << 2)
label_4a72bc:
    if (ctx->pc == 0x4A72BCu) {
        ctx->pc = 0x4A72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72B8u;
        // 0x4a72bc: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A72C0u;
        goto label_4a72c0;
    }
    ctx->pc = 0x4A72B8u;
    {
        const bool branch_taken_0x4a72b8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x4A72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72B8u;
        // 0x4a72bc: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a72b8) {
            ctx->pc = 0x4A7278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7278;
        }
    }
    ctx->pc = 0x4A72C0u;
label_4a72c0:
    // 0x4a72c0: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_4a72c4:
    if (ctx->pc == 0x4A72C4u) {
        ctx->pc = 0x4A72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72C0u;
        // 0x4a72c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A72C8u;
        goto label_4a72c8;
    }
    ctx->pc = 0x4A72C0u;
    {
        const bool branch_taken_0x4a72c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72C0u;
        // 0x4a72c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a72c0) {
            ctx->pc = 0x4A72CCu;
            goto label_4a72cc;
        }
    }
    ctx->pc = 0x4A72C8u;
label_4a72c8:
    // 0x4a72c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4a72c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4a72cc:
    // 0x4a72cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a72ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a72d0:
    // 0x4a72d0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4a72d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a72d4:
    // 0x4a72d4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4a72d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a72d8:
    // 0x4a72d8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a72d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a72dc:
    // 0x4a72dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a72dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a72e0:
    // 0x4a72e0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4a72e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a72e4:
    // 0x4a72e4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4a72e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a72e8:
    // 0x4a72e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a72e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a72ec:
    // 0x4a72ec: 0x3e00008  jr          $ra
label_4a72f0:
    if (ctx->pc == 0x4A72F0u) {
        ctx->pc = 0x4A72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72ECu;
        // 0x4a72f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A72F4u;
        goto label_4a72f4;
    }
    ctx->pc = 0x4A72ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72ECu;
        // 0x4a72f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A72ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A72F4u;
label_4a72f4:
    // 0x4a72f4: 0x0  nop
    ctx->pc = 0x4a72f4u;
    // NOP
label_4a72f8:
    // 0x4a72f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4a72f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4a72fc:
    // 0x4a72fc: 0x0  nop
    ctx->pc = 0x4a72fcu;
    // NOP
label_4a7300:
    // 0x4a7300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a7300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7304:
    // 0x4a7304: 0x0  nop
    ctx->pc = 0x4a7304u;
    // NOP
label_4a7308:
    // 0x4a7308: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4a7308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4a730c:
    // 0x4a730c: 0x0  nop
    ctx->pc = 0x4a730cu;
    // NOP
    ctx->pc = 0x4a7310u;
}
