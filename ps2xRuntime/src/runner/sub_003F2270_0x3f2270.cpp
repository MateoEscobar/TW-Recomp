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

// Function: sub_003F2270
// Address: 0x3f2270 - 0x3f2340
void sub_003F2270_0x3f2270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2270_0x3f2270");
#endif

    switch (ctx->pc) {
        case 0x3f2270u: goto label_3f2270;
        case 0x3f2274u: goto label_3f2274;
        case 0x3f2278u: goto label_3f2278;
        case 0x3f227cu: goto label_3f227c;
        case 0x3f2280u: goto label_3f2280;
        case 0x3f2284u: goto label_3f2284;
        case 0x3f2288u: goto label_3f2288;
        case 0x3f228cu: goto label_3f228c;
        case 0x3f2290u: goto label_3f2290;
        case 0x3f2294u: goto label_3f2294;
        case 0x3f2298u: goto label_3f2298;
        case 0x3f229cu: goto label_3f229c;
        case 0x3f22a0u: goto label_3f22a0;
        case 0x3f22a4u: goto label_3f22a4;
        case 0x3f22a8u: goto label_3f22a8;
        case 0x3f22acu: goto label_3f22ac;
        case 0x3f22b0u: goto label_3f22b0;
        case 0x3f22b4u: goto label_3f22b4;
        case 0x3f22b8u: goto label_3f22b8;
        case 0x3f22bcu: goto label_3f22bc;
        case 0x3f22c0u: goto label_3f22c0;
        case 0x3f22c4u: goto label_3f22c4;
        case 0x3f22c8u: goto label_3f22c8;
        case 0x3f22ccu: goto label_3f22cc;
        case 0x3f22d0u: goto label_3f22d0;
        case 0x3f22d4u: goto label_3f22d4;
        case 0x3f22d8u: goto label_3f22d8;
        case 0x3f22dcu: goto label_3f22dc;
        case 0x3f22e0u: goto label_3f22e0;
        case 0x3f22e4u: goto label_3f22e4;
        case 0x3f22e8u: goto label_3f22e8;
        case 0x3f22ecu: goto label_3f22ec;
        case 0x3f22f0u: goto label_3f22f0;
        case 0x3f22f4u: goto label_3f22f4;
        case 0x3f22f8u: goto label_3f22f8;
        case 0x3f22fcu: goto label_3f22fc;
        case 0x3f2300u: goto label_3f2300;
        case 0x3f2304u: goto label_3f2304;
        case 0x3f2308u: goto label_3f2308;
        case 0x3f230cu: goto label_3f230c;
        case 0x3f2310u: goto label_3f2310;
        case 0x3f2314u: goto label_3f2314;
        case 0x3f2318u: goto label_3f2318;
        case 0x3f231cu: goto label_3f231c;
        case 0x3f2320u: goto label_3f2320;
        case 0x3f2324u: goto label_3f2324;
        case 0x3f2328u: goto label_3f2328;
        case 0x3f232cu: goto label_3f232c;
        case 0x3f2330u: goto label_3f2330;
        case 0x3f2334u: goto label_3f2334;
        case 0x3f2338u: goto label_3f2338;
        case 0x3f233cu: goto label_3f233c;
        default: break;
    }

    ctx->pc = 0x3f2270u;

label_3f2270:
    // 0x3f2270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f2270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f2274:
    // 0x3f2274: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f2274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3f2278:
    // 0x3f2278: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f2278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f227c:
    // 0x3f227c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f227cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f2280:
    // 0x3f2280: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f2280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3f2284:
    // 0x3f2284: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f2284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f2288:
    // 0x3f2288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f228c:
    // 0x3f228c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f2290:
    // 0x3f2290: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f2290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f2294:
    // 0x3f2294: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f2294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f2298:
    // 0x3f2298: 0x40f809  jalr        $v0
label_3f229c:
    if (ctx->pc == 0x3F229Cu) {
        ctx->pc = 0x3F229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2298u;
        // 0x3f229c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F22A0u;
        goto label_3f22a0;
    }
    ctx->pc = 0x3F2298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F22A0u);
        ctx->pc = 0x3F229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2298u;
        // 0x3f229c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2298u, 0x3F22A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F22A0u;
label_3f22a0:
    // 0x3f22a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f22a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f22a4:
    // 0x3f22a4: 0xc0ea14c  jal         func_3A8530
label_3f22a8:
    if (ctx->pc == 0x3F22A8u) {
        ctx->pc = 0x3F22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F22A4u;
        // 0x3f22a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F22ACu;
        goto label_3f22ac;
    }
    ctx->pc = 0x3F22A4u;
    SET_GPR_U32(ctx, 31, 0x3F22ACu);
    ctx->pc = 0x3F22A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F22A4u;
    // 0x3f22a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F22A4u, 0x3F22ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F22ACu;
label_3f22ac:
    // 0x3f22ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f22acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f22b0:
    // 0x3f22b0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3f22b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3f22b4:
    // 0x3f22b4: 0xc0e858c  jal         func_3A1630
label_3f22b8:
    if (ctx->pc == 0x3F22B8u) {
        ctx->pc = 0x3F22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F22B4u;
        // 0x3f22b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F22BCu;
        goto label_3f22bc;
    }
    ctx->pc = 0x3F22B4u;
    SET_GPR_U32(ctx, 31, 0x3F22BCu);
    ctx->pc = 0x3F22B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F22B4u;
    // 0x3f22b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F22B4u, 0x3F22BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F22BCu;
label_3f22bc:
    // 0x3f22bc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3f22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3f22c0:
    // 0x3f22c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f22c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f22c4:
    // 0x3f22c4: 0xc0e57ce  jal         func_395F38
label_3f22c8:
    if (ctx->pc == 0x3F22C8u) {
        ctx->pc = 0x3F22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F22C4u;
        // 0x3f22c8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F22CCu;
        goto label_3f22cc;
    }
    ctx->pc = 0x3F22C4u;
    SET_GPR_U32(ctx, 31, 0x3F22CCu);
    ctx->pc = 0x3F22C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F22C4u;
    // 0x3f22c8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3F22C4u, 0x3F22CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F22CCu;
label_3f22cc:
    // 0x3f22cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f22ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f22d0:
    // 0x3f22d0: 0xc0e862e  jal         func_3A18B8
label_3f22d4:
    if (ctx->pc == 0x3F22D4u) {
        ctx->pc = 0x3F22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F22D0u;
        // 0x3f22d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F22D8u;
        goto label_3f22d8;
    }
    ctx->pc = 0x3F22D0u;
    SET_GPR_U32(ctx, 31, 0x3F22D8u);
    ctx->pc = 0x3F22D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F22D0u;
    // 0x3f22d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3F22D0u, 0x3F22D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F22D8u;
label_3f22d8:
    // 0x3f22d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3f22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3f22dc:
    // 0x3f22dc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3f22dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3f22e0:
    // 0x3f22e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f22e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f22e4:
    // 0x3f22e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f22e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f22e8:
    // 0x3f22e8: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3f22e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3f22ec:
    // 0x3f22ec: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x3f22ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_3f22f0:
    // 0x3f22f0: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x3f22f0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f22f4:
    // 0x3f22f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f22f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3f22f8:
    // 0x3f22f8: 0x3c02f8e4  lui         $v0, 0xF8E4
    ctx->pc = 0x3f22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63716 << 16));
label_3f22fc:
    // 0x3f22fc: 0x3484001d  ori         $a0, $a0, 0x1D
    ctx->pc = 0x3f22fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)29);
label_3f2300:
    // 0x3f2300: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3f2300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3f2304:
    // 0x3f2304: 0x34424300  ori         $v0, $v0, 0x4300
    ctx->pc = 0x3f2304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17152);
label_3f2308:
    // 0x3f2308: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3f2308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3f230c:
    // 0x3f230c: 0x7e050010  sq          $a1, 0x10($s0)
    ctx->pc = 0x3f230cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 5));
label_3f2310:
    // 0x3f2310: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x3f2310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_3f2314:
    // 0x3f2314: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x3f2314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_3f2318:
    // 0x3f2318: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3f2318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3f231c:
    // 0x3f231c: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3f231cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3f2320:
    // 0x3f2320: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3f2320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3f2324:
    // 0x3f2324: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f2324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f2328:
    // 0x3f2328: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f2328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f232c:
    // 0x3f232c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3f232cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f2330:
    // 0x3f2330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f2334:
    // 0x3f2334: 0x3e00008  jr          $ra
label_3f2338:
    if (ctx->pc == 0x3F2338u) {
        ctx->pc = 0x3F2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2334u;
        // 0x3f2338: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F233Cu;
        goto label_3f233c;
    }
    ctx->pc = 0x3F2334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2334u;
        // 0x3f2338: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F233Cu;
label_3f233c:
    // 0x3f233c: 0x0  nop
    ctx->pc = 0x3f233cu;
    // NOP
    ctx->pc = 0x3f2340u;
}
