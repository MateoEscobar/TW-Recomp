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

// Function: sub_002F14B0
// Address: 0x2f14b0 - 0x2f1558
void sub_002F14B0_0x2f14b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F14B0_0x2f14b0");
#endif

    switch (ctx->pc) {
        case 0x2f14b0u: goto label_2f14b0;
        case 0x2f14b4u: goto label_2f14b4;
        case 0x2f14b8u: goto label_2f14b8;
        case 0x2f14bcu: goto label_2f14bc;
        case 0x2f14c0u: goto label_2f14c0;
        case 0x2f14c4u: goto label_2f14c4;
        case 0x2f14c8u: goto label_2f14c8;
        case 0x2f14ccu: goto label_2f14cc;
        case 0x2f14d0u: goto label_2f14d0;
        case 0x2f14d4u: goto label_2f14d4;
        case 0x2f14d8u: goto label_2f14d8;
        case 0x2f14dcu: goto label_2f14dc;
        case 0x2f14e0u: goto label_2f14e0;
        case 0x2f14e4u: goto label_2f14e4;
        case 0x2f14e8u: goto label_2f14e8;
        case 0x2f14ecu: goto label_2f14ec;
        case 0x2f14f0u: goto label_2f14f0;
        case 0x2f14f4u: goto label_2f14f4;
        case 0x2f14f8u: goto label_2f14f8;
        case 0x2f14fcu: goto label_2f14fc;
        case 0x2f1500u: goto label_2f1500;
        case 0x2f1504u: goto label_2f1504;
        case 0x2f1508u: goto label_2f1508;
        case 0x2f150cu: goto label_2f150c;
        case 0x2f1510u: goto label_2f1510;
        case 0x2f1514u: goto label_2f1514;
        case 0x2f1518u: goto label_2f1518;
        case 0x2f151cu: goto label_2f151c;
        case 0x2f1520u: goto label_2f1520;
        case 0x2f1524u: goto label_2f1524;
        case 0x2f1528u: goto label_2f1528;
        case 0x2f152cu: goto label_2f152c;
        case 0x2f1530u: goto label_2f1530;
        case 0x2f1534u: goto label_2f1534;
        case 0x2f1538u: goto label_2f1538;
        case 0x2f153cu: goto label_2f153c;
        case 0x2f1540u: goto label_2f1540;
        case 0x2f1544u: goto label_2f1544;
        case 0x2f1548u: goto label_2f1548;
        case 0x2f154cu: goto label_2f154c;
        case 0x2f1550u: goto label_2f1550;
        case 0x2f1554u: goto label_2f1554;
        default: break;
    }

    ctx->pc = 0x2f14b0u;

label_2f14b0:
    // 0x2f14b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f14b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f14b4:
    // 0x2f14b4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f14b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f14b8:
    // 0x2f14b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f14b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f14bc:
    // 0x2f14bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f14bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f14c0:
    // 0x2f14c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f14c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f14c4:
    // 0x2f14c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f14c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f14c8:
    // 0x2f14c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f14c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f14cc:
    // 0x2f14cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f14ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f14d0:
    // 0x2f14d0: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2f14d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_2f14d4:
    // 0x2f14d4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2f14d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f14d8:
    // 0x2f14d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f14dc:
    // 0x2f14dc: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2f14dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2f14e0:
    // 0x2f14e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f14e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f14e4:
    // 0x2f14e4: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2f14e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2f14e8:
    // 0x2f14e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f14e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f14ec:
    // 0x2f14ec: 0xa040011e  sb          $zero, 0x11E($v0)
    ctx->pc = 0x2f14ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 0));
label_2f14f0:
    // 0x2f14f0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2f14f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f14f4:
    // 0x2f14f4: 0xc0a22c6  jal         func_288B18
label_2f14f8:
    if (ctx->pc == 0x2F14F8u) {
        ctx->pc = 0x2F14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14F4u;
        // 0x2f14f8: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F14FCu;
        goto label_2f14fc;
    }
    ctx->pc = 0x2F14F4u;
    SET_GPR_U32(ctx, 31, 0x2F14FCu);
    ctx->pc = 0x2F14F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F14F4u;
    // 0x2f14f8: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2F14F4u, 0x2F14FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F14FCu;
label_2f14fc:
    // 0x2f14fc: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2f14fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2f1500:
    // 0x2f1500: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x2f1500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2f1504:
    // 0x2f1504: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2f1504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2f1508:
    // 0x2f1508: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2f1508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f150c:
    // 0x2f150c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2f150cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2f1510:
    // 0x2f1510: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2f1510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2f1514:
    // 0x2f1514: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2f1514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2f1518:
    // 0x2f1518: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f1518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f151c:
    // 0x2f151c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f1520:
    // 0x2f1520: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f1520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f1524:
    // 0x2f1524: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2f1524u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_2f1528:
    // 0x2f1528: 0x84c400e0  lh          $a0, 0xE0($a2)
    ctx->pc = 0x2f1528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 224)));
label_2f152c:
    // 0x2f152c: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x2f152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_2f1530:
    // 0x2f1530: 0x40f809  jalr        $v0
label_2f1534:
    if (ctx->pc == 0x2F1534u) {
        ctx->pc = 0x2F1534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1530u;
        // 0x2f1534: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1538u;
        goto label_2f1538;
    }
    ctx->pc = 0x2F1530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1538u);
        ctx->pc = 0x2F1534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1530u;
        // 0x2f1534: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1530u, 0x2F1538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1538u;
label_2f1538:
    // 0x2f1538: 0xa2000284  sb          $zero, 0x284($s0)
    ctx->pc = 0x2f1538u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 0));
label_2f153c:
    // 0x2f153c: 0xc08bfa0  jal         func_22FE80
label_2f1540:
    if (ctx->pc == 0x2F1540u) {
        ctx->pc = 0x2F1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F153Cu;
        // 0x2f1540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1544u;
        goto label_2f1544;
    }
    ctx->pc = 0x2F153Cu;
    SET_GPR_U32(ctx, 31, 0x2F1544u);
    ctx->pc = 0x2F1540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F153Cu;
    // 0x2f1540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F153Cu, 0x2F1544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1544u;
label_2f1544:
    // 0x2f1544: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f1544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f1548:
    // 0x2f1548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f1548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f154c:
    // 0x2f154c: 0x3e00008  jr          $ra
label_2f1550:
    if (ctx->pc == 0x2F1550u) {
        ctx->pc = 0x2F1550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F154Cu;
        // 0x2f1550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1554u;
        goto label_2f1554;
    }
    ctx->pc = 0x2F154Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F154Cu;
        // 0x2f1550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F154Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1554u;
label_2f1554:
    // 0x2f1554: 0x0  nop
    ctx->pc = 0x2f1554u;
    // NOP
    ctx->pc = 0x2f1558u;
}
