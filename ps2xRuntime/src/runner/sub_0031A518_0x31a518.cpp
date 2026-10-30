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

// Function: sub_0031A518
// Address: 0x31a518 - 0x31a660
void sub_0031A518_0x31a518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A518_0x31a518");
#endif

    switch (ctx->pc) {
        case 0x31a518u: goto label_31a518;
        case 0x31a51cu: goto label_31a51c;
        case 0x31a520u: goto label_31a520;
        case 0x31a524u: goto label_31a524;
        case 0x31a528u: goto label_31a528;
        case 0x31a52cu: goto label_31a52c;
        case 0x31a530u: goto label_31a530;
        case 0x31a534u: goto label_31a534;
        case 0x31a538u: goto label_31a538;
        case 0x31a53cu: goto label_31a53c;
        case 0x31a540u: goto label_31a540;
        case 0x31a544u: goto label_31a544;
        case 0x31a548u: goto label_31a548;
        case 0x31a54cu: goto label_31a54c;
        case 0x31a550u: goto label_31a550;
        case 0x31a554u: goto label_31a554;
        case 0x31a558u: goto label_31a558;
        case 0x31a55cu: goto label_31a55c;
        case 0x31a560u: goto label_31a560;
        case 0x31a564u: goto label_31a564;
        case 0x31a568u: goto label_31a568;
        case 0x31a56cu: goto label_31a56c;
        case 0x31a570u: goto label_31a570;
        case 0x31a574u: goto label_31a574;
        case 0x31a578u: goto label_31a578;
        case 0x31a57cu: goto label_31a57c;
        case 0x31a580u: goto label_31a580;
        case 0x31a584u: goto label_31a584;
        case 0x31a588u: goto label_31a588;
        case 0x31a58cu: goto label_31a58c;
        case 0x31a590u: goto label_31a590;
        case 0x31a594u: goto label_31a594;
        case 0x31a598u: goto label_31a598;
        case 0x31a59cu: goto label_31a59c;
        case 0x31a5a0u: goto label_31a5a0;
        case 0x31a5a4u: goto label_31a5a4;
        case 0x31a5a8u: goto label_31a5a8;
        case 0x31a5acu: goto label_31a5ac;
        case 0x31a5b0u: goto label_31a5b0;
        case 0x31a5b4u: goto label_31a5b4;
        case 0x31a5b8u: goto label_31a5b8;
        case 0x31a5bcu: goto label_31a5bc;
        case 0x31a5c0u: goto label_31a5c0;
        case 0x31a5c4u: goto label_31a5c4;
        case 0x31a5c8u: goto label_31a5c8;
        case 0x31a5ccu: goto label_31a5cc;
        case 0x31a5d0u: goto label_31a5d0;
        case 0x31a5d4u: goto label_31a5d4;
        case 0x31a5d8u: goto label_31a5d8;
        case 0x31a5dcu: goto label_31a5dc;
        case 0x31a5e0u: goto label_31a5e0;
        case 0x31a5e4u: goto label_31a5e4;
        case 0x31a5e8u: goto label_31a5e8;
        case 0x31a5ecu: goto label_31a5ec;
        case 0x31a5f0u: goto label_31a5f0;
        case 0x31a5f4u: goto label_31a5f4;
        case 0x31a5f8u: goto label_31a5f8;
        case 0x31a5fcu: goto label_31a5fc;
        case 0x31a600u: goto label_31a600;
        case 0x31a604u: goto label_31a604;
        case 0x31a608u: goto label_31a608;
        case 0x31a60cu: goto label_31a60c;
        case 0x31a610u: goto label_31a610;
        case 0x31a614u: goto label_31a614;
        case 0x31a618u: goto label_31a618;
        case 0x31a61cu: goto label_31a61c;
        case 0x31a620u: goto label_31a620;
        case 0x31a624u: goto label_31a624;
        case 0x31a628u: goto label_31a628;
        case 0x31a62cu: goto label_31a62c;
        case 0x31a630u: goto label_31a630;
        case 0x31a634u: goto label_31a634;
        case 0x31a638u: goto label_31a638;
        case 0x31a63cu: goto label_31a63c;
        case 0x31a640u: goto label_31a640;
        case 0x31a644u: goto label_31a644;
        case 0x31a648u: goto label_31a648;
        case 0x31a64cu: goto label_31a64c;
        case 0x31a650u: goto label_31a650;
        case 0x31a654u: goto label_31a654;
        case 0x31a658u: goto label_31a658;
        case 0x31a65cu: goto label_31a65c;
        default: break;
    }

    ctx->pc = 0x31a518u;

label_31a518:
    // 0x31a518: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31a518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_31a51c:
    // 0x31a51c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_31a520:
    // 0x31a520: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x31a520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_31a524:
    // 0x31a524: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31a524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
label_31a528:
    // 0x31a528: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x31a528u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31a52c:
    // 0x31a52c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x31a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_31a530:
    // 0x31a530: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x31a530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_31a534:
    // 0x31a534: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x31a534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_31a538:
    // 0x31a538: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x31a538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_31a53c:
    // 0x31a53c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x31a53cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_31a540:
    // 0x31a540: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x31a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_31a544:
    // 0x31a544: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x31a544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_31a548:
    // 0x31a548: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31a548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_31a54c:
    // 0x31a54c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x31a54cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31a550:
    // 0x31a550: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x31a550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_31a554:
    // 0x31a554: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x31a554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_31a558:
    // 0x31a558: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x31a558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_31a55c:
    // 0x31a55c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x31a55cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_31a560:
    // 0x31a560: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x31a560u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a564:
    // 0x31a564: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x31a564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_31a568:
    // 0x31a568: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31a568u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_31a56c:
    // 0x31a56c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31a570:
    // 0x31a570: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x31a570u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31a574:
    // 0x31a574: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x31a574u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_31a578:
    // 0x31a578: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x31a578u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_31a57c:
    // 0x31a57c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x31a57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_31a580:
    // 0x31a580: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x31a580u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
label_31a584:
    // 0x31a584: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x31a584u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
label_31a588:
    // 0x31a588: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x31a588u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
label_31a58c:
    // 0x31a58c: 0xa2a00018  sb          $zero, 0x18($s5)
    ctx->pc = 0x31a58cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 24), (uint8_t)GPR_U32(ctx, 0));
label_31a590:
    // 0x31a590: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x31a590u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
label_31a594:
    // 0x31a594: 0xc0c1a3e  jal         func_3068F8
label_31a598:
    if (ctx->pc == 0x31A598u) {
        ctx->pc = 0x31A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A594u;
        // 0x31a598: 0xaea30008  sw          $v1, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A59Cu;
        goto label_31a59c;
    }
    ctx->pc = 0x31A594u;
    SET_GPR_U32(ctx, 31, 0x31A59Cu);
    ctx->pc = 0x31A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A594u;
    // 0x31a598: 0xaea30008  sw          $v1, 0x8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x31A594u, 0x31A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A59Cu;
label_31a59c:
    // 0x31a59c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_31a5a0:
    // 0x31a5a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a5a4:
    // 0x31a5a4: 0x24423da0  addiu       $v0, $v0, 0x3DA0
    ctx->pc = 0x31a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15776));
label_31a5a8:
    // 0x31a5a8: 0xa2b30050  sb          $s3, 0x50($s5)
    ctx->pc = 0x31a5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 80), (uint8_t)GPR_U32(ctx, 19));
label_31a5ac:
    // 0x31a5ac: 0xe6b40020  swc1        $f20, 0x20($s5)
    ctx->pc = 0x31a5acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
label_31a5b0:
    // 0x31a5b0: 0x26b30030  addiu       $s3, $s5, 0x30
    ctx->pc = 0x31a5b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_31a5b4:
    // 0x31a5b4: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x31a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
label_31a5b8:
    // 0x31a5b8: 0xa2b40051  sb          $s4, 0x51($s5)
    ctx->pc = 0x31a5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 81), (uint8_t)GPR_U32(ctx, 20));
label_31a5bc:
    // 0x31a5bc: 0xa2a30052  sb          $v1, 0x52($s5)
    ctx->pc = 0x31a5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 82), (uint8_t)GPR_U32(ctx, 3));
label_31a5c0:
    // 0x31a5c0: 0xa2b10053  sb          $s1, 0x53($s5)
    ctx->pc = 0x31a5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 83), (uint8_t)GPR_U32(ctx, 17));
label_31a5c4:
    // 0x31a5c4: 0xa2b20054  sb          $s2, 0x54($s5)
    ctx->pc = 0x31a5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 18));
label_31a5c8:
    // 0x31a5c8: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x31a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
label_31a5cc:
    // 0x31a5cc: 0xaea00028  sw          $zero, 0x28($s5)
    ctx->pc = 0x31a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 0));
label_31a5d0:
    // 0x31a5d0: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x31a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
label_31a5d4:
    // 0x31a5d4: 0x0  nop
    ctx->pc = 0x31a5d4u;
    // NOP
label_31a5d8:
    // 0x31a5d8: 0xa6770000  sh          $s7, 0x0($s3)
    ctx->pc = 0x31a5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 23));
label_31a5dc:
    // 0x31a5dc: 0xc0e4060  jal         func_390180
label_31a5e0:
    if (ctx->pc == 0x31A5E0u) {
        ctx->pc = 0x31A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A5DCu;
        // 0x31a5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A5E4u;
        goto label_31a5e4;
    }
    ctx->pc = 0x31A5DCu;
    SET_GPR_U32(ctx, 31, 0x31A5E4u);
    ctx->pc = 0x31A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A5DCu;
    // 0x31a5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x31A5DCu, 0x31A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A5E4u;
label_31a5e4:
    // 0x31a5e4: 0xc105e98  jal         func_417A60
label_31a5e8:
    if (ctx->pc == 0x31A5E8u) {
        ctx->pc = 0x31A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A5E4u;
        // 0x31a5e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A5ECu;
        goto label_31a5ec;
    }
    ctx->pc = 0x31A5E4u;
    SET_GPR_U32(ctx, 31, 0x31A5ECu);
    ctx->pc = 0x31A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A5E4u;
    // 0x31a5e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x31A5E4u, 0x31A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A5ECu;
label_31a5ec:
    // 0x31a5ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31a5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31a5f0:
    // 0x31a5f0: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_31a5f4:
    if (ctx->pc == 0x31A5F4u) {
        ctx->pc = 0x31A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A5F0u;
        // 0x31a5f4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A5F8u;
        goto label_31a5f8;
    }
    ctx->pc = 0x31A5F0u;
    {
        const bool branch_taken_0x31a5f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a5f0) {
            ctx->pc = 0x31A5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A5F0u;
            // 0x31a5f4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A61Cu;
            goto label_31a61c;
        }
    }
    ctx->pc = 0x31A5F8u;
label_31a5f8:
    // 0x31a5f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x31a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_31a5fc:
    // 0x31a5fc: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x31a5fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_31a600:
    // 0x31a600: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x31a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_31a604:
    // 0x31a604: 0x40f809  jalr        $v0
label_31a608:
    if (ctx->pc == 0x31A608u) {
        ctx->pc = 0x31A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A604u;
        // 0x31a608: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A60Cu;
        goto label_31a60c;
    }
    ctx->pc = 0x31A604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31A60Cu);
        ctx->pc = 0x31A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A604u;
        // 0x31a608: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A604u, 0x31A60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31A60Cu;
label_31a60c:
    // 0x31a60c: 0xc10577a  jal         func_415DE8
label_31a610:
    if (ctx->pc == 0x31A610u) {
        ctx->pc = 0x31A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A60Cu;
        // 0x31a610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A614u;
        goto label_31a614;
    }
    ctx->pc = 0x31A60Cu;
    SET_GPR_U32(ctx, 31, 0x31A614u);
    ctx->pc = 0x31A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A60Cu;
    // 0x31a610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DE8u, 0x31A60Cu, 0x31A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A614u;
label_31a614:
    // 0x31a614: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x31a614u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_31a618:
    // 0x31a618: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x31a618u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_31a61c:
    // 0x31a61c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x31a61cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_31a620:
    // 0x31a620: 0x2ec20010  sltiu       $v0, $s6, 0x10
    ctx->pc = 0x31a620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31a624:
    // 0x31a624: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_31a628:
    if (ctx->pc == 0x31A628u) {
        ctx->pc = 0x31A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A624u;
        // 0x31a628: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A62Cu;
        goto label_31a62c;
    }
    ctx->pc = 0x31A624u;
    {
        const bool branch_taken_0x31a624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A624u;
        // 0x31a628: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a624) {
            ctx->pc = 0x31A5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a5d8;
        }
    }
    ctx->pc = 0x31A62Cu;
label_31a62c:
    // 0x31a62c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x31a62cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31a630:
    // 0x31a630: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x31a630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31a634:
    // 0x31a634: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x31a634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31a638:
    // 0x31a638: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x31a638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31a63c:
    // 0x31a63c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x31a63cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31a640:
    // 0x31a640: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31a640u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31a644:
    // 0x31a644: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x31a644u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31a648:
    // 0x31a648: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x31a648u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31a64c:
    // 0x31a64c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x31a64cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31a650:
    // 0x31a650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31a654:
    // 0x31a654: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x31a654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31a658:
    // 0x31a658: 0x3e00008  jr          $ra
label_31a65c:
    if (ctx->pc == 0x31A65Cu) {
        ctx->pc = 0x31A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A658u;
        // 0x31a65c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A660u;
        goto label_fallthrough_0x31a658;
    }
    ctx->pc = 0x31A658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A658u;
        // 0x31a65c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31a658:
    ctx->pc = 0x31A660u;
}
