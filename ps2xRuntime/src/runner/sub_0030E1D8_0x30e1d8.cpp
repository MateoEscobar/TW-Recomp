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

// Function: sub_0030E1D8
// Address: 0x30e1d8 - 0x30e350
void sub_0030E1D8_0x30e1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E1D8_0x30e1d8");
#endif

    switch (ctx->pc) {
        case 0x30e1d8u: goto label_30e1d8;
        case 0x30e1dcu: goto label_30e1dc;
        case 0x30e1e0u: goto label_30e1e0;
        case 0x30e1e4u: goto label_30e1e4;
        case 0x30e1e8u: goto label_30e1e8;
        case 0x30e1ecu: goto label_30e1ec;
        case 0x30e1f0u: goto label_30e1f0;
        case 0x30e1f4u: goto label_30e1f4;
        case 0x30e1f8u: goto label_30e1f8;
        case 0x30e1fcu: goto label_30e1fc;
        case 0x30e200u: goto label_30e200;
        case 0x30e204u: goto label_30e204;
        case 0x30e208u: goto label_30e208;
        case 0x30e20cu: goto label_30e20c;
        case 0x30e210u: goto label_30e210;
        case 0x30e214u: goto label_30e214;
        case 0x30e218u: goto label_30e218;
        case 0x30e21cu: goto label_30e21c;
        case 0x30e220u: goto label_30e220;
        case 0x30e224u: goto label_30e224;
        case 0x30e228u: goto label_30e228;
        case 0x30e22cu: goto label_30e22c;
        case 0x30e230u: goto label_30e230;
        case 0x30e234u: goto label_30e234;
        case 0x30e238u: goto label_30e238;
        case 0x30e23cu: goto label_30e23c;
        case 0x30e240u: goto label_30e240;
        case 0x30e244u: goto label_30e244;
        case 0x30e248u: goto label_30e248;
        case 0x30e24cu: goto label_30e24c;
        case 0x30e250u: goto label_30e250;
        case 0x30e254u: goto label_30e254;
        case 0x30e258u: goto label_30e258;
        case 0x30e25cu: goto label_30e25c;
        case 0x30e260u: goto label_30e260;
        case 0x30e264u: goto label_30e264;
        case 0x30e268u: goto label_30e268;
        case 0x30e26cu: goto label_30e26c;
        case 0x30e270u: goto label_30e270;
        case 0x30e274u: goto label_30e274;
        case 0x30e278u: goto label_30e278;
        case 0x30e27cu: goto label_30e27c;
        case 0x30e280u: goto label_30e280;
        case 0x30e284u: goto label_30e284;
        case 0x30e288u: goto label_30e288;
        case 0x30e28cu: goto label_30e28c;
        case 0x30e290u: goto label_30e290;
        case 0x30e294u: goto label_30e294;
        case 0x30e298u: goto label_30e298;
        case 0x30e29cu: goto label_30e29c;
        case 0x30e2a0u: goto label_30e2a0;
        case 0x30e2a4u: goto label_30e2a4;
        case 0x30e2a8u: goto label_30e2a8;
        case 0x30e2acu: goto label_30e2ac;
        case 0x30e2b0u: goto label_30e2b0;
        case 0x30e2b4u: goto label_30e2b4;
        case 0x30e2b8u: goto label_30e2b8;
        case 0x30e2bcu: goto label_30e2bc;
        case 0x30e2c0u: goto label_30e2c0;
        case 0x30e2c4u: goto label_30e2c4;
        case 0x30e2c8u: goto label_30e2c8;
        case 0x30e2ccu: goto label_30e2cc;
        case 0x30e2d0u: goto label_30e2d0;
        case 0x30e2d4u: goto label_30e2d4;
        case 0x30e2d8u: goto label_30e2d8;
        case 0x30e2dcu: goto label_30e2dc;
        case 0x30e2e0u: goto label_30e2e0;
        case 0x30e2e4u: goto label_30e2e4;
        case 0x30e2e8u: goto label_30e2e8;
        case 0x30e2ecu: goto label_30e2ec;
        case 0x30e2f0u: goto label_30e2f0;
        case 0x30e2f4u: goto label_30e2f4;
        case 0x30e2f8u: goto label_30e2f8;
        case 0x30e2fcu: goto label_30e2fc;
        case 0x30e300u: goto label_30e300;
        case 0x30e304u: goto label_30e304;
        case 0x30e308u: goto label_30e308;
        case 0x30e30cu: goto label_30e30c;
        case 0x30e310u: goto label_30e310;
        case 0x30e314u: goto label_30e314;
        case 0x30e318u: goto label_30e318;
        case 0x30e31cu: goto label_30e31c;
        case 0x30e320u: goto label_30e320;
        case 0x30e324u: goto label_30e324;
        case 0x30e328u: goto label_30e328;
        case 0x30e32cu: goto label_30e32c;
        case 0x30e330u: goto label_30e330;
        case 0x30e334u: goto label_30e334;
        case 0x30e338u: goto label_30e338;
        case 0x30e33cu: goto label_30e33c;
        case 0x30e340u: goto label_30e340;
        case 0x30e344u: goto label_30e344;
        case 0x30e348u: goto label_30e348;
        case 0x30e34cu: goto label_30e34c;
        default: break;
    }

    ctx->pc = 0x30e1d8u;

label_30e1d8:
    // 0x30e1d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x30e1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_30e1dc:
    // 0x30e1dc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x30e1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_30e1e0:
    // 0x30e1e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30e1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_30e1e4:
    // 0x30e1e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30e1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30e1e8:
    // 0x30e1e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30e1e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30e1ec:
    // 0x30e1ec: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x30e1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_30e1f0:
    // 0x30e1f0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x30e1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_30e1f4:
    // 0x30e1f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30e1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_30e1f8:
    // 0x30e1f8: 0xc087502  jal         func_21D408
label_30e1fc:
    if (ctx->pc == 0x30E1FCu) {
        ctx->pc = 0x30E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E1F8u;
        // 0x30e1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E200u;
        goto label_30e200;
    }
    ctx->pc = 0x30E1F8u;
    SET_GPR_U32(ctx, 31, 0x30E200u);
    ctx->pc = 0x30E1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E1F8u;
    // 0x30e1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30E1F8u, 0x30E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E200u;
label_30e200:
    // 0x30e200: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x30e200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30e204:
    // 0x30e204: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30e204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30e208:
    // 0x30e208: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30e208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30e20c:
    // 0x30e20c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30e210:
    // 0x30e210: 0x40f809  jalr        $v0
label_30e214:
    if (ctx->pc == 0x30E214u) {
        ctx->pc = 0x30E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E210u;
        // 0x30e214: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E218u;
        goto label_30e218;
    }
    ctx->pc = 0x30E210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30E218u);
        ctx->pc = 0x30E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E210u;
        // 0x30e214: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E210u, 0x30E218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30E218u;
label_30e218:
    // 0x30e218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30e218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30e21c:
    // 0x30e21c: 0xc0a3630  jal         func_28D8C0
label_30e220:
    if (ctx->pc == 0x30E220u) {
        ctx->pc = 0x30E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E21Cu;
        // 0x30e220: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E224u;
        goto label_30e224;
    }
    ctx->pc = 0x30E21Cu;
    SET_GPR_U32(ctx, 31, 0x30E224u);
    ctx->pc = 0x30E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E21Cu;
    // 0x30e220: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x30E21Cu, 0x30E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E224u;
label_30e224:
    // 0x30e224: 0xc0a3628  jal         func_28D8A0
label_30e228:
    if (ctx->pc == 0x30E228u) {
        ctx->pc = 0x30E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E224u;
        // 0x30e228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E22Cu;
        goto label_30e22c;
    }
    ctx->pc = 0x30E224u;
    SET_GPR_U32(ctx, 31, 0x30E22Cu);
    ctx->pc = 0x30E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E224u;
    // 0x30e228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x30E224u, 0x30E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E22Cu;
label_30e22c:
    // 0x30e22c: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x30e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_30e230:
    // 0x30e230: 0x24020087  addiu       $v0, $zero, 0x87
    ctx->pc = 0x30e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_30e234:
    // 0x30e234: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
label_30e238:
    if (ctx->pc == 0x30E238u) {
        ctx->pc = 0x30E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E234u;
        // 0x30e238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E23Cu;
        goto label_30e23c;
    }
    ctx->pc = 0x30E234u;
    {
        const bool branch_taken_0x30e234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E234u;
        // 0x30e238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e234) {
            ctx->pc = 0x30E328u;
            goto label_30e328;
        }
    }
    ctx->pc = 0x30E23Cu;
label_30e23c:
    // 0x30e23c: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x30e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
label_30e240:
    // 0x30e240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30e244:
    // 0x30e244: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x30e244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
label_30e248:
    // 0x30e248: 0x92640020  lbu         $a0, 0x20($s3)
    ctx->pc = 0x30e248u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
label_30e24c:
    // 0x30e24c: 0x14830028  bne         $a0, $v1, . + 4 + (0x28 << 2)
label_30e250:
    if (ctx->pc == 0x30E250u) {
        ctx->pc = 0x30E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E24Cu;
        // 0x30e250: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E254u;
        goto label_30e254;
    }
    ctx->pc = 0x30E24Cu;
    {
        const bool branch_taken_0x30e24c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x30E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E24Cu;
        // 0x30e250: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e24c) {
            ctx->pc = 0x30E2F0u;
            goto label_30e2f0;
        }
    }
    ctx->pc = 0x30E254u;
label_30e254:
    // 0x30e254: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x30e254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_30e258:
    // 0x30e258: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x30e258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_30e25c:
    // 0x30e25c: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x30e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_30e260:
    // 0x30e260: 0x2484d380  addiu       $a0, $a0, -0x2C80
    ctx->pc = 0x30e260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955904));
label_30e264:
    // 0x30e264: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x30e264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30e268:
    // 0x30e268: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x30e268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_30e26c:
    // 0x30e26c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x30e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_30e270:
    // 0x30e270: 0xc0e5de0  jal         func_397780
label_30e274:
    if (ctx->pc == 0x30E274u) {
        ctx->pc = 0x30E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E270u;
        // 0x30e274: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E278u;
        goto label_30e278;
    }
    ctx->pc = 0x30E270u;
    SET_GPR_U32(ctx, 31, 0x30E278u);
    ctx->pc = 0x30E274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E270u;
    // 0x30e274: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397780u, 0x30E270u, 0x30E278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E278u;
label_30e278:
    // 0x30e278: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x30e278u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_30e27c:
    // 0x30e27c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x30e27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_30e280:
    // 0x30e280: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x30e280u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
label_30e284:
    // 0x30e284: 0xc0e5de0  jal         func_397780
label_30e288:
    if (ctx->pc == 0x30E288u) {
        ctx->pc = 0x30E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E284u;
        // 0x30e288: 0x2484d390  addiu       $a0, $a0, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E28Cu;
        goto label_30e28c;
    }
    ctx->pc = 0x30E284u;
    SET_GPR_U32(ctx, 31, 0x30E28Cu);
    ctx->pc = 0x30E288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E284u;
    // 0x30e288: 0x2484d390  addiu       $a0, $a0, -0x2C70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397780u, 0x30E284u, 0x30E28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E28Cu;
label_30e28c:
    // 0x30e28c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x30e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_30e290:
    // 0x30e290: 0xa7b0002c  sh          $s0, 0x2C($sp)
    ctx->pc = 0x30e290u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 16));
label_30e294:
    // 0x30e294: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x30e294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_30e298:
    // 0x30e298: 0xa7b00022  sh          $s0, 0x22($sp)
    ctx->pc = 0x30e298u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 16));
label_30e29c:
    // 0x30e29c: 0xa7b00028  sh          $s0, 0x28($sp)
    ctx->pc = 0x30e29cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 16));
label_30e2a0:
    // 0x30e2a0: 0xa7a2002a  sh          $v0, 0x2A($sp)
    ctx->pc = 0x30e2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 42), (uint16_t)GPR_U32(ctx, 2));
label_30e2a4:
    // 0x30e2a4: 0xa7b1002e  sh          $s1, 0x2E($sp)
    ctx->pc = 0x30e2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 17));
label_30e2a8:
    // 0x30e2a8: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x30e2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
label_30e2ac:
    // 0x30e2ac: 0xa7a20024  sh          $v0, 0x24($sp)
    ctx->pc = 0x30e2acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 36), (uint16_t)GPR_U32(ctx, 2));
label_30e2b0:
    // 0x30e2b0: 0xc0a4e54  jal         func_293950
label_30e2b4:
    if (ctx->pc == 0x30E2B4u) {
        ctx->pc = 0x30E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E2B0u;
        // 0x30e2b4: 0xa7a20026  sh          $v0, 0x26($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E2B8u;
        goto label_30e2b8;
    }
    ctx->pc = 0x30E2B0u;
    SET_GPR_U32(ctx, 31, 0x30E2B8u);
    ctx->pc = 0x30E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E2B0u;
    // 0x30e2b4: 0xa7a20026  sh          $v0, 0x26($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30E2B0u, 0x30E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E2B8u;
label_30e2b8:
    // 0x30e2b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30e2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30e2bc:
    // 0x30e2bc: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_30e2c0:
    if (ctx->pc == 0x30E2C0u) {
        ctx->pc = 0x30E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E2BCu;
        // 0x30e2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E2C4u;
        goto label_30e2c4;
    }
    ctx->pc = 0x30E2BCu;
    {
        const bool branch_taken_0x30e2bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E2BCu;
        // 0x30e2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e2bc) {
            ctx->pc = 0x30E314u;
            goto label_30e314;
        }
    }
    ctx->pc = 0x30E2C4u;
label_30e2c4:
    // 0x30e2c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30e2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_30e2c8:
    // 0x30e2c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30e2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30e2cc:
    // 0x30e2cc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x30e2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_30e2d0:
    // 0x30e2d0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x30e2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_30e2d4:
    // 0x30e2d4: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x30e2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_30e2d8:
    // 0x30e2d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30e2d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e2dc:
    // 0x30e2dc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x30e2dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30e2e0:
    // 0x30e2e0: 0xc0bb7fe  jal         func_2EDFF8
label_30e2e4:
    if (ctx->pc == 0x30E2E4u) {
        ctx->pc = 0x30E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E2E0u;
        // 0x30e2e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E2E8u;
        goto label_30e2e8;
    }
    ctx->pc = 0x30E2E0u;
    SET_GPR_U32(ctx, 31, 0x30E2E8u);
    ctx->pc = 0x30E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E2E0u;
    // 0x30e2e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDFF8u, 0x30E2E0u, 0x30E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E2E8u;
label_30e2e8:
    // 0x30e2e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_30e2ec:
    if (ctx->pc == 0x30E2ECu) {
        ctx->pc = 0x30E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E2E8u;
        // 0x30e2ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E2F0u;
        goto label_30e2f0;
    }
    ctx->pc = 0x30E2E8u;
    {
        const bool branch_taken_0x30e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E2E8u;
        // 0x30e2ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e2e8) {
            ctx->pc = 0x30E318u;
            goto label_30e318;
        }
    }
    ctx->pc = 0x30E2F0u;
label_30e2f0:
    // 0x30e2f0: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
label_30e2f4:
    if (ctx->pc == 0x30E2F4u) {
        ctx->pc = 0x30E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E2F0u;
        // 0x30e2f4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E2F8u;
        goto label_30e2f8;
    }
    ctx->pc = 0x30E2F0u;
    {
        const bool branch_taken_0x30e2f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x30E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E2F0u;
        // 0x30e2f4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e2f0) {
            ctx->pc = 0x30E338u;
            goto label_30e338;
        }
    }
    ctx->pc = 0x30E2F8u;
label_30e2f8:
    // 0x30e2f8: 0xc0a4e54  jal         func_293950
label_30e2fc:
    if (ctx->pc == 0x30E2FCu) {
        ctx->pc = 0x30E300u;
        goto label_30e300;
    }
    ctx->pc = 0x30E2F8u;
    SET_GPR_U32(ctx, 31, 0x30E300u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30E2F8u, 0x30E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E300u;
label_30e300:
    // 0x30e300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30e300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30e304:
    // 0x30e304: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_30e308:
    if (ctx->pc == 0x30E308u) {
        ctx->pc = 0x30E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E304u;
        // 0x30e308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E30Cu;
        goto label_30e30c;
    }
    ctx->pc = 0x30E304u;
    {
        const bool branch_taken_0x30e304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E304u;
        // 0x30e308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e304) {
            ctx->pc = 0x30E314u;
            goto label_30e314;
        }
    }
    ctx->pc = 0x30E30Cu;
label_30e30c:
    // 0x30e30c: 0xc0baece  jal         func_2EBB38
label_30e310:
    if (ctx->pc == 0x30E310u) {
        ctx->pc = 0x30E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E30Cu;
        // 0x30e310: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E314u;
        goto label_30e314;
    }
    ctx->pc = 0x30E30Cu;
    SET_GPR_U32(ctx, 31, 0x30E314u);
    ctx->pc = 0x30E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E30Cu;
    // 0x30e310: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBB38u, 0x30E30Cu, 0x30E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E314u;
label_30e314:
    // 0x30e314: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30e314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30e318:
    // 0x30e318: 0xc0a35d6  jal         func_28D758
label_30e31c:
    if (ctx->pc == 0x30E31Cu) {
        ctx->pc = 0x30E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E318u;
        // 0x30e31c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E320u;
        goto label_30e320;
    }
    ctx->pc = 0x30E318u;
    SET_GPR_U32(ctx, 31, 0x30E320u);
    ctx->pc = 0x30E31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E318u;
    // 0x30e31c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30E318u, 0x30E320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E320u;
label_30e320:
    // 0x30e320: 0x10000005  b           . + 4 + (0x5 << 2)
label_30e324:
    if (ctx->pc == 0x30E324u) {
        ctx->pc = 0x30E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E320u;
        // 0x30e324: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E328u;
        goto label_30e328;
    }
    ctx->pc = 0x30E320u;
    {
        const bool branch_taken_0x30e320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E320u;
        // 0x30e324: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e320) {
            ctx->pc = 0x30E338u;
            goto label_30e338;
        }
    }
    ctx->pc = 0x30E328u;
label_30e328:
    // 0x30e328: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x30e328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_30e32c:
    // 0x30e32c: 0xc0ab742  jal         func_2ADD08
label_30e330:
    if (ctx->pc == 0x30E330u) {
        ctx->pc = 0x30E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E32Cu;
        // 0x30e330: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E334u;
        goto label_30e334;
    }
    ctx->pc = 0x30E32Cu;
    SET_GPR_U32(ctx, 31, 0x30E334u);
    ctx->pc = 0x30E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E32Cu;
    // 0x30e330: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x30E32Cu, 0x30E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E334u;
label_30e334:
    // 0x30e334: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x30e334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30e338:
    // 0x30e338: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x30e338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30e33c:
    // 0x30e33c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x30e33cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30e340:
    // 0x30e340: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30e340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30e344:
    // 0x30e344: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30e344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30e348:
    // 0x30e348: 0x3e00008  jr          $ra
label_30e34c:
    if (ctx->pc == 0x30E34Cu) {
        ctx->pc = 0x30E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E348u;
        // 0x30e34c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E350u;
        goto label_fallthrough_0x30e348;
    }
    ctx->pc = 0x30E348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E348u;
        // 0x30e34c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30e348:
    ctx->pc = 0x30E350u;
}
