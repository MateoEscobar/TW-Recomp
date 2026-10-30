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

// Function: sub_00338300
// Address: 0x338300 - 0x3383e0
void sub_00338300_0x338300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338300_0x338300");
#endif

    switch (ctx->pc) {
        case 0x3383b4u: goto label_3383b4;
        case 0x3383c8u: goto label_3383c8;
        default: break;
    }

    ctx->pc = 0x338300u;

    // 0x338300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x338300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x338304: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x338304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x338308: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x338308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33830c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33830cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x338310: 0x14a2002e  bne         $a1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x338310u;
    {
        const bool branch_taken_0x338310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x338314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338310u;
        // 0x338314: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338310) {
            ctx->pc = 0x3383CCu;
            goto label_3383cc;
        }
    }
    ctx->pc = 0x338318u;
    // 0x338318: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x338318u;
    {
        const bool branch_taken_0x338318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338318u;
        // 0x33831c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338318) {
            ctx->pc = 0x3383CCu;
            goto label_3383cc;
        }
    }
    ctx->pc = 0x338320u;
    // 0x338320: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x338320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x338324: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x338324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x338328: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x338328u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x33832c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33832cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338330: 0x24a51780  addiu       $a1, $a1, 0x1780
    ctx->pc = 0x338330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6016));
    // 0x338334: 0x24c617a0  addiu       $a2, $a2, 0x17A0
    ctx->pc = 0x338334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6048));
    // 0x338338: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x338338u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x33833c: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x33833cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x338340: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x338340u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x338344: 0x78ad0000  lq          $t5, 0x0($a1)
    ctx->pc = 0x338344u;
    SET_GPR_VEC(ctx, 13, FAST_READ128(0x511780u));
    // 0x338348: 0x24e717b0  addiu       $a3, $a3, 0x17B0
    ctx->pc = 0x338348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6064));
    // 0x33834c: 0x78cc0000  lq          $t4, 0x0($a2)
    ctx->pc = 0x33834cu;
    SET_GPR_VEC(ctx, 12, FAST_READ128(0x5117A0u));
    // 0x338350: 0x252917c0  addiu       $t1, $t1, 0x17C0
    ctx->pc = 0x338350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6080));
    // 0x338354: 0x254a17d0  addiu       $t2, $t2, 0x17D0
    ctx->pc = 0x338354u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6096));
    // 0x338358: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x338358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x33835c: 0x78eb0000  lq          $t3, 0x0($a3)
    ctx->pc = 0x33835cu;
    SET_GPR_VEC(ctx, 11, FAST_READ128(0x5117B0u));
    // 0x338360: 0x2442b940  addiu       $v0, $v0, -0x46C0
    ctx->pc = 0x338360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949184));
    // 0x338364: 0x79260000  lq          $a2, 0x0($t1)
    ctx->pc = 0x338364u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x5117C0u));
    // 0x338368: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x338368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x33836c: 0x79450000  lq          $a1, 0x0($t2)
    ctx->pc = 0x33836cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x5117D0u));
    // 0x338370: 0x2484b8c0  addiu       $a0, $a0, -0x4740
    ctx->pc = 0x338370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949056));
    // 0x338374: 0x7c43fff0  sq          $v1, -0x10($v0)
    ctx->pc = 0x338374u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6EB930u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6EB930u, _value); } while (0);
    // 0x338378: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x338378u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x33837c: 0x7c850030  sq          $a1, 0x30($a0)
    ctx->pc = 0x33837cu;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6EB8F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6EB8F0u, _value); } while (0);
    // 0x338380: 0x2508b920  addiu       $t0, $t0, -0x46E0
    ctx->pc = 0x338380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949152));
    // 0x338384: 0x7d03fff0  sq          $v1, -0x10($t0)
    ctx->pc = 0x338384u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6EB910u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6EB910u, _value); } while (0);
    // 0x338388: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x338388u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x33838c: 0x7c4d0000  sq          $t5, 0x0($v0)
    ctx->pc = 0x33838cu;
    do { __m128i _value = (GPR_VEC(ctx, 13)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6EB940u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6EB940u, _value); } while (0);
    // 0x338390: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x338390u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
    // 0x338394: 0x7c8c0000  sq          $t4, 0x0($a0)
    ctx->pc = 0x338394u;
    do { __m128i _value = (GPR_VEC(ctx, 12)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6EB8C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6EB8C0u, _value); } while (0);
    // 0x338398: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x338398u;
    do { __m128i _value = (GPR_VEC(ctx, 11)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6EB8D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6EB8D0u, _value); } while (0);
    // 0x33839c: 0x7c860020  sq          $a2, 0x20($a0)
    ctx->pc = 0x33839cu;
    do { __m128i _value = (GPR_VEC(ctx, 6)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6EB8E0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6EB8E0u, _value); } while (0);
    // 0x3383a0: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x3383a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x3383a4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x3383a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x3383a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3383a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3383ac: 0xc12e34c  jal         func_4B8D30
    ctx->pc = 0x3383ACu;
    SET_GPR_U32(ctx, 31, 0x3383B4u);
    ctx->pc = 0x3383B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3383ACu;
    // 0x3383b0: 0x7d030000  sq          $v1, 0x0($t0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x3383ACu, 0x3383B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3383B4u;
label_3383b4:
    // 0x3383b4: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x3383b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x3383b8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x3383b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x3383bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3383bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3383c0: 0xc12e34c  jal         func_4B8D30
    ctx->pc = 0x3383C0u;
    SET_GPR_U32(ctx, 31, 0x3383C8u);
    ctx->pc = 0x3383C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3383C0u;
    // 0x3383c4: 0xe600b904  swc1        $f0, -0x46FC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294949124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x3383C0u, 0x3383C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3383C8u;
label_3383c8:
    // 0x3383c8: 0xe620b908  swc1        $f0, -0x46F8($s1)
    ctx->pc = 0x3383c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294949128), bits); }
label_3383cc:
    // 0x3383cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3383ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3383d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3383d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3383d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3383d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3383d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3383D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3383DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383D8u;
        // 0x3383dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3383D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3383E0u;
}
