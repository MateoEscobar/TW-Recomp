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

// Function: sub_002C5598
// Address: 0x2c5598 - 0x2c57b8
void sub_002C5598_0x2c5598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5598_0x2c5598");
#endif

    switch (ctx->pc) {
        case 0x2c5598u: goto label_2c5598;
        case 0x2c559cu: goto label_2c559c;
        case 0x2c55a0u: goto label_2c55a0;
        case 0x2c55a4u: goto label_2c55a4;
        case 0x2c55a8u: goto label_2c55a8;
        case 0x2c55acu: goto label_2c55ac;
        case 0x2c55b0u: goto label_2c55b0;
        case 0x2c55b4u: goto label_2c55b4;
        case 0x2c55b8u: goto label_2c55b8;
        case 0x2c55bcu: goto label_2c55bc;
        case 0x2c55c0u: goto label_2c55c0;
        case 0x2c55c4u: goto label_2c55c4;
        case 0x2c55c8u: goto label_2c55c8;
        case 0x2c55ccu: goto label_2c55cc;
        case 0x2c55d0u: goto label_2c55d0;
        case 0x2c55d4u: goto label_2c55d4;
        case 0x2c55d8u: goto label_2c55d8;
        case 0x2c55dcu: goto label_2c55dc;
        case 0x2c55e0u: goto label_2c55e0;
        case 0x2c55e4u: goto label_2c55e4;
        case 0x2c55e8u: goto label_2c55e8;
        case 0x2c55ecu: goto label_2c55ec;
        case 0x2c55f0u: goto label_2c55f0;
        case 0x2c55f4u: goto label_2c55f4;
        case 0x2c55f8u: goto label_2c55f8;
        case 0x2c55fcu: goto label_2c55fc;
        case 0x2c5600u: goto label_2c5600;
        case 0x2c5604u: goto label_2c5604;
        case 0x2c5608u: goto label_2c5608;
        case 0x2c560cu: goto label_2c560c;
        case 0x2c5610u: goto label_2c5610;
        case 0x2c5614u: goto label_2c5614;
        case 0x2c5618u: goto label_2c5618;
        case 0x2c561cu: goto label_2c561c;
        case 0x2c5620u: goto label_2c5620;
        case 0x2c5624u: goto label_2c5624;
        case 0x2c5628u: goto label_2c5628;
        case 0x2c562cu: goto label_2c562c;
        case 0x2c5630u: goto label_2c5630;
        case 0x2c5634u: goto label_2c5634;
        case 0x2c5638u: goto label_2c5638;
        case 0x2c563cu: goto label_2c563c;
        case 0x2c5640u: goto label_2c5640;
        case 0x2c5644u: goto label_2c5644;
        case 0x2c5648u: goto label_2c5648;
        case 0x2c564cu: goto label_2c564c;
        case 0x2c5650u: goto label_2c5650;
        case 0x2c5654u: goto label_2c5654;
        case 0x2c5658u: goto label_2c5658;
        case 0x2c565cu: goto label_2c565c;
        case 0x2c5660u: goto label_2c5660;
        case 0x2c5664u: goto label_2c5664;
        case 0x2c5668u: goto label_2c5668;
        case 0x2c566cu: goto label_2c566c;
        case 0x2c5670u: goto label_2c5670;
        case 0x2c5674u: goto label_2c5674;
        case 0x2c5678u: goto label_2c5678;
        case 0x2c567cu: goto label_2c567c;
        case 0x2c5680u: goto label_2c5680;
        case 0x2c5684u: goto label_2c5684;
        case 0x2c5688u: goto label_2c5688;
        case 0x2c568cu: goto label_2c568c;
        case 0x2c5690u: goto label_2c5690;
        case 0x2c5694u: goto label_2c5694;
        case 0x2c5698u: goto label_2c5698;
        case 0x2c569cu: goto label_2c569c;
        case 0x2c56a0u: goto label_2c56a0;
        case 0x2c56a4u: goto label_2c56a4;
        case 0x2c56a8u: goto label_2c56a8;
        case 0x2c56acu: goto label_2c56ac;
        case 0x2c56b0u: goto label_2c56b0;
        case 0x2c56b4u: goto label_2c56b4;
        case 0x2c56b8u: goto label_2c56b8;
        case 0x2c56bcu: goto label_2c56bc;
        case 0x2c56c0u: goto label_2c56c0;
        case 0x2c56c4u: goto label_2c56c4;
        case 0x2c56c8u: goto label_2c56c8;
        case 0x2c56ccu: goto label_2c56cc;
        case 0x2c56d0u: goto label_2c56d0;
        case 0x2c56d4u: goto label_2c56d4;
        case 0x2c56d8u: goto label_2c56d8;
        case 0x2c56dcu: goto label_2c56dc;
        case 0x2c56e0u: goto label_2c56e0;
        case 0x2c56e4u: goto label_2c56e4;
        case 0x2c56e8u: goto label_2c56e8;
        case 0x2c56ecu: goto label_2c56ec;
        case 0x2c56f0u: goto label_2c56f0;
        case 0x2c56f4u: goto label_2c56f4;
        case 0x2c56f8u: goto label_2c56f8;
        case 0x2c56fcu: goto label_2c56fc;
        case 0x2c5700u: goto label_2c5700;
        case 0x2c5704u: goto label_2c5704;
        case 0x2c5708u: goto label_2c5708;
        case 0x2c570cu: goto label_2c570c;
        case 0x2c5710u: goto label_2c5710;
        case 0x2c5714u: goto label_2c5714;
        case 0x2c5718u: goto label_2c5718;
        case 0x2c571cu: goto label_2c571c;
        case 0x2c5720u: goto label_2c5720;
        case 0x2c5724u: goto label_2c5724;
        case 0x2c5728u: goto label_2c5728;
        case 0x2c572cu: goto label_2c572c;
        case 0x2c5730u: goto label_2c5730;
        case 0x2c5734u: goto label_2c5734;
        case 0x2c5738u: goto label_2c5738;
        case 0x2c573cu: goto label_2c573c;
        case 0x2c5740u: goto label_2c5740;
        case 0x2c5744u: goto label_2c5744;
        case 0x2c5748u: goto label_2c5748;
        case 0x2c574cu: goto label_2c574c;
        case 0x2c5750u: goto label_2c5750;
        case 0x2c5754u: goto label_2c5754;
        case 0x2c5758u: goto label_2c5758;
        case 0x2c575cu: goto label_2c575c;
        case 0x2c5760u: goto label_2c5760;
        case 0x2c5764u: goto label_2c5764;
        case 0x2c5768u: goto label_2c5768;
        case 0x2c576cu: goto label_2c576c;
        case 0x2c5770u: goto label_2c5770;
        case 0x2c5774u: goto label_2c5774;
        case 0x2c5778u: goto label_2c5778;
        case 0x2c577cu: goto label_2c577c;
        case 0x2c5780u: goto label_2c5780;
        case 0x2c5784u: goto label_2c5784;
        case 0x2c5788u: goto label_2c5788;
        case 0x2c578cu: goto label_2c578c;
        case 0x2c5790u: goto label_2c5790;
        case 0x2c5794u: goto label_2c5794;
        case 0x2c5798u: goto label_2c5798;
        case 0x2c579cu: goto label_2c579c;
        case 0x2c57a0u: goto label_2c57a0;
        case 0x2c57a4u: goto label_2c57a4;
        case 0x2c57a8u: goto label_2c57a8;
        case 0x2c57acu: goto label_2c57ac;
        case 0x2c57b0u: goto label_2c57b0;
        case 0x2c57b4u: goto label_2c57b4;
        default: break;
    }

    ctx->pc = 0x2c5598u;

label_2c5598:
    // 0x2c5598: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2c5598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2c559c:
    // 0x2c559c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c559cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2c55a0:
    // 0x2c55a0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2c55a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_2c55a4:
    // 0x2c55a4: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2c55a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c55a8:
    // 0x2c55a8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2c55a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2c55ac:
    // 0x2c55ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c55acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c55b0:
    // 0x2c55b0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2c55b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_2c55b4:
    // 0x2c55b4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2c55b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c55b8:
    // 0x2c55b8: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2c55b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2c55bc:
    // 0x2c55bc: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2c55bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2c55c0:
    // 0x2c55c0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2c55c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_2c55c4:
    // 0x2c55c4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2c55c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_2c55c8:
    // 0x2c55c8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2c55c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_2c55cc:
    // 0x2c55cc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2c55ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_2c55d0:
    // 0x2c55d0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2c55d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_2c55d4:
    // 0x2c55d4: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2c55d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_2c55d8:
    // 0x2c55d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c55d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c55dc:
    // 0x2c55dc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2c55dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2c55e0:
    // 0x2c55e0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2c55e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2c55e4:
    // 0x2c55e4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2c55e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2c55e8:
    // 0x2c55e8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2c55e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c55ec:
    // 0x2c55ec: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x2c55ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c55f0:
    // 0x2c55f0: 0x86a20092  lh          $v0, 0x92($s5)
    ctx->pc = 0x2c55f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2c55f4:
    // 0x2c55f4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c55f8:
    // 0x2c55f8: 0xc0a2fc0  jal         func_28BF00
label_2c55fc:
    if (ctx->pc == 0x2C55FCu) {
        ctx->pc = 0x2C55FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55F8u;
        // 0x2c55fc: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5600u;
        goto label_2c5600;
    }
    ctx->pc = 0x2C55F8u;
    SET_GPR_U32(ctx, 31, 0x2C5600u);
    ctx->pc = 0x2C55FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C55F8u;
    // 0x2c55fc: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2C55F8u, 0x2C5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5600u;
label_2c5600:
    // 0x2c5600: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c5604:
    // 0x2c5604: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c5604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c5608:
    // 0x2c5608: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c5608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2c560c:
    // 0x2c560c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c560cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c5610:
    // 0x2c5610: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2c5610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c5614:
    // 0x2c5614: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x2c5614u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2c5618:
    // 0x2c5618: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c5618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c561c:
    // 0x2c561c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c561cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2c5620:
    // 0x2c5620: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2c5620u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2c5624:
    // 0x2c5624: 0x0  nop
    ctx->pc = 0x2c5624u;
    // NOP
label_2c5628:
    // 0x2c5628: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2c5628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2c562c:
    // 0x2c562c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2c562cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2c5630:
    // 0x2c5630: 0x0  nop
    ctx->pc = 0x2c5630u;
    // NOP
label_2c5634:
    // 0x2c5634: 0x0  nop
    ctx->pc = 0x2c5634u;
    // NOP
label_2c5638:
    // 0x2c5638: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
label_2c563c:
    if (ctx->pc == 0x2C563Cu) {
        ctx->pc = 0x2C563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5638u;
        // 0x2c563c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5640u;
        goto label_2c5640;
    }
    ctx->pc = 0x2C5638u;
    {
        const bool branch_taken_0x2c5638 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5638u;
        // 0x2c563c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5638) {
            ctx->pc = 0x2C5628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5628;
        }
    }
    ctx->pc = 0x2C5640u;
label_2c5640:
    // 0x2c5640: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x2c5640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_2c5644:
    // 0x2c5644: 0xc68c0030  lwc1        $f12, 0x30($s4)
    ctx->pc = 0x2c5644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c5648:
    // 0x2c5648: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x2c5648u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_2c564c:
    // 0x2c564c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c5650:
    // 0x2c5650: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2c5650u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c5654:
    // 0x2c5654: 0x24e7c1f0  addiu       $a3, $a3, -0x3E10
    ctx->pc = 0x2c5654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951408));
label_2c5658:
    // 0x2c5658: 0xc0a7244  jal         func_29C910
label_2c565c:
    if (ctx->pc == 0x2C565Cu) {
        ctx->pc = 0x2C565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5658u;
        // 0x2c565c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5660u;
        goto label_2c5660;
    }
    ctx->pc = 0x2C5658u;
    SET_GPR_U32(ctx, 31, 0x2C5660u);
    ctx->pc = 0x2C565Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5658u;
    // 0x2c565c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C910u, 0x2C5658u, 0x2C5660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5660u;
label_2c5660:
    // 0x2c5660: 0xc137832  jal         func_4DE0C8
label_2c5664:
    if (ctx->pc == 0x2C5664u) {
        ctx->pc = 0x2C5664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5660u;
        // 0x2c5664: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5668u;
        goto label_2c5668;
    }
    ctx->pc = 0x2C5660u;
    SET_GPR_U32(ctx, 31, 0x2C5668u);
    ctx->pc = 0x2C5664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5660u;
    // 0x2c5664: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2C5660u, 0x2C5668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5668u;
label_2c5668:
    // 0x2c5668: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_2c566c:
    if (ctx->pc == 0x2C566Cu) {
        ctx->pc = 0x2C566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5668u;
        // 0x2c566c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5670u;
        goto label_2c5670;
    }
    ctx->pc = 0x2C5668u;
    {
        const bool branch_taken_0x2c5668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5668u;
        // 0x2c566c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5668) {
            ctx->pc = 0x2C56FCu;
            goto label_2c56fc;
        }
    }
    ctx->pc = 0x2C5670u;
label_2c5670:
    // 0x2c5670: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c5670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c5674:
    // 0x2c5674: 0x0  nop
    ctx->pc = 0x2c5674u;
    // NOP
label_2c5678:
    // 0x2c5678: 0xc137826  jal         func_4DE098
label_2c567c:
    if (ctx->pc == 0x2C567Cu) {
        ctx->pc = 0x2C567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5678u;
        // 0x2c567c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5680u;
        goto label_2c5680;
    }
    ctx->pc = 0x2C5678u;
    SET_GPR_U32(ctx, 31, 0x2C5680u);
    ctx->pc = 0x2C567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5678u;
    // 0x2c567c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2C5678u, 0x2C5680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5680u;
label_2c5680:
    // 0x2c5680: 0xc0e409a  jal         func_390268
label_2c5684:
    if (ctx->pc == 0x2C5684u) {
        ctx->pc = 0x2C5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5680u;
        // 0x2c5684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5688u;
        goto label_2c5688;
    }
    ctx->pc = 0x2C5680u;
    SET_GPR_U32(ctx, 31, 0x2C5688u);
    ctx->pc = 0x2C5684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5680u;
    // 0x2c5684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C5680u, 0x2C5688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5688u;
label_2c5688:
    // 0x2c5688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c5688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c568c:
    // 0x2c568c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_2c5690:
    if (ctx->pc == 0x2C5690u) {
        ctx->pc = 0x2C5690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C568Cu;
        // 0x2c5690: 0x26110090  addiu       $s1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5694u;
        goto label_2c5694;
    }
    ctx->pc = 0x2C568Cu;
    {
        const bool branch_taken_0x2c568c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C568Cu;
        // 0x2c5690: 0x26110090  addiu       $s1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c568c) {
            ctx->pc = 0x2C56ECu;
            goto label_2c56ec;
        }
    }
    ctx->pc = 0x2C5694u;
label_2c5694:
    // 0x2c5694: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c5694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2c5698:
    // 0x2c5698: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2c5698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2c569c:
    // 0x2c569c: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2c569cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2c56a0:
    // 0x2c56a0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2c56a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c56a4:
    // 0x2c56a4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c56a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c56a8:
    // 0x2c56a8: 0xc0cdb38  jal         func_336CE0
label_2c56ac:
    if (ctx->pc == 0x2C56ACu) {
        ctx->pc = 0x2C56ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56A8u;
        // 0x2c56ac: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C56B0u;
        goto label_2c56b0;
    }
    ctx->pc = 0x2C56A8u;
    SET_GPR_U32(ctx, 31, 0x2C56B0u);
    ctx->pc = 0x2C56ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C56A8u;
    // 0x2c56ac: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C56A8u, 0x2C56B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C56B0u;
label_2c56b0:
    // 0x2c56b0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c56b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c56b4:
    // 0x2c56b4: 0x0  nop
    ctx->pc = 0x2c56b4u;
    // NOP
label_2c56b8:
    // 0x2c56b8: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_2c56bc:
    if (ctx->pc == 0x2C56BCu) {
        ctx->pc = 0x2C56BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56B8u;
        // 0x2c56bc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C56C0u;
        goto label_2c56c0;
    }
    ctx->pc = 0x2C56B8u;
    {
        const bool branch_taken_0x2c56b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c56b8) {
            ctx->pc = 0x2C56BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C56B8u;
            // 0x2c56bc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C56F0u;
            goto label_2c56f0;
        }
    }
    ctx->pc = 0x2C56C0u;
label_2c56c0:
    // 0x2c56c0: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2c56c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2c56c4:
    // 0x2c56c4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c56c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c56c8:
    // 0x2c56c8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c56c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c56cc:
    // 0x2c56cc: 0xc0cdb38  jal         func_336CE0
label_2c56d0:
    if (ctx->pc == 0x2C56D0u) {
        ctx->pc = 0x2C56D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56CCu;
        // 0x2c56d0: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C56D4u;
        goto label_2c56d4;
    }
    ctx->pc = 0x2C56CCu;
    SET_GPR_U32(ctx, 31, 0x2C56D4u);
    ctx->pc = 0x2C56D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C56CCu;
    // 0x2c56d0: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C56CCu, 0x2C56D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C56D4u;
label_2c56d4:
    // 0x2c56d4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c56d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c56d8:
    // 0x2c56d8: 0x0  nop
    ctx->pc = 0x2c56d8u;
    // NOP
label_2c56dc:
    // 0x2c56dc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2c56e0:
    if (ctx->pc == 0x2C56E0u) {
        ctx->pc = 0x2C56E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56DCu;
        // 0x2c56e0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C56E4u;
        goto label_2c56e4;
    }
    ctx->pc = 0x2C56DCu;
    {
        const bool branch_taken_0x2c56dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c56dc) {
            ctx->pc = 0x2C56E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C56DCu;
            // 0x2c56e0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C56F0u;
            goto label_2c56f0;
        }
    }
    ctx->pc = 0x2C56E4u;
label_2c56e4:
    // 0x2c56e4: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x2c56e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c56e8:
    // 0x2c56e8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2c56e8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2c56ec:
    // 0x2c56ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c56ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2c56f0:
    // 0x2c56f0: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x2c56f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2c56f4:
    // 0x2c56f4: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
label_2c56f8:
    if (ctx->pc == 0x2C56F8u) {
        ctx->pc = 0x2C56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56F4u;
        // 0x2c56f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C56FCu;
        goto label_2c56fc;
    }
    ctx->pc = 0x2C56F4u;
    {
        const bool branch_taken_0x2c56f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c56f4) {
            ctx->pc = 0x2C56F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C56F4u;
            // 0x2c56f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5678;
        }
    }
    ctx->pc = 0x2C56FCu;
label_2c56fc:
    // 0x2c56fc: 0x12c00020  beqz        $s6, . + 4 + (0x20 << 2)
label_2c5700:
    if (ctx->pc == 0x2C5700u) {
        ctx->pc = 0x2C5700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56FCu;
        // 0x2c5700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5704u;
        goto label_2c5704;
    }
    ctx->pc = 0x2C56FCu;
    {
        const bool branch_taken_0x2c56fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56FCu;
        // 0x2c5700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c56fc) {
            ctx->pc = 0x2C5780u;
            goto label_2c5780;
        }
    }
    ctx->pc = 0x2C5704u;
label_2c5704:
    // 0x2c5704: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2c5704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c5708:
    // 0x2c5708: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2c5708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2c570c:
    // 0x2c570c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2c570cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2c5710:
    // 0x2c5710: 0xa040028f  sb          $zero, 0x28F($v0)
    ctx->pc = 0x2c5710u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 655), (uint8_t)GPR_U32(ctx, 0));
label_2c5714:
    // 0x2c5714: 0xc0a3464  jal         func_28D190
label_2c5718:
    if (ctx->pc == 0x2C5718u) {
        ctx->pc = 0x2C5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5714u;
        // 0x2c5718: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C571Cu;
        goto label_2c571c;
    }
    ctx->pc = 0x2C5714u;
    SET_GPR_U32(ctx, 31, 0x2C571Cu);
    ctx->pc = 0x2C5718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5714u;
    // 0x2c5718: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x2C5714u, 0x2C571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C571Cu;
label_2c571c:
    // 0x2c571c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2c571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c5720:
    // 0x2c5720: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c5720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c5724:
    // 0x2c5724: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c5724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c5728:
    // 0x2c5728: 0x40f809  jalr        $v0
label_2c572c:
    if (ctx->pc == 0x2C572Cu) {
        ctx->pc = 0x2C572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5728u;
        // 0x2c572c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5730u;
        goto label_2c5730;
    }
    ctx->pc = 0x2C5728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C5730u);
        ctx->pc = 0x2C572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5728u;
        // 0x2c572c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5728u, 0x2C5730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C5730u;
label_2c5730:
    // 0x2c5730: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2c5730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2c5734:
    // 0x2c5734: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2c5734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2c5738:
    // 0x2c5738: 0x24854b00  addiu       $a1, $a0, 0x4B00
    ctx->pc = 0x2c5738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2c573c:
    // 0x2c573c: 0x86d00092  lh          $s0, 0x92($s6)
    ctx->pc = 0x2c573cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
label_2c5740:
    // 0x2c5740: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c5740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5744:
    // 0x2c5744: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c5744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c5748:
    // 0x2c5748: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2c5748u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2c574c:
    // 0x2c574c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c5750:
    // 0x2c5750: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2c5750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2c5754:
    // 0x2c5754: 0x40f809  jalr        $v0
label_2c5758:
    if (ctx->pc == 0x2C5758u) {
        ctx->pc = 0x2C5758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5754u;
        // 0x2c5758: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C575Cu;
        goto label_2c575c;
    }
    ctx->pc = 0x2C5754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C575Cu);
        ctx->pc = 0x2C5758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5754u;
        // 0x2c5758: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5754u, 0x2C575Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C575Cu;
label_2c575c:
    // 0x2c575c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2c575cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2c5760:
    // 0x2c5760: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x2c5760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_2c5764:
    // 0x2c5764: 0x8c68bd30  lw          $t0, -0x42D0($v1)
    ctx->pc = 0x2c5764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2c5768:
    // 0x2c5768: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c5768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c576c:
    // 0x2c576c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c576cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c5770:
    // 0x2c5770: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c5770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5774:
    // 0x2c5774: 0xc0b1018  jal         func_2C4060
label_2c5778:
    if (ctx->pc == 0x2C5778u) {
        ctx->pc = 0x2C5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5774u;
        // 0x2c5778: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C577Cu;
        goto label_2c577c;
    }
    ctx->pc = 0x2C5774u;
    SET_GPR_U32(ctx, 31, 0x2C577Cu);
    ctx->pc = 0x2C5778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5774u;
    // 0x2c5778: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4060u, 0x2C5774u, 0x2C577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C577Cu;
label_2c577c:
    // 0x2c577c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c577cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5780:
    // 0x2c5780: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2c5780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2c5784:
    // 0x2c5784: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2c5784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c5788:
    // 0x2c5788: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2c5788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c578c:
    // 0x2c578c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2c578cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c5790:
    // 0x2c5790: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2c5790u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c5794:
    // 0x2c5794: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2c5794u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c5798:
    // 0x2c5798: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2c5798u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c579c:
    // 0x2c579c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2c579cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c57a0:
    // 0x2c57a0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2c57a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c57a4:
    // 0x2c57a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c57a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c57a8:
    // 0x2c57a8: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2c57a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c57ac:
    // 0x2c57ac: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2c57acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c57b0:
    // 0x2c57b0: 0x3e00008  jr          $ra
label_2c57b4:
    if (ctx->pc == 0x2C57B4u) {
        ctx->pc = 0x2C57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57B0u;
        // 0x2c57b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C57B8u;
        goto label_fallthrough_0x2c57b0;
    }
    ctx->pc = 0x2C57B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57B0u;
        // 0x2c57b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C57B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c57b0:
    ctx->pc = 0x2C57B8u;
}
