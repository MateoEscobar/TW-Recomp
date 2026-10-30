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

// Function: sub_004BF518
// Address: 0x4bf518 - 0x4bf728
void sub_004BF518_0x4bf518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF518_0x4bf518");
#endif

    switch (ctx->pc) {
        case 0x4bf518u: goto label_4bf518;
        case 0x4bf51cu: goto label_4bf51c;
        case 0x4bf520u: goto label_4bf520;
        case 0x4bf524u: goto label_4bf524;
        case 0x4bf528u: goto label_4bf528;
        case 0x4bf52cu: goto label_4bf52c;
        case 0x4bf530u: goto label_4bf530;
        case 0x4bf534u: goto label_4bf534;
        case 0x4bf538u: goto label_4bf538;
        case 0x4bf53cu: goto label_4bf53c;
        case 0x4bf540u: goto label_4bf540;
        case 0x4bf544u: goto label_4bf544;
        case 0x4bf548u: goto label_4bf548;
        case 0x4bf54cu: goto label_4bf54c;
        case 0x4bf550u: goto label_4bf550;
        case 0x4bf554u: goto label_4bf554;
        case 0x4bf558u: goto label_4bf558;
        case 0x4bf55cu: goto label_4bf55c;
        case 0x4bf560u: goto label_4bf560;
        case 0x4bf564u: goto label_4bf564;
        case 0x4bf568u: goto label_4bf568;
        case 0x4bf56cu: goto label_4bf56c;
        case 0x4bf570u: goto label_4bf570;
        case 0x4bf574u: goto label_4bf574;
        case 0x4bf578u: goto label_4bf578;
        case 0x4bf57cu: goto label_4bf57c;
        case 0x4bf580u: goto label_4bf580;
        case 0x4bf584u: goto label_4bf584;
        case 0x4bf588u: goto label_4bf588;
        case 0x4bf58cu: goto label_4bf58c;
        case 0x4bf590u: goto label_4bf590;
        case 0x4bf594u: goto label_4bf594;
        case 0x4bf598u: goto label_4bf598;
        case 0x4bf59cu: goto label_4bf59c;
        case 0x4bf5a0u: goto label_4bf5a0;
        case 0x4bf5a4u: goto label_4bf5a4;
        case 0x4bf5a8u: goto label_4bf5a8;
        case 0x4bf5acu: goto label_4bf5ac;
        case 0x4bf5b0u: goto label_4bf5b0;
        case 0x4bf5b4u: goto label_4bf5b4;
        case 0x4bf5b8u: goto label_4bf5b8;
        case 0x4bf5bcu: goto label_4bf5bc;
        case 0x4bf5c0u: goto label_4bf5c0;
        case 0x4bf5c4u: goto label_4bf5c4;
        case 0x4bf5c8u: goto label_4bf5c8;
        case 0x4bf5ccu: goto label_4bf5cc;
        case 0x4bf5d0u: goto label_4bf5d0;
        case 0x4bf5d4u: goto label_4bf5d4;
        case 0x4bf5d8u: goto label_4bf5d8;
        case 0x4bf5dcu: goto label_4bf5dc;
        case 0x4bf5e0u: goto label_4bf5e0;
        case 0x4bf5e4u: goto label_4bf5e4;
        case 0x4bf5e8u: goto label_4bf5e8;
        case 0x4bf5ecu: goto label_4bf5ec;
        case 0x4bf5f0u: goto label_4bf5f0;
        case 0x4bf5f4u: goto label_4bf5f4;
        case 0x4bf5f8u: goto label_4bf5f8;
        case 0x4bf5fcu: goto label_4bf5fc;
        case 0x4bf600u: goto label_4bf600;
        case 0x4bf604u: goto label_4bf604;
        case 0x4bf608u: goto label_4bf608;
        case 0x4bf60cu: goto label_4bf60c;
        case 0x4bf610u: goto label_4bf610;
        case 0x4bf614u: goto label_4bf614;
        case 0x4bf618u: goto label_4bf618;
        case 0x4bf61cu: goto label_4bf61c;
        case 0x4bf620u: goto label_4bf620;
        case 0x4bf624u: goto label_4bf624;
        case 0x4bf628u: goto label_4bf628;
        case 0x4bf62cu: goto label_4bf62c;
        case 0x4bf630u: goto label_4bf630;
        case 0x4bf634u: goto label_4bf634;
        case 0x4bf638u: goto label_4bf638;
        case 0x4bf63cu: goto label_4bf63c;
        case 0x4bf640u: goto label_4bf640;
        case 0x4bf644u: goto label_4bf644;
        case 0x4bf648u: goto label_4bf648;
        case 0x4bf64cu: goto label_4bf64c;
        case 0x4bf650u: goto label_4bf650;
        case 0x4bf654u: goto label_4bf654;
        case 0x4bf658u: goto label_4bf658;
        case 0x4bf65cu: goto label_4bf65c;
        case 0x4bf660u: goto label_4bf660;
        case 0x4bf664u: goto label_4bf664;
        case 0x4bf668u: goto label_4bf668;
        case 0x4bf66cu: goto label_4bf66c;
        case 0x4bf670u: goto label_4bf670;
        case 0x4bf674u: goto label_4bf674;
        case 0x4bf678u: goto label_4bf678;
        case 0x4bf67cu: goto label_4bf67c;
        case 0x4bf680u: goto label_4bf680;
        case 0x4bf684u: goto label_4bf684;
        case 0x4bf688u: goto label_4bf688;
        case 0x4bf68cu: goto label_4bf68c;
        case 0x4bf690u: goto label_4bf690;
        case 0x4bf694u: goto label_4bf694;
        case 0x4bf698u: goto label_4bf698;
        case 0x4bf69cu: goto label_4bf69c;
        case 0x4bf6a0u: goto label_4bf6a0;
        case 0x4bf6a4u: goto label_4bf6a4;
        case 0x4bf6a8u: goto label_4bf6a8;
        case 0x4bf6acu: goto label_4bf6ac;
        case 0x4bf6b0u: goto label_4bf6b0;
        case 0x4bf6b4u: goto label_4bf6b4;
        case 0x4bf6b8u: goto label_4bf6b8;
        case 0x4bf6bcu: goto label_4bf6bc;
        case 0x4bf6c0u: goto label_4bf6c0;
        case 0x4bf6c4u: goto label_4bf6c4;
        case 0x4bf6c8u: goto label_4bf6c8;
        case 0x4bf6ccu: goto label_4bf6cc;
        case 0x4bf6d0u: goto label_4bf6d0;
        case 0x4bf6d4u: goto label_4bf6d4;
        case 0x4bf6d8u: goto label_4bf6d8;
        case 0x4bf6dcu: goto label_4bf6dc;
        case 0x4bf6e0u: goto label_4bf6e0;
        case 0x4bf6e4u: goto label_4bf6e4;
        case 0x4bf6e8u: goto label_4bf6e8;
        case 0x4bf6ecu: goto label_4bf6ec;
        case 0x4bf6f0u: goto label_4bf6f0;
        case 0x4bf6f4u: goto label_4bf6f4;
        case 0x4bf6f8u: goto label_4bf6f8;
        case 0x4bf6fcu: goto label_4bf6fc;
        case 0x4bf700u: goto label_4bf700;
        case 0x4bf704u: goto label_4bf704;
        case 0x4bf708u: goto label_4bf708;
        case 0x4bf70cu: goto label_4bf70c;
        case 0x4bf710u: goto label_4bf710;
        case 0x4bf714u: goto label_4bf714;
        case 0x4bf718u: goto label_4bf718;
        case 0x4bf71cu: goto label_4bf71c;
        case 0x4bf720u: goto label_4bf720;
        case 0x4bf724u: goto label_4bf724;
        default: break;
    }

    ctx->pc = 0x4bf518u;

label_4bf518:
    // 0x4bf518: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4bf518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4bf51c:
    // 0x4bf51c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4bf51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4bf520:
    // 0x4bf520: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4bf520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_4bf524:
    // 0x4bf524: 0x3c120071  lui         $s2, 0x71
    ctx->pc = 0x4bf524u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
label_4bf528:
    // 0x4bf528: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bf528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bf52c:
    // 0x4bf52c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4bf52cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4bf530:
    // 0x4bf530: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4bf530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_4bf534:
    // 0x4bf534: 0x265341f0  addiu       $s3, $s2, 0x41F0
    ctx->pc = 0x4bf534u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16880));
label_4bf538:
    // 0x4bf538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bf538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4bf53c:
    // 0x4bf53c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4bf53cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bf540:
    // 0x4bf540: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4bf540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4bf544:
    // 0x4bf544: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x4bf544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4bf548:
    // 0x4bf548: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4bf548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4bf54c:
    // 0x4bf54c: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x4bf54cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_4bf550:
    // 0x4bf550: 0xc11ef80  jal         func_47BE00
label_4bf554:
    if (ctx->pc == 0x4BF554u) {
        ctx->pc = 0x4BF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF550u;
        // 0x4bf554: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF558u;
        goto label_4bf558;
    }
    ctx->pc = 0x4BF550u;
    SET_GPR_U32(ctx, 31, 0x4BF558u);
    ctx->pc = 0x4BF554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF550u;
    // 0x4bf554: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4BF550u, 0x4BF558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF558u;
label_4bf558:
    // 0x4bf558: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x4bf558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_4bf55c:
    // 0x4bf55c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4bf55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4bf560:
    // 0x4bf560: 0xc11ef80  jal         func_47BE00
label_4bf564:
    if (ctx->pc == 0x4BF564u) {
        ctx->pc = 0x4BF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF560u;
        // 0x4bf564: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF568u;
        goto label_4bf568;
    }
    ctx->pc = 0x4BF560u;
    SET_GPR_U32(ctx, 31, 0x4BF568u);
    ctx->pc = 0x4BF564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF560u;
    // 0x4bf564: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4BF560u, 0x4BF568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF568u;
label_4bf568:
    // 0x4bf568: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4bf568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_4bf56c:
    // 0x4bf56c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bf56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bf570:
    // 0x4bf570: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x4bf570u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_4bf574:
    // 0x4bf574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bf574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bf578:
    // 0x4bf578: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x4bf578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4bf57c:
    // 0x4bf57c: 0xae5141f0  sw          $s1, 0x41F0($s2)
    ctx->pc = 0x4bf57cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16880), GPR_U32(ctx, 17));
label_4bf580:
    // 0x4bf580: 0xc12fe02  jal         func_4BF808
label_4bf584:
    if (ctx->pc == 0x4BF584u) {
        ctx->pc = 0x4BF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF580u;
        // 0x4bf584: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF588u;
        goto label_4bf588;
    }
    ctx->pc = 0x4BF580u;
    SET_GPR_U32(ctx, 31, 0x4BF588u);
    ctx->pc = 0x4BF584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF580u;
    // 0x4bf584: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BF808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BF808u, 0x4BF580u, 0x4BF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF588u;
label_4bf588:
    // 0x4bf588: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4bf588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4bf58c:
    // 0x4bf58c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4bf58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4bf590:
    // 0x4bf590: 0x8e4241f0  lw          $v0, 0x41F0($s2)
    ctx->pc = 0x4bf590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16880)));
label_4bf594:
    // 0x4bf594: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x4bf594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_4bf598:
    // 0x4bf598: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x4bf598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bf59c:
    // 0x4bf59c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x4bf59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bf5a0:
    // 0x4bf5a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4bf5a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4bf5a4:
    // 0x4bf5a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x4bf5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4bf5a8:
    // 0x4bf5a8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x4bf5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bf5ac:
    // 0x4bf5ac: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4bf5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bf5b0:
    // 0x4bf5b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4bf5b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4bf5b4:
    // 0x4bf5b4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x4bf5b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4bf5b8:
    // 0x4bf5b8: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x4bf5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bf5bc:
    // 0x4bf5bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x4bf5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bf5c0:
    // 0x4bf5c0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4bf5c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_4bf5c4:
    // 0x4bf5c4: 0xc120034  jal         func_4800D0
label_4bf5c8:
    if (ctx->pc == 0x4BF5C8u) {
        ctx->pc = 0x4BF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF5C4u;
        // 0x4bf5c8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF5CCu;
        goto label_4bf5cc;
    }
    ctx->pc = 0x4BF5C4u;
    SET_GPR_U32(ctx, 31, 0x4BF5CCu);
    ctx->pc = 0x4BF5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF5C4u;
    // 0x4bf5c8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4800D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4800D0u, 0x4BF5C4u, 0x4BF5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF5CCu;
label_4bf5cc:
    // 0x4bf5cc: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x4bf5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_4bf5d0:
    // 0x4bf5d0: 0x8e4541f0  lw          $a1, 0x41F0($s2)
    ctx->pc = 0x4bf5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16880)));
label_4bf5d4:
    // 0x4bf5d4: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x4bf5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_4bf5d8:
    // 0x4bf5d8: 0xc12fa62  jal         func_4BE988
label_4bf5dc:
    if (ctx->pc == 0x4BF5DCu) {
        ctx->pc = 0x4BF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF5D8u;
        // 0x4bf5dc: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF5E0u;
        goto label_4bf5e0;
    }
    ctx->pc = 0x4BF5D8u;
    SET_GPR_U32(ctx, 31, 0x4BF5E0u);
    ctx->pc = 0x4BF5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF5D8u;
    // 0x4bf5dc: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE988u, 0x4BF5D8u, 0x4BF5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF5E0u;
label_4bf5e0:
    // 0x4bf5e0: 0x8e4441f0  lw          $a0, 0x41F0($s2)
    ctx->pc = 0x4bf5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16880)));
label_4bf5e4:
    // 0x4bf5e4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4bf5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_4bf5e8:
    // 0x4bf5e8: 0x24a5eb08  addiu       $a1, $a1, -0x14F8
    ctx->pc = 0x4bf5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961928));
label_4bf5ec:
    // 0x4bf5ec: 0xc11c72c  jal         func_471CB0
label_4bf5f0:
    if (ctx->pc == 0x4BF5F0u) {
        ctx->pc = 0x4BF5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF5ECu;
        // 0x4bf5f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF5F4u;
        goto label_4bf5f4;
    }
    ctx->pc = 0x4BF5ECu;
    SET_GPR_U32(ctx, 31, 0x4BF5F4u);
    ctx->pc = 0x4BF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF5ECu;
    // 0x4bf5f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471CB0u, 0x4BF5ECu, 0x4BF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF5F4u;
label_4bf5f4:
    // 0x4bf5f4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4bf5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4bf5f8:
    // 0x4bf5f8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4bf5f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4bf5fc:
    // 0x4bf5fc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4bf5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4bf600:
    // 0x4bf600: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4bf600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4bf604:
    // 0x4bf604: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bf604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bf608:
    // 0x4bf608: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4bf608u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf60c:
    // 0x4bf60c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bf60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf610:
    // 0x4bf610: 0x3e00008  jr          $ra
label_4bf614:
    if (ctx->pc == 0x4BF614u) {
        ctx->pc = 0x4BF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF610u;
        // 0x4bf614: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF618u;
        goto label_4bf618;
    }
    ctx->pc = 0x4BF610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF610u;
        // 0x4bf614: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF618u;
label_4bf618:
    // 0x4bf618: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bf618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4bf61c:
    // 0x4bf61c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4bf61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4bf620:
    // 0x4bf620: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4bf620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4bf624:
    // 0x4bf624: 0x244341f0  addiu       $v1, $v0, 0x41F0
    ctx->pc = 0x4bf624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16880));
label_4bf628:
    // 0x4bf628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bf62c:
    // 0x4bf62c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4bf62cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bf630:
    // 0x4bf630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bf630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4bf634:
    // 0x4bf634: 0x8c4641f0  lw          $a2, 0x41F0($v0)
    ctx->pc = 0x4bf634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16880)));
label_4bf638:
    // 0x4bf638: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x4bf638u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4bf63c:
    // 0x4bf63c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4bf63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4bf640:
    // 0x4bf640: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x4bf640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4bf644:
    // 0x4bf644: 0x95020084  lhu         $v0, 0x84($t0)
    ctx->pc = 0x4bf644u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 132)));
label_4bf648:
    // 0x4bf648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bf648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bf64c:
    // 0x4bf64c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x4bf64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4bf650:
    // 0x4bf650: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_4bf654:
    if (ctx->pc == 0x4BF654u) {
        ctx->pc = 0x4BF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF650u;
        // 0x4bf654: 0x1043821  addu        $a3, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF658u;
        goto label_4bf658;
    }
    ctx->pc = 0x4BF650u;
    {
        const bool branch_taken_0x4bf650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF650u;
        // 0x4bf654: 0x1043821  addu        $a3, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf650) {
            ctx->pc = 0x4BF694u;
            goto label_4bf694;
        }
    }
    ctx->pc = 0x4BF658u;
label_4bf658:
    // 0x4bf658: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4bf658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_4bf65c:
    // 0x4bf65c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4bf660:
    if (ctx->pc == 0x4BF660u) {
        ctx->pc = 0x4BF664u;
        goto label_4bf664;
    }
    ctx->pc = 0x4BF65Cu;
    {
        const bool branch_taken_0x4bf65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf65c) {
            ctx->pc = 0x4BF694u;
            goto label_4bf694;
        }
    }
    ctx->pc = 0x4BF664u;
label_4bf664:
    // 0x4bf664: 0x95030084  lhu         $v1, 0x84($t0)
    ctx->pc = 0x4bf664u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 132)));
label_4bf668:
    // 0x4bf668: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4bf668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4bf66c:
    // 0x4bf66c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4bf66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4bf670:
    // 0x4bf670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bf670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bf674:
    // 0x4bf674: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x4bf674u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_4bf678:
    // 0x4bf678: 0x428c3  sra         $a1, $a0, 3
    ctx->pc = 0x4bf678u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
label_4bf67c:
    // 0x4bf67c: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x4bf67cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_4bf680:
    // 0x4bf680: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4bf680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_4bf684:
    // 0x4bf684: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4bf684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4bf688:
    // 0x4bf688: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4bf688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4bf68c:
    // 0x4bf68c: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x4bf68cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_4bf690:
    // 0x4bf690: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4bf690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4bf694:
    // 0x4bf694: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_4bf698:
    if (ctx->pc == 0x4BF698u) {
        ctx->pc = 0x4BF698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF694u;
        // 0x4bf698: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF69Cu;
        goto label_4bf69c;
    }
    ctx->pc = 0x4BF694u;
    {
        const bool branch_taken_0x4bf694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF694u;
        // 0x4bf698: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf694) {
            ctx->pc = 0x4BF710u;
            goto label_4bf710;
        }
    }
    ctx->pc = 0x4BF69Cu;
label_4bf69c:
    // 0x4bf69c: 0x95030084  lhu         $v1, 0x84($t0)
    ctx->pc = 0x4bf69cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 132)));
label_4bf6a0:
    // 0x4bf6a0: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x4bf6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_4bf6a4:
    // 0x4bf6a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bf6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bf6a8:
    // 0x4bf6a8: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x4bf6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_4bf6ac:
    // 0x4bf6ac: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4bf6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4bf6b0:
    // 0x4bf6b0: 0x24710590  addiu       $s1, $v1, 0x590
    ctx->pc = 0x4bf6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1424));
label_4bf6b4:
    // 0x4bf6b4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4bf6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4bf6b8:
    // 0x4bf6b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4bf6bc:
    if (ctx->pc == 0x4BF6BCu) {
        ctx->pc = 0x4BF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF6B8u;
        // 0x4bf6bc: 0x8c700590  lw          $s0, 0x590($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF6C0u;
        goto label_4bf6c0;
    }
    ctx->pc = 0x4BF6B8u;
    {
        const bool branch_taken_0x4bf6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF6B8u;
        // 0x4bf6bc: 0x8c700590  lw          $s0, 0x590($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf6b8) {
            ctx->pc = 0x4BF6F0u;
            goto label_4bf6f0;
        }
    }
    ctx->pc = 0x4BF6C0u;
label_4bf6c0:
    // 0x4bf6c0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4bf6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4bf6c4:
    // 0x4bf6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bf6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bf6c8:
    // 0x4bf6c8: 0xc12a7e4  jal         func_4A9F90
label_4bf6cc:
    if (ctx->pc == 0x4BF6CCu) {
        ctx->pc = 0x4BF6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF6C8u;
        // 0x4bf6cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF6D0u;
        goto label_4bf6d0;
    }
    ctx->pc = 0x4BF6C8u;
    SET_GPR_U32(ctx, 31, 0x4BF6D0u);
    ctx->pc = 0x4BF6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF6C8u;
    // 0x4bf6cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9F90u, 0x4BF6C8u, 0x4BF6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF6D0u;
label_4bf6d0:
    // 0x4bf6d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4bf6d4:
    if (ctx->pc == 0x4BF6D4u) {
        ctx->pc = 0x4BF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF6D0u;
        // 0x4bf6d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF6D8u;
        goto label_4bf6d8;
    }
    ctx->pc = 0x4BF6D0u;
    {
        const bool branch_taken_0x4bf6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF6D0u;
        // 0x4bf6d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf6d0) {
            ctx->pc = 0x4BF6F0u;
            goto label_4bf6f0;
        }
    }
    ctx->pc = 0x4BF6D8u;
label_4bf6d8:
    // 0x4bf6d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4bf6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bf6dc:
    // 0x4bf6dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4bf6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4bf6e0:
    // 0x4bf6e0: 0x40f809  jalr        $v0
label_4bf6e4:
    if (ctx->pc == 0x4BF6E4u) {
        ctx->pc = 0x4BF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF6E0u;
        // 0x4bf6e4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF6E8u;
        goto label_4bf6e8;
    }
    ctx->pc = 0x4BF6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4BF6E8u);
        ctx->pc = 0x4BF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF6E0u;
        // 0x4bf6e4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF6E0u, 0x4BF6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4BF6E8u;
label_4bf6e8:
    // 0x4bf6e8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4bf6ec:
    if (ctx->pc == 0x4BF6ECu) {
        ctx->pc = 0x4BF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF6E8u;
        // 0x4bf6ec: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF6F0u;
        goto label_4bf6f0;
    }
    ctx->pc = 0x4BF6E8u;
    {
        const bool branch_taken_0x4bf6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf6e8) {
            ctx->pc = 0x4BF6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BF6E8u;
            // 0x4bf6ec: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BF6F0u;
            goto label_4bf6f0;
        }
    }
    ctx->pc = 0x4BF6F0u;
label_4bf6f0:
    // 0x4bf6f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4bf6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4bf6f4:
    // 0x4bf6f4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4bf6f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4bf6f8:
    // 0x4bf6f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4bf6fc:
    if (ctx->pc == 0x4BF6FCu) {
        ctx->pc = 0x4BF6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF6F8u;
        // 0x4bf6fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF700u;
        goto label_4bf700;
    }
    ctx->pc = 0x4BF6F8u;
    {
        const bool branch_taken_0x4bf6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BF6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF6F8u;
        // 0x4bf6fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf6f8) {
            ctx->pc = 0x4BF70Cu;
            goto label_4bf70c;
        }
    }
    ctx->pc = 0x4BF700u;
label_4bf700:
    // 0x4bf700: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4bf700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4bf704:
    // 0x4bf704: 0xc12a838  jal         func_4AA0E0
label_4bf708:
    if (ctx->pc == 0x4BF708u) {
        ctx->pc = 0x4BF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF704u;
        // 0x4bf708: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF70Cu;
        goto label_4bf70c;
    }
    ctx->pc = 0x4BF704u;
    SET_GPR_U32(ctx, 31, 0x4BF70Cu);
    ctx->pc = 0x4BF708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF704u;
    // 0x4bf708: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA0E0u, 0x4BF704u, 0x4BF70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF70Cu;
label_4bf70c:
    // 0x4bf70c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4bf70cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf710:
    // 0x4bf710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bf710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bf714:
    // 0x4bf714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bf714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf718:
    // 0x4bf718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf71c:
    // 0x4bf71c: 0x3e00008  jr          $ra
label_4bf720:
    if (ctx->pc == 0x4BF720u) {
        ctx->pc = 0x4BF720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF71Cu;
        // 0x4bf720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF724u;
        goto label_4bf724;
    }
    ctx->pc = 0x4BF71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF71Cu;
        // 0x4bf720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF724u;
label_4bf724:
    // 0x4bf724: 0x0  nop
    ctx->pc = 0x4bf724u;
    // NOP
    ctx->pc = 0x4bf728u;
}
