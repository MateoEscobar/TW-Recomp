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

// Function: sub_001F33B8
// Address: 0x1f33b8 - 0x1f34e8
void sub_001F33B8_0x1f33b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F33B8_0x1f33b8");
#endif

    switch (ctx->pc) {
        case 0x1f33b8u: goto label_1f33b8;
        case 0x1f33bcu: goto label_1f33bc;
        case 0x1f33c0u: goto label_1f33c0;
        case 0x1f33c4u: goto label_1f33c4;
        case 0x1f33c8u: goto label_1f33c8;
        case 0x1f33ccu: goto label_1f33cc;
        case 0x1f33d0u: goto label_1f33d0;
        case 0x1f33d4u: goto label_1f33d4;
        case 0x1f33d8u: goto label_1f33d8;
        case 0x1f33dcu: goto label_1f33dc;
        case 0x1f33e0u: goto label_1f33e0;
        case 0x1f33e4u: goto label_1f33e4;
        case 0x1f33e8u: goto label_1f33e8;
        case 0x1f33ecu: goto label_1f33ec;
        case 0x1f33f0u: goto label_1f33f0;
        case 0x1f33f4u: goto label_1f33f4;
        case 0x1f33f8u: goto label_1f33f8;
        case 0x1f33fcu: goto label_1f33fc;
        case 0x1f3400u: goto label_1f3400;
        case 0x1f3404u: goto label_1f3404;
        case 0x1f3408u: goto label_1f3408;
        case 0x1f340cu: goto label_1f340c;
        case 0x1f3410u: goto label_1f3410;
        case 0x1f3414u: goto label_1f3414;
        case 0x1f3418u: goto label_1f3418;
        case 0x1f341cu: goto label_1f341c;
        case 0x1f3420u: goto label_1f3420;
        case 0x1f3424u: goto label_1f3424;
        case 0x1f3428u: goto label_1f3428;
        case 0x1f342cu: goto label_1f342c;
        case 0x1f3430u: goto label_1f3430;
        case 0x1f3434u: goto label_1f3434;
        case 0x1f3438u: goto label_1f3438;
        case 0x1f343cu: goto label_1f343c;
        case 0x1f3440u: goto label_1f3440;
        case 0x1f3444u: goto label_1f3444;
        case 0x1f3448u: goto label_1f3448;
        case 0x1f344cu: goto label_1f344c;
        case 0x1f3450u: goto label_1f3450;
        case 0x1f3454u: goto label_1f3454;
        case 0x1f3458u: goto label_1f3458;
        case 0x1f345cu: goto label_1f345c;
        case 0x1f3460u: goto label_1f3460;
        case 0x1f3464u: goto label_1f3464;
        case 0x1f3468u: goto label_1f3468;
        case 0x1f346cu: goto label_1f346c;
        case 0x1f3470u: goto label_1f3470;
        case 0x1f3474u: goto label_1f3474;
        case 0x1f3478u: goto label_1f3478;
        case 0x1f347cu: goto label_1f347c;
        case 0x1f3480u: goto label_1f3480;
        case 0x1f3484u: goto label_1f3484;
        case 0x1f3488u: goto label_1f3488;
        case 0x1f348cu: goto label_1f348c;
        case 0x1f3490u: goto label_1f3490;
        case 0x1f3494u: goto label_1f3494;
        case 0x1f3498u: goto label_1f3498;
        case 0x1f349cu: goto label_1f349c;
        case 0x1f34a0u: goto label_1f34a0;
        case 0x1f34a4u: goto label_1f34a4;
        case 0x1f34a8u: goto label_1f34a8;
        case 0x1f34acu: goto label_1f34ac;
        case 0x1f34b0u: goto label_1f34b0;
        case 0x1f34b4u: goto label_1f34b4;
        case 0x1f34b8u: goto label_1f34b8;
        case 0x1f34bcu: goto label_1f34bc;
        case 0x1f34c0u: goto label_1f34c0;
        case 0x1f34c4u: goto label_1f34c4;
        case 0x1f34c8u: goto label_1f34c8;
        case 0x1f34ccu: goto label_1f34cc;
        case 0x1f34d0u: goto label_1f34d0;
        case 0x1f34d4u: goto label_1f34d4;
        case 0x1f34d8u: goto label_1f34d8;
        case 0x1f34dcu: goto label_1f34dc;
        case 0x1f34e0u: goto label_1f34e0;
        case 0x1f34e4u: goto label_1f34e4;
        default: break;
    }

    ctx->pc = 0x1f33b8u;

label_1f33b8:
    // 0x1f33b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f33b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f33bc:
    // 0x1f33bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f33bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f33c0:
    // 0x1f33c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f33c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f33c4:
    // 0x1f33c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f33c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f33c8:
    // 0x1f33c8: 0xc06a38c  jal         func_1A8E30
label_1f33cc:
    if (ctx->pc == 0x1F33CCu) {
        ctx->pc = 0x1F33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33C8u;
        // 0x1f33cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F33D0u;
        goto label_1f33d0;
    }
    ctx->pc = 0x1F33C8u;
    SET_GPR_U32(ctx, 31, 0x1F33D0u);
    ctx->pc = 0x1F33CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F33C8u;
    // 0x1f33cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1F33C8u, 0x1F33D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33D0u;
label_1f33d0:
    // 0x1f33d0: 0x26300078  addiu       $s0, $s1, 0x78
    ctx->pc = 0x1f33d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_1f33d4:
    // 0x1f33d4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f33d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f33d8:
    // 0x1f33d8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f33dc:
    // 0x1f33dc: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1f33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_1f33e0:
    // 0x1f33e0: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x1f33e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_1f33e4:
    // 0x1f33e4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1f33e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1f33e8:
    // 0x1f33e8: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1f33e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1f33ec:
    // 0x1f33ec: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x1f33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_1f33f0:
    // 0x1f33f0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f33f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f33f4:
    // 0x1f33f4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1f33f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_1f33f8:
    // 0x1f33f8: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x1f33f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_1f33fc:
    // 0x1f33fc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1f33fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1f3400:
    // 0x1f3400: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f3400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f3404:
    // 0x1f3404: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1f3404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1f3408:
    // 0x1f3408: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f3408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f340c:
    // 0x1f340c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f340cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1f3410:
    // 0x1f3410: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1f3410u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1f3414:
    // 0x1f3414: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1f3414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1f3418:
    // 0x1f3418: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1f3418u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1f341c:
    // 0x1f341c: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1f341cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_1f3420:
    // 0x1f3420: 0x24a57428  addiu       $a1, $a1, 0x7428
    ctx->pc = 0x1f3420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29736));
label_1f3424:
    // 0x1f3424: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1f3424u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1f3428:
    // 0x1f3428: 0x25087430  addiu       $t0, $t0, 0x7430
    ctx->pc = 0x1f3428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29744));
label_1f342c:
    // 0x1f342c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1f342cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1f3430:
    // 0x1f3430: 0x254a7458  addiu       $t2, $t2, 0x7458
    ctx->pc = 0x1f3430u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 29784));
label_1f3434:
    // 0x1f3434: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1f3434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f3438:
    // 0x1f3438: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f3438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f343c:
    // 0x1f343c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f343cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f3440:
    // 0x1f3440: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1f3440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1f3444:
    // 0x1f3444: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f3444u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3448:
    // 0x1f3448: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f3448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f344c:
    // 0x1f344c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f3450:
    // 0x1f3450: 0x40f809  jalr        $v0
label_1f3454:
    if (ctx->pc == 0x1F3454u) {
        ctx->pc = 0x1F3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3450u;
        // 0x1f3454: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3458u;
        goto label_1f3458;
    }
    ctx->pc = 0x1F3450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3458u);
        ctx->pc = 0x1F3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3450u;
        // 0x1f3454: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3450u, 0x1F3458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3458u;
label_1f3458:
    // 0x1f3458: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1f3458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f345c:
    // 0x1f345c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1f345cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1f3460:
    // 0x1f3460: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f3460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1f3464:
    // 0x1f3464: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1f3464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1f3468:
    // 0x1f3468: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x1f3468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_1f346c:
    // 0x1f346c: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f346cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f3470:
    // 0x1f3470: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f3470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f3474:
    // 0x1f3474: 0x24c6d100  addiu       $a2, $a2, -0x2F00
    ctx->pc = 0x1f3474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955264));
label_1f3478:
    // 0x1f3478: 0x24a5d128  addiu       $a1, $a1, -0x2ED8
    ctx->pc = 0x1f3478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955304));
label_1f347c:
    // 0x1f347c: 0x2484d158  addiu       $a0, $a0, -0x2EA8
    ctx->pc = 0x1f347cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955352));
label_1f3480:
    // 0x1f3480: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f3480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f3484:
    // 0x1f3484: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x1f3484u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_1f3488:
    // 0x1f3488: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1f3488u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f348c:
    // 0x1f348c: 0x262700b4  addiu       $a3, $s1, 0xB4
    ctx->pc = 0x1f348cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
label_1f3490:
    // 0x1f3490: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f3490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1f3494:
    // 0x1f3494: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1f3494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f3498:
    // 0x1f3498: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1f3498u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_1f349c:
    // 0x1f349c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f34a0:
    // 0x1f34a0: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1f34a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1f34a4:
    // 0x1f34a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f34a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f34a8:
    // 0x1f34a8: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x1f34a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
label_1f34ac:
    // 0x1f34ac: 0xae26006c  sw          $a2, 0x6C($s1)
    ctx->pc = 0x1f34acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 6));
label_1f34b0:
    // 0x1f34b0: 0xae250088  sw          $a1, 0x88($s1)
    ctx->pc = 0x1f34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 5));
label_1f34b4:
    // 0x1f34b4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1f34b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_1f34b8:
    // 0x1f34b8: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x1f34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
label_1f34bc:
    // 0x1f34bc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1f34bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1f34c0:
    // 0x1f34c0: 0x0  nop
    ctx->pc = 0x1f34c0u;
    // NOP
label_1f34c4:
    // 0x1f34c4: 0x0  nop
    ctx->pc = 0x1f34c4u;
    // NOP
label_1f34c8:
    // 0x1f34c8: 0x152afffb  bne         $t1, $t2, . + 4 + (-0x5 << 2)
label_1f34cc:
    if (ctx->pc == 0x1F34CCu) {
        ctx->pc = 0x1F34CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34C8u;
        // 0x1f34cc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F34D0u;
        goto label_1f34d0;
    }
    ctx->pc = 0x1F34C8u;
    {
        const bool branch_taken_0x1f34c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x1F34CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34C8u;
        // 0x1f34cc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f34c8) {
            ctx->pc = 0x1F34B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f34b8;
        }
    }
    ctx->pc = 0x1F34D0u;
label_1f34d0:
    // 0x1f34d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f34d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f34d4:
    // 0x1f34d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f34d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f34d8:
    // 0x1f34d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f34d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f34dc:
    // 0x1f34dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f34dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f34e0:
    // 0x1f34e0: 0x3e00008  jr          $ra
label_1f34e4:
    if (ctx->pc == 0x1F34E4u) {
        ctx->pc = 0x1F34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34E0u;
        // 0x1f34e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F34E8u;
        goto label_fallthrough_0x1f34e0;
    }
    ctx->pc = 0x1F34E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34E0u;
        // 0x1f34e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F34E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f34e0:
    ctx->pc = 0x1F34E8u;
}
