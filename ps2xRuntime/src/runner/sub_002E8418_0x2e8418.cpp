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

// Function: sub_002E8418
// Address: 0x2e8418 - 0x2e84f0
void sub_002E8418_0x2e8418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8418_0x2e8418");
#endif

    switch (ctx->pc) {
        case 0x2e8418u: goto label_2e8418;
        case 0x2e841cu: goto label_2e841c;
        case 0x2e8420u: goto label_2e8420;
        case 0x2e8424u: goto label_2e8424;
        case 0x2e8428u: goto label_2e8428;
        case 0x2e842cu: goto label_2e842c;
        case 0x2e8430u: goto label_2e8430;
        case 0x2e8434u: goto label_2e8434;
        case 0x2e8438u: goto label_2e8438;
        case 0x2e843cu: goto label_2e843c;
        case 0x2e8440u: goto label_2e8440;
        case 0x2e8444u: goto label_2e8444;
        case 0x2e8448u: goto label_2e8448;
        case 0x2e844cu: goto label_2e844c;
        case 0x2e8450u: goto label_2e8450;
        case 0x2e8454u: goto label_2e8454;
        case 0x2e8458u: goto label_2e8458;
        case 0x2e845cu: goto label_2e845c;
        case 0x2e8460u: goto label_2e8460;
        case 0x2e8464u: goto label_2e8464;
        case 0x2e8468u: goto label_2e8468;
        case 0x2e846cu: goto label_2e846c;
        case 0x2e8470u: goto label_2e8470;
        case 0x2e8474u: goto label_2e8474;
        case 0x2e8478u: goto label_2e8478;
        case 0x2e847cu: goto label_2e847c;
        case 0x2e8480u: goto label_2e8480;
        case 0x2e8484u: goto label_2e8484;
        case 0x2e8488u: goto label_2e8488;
        case 0x2e848cu: goto label_2e848c;
        case 0x2e8490u: goto label_2e8490;
        case 0x2e8494u: goto label_2e8494;
        case 0x2e8498u: goto label_2e8498;
        case 0x2e849cu: goto label_2e849c;
        case 0x2e84a0u: goto label_2e84a0;
        case 0x2e84a4u: goto label_2e84a4;
        case 0x2e84a8u: goto label_2e84a8;
        case 0x2e84acu: goto label_2e84ac;
        case 0x2e84b0u: goto label_2e84b0;
        case 0x2e84b4u: goto label_2e84b4;
        case 0x2e84b8u: goto label_2e84b8;
        case 0x2e84bcu: goto label_2e84bc;
        case 0x2e84c0u: goto label_2e84c0;
        case 0x2e84c4u: goto label_2e84c4;
        case 0x2e84c8u: goto label_2e84c8;
        case 0x2e84ccu: goto label_2e84cc;
        case 0x2e84d0u: goto label_2e84d0;
        case 0x2e84d4u: goto label_2e84d4;
        case 0x2e84d8u: goto label_2e84d8;
        case 0x2e84dcu: goto label_2e84dc;
        case 0x2e84e0u: goto label_2e84e0;
        case 0x2e84e4u: goto label_2e84e4;
        case 0x2e84e8u: goto label_2e84e8;
        case 0x2e84ecu: goto label_2e84ec;
        default: break;
    }

    ctx->pc = 0x2e8418u;

label_2e8418:
    // 0x2e8418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e841c:
    // 0x2e841c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2e841cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2e8420:
    // 0x2e8420: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e8420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2e8424:
    // 0x2e8424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e8424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e8428:
    // 0x2e8428: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e8428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2e842c:
    // 0x2e842c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e842cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8430:
    // 0x2e8430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e8434:
    // 0x2e8434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8438:
    // 0x2e8438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e843c:
    // 0x2e843c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e843cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e8440:
    // 0x2e8440: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2e8440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_2e8444:
    // 0x2e8444: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2e8444u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e8448:
    // 0x2e8448: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e8448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e844c:
    // 0x2e844c: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2e844cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2e8450:
    // 0x2e8450: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e8450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e8454:
    // 0x2e8454: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2e8454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2e8458:
    // 0x2e8458: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e8458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e845c:
    // 0x2e845c: 0xa040011e  sb          $zero, 0x11E($v0)
    ctx->pc = 0x2e845cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 0));
label_2e8460:
    // 0x2e8460: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e8460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e8464:
    // 0x2e8464: 0xc0a22c6  jal         func_288B18
label_2e8468:
    if (ctx->pc == 0x2E8468u) {
        ctx->pc = 0x2E8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8464u;
        // 0x2e8468: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E846Cu;
        goto label_2e846c;
    }
    ctx->pc = 0x2E8464u;
    SET_GPR_U32(ctx, 31, 0x2E846Cu);
    ctx->pc = 0x2E8468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8464u;
    // 0x2e8468: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2E8464u, 0x2E846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E846Cu;
label_2e846c:
    // 0x2e846c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2e846cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2e8470:
    // 0x2e8470: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x2e8470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2e8474:
    // 0x2e8474: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2e8474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_2e8478:
    // 0x2e8478: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2e8478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2e847c:
    // 0x2e847c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e847cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2e8480:
    // 0x2e8480: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2e8480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2e8484:
    // 0x2e8484: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e8484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2e8488:
    // 0x2e8488: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x2e8488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2e848c:
    // 0x2e848c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e848cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2e8490:
    // 0x2e8490: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x2e8490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2e8494:
    // 0x2e8494: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2e8494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2e8498:
    // 0x2e8498: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e8498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e849c:
    // 0x2e849c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2e849cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2e84a0:
    // 0x2e84a0: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2e84a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2e84a4:
    // 0x2e84a4: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2e84a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2e84a8:
    // 0x2e84a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e84a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e84ac:
    // 0x2e84ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e84acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2e84b0:
    // 0x2e84b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e84b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e84b4:
    // 0x2e84b4: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2e84b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2e84b8:
    // 0x2e84b8: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2e84b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2e84bc:
    // 0x2e84bc: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2e84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2e84c0:
    // 0x2e84c0: 0x40f809  jalr        $v0
label_2e84c4:
    if (ctx->pc == 0x2E84C4u) {
        ctx->pc = 0x2E84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84C0u;
        // 0x2e84c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E84C8u;
        goto label_2e84c8;
    }
    ctx->pc = 0x2E84C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E84C8u);
        ctx->pc = 0x2E84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84C0u;
        // 0x2e84c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E84C0u, 0x2E84C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E84C8u;
label_2e84c8:
    // 0x2e84c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e84c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e84cc:
    // 0x2e84cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e84ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e84d0:
    // 0x2e84d0: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x2e84d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
label_2e84d4:
    // 0x2e84d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e84d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e84d8:
    // 0x2e84d8: 0xa2020040  sb          $v0, 0x40($s0)
    ctx->pc = 0x2e84d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 2));
label_2e84dc:
    // 0x2e84dc: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x2e84dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_2e84e0:
    // 0x2e84e0: 0xa2030041  sb          $v1, 0x41($s0)
    ctx->pc = 0x2e84e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 3));
label_2e84e4:
    // 0x2e84e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e84e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e84e8:
    // 0x2e84e8: 0x3e00008  jr          $ra
label_2e84ec:
    if (ctx->pc == 0x2E84ECu) {
        ctx->pc = 0x2E84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84E8u;
        // 0x2e84ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E84F0u;
        goto label_fallthrough_0x2e84e8;
    }
    ctx->pc = 0x2E84E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84E8u;
        // 0x2e84ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E84E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e84e8:
    ctx->pc = 0x2E84F0u;
}
