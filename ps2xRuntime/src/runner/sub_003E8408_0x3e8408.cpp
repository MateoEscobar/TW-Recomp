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

// Function: sub_003E8408
// Address: 0x3e8408 - 0x3e84b0
void sub_003E8408_0x3e8408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8408_0x3e8408");
#endif

    switch (ctx->pc) {
        case 0x3e8408u: goto label_3e8408;
        case 0x3e840cu: goto label_3e840c;
        case 0x3e8410u: goto label_3e8410;
        case 0x3e8414u: goto label_3e8414;
        case 0x3e8418u: goto label_3e8418;
        case 0x3e841cu: goto label_3e841c;
        case 0x3e8420u: goto label_3e8420;
        case 0x3e8424u: goto label_3e8424;
        case 0x3e8428u: goto label_3e8428;
        case 0x3e842cu: goto label_3e842c;
        case 0x3e8430u: goto label_3e8430;
        case 0x3e8434u: goto label_3e8434;
        case 0x3e8438u: goto label_3e8438;
        case 0x3e843cu: goto label_3e843c;
        case 0x3e8440u: goto label_3e8440;
        case 0x3e8444u: goto label_3e8444;
        case 0x3e8448u: goto label_3e8448;
        case 0x3e844cu: goto label_3e844c;
        case 0x3e8450u: goto label_3e8450;
        case 0x3e8454u: goto label_3e8454;
        case 0x3e8458u: goto label_3e8458;
        case 0x3e845cu: goto label_3e845c;
        case 0x3e8460u: goto label_3e8460;
        case 0x3e8464u: goto label_3e8464;
        case 0x3e8468u: goto label_3e8468;
        case 0x3e846cu: goto label_3e846c;
        case 0x3e8470u: goto label_3e8470;
        case 0x3e8474u: goto label_3e8474;
        case 0x3e8478u: goto label_3e8478;
        case 0x3e847cu: goto label_3e847c;
        case 0x3e8480u: goto label_3e8480;
        case 0x3e8484u: goto label_3e8484;
        case 0x3e8488u: goto label_3e8488;
        case 0x3e848cu: goto label_3e848c;
        case 0x3e8490u: goto label_3e8490;
        case 0x3e8494u: goto label_3e8494;
        case 0x3e8498u: goto label_3e8498;
        case 0x3e849cu: goto label_3e849c;
        case 0x3e84a0u: goto label_3e84a0;
        case 0x3e84a4u: goto label_3e84a4;
        case 0x3e84a8u: goto label_3e84a8;
        case 0x3e84acu: goto label_3e84ac;
        default: break;
    }

    ctx->pc = 0x3e8408u;

label_3e8408:
    // 0x3e8408: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e8408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3e840c:
    // 0x3e840c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3e840cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3e8410:
    // 0x3e8410: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3e8410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3e8414:
    // 0x3e8414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e8414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e8418:
    // 0x3e8418: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3e8418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3e841c:
    // 0x3e841c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e841cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e8420:
    // 0x3e8420: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e8420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e8424:
    // 0x3e8424: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e8424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e8428:
    // 0x3e8428: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e8428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e842c:
    // 0x3e842c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e842cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e8430:
    // 0x3e8430: 0x40f809  jalr        $v0
label_3e8434:
    if (ctx->pc == 0x3E8434u) {
        ctx->pc = 0x3E8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8430u;
        // 0x3e8434: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8438u;
        goto label_3e8438;
    }
    ctx->pc = 0x3E8430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E8438u);
        ctx->pc = 0x3E8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8430u;
        // 0x3e8434: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8430u, 0x3E8438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8438u;
label_3e8438:
    // 0x3e8438: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e8438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e843c:
    // 0x3e843c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3e843cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e8440:
    // 0x3e8440: 0xc0ea12a  jal         func_3A84A8
label_3e8444:
    if (ctx->pc == 0x3E8444u) {
        ctx->pc = 0x3E8444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8440u;
        // 0x3e8444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8448u;
        goto label_3e8448;
    }
    ctx->pc = 0x3E8440u;
    SET_GPR_U32(ctx, 31, 0x3E8448u);
    ctx->pc = 0x3E8444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8440u;
    // 0x3e8444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E8440u, 0x3E8448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8448u;
label_3e8448:
    // 0x3e8448: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e8448u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e844c:
    // 0x3e844c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e844cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8450:
    // 0x3e8450: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3e8450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e8454:
    // 0x3e8454: 0xc0e858c  jal         func_3A1630
label_3e8458:
    if (ctx->pc == 0x3E8458u) {
        ctx->pc = 0x3E8458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8454u;
        // 0x3e8458: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E845Cu;
        goto label_3e845c;
    }
    ctx->pc = 0x3E8454u;
    SET_GPR_U32(ctx, 31, 0x3E845Cu);
    ctx->pc = 0x3E8458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8454u;
    // 0x3e8458: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E8454u, 0x3E845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E845Cu;
label_3e845c:
    // 0x3e845c: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3e845cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e8460:
    // 0x3e8460: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3e8460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_3e8464:
    // 0x3e8464: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3e8464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3e8468:
    // 0x3e8468: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e8468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e846c:
    // 0x3e846c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x3e846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_3e8470:
    // 0x3e8470: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e8470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e8474:
    // 0x3e8474: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3e8474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3e8478:
    // 0x3e8478: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3e8478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3e847c:
    // 0x3e847c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e847cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8480:
    // 0x3e8480: 0x7e040010  sq          $a0, 0x10($s0)
    ctx->pc = 0x3e8480u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 4));
label_3e8484:
    // 0x3e8484: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3e8484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3e8488:
    // 0x3e8488: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3e8488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3e848c:
    // 0x3e848c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3e848cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3e8490:
    // 0x3e8490: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x3e8490u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
label_3e8494:
    // 0x3e8494: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3e8494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3e8498:
    // 0x3e8498: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3e8498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e849c:
    // 0x3e849c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3e849cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e84a0:
    // 0x3e84a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e84a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e84a4:
    // 0x3e84a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e84a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e84a8:
    // 0x3e84a8: 0x3e00008  jr          $ra
label_3e84ac:
    if (ctx->pc == 0x3E84ACu) {
        ctx->pc = 0x3E84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84A8u;
        // 0x3e84ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E84B0u;
        goto label_fallthrough_0x3e84a8;
    }
    ctx->pc = 0x3E84A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84A8u;
        // 0x3e84ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E84A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e84a8:
    ctx->pc = 0x3E84B0u;
}
