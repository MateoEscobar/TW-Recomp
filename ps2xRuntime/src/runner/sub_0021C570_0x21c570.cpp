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

// Function: sub_0021C570
// Address: 0x21c570 - 0x21c7c8
void sub_0021C570_0x21c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C570_0x21c570");
#endif

    switch (ctx->pc) {
        case 0x21c570u: goto label_21c570;
        case 0x21c574u: goto label_21c574;
        case 0x21c578u: goto label_21c578;
        case 0x21c57cu: goto label_21c57c;
        case 0x21c580u: goto label_21c580;
        case 0x21c584u: goto label_21c584;
        case 0x21c588u: goto label_21c588;
        case 0x21c58cu: goto label_21c58c;
        case 0x21c590u: goto label_21c590;
        case 0x21c594u: goto label_21c594;
        case 0x21c598u: goto label_21c598;
        case 0x21c59cu: goto label_21c59c;
        case 0x21c5a0u: goto label_21c5a0;
        case 0x21c5a4u: goto label_21c5a4;
        case 0x21c5a8u: goto label_21c5a8;
        case 0x21c5acu: goto label_21c5ac;
        case 0x21c5b0u: goto label_21c5b0;
        case 0x21c5b4u: goto label_21c5b4;
        case 0x21c5b8u: goto label_21c5b8;
        case 0x21c5bcu: goto label_21c5bc;
        case 0x21c5c0u: goto label_21c5c0;
        case 0x21c5c4u: goto label_21c5c4;
        case 0x21c5c8u: goto label_21c5c8;
        case 0x21c5ccu: goto label_21c5cc;
        case 0x21c5d0u: goto label_21c5d0;
        case 0x21c5d4u: goto label_21c5d4;
        case 0x21c5d8u: goto label_21c5d8;
        case 0x21c5dcu: goto label_21c5dc;
        case 0x21c5e0u: goto label_21c5e0;
        case 0x21c5e4u: goto label_21c5e4;
        case 0x21c5e8u: goto label_21c5e8;
        case 0x21c5ecu: goto label_21c5ec;
        case 0x21c5f0u: goto label_21c5f0;
        case 0x21c5f4u: goto label_21c5f4;
        case 0x21c5f8u: goto label_21c5f8;
        case 0x21c5fcu: goto label_21c5fc;
        case 0x21c600u: goto label_21c600;
        case 0x21c604u: goto label_21c604;
        case 0x21c608u: goto label_21c608;
        case 0x21c60cu: goto label_21c60c;
        case 0x21c610u: goto label_21c610;
        case 0x21c614u: goto label_21c614;
        case 0x21c618u: goto label_21c618;
        case 0x21c61cu: goto label_21c61c;
        case 0x21c620u: goto label_21c620;
        case 0x21c624u: goto label_21c624;
        case 0x21c628u: goto label_21c628;
        case 0x21c62cu: goto label_21c62c;
        case 0x21c630u: goto label_21c630;
        case 0x21c634u: goto label_21c634;
        case 0x21c638u: goto label_21c638;
        case 0x21c63cu: goto label_21c63c;
        case 0x21c640u: goto label_21c640;
        case 0x21c644u: goto label_21c644;
        case 0x21c648u: goto label_21c648;
        case 0x21c64cu: goto label_21c64c;
        case 0x21c650u: goto label_21c650;
        case 0x21c654u: goto label_21c654;
        case 0x21c658u: goto label_21c658;
        case 0x21c65cu: goto label_21c65c;
        case 0x21c660u: goto label_21c660;
        case 0x21c664u: goto label_21c664;
        case 0x21c668u: goto label_21c668;
        case 0x21c66cu: goto label_21c66c;
        case 0x21c670u: goto label_21c670;
        case 0x21c674u: goto label_21c674;
        case 0x21c678u: goto label_21c678;
        case 0x21c67cu: goto label_21c67c;
        case 0x21c680u: goto label_21c680;
        case 0x21c684u: goto label_21c684;
        case 0x21c688u: goto label_21c688;
        case 0x21c68cu: goto label_21c68c;
        case 0x21c690u: goto label_21c690;
        case 0x21c694u: goto label_21c694;
        case 0x21c698u: goto label_21c698;
        case 0x21c69cu: goto label_21c69c;
        case 0x21c6a0u: goto label_21c6a0;
        case 0x21c6a4u: goto label_21c6a4;
        case 0x21c6a8u: goto label_21c6a8;
        case 0x21c6acu: goto label_21c6ac;
        case 0x21c6b0u: goto label_21c6b0;
        case 0x21c6b4u: goto label_21c6b4;
        case 0x21c6b8u: goto label_21c6b8;
        case 0x21c6bcu: goto label_21c6bc;
        case 0x21c6c0u: goto label_21c6c0;
        case 0x21c6c4u: goto label_21c6c4;
        case 0x21c6c8u: goto label_21c6c8;
        case 0x21c6ccu: goto label_21c6cc;
        case 0x21c6d0u: goto label_21c6d0;
        case 0x21c6d4u: goto label_21c6d4;
        case 0x21c6d8u: goto label_21c6d8;
        case 0x21c6dcu: goto label_21c6dc;
        case 0x21c6e0u: goto label_21c6e0;
        case 0x21c6e4u: goto label_21c6e4;
        case 0x21c6e8u: goto label_21c6e8;
        case 0x21c6ecu: goto label_21c6ec;
        case 0x21c6f0u: goto label_21c6f0;
        case 0x21c6f4u: goto label_21c6f4;
        case 0x21c6f8u: goto label_21c6f8;
        case 0x21c6fcu: goto label_21c6fc;
        case 0x21c700u: goto label_21c700;
        case 0x21c704u: goto label_21c704;
        case 0x21c708u: goto label_21c708;
        case 0x21c70cu: goto label_21c70c;
        case 0x21c710u: goto label_21c710;
        case 0x21c714u: goto label_21c714;
        case 0x21c718u: goto label_21c718;
        case 0x21c71cu: goto label_21c71c;
        case 0x21c720u: goto label_21c720;
        case 0x21c724u: goto label_21c724;
        case 0x21c728u: goto label_21c728;
        case 0x21c72cu: goto label_21c72c;
        case 0x21c730u: goto label_21c730;
        case 0x21c734u: goto label_21c734;
        case 0x21c738u: goto label_21c738;
        case 0x21c73cu: goto label_21c73c;
        case 0x21c740u: goto label_21c740;
        case 0x21c744u: goto label_21c744;
        case 0x21c748u: goto label_21c748;
        case 0x21c74cu: goto label_21c74c;
        case 0x21c750u: goto label_21c750;
        case 0x21c754u: goto label_21c754;
        case 0x21c758u: goto label_21c758;
        case 0x21c75cu: goto label_21c75c;
        case 0x21c760u: goto label_21c760;
        case 0x21c764u: goto label_21c764;
        case 0x21c768u: goto label_21c768;
        case 0x21c76cu: goto label_21c76c;
        case 0x21c770u: goto label_21c770;
        case 0x21c774u: goto label_21c774;
        case 0x21c778u: goto label_21c778;
        case 0x21c77cu: goto label_21c77c;
        case 0x21c780u: goto label_21c780;
        case 0x21c784u: goto label_21c784;
        case 0x21c788u: goto label_21c788;
        case 0x21c78cu: goto label_21c78c;
        case 0x21c790u: goto label_21c790;
        case 0x21c794u: goto label_21c794;
        case 0x21c798u: goto label_21c798;
        case 0x21c79cu: goto label_21c79c;
        case 0x21c7a0u: goto label_21c7a0;
        case 0x21c7a4u: goto label_21c7a4;
        case 0x21c7a8u: goto label_21c7a8;
        case 0x21c7acu: goto label_21c7ac;
        case 0x21c7b0u: goto label_21c7b0;
        case 0x21c7b4u: goto label_21c7b4;
        case 0x21c7b8u: goto label_21c7b8;
        case 0x21c7bcu: goto label_21c7bc;
        case 0x21c7c0u: goto label_21c7c0;
        case 0x21c7c4u: goto label_21c7c4;
        default: break;
    }

    ctx->pc = 0x21c570u;

label_21c570:
    // 0x21c570: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x21c570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_21c574:
    // 0x21c574: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x21c574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_21c578:
    // 0x21c578: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x21c578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_21c57c:
    // 0x21c57c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x21c57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_21c580:
    // 0x21c580: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21c580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21c584:
    // 0x21c584: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x21c584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_21c588:
    // 0x21c588: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x21c588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_21c58c:
    // 0x21c58c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x21c58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_21c590:
    // 0x21c590: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x21c590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_21c594:
    // 0x21c594: 0x24930090  addiu       $s3, $a0, 0x90
    ctx->pc = 0x21c594u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_21c598:
    // 0x21c598: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x21c598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_21c59c:
    // 0x21c59c: 0x24744b00  addiu       $s4, $v1, 0x4B00
    ctx->pc = 0x21c59cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_21c5a0:
    // 0x21c5a0: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x21c5a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_21c5a4:
    // 0x21c5a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c5a8:
    // 0x21c5a8: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x21c5a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_21c5ac:
    // 0x21c5ac: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x21c5acu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_21c5b0:
    // 0x21c5b0: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x21c5b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_21c5b4:
    // 0x21c5b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x21c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_21c5b8:
    // 0x21c5b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21c5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21c5bc:
    // 0x21c5bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21c5bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21c5c0:
    // 0x21c5c0: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x21c5c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_21c5c4:
    // 0x21c5c4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x21c5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21c5c8:
    // 0x21c5c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_21c5cc:
    // 0x21c5cc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x21c5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_21c5d0:
    // 0x21c5d0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x21c5d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_21c5d4:
    // 0x21c5d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x21c5d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_21c5d8:
    // 0x21c5d8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x21c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_21c5dc:
    // 0x21c5dc: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x21c5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_21c5e0:
    // 0x21c5e0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x21c5e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21c5e4:
    // 0x21c5e4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x21c5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_21c5e8:
    // 0x21c5e8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x21c5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c5ec:
    // 0x21c5ec: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x21c5ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_21c5f0:
    // 0x21c5f0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x21c5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_21c5f4:
    // 0x21c5f4: 0x84c500a0  lh          $a1, 0xA0($a2)
    ctx->pc = 0x21c5f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 160)));
label_21c5f8:
    // 0x21c5f8: 0x8cc200a4  lw          $v0, 0xA4($a2)
    ctx->pc = 0x21c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_21c5fc:
    // 0x21c5fc: 0x40f809  jalr        $v0
label_21c600:
    if (ctx->pc == 0x21C600u) {
        ctx->pc = 0x21C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5FCu;
        // 0x21c600: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C604u;
        goto label_21c604;
    }
    ctx->pc = 0x21C5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C604u);
        ctx->pc = 0x21C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5FCu;
        // 0x21c600: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C5FCu, 0x21C604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C604u;
label_21c604:
    // 0x21c604: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x21c604u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21c608:
    // 0x21c608: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x21c608u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_21c60c:
    // 0x21c60c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x21c60cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21c610:
    // 0x21c610: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21c610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21c614:
    // 0x21c614: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21c614u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21c618:
    // 0x21c618: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21c618u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21c61c:
    // 0x21c61c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21c61cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21c620:
    // 0x21c620: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21c620u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21c624:
    // 0x21c624: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x21c624u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_21c628:
    // 0x21c628: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x21c628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_21c62c:
    // 0x21c62c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21c62cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21c630:
    // 0x21c630: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x21c630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21c634:
    // 0x21c634: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x21c634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21c638:
    // 0x21c638: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x21c638u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21c63c:
    // 0x21c63c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x21c63cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_21c640:
    // 0x21c640: 0x4a0003bf  vwaitq
    ctx->pc = 0x21c640u;
    // VWAITQ (Q already resolved in this runtime)
label_21c644:
    // 0x21c644: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x21c644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21c648:
    // 0x21c648: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x21c648u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_21c64c:
    // 0x21c64c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x21c64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_21c650:
    // 0x21c650: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21c654:
    // 0x21c654: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21c654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21c658:
    // 0x21c658: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x21c658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_21c65c:
    // 0x21c65c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x21c65cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21c660:
    // 0x21c660: 0x0  nop
    ctx->pc = 0x21c660u;
    // NOP
label_21c664:
    // 0x21c664: 0x0  nop
    ctx->pc = 0x21c664u;
    // NOP
label_21c668:
    // 0x21c668: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x21c668u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_21c66c:
    // 0x21c66c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x21c66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_21c670:
    // 0x21c670: 0x46150081  sub.s       $f2, $f0, $f21
    ctx->pc = 0x21c670u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_21c674:
    // 0x21c674: 0x8ea447c4  lw          $a0, 0x47C4($s5)
    ctx->pc = 0x21c674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18372)));
label_21c678:
    // 0x21c678: 0x4602b0a8  max.s       $f2, $f22, $f2
    ctx->pc = 0x21c678u;
    ctx->f[2] = std::max(ctx->f[22], ctx->f[2]);
label_21c67c:
    // 0x21c67c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x21c67cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_21c680:
    // 0x21c680: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x21c680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_21c684:
    // 0x21c684: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21c684u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21c688:
    // 0x21c688: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x21c688u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_21c68c:
    // 0x21c68c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21c68cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21c690:
    // 0x21c690: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x21c690u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_21c694:
    // 0x21c694: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x21c694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_21c698:
    // 0x21c698: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21c698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c69c:
    // 0x21c69c: 0xc1036e2  jal         func_40DB88
label_21c6a0:
    if (ctx->pc == 0x21C6A0u) {
        ctx->pc = 0x21C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C69Cu;
        // 0x21c6a0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C6A4u;
        goto label_21c6a4;
    }
    ctx->pc = 0x21C69Cu;
    SET_GPR_U32(ctx, 31, 0x21C6A4u);
    ctx->pc = 0x21C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C69Cu;
    // 0x21c6a0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x21C69Cu, 0x21C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6A4u;
label_21c6a4:
    // 0x21c6a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x21c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_21c6a8:
    // 0x21c6a8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_21c6ac:
    if (ctx->pc == 0x21C6ACu) {
        ctx->pc = 0x21C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6A8u;
        // 0x21c6ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C6B0u;
        goto label_21c6b0;
    }
    ctx->pc = 0x21C6A8u;
    {
        const bool branch_taken_0x21c6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6A8u;
        // 0x21c6ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6a8) {
            ctx->pc = 0x21C794u;
            goto label_21c794;
        }
    }
    ctx->pc = 0x21C6B0u;
label_21c6b0:
    // 0x21c6b0: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x21c6b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_21c6b4:
    // 0x21c6b4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x21c6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21c6b8:
    // 0x21c6b8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x21c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21c6bc:
    // 0x21c6bc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x21c6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_21c6c0:
    // 0x21c6c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21c6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21c6c4:
    // 0x21c6c4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x21c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_21c6c8:
    // 0x21c6c8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x21c6c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_21c6cc:
    // 0x21c6cc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x21c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_21c6d0:
    // 0x21c6d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x21c6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c6d4:
    // 0x21c6d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c6d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_21c6d8:
    // 0x21c6d8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x21c6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_21c6dc:
    // 0x21c6dc: 0x84c500a0  lh          $a1, 0xA0($a2)
    ctx->pc = 0x21c6dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 160)));
label_21c6e0:
    // 0x21c6e0: 0x8cc200a4  lw          $v0, 0xA4($a2)
    ctx->pc = 0x21c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_21c6e4:
    // 0x21c6e4: 0x40f809  jalr        $v0
label_21c6e8:
    if (ctx->pc == 0x21C6E8u) {
        ctx->pc = 0x21C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6E4u;
        // 0x21c6e8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C6ECu;
        goto label_21c6ec;
    }
    ctx->pc = 0x21C6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C6ECu);
        ctx->pc = 0x21C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6E4u;
        // 0x21c6e8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C6E4u, 0x21C6ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C6ECu;
label_21c6ec:
    // 0x21c6ec: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x21c6ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21c6f0:
    // 0x21c6f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21c6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21c6f4:
    // 0x21c6f4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x21c6f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21c6f8:
    // 0x21c6f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21c6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21c6fc:
    // 0x21c6fc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21c6fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21c700:
    // 0x21c700: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21c700u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21c704:
    // 0x21c704: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21c704u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21c708:
    // 0x21c708: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21c708u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21c70c:
    // 0x21c70c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x21c70cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_21c710:
    // 0x21c710: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x21c710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_21c714:
    // 0x21c714: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21c714u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21c718:
    // 0x21c718: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x21c718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21c71c:
    // 0x21c71c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x21c71cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21c720:
    // 0x21c720: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x21c720u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21c724:
    // 0x21c724: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x21c724u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_21c728:
    // 0x21c728: 0x4a0003bf  vwaitq
    ctx->pc = 0x21c728u;
    // VWAITQ (Q already resolved in this runtime)
label_21c72c:
    // 0x21c72c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x21c72cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21c730:
    // 0x21c730: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x21c730u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_21c734:
    // 0x21c734: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x21c734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_21c738:
    // 0x21c738: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21c73c:
    // 0x21c73c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21c73cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c740:
    // 0x21c740: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x21c740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_21c744:
    // 0x21c744: 0x0  nop
    ctx->pc = 0x21c744u;
    // NOP
label_21c748:
    // 0x21c748: 0x0  nop
    ctx->pc = 0x21c748u;
    // NOP
label_21c74c:
    // 0x21c74c: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x21c74cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_21c750:
    // 0x21c750: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x21c750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_21c754:
    // 0x21c754: 0x46150081  sub.s       $f2, $f0, $f21
    ctx->pc = 0x21c754u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_21c758:
    // 0x21c758: 0x8ea447c4  lw          $a0, 0x47C4($s5)
    ctx->pc = 0x21c758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18372)));
label_21c75c:
    // 0x21c75c: 0x4602b0a8  max.s       $f2, $f22, $f2
    ctx->pc = 0x21c75cu;
    ctx->f[2] = std::max(ctx->f[22], ctx->f[2]);
label_21c760:
    // 0x21c760: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x21c760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_21c764:
    // 0x21c764: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x21c764u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_21c768:
    // 0x21c768: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21c768u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21c76c:
    // 0x21c76c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x21c76cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_21c770:
    // 0x21c770: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21c770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21c774:
    // 0x21c774: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x21c774u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_21c778:
    // 0x21c778: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x21c778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_21c77c:
    // 0x21c77c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21c77cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c780:
    // 0x21c780: 0xc1036e2  jal         func_40DB88
label_21c784:
    if (ctx->pc == 0x21C784u) {
        ctx->pc = 0x21C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C780u;
        // 0x21c784: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C788u;
        goto label_21c788;
    }
    ctx->pc = 0x21C780u;
    SET_GPR_U32(ctx, 31, 0x21C788u);
    ctx->pc = 0x21C784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C780u;
    // 0x21c784: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x21C780u, 0x21C788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C788u;
label_21c788:
    // 0x21c788: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x21c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_21c78c:
    // 0x21c78c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_21c790:
    if (ctx->pc == 0x21C790u) {
        ctx->pc = 0x21C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C78Cu;
        // 0x21c790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C794u;
        goto label_21c794;
    }
    ctx->pc = 0x21C78Cu;
    {
        const bool branch_taken_0x21c78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C78Cu;
        // 0x21c790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c78c) {
            ctx->pc = 0x21C798u;
            goto label_21c798;
        }
    }
    ctx->pc = 0x21C794u;
label_21c794:
    // 0x21c794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21c798:
    // 0x21c798: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x21c798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_21c79c:
    // 0x21c79c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x21c79cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_21c7a0:
    // 0x21c7a0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x21c7a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_21c7a4:
    // 0x21c7a4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x21c7a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_21c7a8:
    // 0x21c7a8: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x21c7a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_21c7ac:
    // 0x21c7ac: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x21c7acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21c7b0:
    // 0x21c7b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21c7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21c7b4:
    // 0x21c7b4: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x21c7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_21c7b8:
    // 0x21c7b8: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x21c7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_21c7bc:
    // 0x21c7bc: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x21c7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21c7c0:
    // 0x21c7c0: 0x3e00008  jr          $ra
label_21c7c4:
    if (ctx->pc == 0x21C7C4u) {
        ctx->pc = 0x21C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7C0u;
        // 0x21c7c4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C7C8u;
        goto label_fallthrough_0x21c7c0;
    }
    ctx->pc = 0x21C7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7C0u;
        // 0x21c7c4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21c7c0:
    ctx->pc = 0x21C7C8u;
}
