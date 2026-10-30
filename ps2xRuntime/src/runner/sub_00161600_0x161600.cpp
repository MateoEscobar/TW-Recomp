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

// Function: sub_00161600
// Address: 0x161600 - 0x161830
void sub_00161600_0x161600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161600_0x161600");
#endif

    switch (ctx->pc) {
        case 0x161600u: goto label_161600;
        case 0x161604u: goto label_161604;
        case 0x161608u: goto label_161608;
        case 0x16160cu: goto label_16160c;
        case 0x161610u: goto label_161610;
        case 0x161614u: goto label_161614;
        case 0x161618u: goto label_161618;
        case 0x16161cu: goto label_16161c;
        case 0x161620u: goto label_161620;
        case 0x161624u: goto label_161624;
        case 0x161628u: goto label_161628;
        case 0x16162cu: goto label_16162c;
        case 0x161630u: goto label_161630;
        case 0x161634u: goto label_161634;
        case 0x161638u: goto label_161638;
        case 0x16163cu: goto label_16163c;
        case 0x161640u: goto label_161640;
        case 0x161644u: goto label_161644;
        case 0x161648u: goto label_161648;
        case 0x16164cu: goto label_16164c;
        case 0x161650u: goto label_161650;
        case 0x161654u: goto label_161654;
        case 0x161658u: goto label_161658;
        case 0x16165cu: goto label_16165c;
        case 0x161660u: goto label_161660;
        case 0x161664u: goto label_161664;
        case 0x161668u: goto label_161668;
        case 0x16166cu: goto label_16166c;
        case 0x161670u: goto label_161670;
        case 0x161674u: goto label_161674;
        case 0x161678u: goto label_161678;
        case 0x16167cu: goto label_16167c;
        case 0x161680u: goto label_161680;
        case 0x161684u: goto label_161684;
        case 0x161688u: goto label_161688;
        case 0x16168cu: goto label_16168c;
        case 0x161690u: goto label_161690;
        case 0x161694u: goto label_161694;
        case 0x161698u: goto label_161698;
        case 0x16169cu: goto label_16169c;
        case 0x1616a0u: goto label_1616a0;
        case 0x1616a4u: goto label_1616a4;
        case 0x1616a8u: goto label_1616a8;
        case 0x1616acu: goto label_1616ac;
        case 0x1616b0u: goto label_1616b0;
        case 0x1616b4u: goto label_1616b4;
        case 0x1616b8u: goto label_1616b8;
        case 0x1616bcu: goto label_1616bc;
        case 0x1616c0u: goto label_1616c0;
        case 0x1616c4u: goto label_1616c4;
        case 0x1616c8u: goto label_1616c8;
        case 0x1616ccu: goto label_1616cc;
        case 0x1616d0u: goto label_1616d0;
        case 0x1616d4u: goto label_1616d4;
        case 0x1616d8u: goto label_1616d8;
        case 0x1616dcu: goto label_1616dc;
        case 0x1616e0u: goto label_1616e0;
        case 0x1616e4u: goto label_1616e4;
        case 0x1616e8u: goto label_1616e8;
        case 0x1616ecu: goto label_1616ec;
        case 0x1616f0u: goto label_1616f0;
        case 0x1616f4u: goto label_1616f4;
        case 0x1616f8u: goto label_1616f8;
        case 0x1616fcu: goto label_1616fc;
        case 0x161700u: goto label_161700;
        case 0x161704u: goto label_161704;
        case 0x161708u: goto label_161708;
        case 0x16170cu: goto label_16170c;
        case 0x161710u: goto label_161710;
        case 0x161714u: goto label_161714;
        case 0x161718u: goto label_161718;
        case 0x16171cu: goto label_16171c;
        case 0x161720u: goto label_161720;
        case 0x161724u: goto label_161724;
        case 0x161728u: goto label_161728;
        case 0x16172cu: goto label_16172c;
        case 0x161730u: goto label_161730;
        case 0x161734u: goto label_161734;
        case 0x161738u: goto label_161738;
        case 0x16173cu: goto label_16173c;
        case 0x161740u: goto label_161740;
        case 0x161744u: goto label_161744;
        case 0x161748u: goto label_161748;
        case 0x16174cu: goto label_16174c;
        case 0x161750u: goto label_161750;
        case 0x161754u: goto label_161754;
        case 0x161758u: goto label_161758;
        case 0x16175cu: goto label_16175c;
        case 0x161760u: goto label_161760;
        case 0x161764u: goto label_161764;
        case 0x161768u: goto label_161768;
        case 0x16176cu: goto label_16176c;
        case 0x161770u: goto label_161770;
        case 0x161774u: goto label_161774;
        case 0x161778u: goto label_161778;
        case 0x16177cu: goto label_16177c;
        case 0x161780u: goto label_161780;
        case 0x161784u: goto label_161784;
        case 0x161788u: goto label_161788;
        case 0x16178cu: goto label_16178c;
        case 0x161790u: goto label_161790;
        case 0x161794u: goto label_161794;
        case 0x161798u: goto label_161798;
        case 0x16179cu: goto label_16179c;
        case 0x1617a0u: goto label_1617a0;
        case 0x1617a4u: goto label_1617a4;
        case 0x1617a8u: goto label_1617a8;
        case 0x1617acu: goto label_1617ac;
        case 0x1617b0u: goto label_1617b0;
        case 0x1617b4u: goto label_1617b4;
        case 0x1617b8u: goto label_1617b8;
        case 0x1617bcu: goto label_1617bc;
        case 0x1617c0u: goto label_1617c0;
        case 0x1617c4u: goto label_1617c4;
        case 0x1617c8u: goto label_1617c8;
        case 0x1617ccu: goto label_1617cc;
        case 0x1617d0u: goto label_1617d0;
        case 0x1617d4u: goto label_1617d4;
        case 0x1617d8u: goto label_1617d8;
        case 0x1617dcu: goto label_1617dc;
        case 0x1617e0u: goto label_1617e0;
        case 0x1617e4u: goto label_1617e4;
        case 0x1617e8u: goto label_1617e8;
        case 0x1617ecu: goto label_1617ec;
        case 0x1617f0u: goto label_1617f0;
        case 0x1617f4u: goto label_1617f4;
        case 0x1617f8u: goto label_1617f8;
        case 0x1617fcu: goto label_1617fc;
        case 0x161800u: goto label_161800;
        case 0x161804u: goto label_161804;
        case 0x161808u: goto label_161808;
        case 0x16180cu: goto label_16180c;
        case 0x161810u: goto label_161810;
        case 0x161814u: goto label_161814;
        case 0x161818u: goto label_161818;
        case 0x16181cu: goto label_16181c;
        case 0x161820u: goto label_161820;
        case 0x161824u: goto label_161824;
        case 0x161828u: goto label_161828;
        case 0x16182cu: goto label_16182c;
        default: break;
    }

    ctx->pc = 0x161600u;

label_161600:
    // 0x161600: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x161600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_161604:
    // 0x161604: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x161604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_161608:
    // 0x161608: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x161608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_16160c:
    // 0x16160c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x16160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_161610:
    // 0x161610: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x161610u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_161614:
    // 0x161614: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x161614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_161618:
    // 0x161618: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x161618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_16161c:
    // 0x16161c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x16161cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161620:
    // 0x161620: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x161620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_161624:
    // 0x161624: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x161624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_161628:
    // 0x161628: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x161628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_16162c:
    // 0x16162c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_161630:
    // 0x161630: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x161630u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_161634:
    // 0x161634: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x161634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_161638:
    // 0x161638: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x161638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_16163c:
    // 0x16163c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x16163cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_161640:
    // 0x161640: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x161640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_161644:
    // 0x161644: 0x40f809  jalr        $v0
label_161648:
    if (ctx->pc == 0x161648u) {
        ctx->pc = 0x161648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161644u;
        // 0x161648: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16164Cu;
        goto label_16164c;
    }
    ctx->pc = 0x161644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16164Cu);
        ctx->pc = 0x161648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161644u;
        // 0x161648: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161644u, 0x16164Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16164Cu;
label_16164c:
    // 0x16164c: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x16164cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_161650:
    // 0x161650: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x161650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161654:
    // 0x161654: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161658:
    // 0x161658: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x161658u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_16165c:
    // 0x16165c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16165cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_161660:
    // 0x161660: 0x40f809  jalr        $v0
label_161664:
    if (ctx->pc == 0x161664u) {
        ctx->pc = 0x161664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161660u;
        // 0x161664: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161668u;
        goto label_161668;
    }
    ctx->pc = 0x161660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161668u);
        ctx->pc = 0x161664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161660u;
        // 0x161664: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161660u, 0x161668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161668u;
label_161668:
    // 0x161668: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x161668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16166c:
    // 0x16166c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16166cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_161670:
    // 0x161670: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_161674:
    if (ctx->pc == 0x161674u) {
        ctx->pc = 0x161674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161670u;
        // 0x161674: 0xac44c7dc  sw          $a0, -0x3824($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952924), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161678u;
        goto label_161678;
    }
    ctx->pc = 0x161670u;
    {
        const bool branch_taken_0x161670 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x161674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161670u;
        // 0x161674: 0xac44c7dc  sw          $a0, -0x3824($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952924), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161670) {
            ctx->pc = 0x16168Cu;
            goto label_16168c;
        }
    }
    ctx->pc = 0x161678u;
label_161678:
    // 0x161678: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x161678u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16167c:
    // 0x16167c: 0x0  nop
    ctx->pc = 0x16167cu;
    // NOP
label_161680:
    // 0x161680: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x161680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_161684:
    // 0x161684: 0x10000008  b           . + 4 + (0x8 << 2)
label_161688:
    if (ctx->pc == 0x161688u) {
        ctx->pc = 0x16168Cu;
        goto label_16168c;
    }
    ctx->pc = 0x161684u;
    {
        const bool branch_taken_0x161684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161684) {
            ctx->pc = 0x1616A8u;
            goto label_1616a8;
        }
    }
    ctx->pc = 0x16168Cu;
label_16168c:
    // 0x16168c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x16168cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_161690:
    // 0x161690: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x161690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_161694:
    // 0x161694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x161694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_161698:
    // 0x161698: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x161698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16169c:
    // 0x16169c: 0x0  nop
    ctx->pc = 0x16169cu;
    // NOP
label_1616a0:
    // 0x1616a0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1616a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1616a4:
    // 0x1616a4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1616a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1616a8:
    // 0x1616a8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1616a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1616ac:
    // 0x1616ac: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1616acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1616b0:
    // 0x1616b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1616b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1616b4:
    // 0x1616b4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1616b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1616b8:
    // 0x1616b8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1616b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1616bc:
    // 0x1616bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1616bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1616c0:
    // 0x1616c0: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x1616c0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1616c4:
    // 0x1616c4: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1616c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_1616c8:
    // 0x1616c8: 0xc06c934  jal         func_1B24D0
label_1616cc:
    if (ctx->pc == 0x1616CCu) {
        ctx->pc = 0x1616CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616C8u;
        // 0x1616cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1616D0u;
        goto label_1616d0;
    }
    ctx->pc = 0x1616C8u;
    SET_GPR_U32(ctx, 31, 0x1616D0u);
    ctx->pc = 0x1616CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616C8u;
    // 0x1616cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24D0u, 0x1616C8u, 0x1616D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616D0u;
label_1616d0:
    // 0x1616d0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1616d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1616d4:
    // 0x1616d4: 0x2450e890  addiu       $s0, $v0, -0x1770
    ctx->pc = 0x1616d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
label_1616d8:
    // 0x1616d8: 0xc06886e  jal         func_1A21B8
label_1616dc:
    if (ctx->pc == 0x1616DCu) {
        ctx->pc = 0x1616DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616D8u;
        // 0x1616dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1616E0u;
        goto label_1616e0;
    }
    ctx->pc = 0x1616D8u;
    SET_GPR_U32(ctx, 31, 0x1616E0u);
    ctx->pc = 0x1616DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616D8u;
    // 0x1616dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1616D8u, 0x1616E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616E0u;
label_1616e0:
    // 0x1616e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1616e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1616e4:
    // 0x1616e4: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1616e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1616e8:
    // 0x1616e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1616e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1616ec:
    // 0x1616ec: 0x10a20043  beq         $a1, $v0, . + 4 + (0x43 << 2)
label_1616f0:
    if (ctx->pc == 0x1616F0u) {
        ctx->pc = 0x1616F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616ECu;
        // 0x1616f0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1616F4u;
        goto label_1616f4;
    }
    ctx->pc = 0x1616ECu;
    {
        const bool branch_taken_0x1616ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1616F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616ECu;
        // 0x1616f0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616ec) {
            ctx->pc = 0x1617FCu;
            goto label_1617fc;
        }
    }
    ctx->pc = 0x1616F4u;
label_1616f4:
    // 0x1616f4: 0xc0616ac  jal         func_185AB0
label_1616f8:
    if (ctx->pc == 0x1616F8u) {
        ctx->pc = 0x1616F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616F4u;
        // 0x1616f8: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1616FCu;
        goto label_1616fc;
    }
    ctx->pc = 0x1616F4u;
    SET_GPR_U32(ctx, 31, 0x1616FCu);
    ctx->pc = 0x1616F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616F4u;
    // 0x1616f8: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1616F4u, 0x1616FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616FCu;
label_1616fc:
    // 0x1616fc: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_161700:
    if (ctx->pc == 0x161700u) {
        ctx->pc = 0x161700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616FCu;
        // 0x161700: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161704u;
        goto label_161704;
    }
    ctx->pc = 0x1616FCu;
    {
        const bool branch_taken_0x1616fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616FCu;
        // 0x161700: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616fc) {
            ctx->pc = 0x1617FCu;
            goto label_1617fc;
        }
    }
    ctx->pc = 0x161704u;
label_161704:
    // 0x161704: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x161704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161708:
    // 0x161708: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x161708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_16170c:
    // 0x16170c: 0xc0616ac  jal         func_185AB0
label_161710:
    if (ctx->pc == 0x161710u) {
        ctx->pc = 0x161710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16170Cu;
        // 0x161710: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161714u;
        goto label_161714;
    }
    ctx->pc = 0x16170Cu;
    SET_GPR_U32(ctx, 31, 0x161714u);
    ctx->pc = 0x161710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16170Cu;
    // 0x161710: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x16170Cu, 0x161714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161714u;
label_161714:
    // 0x161714: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x161714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_161718:
    // 0x161718: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x161718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16171c:
    // 0x16171c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16171cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_161720:
    // 0x161720: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x161720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_161724:
    // 0x161724: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x161724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_161728:
    // 0x161728: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x161728u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_16172c:
    // 0x16172c: 0xc05eb2a  jal         func_17ACA8
label_161730:
    if (ctx->pc == 0x161730u) {
        ctx->pc = 0x161730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16172Cu;
        // 0x161730: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161734u;
        goto label_161734;
    }
    ctx->pc = 0x16172Cu;
    SET_GPR_U32(ctx, 31, 0x161734u);
    ctx->pc = 0x161730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16172Cu;
    // 0x161730: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x16172Cu, 0x161734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161734u;
label_161734:
    // 0x161734: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x161734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161738:
    // 0x161738: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x161738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16173c:
    // 0x16173c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16173cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_161740:
    // 0x161740: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x161740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161744:
    // 0x161744: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x161744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_161748:
    // 0x161748: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x161748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_16174c:
    // 0x16174c: 0x40f809  jalr        $v0
label_161750:
    if (ctx->pc == 0x161750u) {
        ctx->pc = 0x161750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16174Cu;
        // 0x161750: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161754u;
        goto label_161754;
    }
    ctx->pc = 0x16174Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161754u);
        ctx->pc = 0x161750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16174Cu;
        // 0x161750: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16174Cu, 0x161754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161754u;
label_161754:
    // 0x161754: 0x8ea5b8b8  lw          $a1, -0x4748($s5)
    ctx->pc = 0x161754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949048)));
label_161758:
    // 0x161758: 0x8e90c7d8  lw          $s0, -0x3828($s4)
    ctx->pc = 0x161758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952920)));
label_16175c:
    // 0x16175c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16175cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161760:
    // 0x161760: 0x261005dc  addiu       $s0, $s0, 0x5DC
    ctx->pc = 0x161760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1500));
label_161764:
    // 0x161764: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x161764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_161768:
    // 0x161768: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x161768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16176c:
    // 0x16176c: 0x40f809  jalr        $v0
label_161770:
    if (ctx->pc == 0x161770u) {
        ctx->pc = 0x161770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16176Cu;
        // 0x161770: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161774u;
        goto label_161774;
    }
    ctx->pc = 0x16176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161774u);
        ctx->pc = 0x161770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16176Cu;
        // 0x161770: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16176Cu, 0x161774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161774u;
label_161774:
    // 0x161774: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x161774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_161778:
    // 0x161778: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_16177c:
    if (ctx->pc == 0x16177Cu) {
        ctx->pc = 0x16177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161778u;
        // 0x16177c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161780u;
        goto label_161780;
    }
    ctx->pc = 0x161778u;
    {
        const bool branch_taken_0x161778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161778u;
        // 0x16177c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161778) {
            ctx->pc = 0x1617CCu;
            goto label_1617cc;
        }
    }
    ctx->pc = 0x161780u;
label_161780:
    // 0x161780: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x161780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_161784:
    // 0x161784: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x161784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_161788:
    // 0x161788: 0x40f809  jalr        $v0
label_16178c:
    if (ctx->pc == 0x16178Cu) {
        ctx->pc = 0x16178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161788u;
        // 0x16178c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161790u;
        goto label_161790;
    }
    ctx->pc = 0x161788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161790u);
        ctx->pc = 0x16178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161788u;
        // 0x16178c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161788u, 0x161790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161790u;
label_161790:
    // 0x161790: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_161794:
    if (ctx->pc == 0x161794u) {
        ctx->pc = 0x161794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161790u;
        // 0x161794: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161798u;
        goto label_161798;
    }
    ctx->pc = 0x161790u;
    {
        const bool branch_taken_0x161790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161790) {
            ctx->pc = 0x161794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161790u;
            // 0x161794: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1617CCu;
            goto label_1617cc;
        }
    }
    ctx->pc = 0x161798u;
label_161798:
    // 0x161798: 0xc0584fc  jal         func_1613F0
label_16179c:
    if (ctx->pc == 0x16179Cu) {
        ctx->pc = 0x1617A0u;
        goto label_1617a0;
    }
    ctx->pc = 0x161798u;
    SET_GPR_U32(ctx, 31, 0x1617A0u);
    ctx->pc = 0x1613F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1613F0u, 0x161798u, 0x1617A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617A0u;
label_1617a0:
    // 0x1617a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1617a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1617a4:
    // 0x1617a4: 0xc065c5a  jal         func_197168
label_1617a8:
    if (ctx->pc == 0x1617A8u) {
        ctx->pc = 0x1617A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617A4u;
        // 0x1617a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1617ACu;
        goto label_1617ac;
    }
    ctx->pc = 0x1617A4u;
    SET_GPR_U32(ctx, 31, 0x1617ACu);
    ctx->pc = 0x1617A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1617A4u;
    // 0x1617a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197168u, 0x1617A4u, 0x1617ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617ACu;
label_1617ac:
    // 0x1617ac: 0xc065c42  jal         func_197108
label_1617b0:
    if (ctx->pc == 0x1617B0u) {
        ctx->pc = 0x1617B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617ACu;
        // 0x1617b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1617B4u;
        goto label_1617b4;
    }
    ctx->pc = 0x1617ACu;
    SET_GPR_U32(ctx, 31, 0x1617B4u);
    ctx->pc = 0x1617B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1617ACu;
    // 0x1617b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197108u, 0x1617ACu, 0x1617B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617B4u;
label_1617b4:
    // 0x1617b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1617b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1617b8:
    // 0x1617b8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1617b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1617bc:
    // 0x1617bc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1617bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1617c0:
    // 0x1617c0: 0x40f809  jalr        $v0
label_1617c4:
    if (ctx->pc == 0x1617C4u) {
        ctx->pc = 0x1617C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617C0u;
        // 0x1617c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1617C8u;
        goto label_1617c8;
    }
    ctx->pc = 0x1617C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1617C8u);
        ctx->pc = 0x1617C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617C0u;
        // 0x1617c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1617C0u, 0x1617C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1617C8u;
label_1617c8:
    // 0x1617c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1617c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1617cc:
    // 0x1617cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1617ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1617d0:
    // 0x1617d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1617d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1617d4:
    // 0x1617d4: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x1617d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1617d8:
    // 0x1617d8: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x1617d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_1617dc:
    // 0x1617dc: 0x40f809  jalr        $v0
label_1617e0:
    if (ctx->pc == 0x1617E0u) {
        ctx->pc = 0x1617E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617DCu;
        // 0x1617e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1617E4u;
        goto label_1617e4;
    }
    ctx->pc = 0x1617DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1617E4u);
        ctx->pc = 0x1617E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617DCu;
        // 0x1617e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1617DCu, 0x1617E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1617E4u;
label_1617e4:
    // 0x1617e4: 0x5260ffd4  beql        $s3, $zero, . + 4 + (-0x2C << 2)
label_1617e8:
    if (ctx->pc == 0x1617E8u) {
        ctx->pc = 0x1617E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617E4u;
        // 0x1617e8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1617ECu;
        goto label_1617ec;
    }
    ctx->pc = 0x1617E4u;
    {
        const bool branch_taken_0x1617e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617e4) {
            ctx->pc = 0x1617E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1617E4u;
            // 0x1617e8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161738;
        }
    }
    ctx->pc = 0x1617ECu;
label_1617ec:
    // 0x1617ec: 0x26c40840  addiu       $a0, $s6, 0x840
    ctx->pc = 0x1617ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
label_1617f0:
    // 0x1617f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1617f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1617f4:
    // 0x1617f4: 0xc06c934  jal         func_1B24D0
label_1617f8:
    if (ctx->pc == 0x1617F8u) {
        ctx->pc = 0x1617F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617F4u;
        // 0x1617f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1617FCu;
        goto label_1617fc;
    }
    ctx->pc = 0x1617F4u;
    SET_GPR_U32(ctx, 31, 0x1617FCu);
    ctx->pc = 0x1617F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1617F4u;
    // 0x1617f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24D0u, 0x1617F4u, 0x1617FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617FCu;
label_1617fc:
    // 0x1617fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1617fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161800:
    // 0x161800: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x161800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_161804:
    // 0x161804: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x161804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_161808:
    // 0x161808: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x161808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16180c:
    // 0x16180c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x16180cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_161810:
    // 0x161810: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x161810u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_161814:
    // 0x161814: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x161814u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_161818:
    // 0x161818: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x161818u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16181c:
    // 0x16181c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16181cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_161820:
    // 0x161820: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x161820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_161824:
    // 0x161824: 0x3e00008  jr          $ra
label_161828:
    if (ctx->pc == 0x161828u) {
        ctx->pc = 0x161828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161824u;
        // 0x161828: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16182Cu;
        goto label_16182c;
    }
    ctx->pc = 0x161824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161824u;
        // 0x161828: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16182Cu;
label_16182c:
    // 0x16182c: 0x0  nop
    ctx->pc = 0x16182cu;
    // NOP
    ctx->pc = 0x161830u;
}
