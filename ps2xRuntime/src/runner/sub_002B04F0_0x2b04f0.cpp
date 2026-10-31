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

// Function: sub_002B04F0
// Address: 0x2b04f0 - 0x2b0608
void sub_002B04F0_0x2b04f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B04F0_0x2b04f0");
#endif

    switch (ctx->pc) {
        case 0x2b05b0u: goto label_2b05b0;
        case 0x2b05c8u: goto label_2b05c8;
        default: break;
    }

    ctx->pc = 0x2b04f0u;

    // 0x2b04f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b04f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b04f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b04f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b04f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b04fc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2b04fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2b0500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b0500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b0504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b0508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b050c: 0x2463fcd0  addiu       $v1, $v1, -0x330
    ctx->pc = 0x2b050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966480));
    // 0x2b0510: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b0510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b0514: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2b0514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2b0518: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2b0518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2b051c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b051cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0520: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2b0520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2b0524: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2b0524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2b0528: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b0528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2b052c: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x2b052cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x2b0530: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2b0530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2b0534: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x2b0534u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2b0538: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2b0538u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b053c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2b053cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b0540: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2b0540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0544: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2b0544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2b0548: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2b0548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2b054c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b054cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0550: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2b0550u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x2b0554: 0xae060030  sw          $a2, 0x30($s0)
    ctx->pc = 0x2b0554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 6));
    // 0x2b0558: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x2b0558u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x2b055c: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x2b055cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x2b0560: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2b0560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2b0564: 0xae080044  sw          $t0, 0x44($s0)
    ctx->pc = 0x2b0564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 8));
    // 0x2b0568: 0xe60c0038  swc1        $f12, 0x38($s0)
    ctx->pc = 0x2b0568u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2b056c: 0xe60d003c  swc1        $f13, 0x3C($s0)
    ctx->pc = 0x2b056cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2b0570: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2b0570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2b0574: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2b0574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2b0578: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2b0578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2b057c: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x2b057cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0580: 0xa2000055  sb          $zero, 0x55($s0)
    ctx->pc = 0x2b0580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0584: 0xa2000056  sb          $zero, 0x56($s0)
    ctx->pc = 0x2b0584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0588: 0xa2000057  sb          $zero, 0x57($s0)
    ctx->pc = 0x2b0588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b058c: 0xa2000058  sb          $zero, 0x58($s0)
    ctx->pc = 0x2b058cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0590: 0xa2000059  sb          $zero, 0x59($s0)
    ctx->pc = 0x2b0590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0594: 0xa200005a  sb          $zero, 0x5A($s0)
    ctx->pc = 0x2b0594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0598: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x2b0598u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b059c: 0xa200005c  sb          $zero, 0x5C($s0)
    ctx->pc = 0x2b059cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b05a0: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x2b05a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b05a4: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x2b05a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b05a8: 0xc087420  jal         func_21D080
    ctx->pc = 0x2B05A8u;
    SET_GPR_U32(ctx, 31, 0x2B05B0u);
    ctx->pc = 0x2B05ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B05A8u;
    // 0x2b05ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2B05A8u, 0x2B05B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B05B0u;
label_2b05b0:
    // 0x2b05b0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b05b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b05b4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x2b05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2b05b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B05B8u;
    {
        const bool branch_taken_0x2b05b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05B8u;
        // 0x2b05bc: 0x7e030020  sq          $v1, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05b8) {
            ctx->pc = 0x2B05F0u;
            goto label_2b05f0;
        }
    }
    ctx->pc = 0x2B05C0u;
    // 0x2b05c0: 0xc08a200  jal         func_228800
    ctx->pc = 0x2B05C0u;
    SET_GPR_U32(ctx, 31, 0x2B05C8u);
    ctx->pc = 0x2B05C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B05C0u;
    // 0x2b05c4: 0x8e2400cc  lw          $a0, 0xCC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2B05C0u, 0x2B05C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B05C8u;
label_2b05c8:
    // 0x2b05c8: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2b05c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x2b05cc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b05d0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B05D0u;
    {
        const bool branch_taken_0x2b05d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05D0u;
        // 0x2b05d4: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05d0) {
            ctx->pc = 0x2B05E4u;
            goto label_2b05e4;
        }
    }
    ctx->pc = 0x2B05D8u;
    // 0x2b05d8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2b05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2b05dc: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2b05dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x2b05e0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x2b05e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2b05e4:
    // 0x2b05e4: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2b05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2b05e8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2b05e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b05ec: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2b05ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_2b05f0:
    // 0x2b05f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b05f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b05f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b05f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b05f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b05f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b05fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b05fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0600: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0600u;
        // 0x2b0604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0608u;
}
