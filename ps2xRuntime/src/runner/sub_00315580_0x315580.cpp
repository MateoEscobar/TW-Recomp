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

// Function: sub_00315580
// Address: 0x315580 - 0x3156c0
void sub_00315580_0x315580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315580_0x315580");
#endif

    switch (ctx->pc) {
        case 0x315580u: goto label_315580;
        case 0x315584u: goto label_315584;
        case 0x315588u: goto label_315588;
        case 0x31558cu: goto label_31558c;
        case 0x315590u: goto label_315590;
        case 0x315594u: goto label_315594;
        case 0x315598u: goto label_315598;
        case 0x31559cu: goto label_31559c;
        case 0x3155a0u: goto label_3155a0;
        case 0x3155a4u: goto label_3155a4;
        case 0x3155a8u: goto label_3155a8;
        case 0x3155acu: goto label_3155ac;
        case 0x3155b0u: goto label_3155b0;
        case 0x3155b4u: goto label_3155b4;
        case 0x3155b8u: goto label_3155b8;
        case 0x3155bcu: goto label_3155bc;
        case 0x3155c0u: goto label_3155c0;
        case 0x3155c4u: goto label_3155c4;
        case 0x3155c8u: goto label_3155c8;
        case 0x3155ccu: goto label_3155cc;
        case 0x3155d0u: goto label_3155d0;
        case 0x3155d4u: goto label_3155d4;
        case 0x3155d8u: goto label_3155d8;
        case 0x3155dcu: goto label_3155dc;
        case 0x3155e0u: goto label_3155e0;
        case 0x3155e4u: goto label_3155e4;
        case 0x3155e8u: goto label_3155e8;
        case 0x3155ecu: goto label_3155ec;
        case 0x3155f0u: goto label_3155f0;
        case 0x3155f4u: goto label_3155f4;
        case 0x3155f8u: goto label_3155f8;
        case 0x3155fcu: goto label_3155fc;
        case 0x315600u: goto label_315600;
        case 0x315604u: goto label_315604;
        case 0x315608u: goto label_315608;
        case 0x31560cu: goto label_31560c;
        case 0x315610u: goto label_315610;
        case 0x315614u: goto label_315614;
        case 0x315618u: goto label_315618;
        case 0x31561cu: goto label_31561c;
        case 0x315620u: goto label_315620;
        case 0x315624u: goto label_315624;
        case 0x315628u: goto label_315628;
        case 0x31562cu: goto label_31562c;
        case 0x315630u: goto label_315630;
        case 0x315634u: goto label_315634;
        case 0x315638u: goto label_315638;
        case 0x31563cu: goto label_31563c;
        case 0x315640u: goto label_315640;
        case 0x315644u: goto label_315644;
        case 0x315648u: goto label_315648;
        case 0x31564cu: goto label_31564c;
        case 0x315650u: goto label_315650;
        case 0x315654u: goto label_315654;
        case 0x315658u: goto label_315658;
        case 0x31565cu: goto label_31565c;
        case 0x315660u: goto label_315660;
        case 0x315664u: goto label_315664;
        case 0x315668u: goto label_315668;
        case 0x31566cu: goto label_31566c;
        case 0x315670u: goto label_315670;
        case 0x315674u: goto label_315674;
        case 0x315678u: goto label_315678;
        case 0x31567cu: goto label_31567c;
        case 0x315680u: goto label_315680;
        case 0x315684u: goto label_315684;
        case 0x315688u: goto label_315688;
        case 0x31568cu: goto label_31568c;
        case 0x315690u: goto label_315690;
        case 0x315694u: goto label_315694;
        case 0x315698u: goto label_315698;
        case 0x31569cu: goto label_31569c;
        case 0x3156a0u: goto label_3156a0;
        case 0x3156a4u: goto label_3156a4;
        case 0x3156a8u: goto label_3156a8;
        case 0x3156acu: goto label_3156ac;
        case 0x3156b0u: goto label_3156b0;
        case 0x3156b4u: goto label_3156b4;
        case 0x3156b8u: goto label_3156b8;
        case 0x3156bcu: goto label_3156bc;
        default: break;
    }

    ctx->pc = 0x315580u;

label_315580:
    // 0x315580: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x315580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_315584:
    // 0x315584: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x315584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_315588:
    // 0x315588: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x315588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_31558c:
    // 0x31558c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31558cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_315590:
    // 0x315590: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x315590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_315594:
    // 0x315594: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x315594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_315598:
    // 0x315598: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x315598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_31559c:
    // 0x31559c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
label_3155a0:
    // 0x3155a0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3155a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3155a4:
    // 0x3155a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3155a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3155a8:
    // 0x3155a8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3155a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3155ac:
    // 0x3155ac: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3155acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3155b0:
    // 0x3155b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3155b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3155b4:
    // 0x3155b4: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x3155b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3155b8:
    // 0x3155b8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3155b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3155bc:
    // 0x3155bc: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x3155bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3155c0:
    // 0x3155c0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3155c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_3155c4:
    // 0x3155c4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3155c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3155c8:
    // 0x3155c8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3155c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_3155cc:
    // 0x3155cc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3155ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3155d0:
    // 0x3155d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3155d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3155d4:
    // 0x3155d4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3155d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3155d8:
    // 0x3155d8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3155d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3155dc:
    // 0x3155dc: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x3155dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_3155e0:
    // 0x3155e0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3155e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_3155e4:
    // 0x3155e4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3155e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3155e8:
    // 0x3155e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3155e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3155ec:
    // 0x3155ec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3155ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3155f0:
    // 0x3155f0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3155f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3155f4:
    // 0x3155f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3155f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3155f8:
    // 0x3155f8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3155f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3155fc:
    // 0x3155fc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3155fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_315600:
    // 0x315600: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x315600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
label_315604:
    // 0x315604: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x315604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_315608:
    // 0x315608: 0xc0c1a3e  jal         func_3068F8
label_31560c:
    if (ctx->pc == 0x31560Cu) {
        ctx->pc = 0x31560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315608u;
        // 0x31560c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315610u;
        goto label_315610;
    }
    ctx->pc = 0x315608u;
    SET_GPR_U32(ctx, 31, 0x315610u);
    ctx->pc = 0x31560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315608u;
    // 0x31560c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x315608u, 0x315610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315610u;
label_315610:
    // 0x315610: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x315610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_315614:
    // 0x315614: 0xae150020  sw          $s5, 0x20($s0)
    ctx->pc = 0x315614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 21));
label_315618:
    // 0x315618: 0x24423b00  addiu       $v0, $v0, 0x3B00
    ctx->pc = 0x315618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15104));
label_31561c:
    // 0x31561c: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x31561cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
label_315620:
    // 0x315620: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x315620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
label_315624:
    // 0x315624: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x315624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_315628:
    // 0x315628: 0xae140034  sw          $s4, 0x34($s0)
    ctx->pc = 0x315628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 20));
label_31562c:
    // 0x31562c: 0xe614003c  swc1        $f20, 0x3C($s0)
    ctx->pc = 0x31562cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_315630:
    // 0x315630: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x315630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_315634:
    // 0x315634: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x315634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_315638:
    // 0x315638: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x315638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_31563c:
    // 0x31563c: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x31563cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_315640:
    // 0x315640: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x315640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_315644:
    // 0x315644: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x315644u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_315648:
    // 0x315648: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x315648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_31564c:
    // 0x31564c: 0x40f809  jalr        $v0
label_315650:
    if (ctx->pc == 0x315650u) {
        ctx->pc = 0x315650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31564Cu;
        // 0x315650: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315654u;
        goto label_315654;
    }
    ctx->pc = 0x31564Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315654u);
        ctx->pc = 0x315650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31564Cu;
        // 0x315650: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31564Cu, 0x315654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315654u;
label_315654:
    // 0x315654: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x315654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_315658:
    // 0x315658: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x315658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_31565c:
    // 0x31565c: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x31565cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_315660:
    // 0x315660: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x315660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_315664:
    // 0x315664: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x315664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_315668:
    // 0x315668: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x315668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_31566c:
    // 0x31566c: 0x40f809  jalr        $v0
label_315670:
    if (ctx->pc == 0x315670u) {
        ctx->pc = 0x315670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31566Cu;
        // 0x315670: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315674u;
        goto label_315674;
    }
    ctx->pc = 0x31566Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315674u);
        ctx->pc = 0x315670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31566Cu;
        // 0x315670: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31566Cu, 0x315674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315674u;
label_315674:
    // 0x315674: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x315674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_315678:
    // 0x315678: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x315678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_31567c:
    // 0x31567c: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x31567cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_315680:
    // 0x315680: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x315680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315684:
    // 0x315684: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x315684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_315688:
    // 0x315688: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x315688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_31568c:
    // 0x31568c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x31568cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_315690:
    // 0x315690: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x315690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
label_315694:
    // 0x315694: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x315694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_315698:
    // 0x315698: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x315698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_31569c:
    // 0x31569c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x31569cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3156a0:
    // 0x3156a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3156a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3156a4:
    // 0x3156a4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3156a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3156a8:
    // 0x3156a8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3156a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3156ac:
    // 0x3156ac: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3156acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3156b0:
    // 0x3156b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3156b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3156b4:
    // 0x3156b4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3156b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3156b8:
    // 0x3156b8: 0x3e00008  jr          $ra
label_3156bc:
    if (ctx->pc == 0x3156BCu) {
        ctx->pc = 0x3156BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156B8u;
        // 0x3156bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156C0u;
        goto label_fallthrough_0x3156b8;
    }
    ctx->pc = 0x3156B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3156BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156B8u;
        // 0x3156bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3156B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3156b8:
    ctx->pc = 0x3156C0u;
}
