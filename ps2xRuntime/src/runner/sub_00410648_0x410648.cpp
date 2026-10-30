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

// Function: sub_00410648
// Address: 0x410648 - 0x410a50
void sub_00410648_0x410648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00410648_0x410648");
#endif

    switch (ctx->pc) {
        case 0x410648u: goto label_410648;
        case 0x41064cu: goto label_41064c;
        case 0x410650u: goto label_410650;
        case 0x410654u: goto label_410654;
        case 0x410658u: goto label_410658;
        case 0x41065cu: goto label_41065c;
        case 0x410660u: goto label_410660;
        case 0x410664u: goto label_410664;
        case 0x410668u: goto label_410668;
        case 0x41066cu: goto label_41066c;
        case 0x410670u: goto label_410670;
        case 0x410674u: goto label_410674;
        case 0x410678u: goto label_410678;
        case 0x41067cu: goto label_41067c;
        case 0x410680u: goto label_410680;
        case 0x410684u: goto label_410684;
        case 0x410688u: goto label_410688;
        case 0x41068cu: goto label_41068c;
        case 0x410690u: goto label_410690;
        case 0x410694u: goto label_410694;
        case 0x410698u: goto label_410698;
        case 0x41069cu: goto label_41069c;
        case 0x4106a0u: goto label_4106a0;
        case 0x4106a4u: goto label_4106a4;
        case 0x4106a8u: goto label_4106a8;
        case 0x4106acu: goto label_4106ac;
        case 0x4106b0u: goto label_4106b0;
        case 0x4106b4u: goto label_4106b4;
        case 0x4106b8u: goto label_4106b8;
        case 0x4106bcu: goto label_4106bc;
        case 0x4106c0u: goto label_4106c0;
        case 0x4106c4u: goto label_4106c4;
        case 0x4106c8u: goto label_4106c8;
        case 0x4106ccu: goto label_4106cc;
        case 0x4106d0u: goto label_4106d0;
        case 0x4106d4u: goto label_4106d4;
        case 0x4106d8u: goto label_4106d8;
        case 0x4106dcu: goto label_4106dc;
        case 0x4106e0u: goto label_4106e0;
        case 0x4106e4u: goto label_4106e4;
        case 0x4106e8u: goto label_4106e8;
        case 0x4106ecu: goto label_4106ec;
        case 0x4106f0u: goto label_4106f0;
        case 0x4106f4u: goto label_4106f4;
        case 0x4106f8u: goto label_4106f8;
        case 0x4106fcu: goto label_4106fc;
        case 0x410700u: goto label_410700;
        case 0x410704u: goto label_410704;
        case 0x410708u: goto label_410708;
        case 0x41070cu: goto label_41070c;
        case 0x410710u: goto label_410710;
        case 0x410714u: goto label_410714;
        case 0x410718u: goto label_410718;
        case 0x41071cu: goto label_41071c;
        case 0x410720u: goto label_410720;
        case 0x410724u: goto label_410724;
        case 0x410728u: goto label_410728;
        case 0x41072cu: goto label_41072c;
        case 0x410730u: goto label_410730;
        case 0x410734u: goto label_410734;
        case 0x410738u: goto label_410738;
        case 0x41073cu: goto label_41073c;
        case 0x410740u: goto label_410740;
        case 0x410744u: goto label_410744;
        case 0x410748u: goto label_410748;
        case 0x41074cu: goto label_41074c;
        case 0x410750u: goto label_410750;
        case 0x410754u: goto label_410754;
        case 0x410758u: goto label_410758;
        case 0x41075cu: goto label_41075c;
        case 0x410760u: goto label_410760;
        case 0x410764u: goto label_410764;
        case 0x410768u: goto label_410768;
        case 0x41076cu: goto label_41076c;
        case 0x410770u: goto label_410770;
        case 0x410774u: goto label_410774;
        case 0x410778u: goto label_410778;
        case 0x41077cu: goto label_41077c;
        case 0x410780u: goto label_410780;
        case 0x410784u: goto label_410784;
        case 0x410788u: goto label_410788;
        case 0x41078cu: goto label_41078c;
        case 0x410790u: goto label_410790;
        case 0x410794u: goto label_410794;
        case 0x410798u: goto label_410798;
        case 0x41079cu: goto label_41079c;
        case 0x4107a0u: goto label_4107a0;
        case 0x4107a4u: goto label_4107a4;
        case 0x4107a8u: goto label_4107a8;
        case 0x4107acu: goto label_4107ac;
        case 0x4107b0u: goto label_4107b0;
        case 0x4107b4u: goto label_4107b4;
        case 0x4107b8u: goto label_4107b8;
        case 0x4107bcu: goto label_4107bc;
        case 0x4107c0u: goto label_4107c0;
        case 0x4107c4u: goto label_4107c4;
        case 0x4107c8u: goto label_4107c8;
        case 0x4107ccu: goto label_4107cc;
        case 0x4107d0u: goto label_4107d0;
        case 0x4107d4u: goto label_4107d4;
        case 0x4107d8u: goto label_4107d8;
        case 0x4107dcu: goto label_4107dc;
        case 0x4107e0u: goto label_4107e0;
        case 0x4107e4u: goto label_4107e4;
        case 0x4107e8u: goto label_4107e8;
        case 0x4107ecu: goto label_4107ec;
        case 0x4107f0u: goto label_4107f0;
        case 0x4107f4u: goto label_4107f4;
        case 0x4107f8u: goto label_4107f8;
        case 0x4107fcu: goto label_4107fc;
        case 0x410800u: goto label_410800;
        case 0x410804u: goto label_410804;
        case 0x410808u: goto label_410808;
        case 0x41080cu: goto label_41080c;
        case 0x410810u: goto label_410810;
        case 0x410814u: goto label_410814;
        case 0x410818u: goto label_410818;
        case 0x41081cu: goto label_41081c;
        case 0x410820u: goto label_410820;
        case 0x410824u: goto label_410824;
        case 0x410828u: goto label_410828;
        case 0x41082cu: goto label_41082c;
        case 0x410830u: goto label_410830;
        case 0x410834u: goto label_410834;
        case 0x410838u: goto label_410838;
        case 0x41083cu: goto label_41083c;
        case 0x410840u: goto label_410840;
        case 0x410844u: goto label_410844;
        case 0x410848u: goto label_410848;
        case 0x41084cu: goto label_41084c;
        case 0x410850u: goto label_410850;
        case 0x410854u: goto label_410854;
        case 0x410858u: goto label_410858;
        case 0x41085cu: goto label_41085c;
        case 0x410860u: goto label_410860;
        case 0x410864u: goto label_410864;
        case 0x410868u: goto label_410868;
        case 0x41086cu: goto label_41086c;
        case 0x410870u: goto label_410870;
        case 0x410874u: goto label_410874;
        case 0x410878u: goto label_410878;
        case 0x41087cu: goto label_41087c;
        case 0x410880u: goto label_410880;
        case 0x410884u: goto label_410884;
        case 0x410888u: goto label_410888;
        case 0x41088cu: goto label_41088c;
        case 0x410890u: goto label_410890;
        case 0x410894u: goto label_410894;
        case 0x410898u: goto label_410898;
        case 0x41089cu: goto label_41089c;
        case 0x4108a0u: goto label_4108a0;
        case 0x4108a4u: goto label_4108a4;
        case 0x4108a8u: goto label_4108a8;
        case 0x4108acu: goto label_4108ac;
        case 0x4108b0u: goto label_4108b0;
        case 0x4108b4u: goto label_4108b4;
        case 0x4108b8u: goto label_4108b8;
        case 0x4108bcu: goto label_4108bc;
        case 0x4108c0u: goto label_4108c0;
        case 0x4108c4u: goto label_4108c4;
        case 0x4108c8u: goto label_4108c8;
        case 0x4108ccu: goto label_4108cc;
        case 0x4108d0u: goto label_4108d0;
        case 0x4108d4u: goto label_4108d4;
        case 0x4108d8u: goto label_4108d8;
        case 0x4108dcu: goto label_4108dc;
        case 0x4108e0u: goto label_4108e0;
        case 0x4108e4u: goto label_4108e4;
        case 0x4108e8u: goto label_4108e8;
        case 0x4108ecu: goto label_4108ec;
        case 0x4108f0u: goto label_4108f0;
        case 0x4108f4u: goto label_4108f4;
        case 0x4108f8u: goto label_4108f8;
        case 0x4108fcu: goto label_4108fc;
        case 0x410900u: goto label_410900;
        case 0x410904u: goto label_410904;
        case 0x410908u: goto label_410908;
        case 0x41090cu: goto label_41090c;
        case 0x410910u: goto label_410910;
        case 0x410914u: goto label_410914;
        case 0x410918u: goto label_410918;
        case 0x41091cu: goto label_41091c;
        case 0x410920u: goto label_410920;
        case 0x410924u: goto label_410924;
        case 0x410928u: goto label_410928;
        case 0x41092cu: goto label_41092c;
        case 0x410930u: goto label_410930;
        case 0x410934u: goto label_410934;
        case 0x410938u: goto label_410938;
        case 0x41093cu: goto label_41093c;
        case 0x410940u: goto label_410940;
        case 0x410944u: goto label_410944;
        case 0x410948u: goto label_410948;
        case 0x41094cu: goto label_41094c;
        case 0x410950u: goto label_410950;
        case 0x410954u: goto label_410954;
        case 0x410958u: goto label_410958;
        case 0x41095cu: goto label_41095c;
        case 0x410960u: goto label_410960;
        case 0x410964u: goto label_410964;
        case 0x410968u: goto label_410968;
        case 0x41096cu: goto label_41096c;
        case 0x410970u: goto label_410970;
        case 0x410974u: goto label_410974;
        case 0x410978u: goto label_410978;
        case 0x41097cu: goto label_41097c;
        case 0x410980u: goto label_410980;
        case 0x410984u: goto label_410984;
        case 0x410988u: goto label_410988;
        case 0x41098cu: goto label_41098c;
        case 0x410990u: goto label_410990;
        case 0x410994u: goto label_410994;
        case 0x410998u: goto label_410998;
        case 0x41099cu: goto label_41099c;
        case 0x4109a0u: goto label_4109a0;
        case 0x4109a4u: goto label_4109a4;
        case 0x4109a8u: goto label_4109a8;
        case 0x4109acu: goto label_4109ac;
        case 0x4109b0u: goto label_4109b0;
        case 0x4109b4u: goto label_4109b4;
        case 0x4109b8u: goto label_4109b8;
        case 0x4109bcu: goto label_4109bc;
        case 0x4109c0u: goto label_4109c0;
        case 0x4109c4u: goto label_4109c4;
        case 0x4109c8u: goto label_4109c8;
        case 0x4109ccu: goto label_4109cc;
        case 0x4109d0u: goto label_4109d0;
        case 0x4109d4u: goto label_4109d4;
        case 0x4109d8u: goto label_4109d8;
        case 0x4109dcu: goto label_4109dc;
        case 0x4109e0u: goto label_4109e0;
        case 0x4109e4u: goto label_4109e4;
        case 0x4109e8u: goto label_4109e8;
        case 0x4109ecu: goto label_4109ec;
        case 0x4109f0u: goto label_4109f0;
        case 0x4109f4u: goto label_4109f4;
        case 0x4109f8u: goto label_4109f8;
        case 0x4109fcu: goto label_4109fc;
        case 0x410a00u: goto label_410a00;
        case 0x410a04u: goto label_410a04;
        case 0x410a08u: goto label_410a08;
        case 0x410a0cu: goto label_410a0c;
        case 0x410a10u: goto label_410a10;
        case 0x410a14u: goto label_410a14;
        case 0x410a18u: goto label_410a18;
        case 0x410a1cu: goto label_410a1c;
        case 0x410a20u: goto label_410a20;
        case 0x410a24u: goto label_410a24;
        case 0x410a28u: goto label_410a28;
        case 0x410a2cu: goto label_410a2c;
        case 0x410a30u: goto label_410a30;
        case 0x410a34u: goto label_410a34;
        case 0x410a38u: goto label_410a38;
        case 0x410a3cu: goto label_410a3c;
        case 0x410a40u: goto label_410a40;
        case 0x410a44u: goto label_410a44;
        case 0x410a48u: goto label_410a48;
        case 0x410a4cu: goto label_410a4c;
        default: break;
    }

    ctx->pc = 0x410648u;

label_410648:
    // 0x410648: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x410648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
label_41064c:
    // 0x41064c: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x41064cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_410650:
    // 0x410650: 0x7fb50290  sq          $s5, 0x290($sp)
    ctx->pc = 0x410650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 21));
label_410654:
    // 0x410654: 0x7fb002e0  sq          $s0, 0x2E0($sp)
    ctx->pc = 0x410654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 16));
label_410658:
    // 0x410658: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x410658u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41065c:
    // 0x41065c: 0x7fb70270  sq          $s7, 0x270($sp)
    ctx->pc = 0x41065cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 23));
label_410660:
    // 0x410660: 0x26b02174  addiu       $s0, $s5, 0x2174
    ctx->pc = 0x410660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 8564));
label_410664:
    // 0x410664: 0x7fb102d0  sq          $s1, 0x2D0($sp)
    ctx->pc = 0x410664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 17));
label_410668:
    // 0x410668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x410668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41066c:
    // 0x41066c: 0x7fb202c0  sq          $s2, 0x2C0($sp)
    ctx->pc = 0x41066cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 18));
label_410670:
    // 0x410670: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x410670u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_410674:
    // 0x410674: 0x7fb302b0  sq          $s3, 0x2B0($sp)
    ctx->pc = 0x410674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 19));
label_410678:
    // 0x410678: 0x7fb402a0  sq          $s4, 0x2A0($sp)
    ctx->pc = 0x410678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 20));
label_41067c:
    // 0x41067c: 0x7fb60280  sq          $s6, 0x280($sp)
    ctx->pc = 0x41067cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 22));
label_410680:
    // 0x410680: 0x7fbe0260  sq          $fp, 0x260($sp)
    ctx->pc = 0x410680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 30));
label_410684:
    // 0x410684: 0xffbf0250  sd          $ra, 0x250($sp)
    ctx->pc = 0x410684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 31));
label_410688:
    // 0x410688: 0xc10c4de  jal         func_431378
label_41068c:
    if (ctx->pc == 0x41068Cu) {
        ctx->pc = 0x41068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410688u;
        // 0x41068c: 0xa2a02187  sb          $zero, 0x2187($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 8583), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410690u;
        goto label_410690;
    }
    ctx->pc = 0x410688u;
    SET_GPR_U32(ctx, 31, 0x410690u);
    ctx->pc = 0x41068Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410688u;
    // 0x41068c: 0xa2a02187  sb          $zero, 0x2187($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 8583), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x410688u, 0x410690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410690u;
label_410690:
    // 0x410690: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x410690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_410694:
    // 0x410694: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x410694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_410698:
    // 0x410698: 0x24c68db0  addiu       $a2, $a2, -0x7250
    ctx->pc = 0x410698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938032));
label_41069c:
    // 0x41069c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41069cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4106a0:
    // 0x4106a0: 0xc10ca04  jal         func_432810
label_4106a4:
    if (ctx->pc == 0x4106A4u) {
        ctx->pc = 0x4106A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4106A0u;
        // 0x4106a4: 0x240500fe  addiu       $a1, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4106A8u;
        goto label_4106a8;
    }
    ctx->pc = 0x4106A0u;
    SET_GPR_U32(ctx, 31, 0x4106A8u);
    ctx->pc = 0x4106A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4106A0u;
    // 0x4106a4: 0x240500fe  addiu       $a1, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x4106A0u, 0x4106A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4106A8u;
label_4106a8:
    // 0x4106a8: 0x8ea3216c  lw          $v1, 0x216C($s5)
    ctx->pc = 0x4106a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8556)));
label_4106ac:
    // 0x4106ac: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_4106b0:
    if (ctx->pc == 0x4106B0u) {
        ctx->pc = 0x4106B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4106ACu;
        // 0x4106b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4106B4u;
        goto label_4106b4;
    }
    ctx->pc = 0x4106ACu;
    {
        const bool branch_taken_0x4106ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4106B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4106ACu;
        // 0x4106b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4106ac) {
            ctx->pc = 0x410718u;
            goto label_410718;
        }
    }
    ctx->pc = 0x4106B4u;
label_4106b4:
    // 0x4106b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4106b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4106b8:
    // 0x4106b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4106b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4106bc:
    // 0x4106bc: 0x8c44b788  lw          $a0, -0x4878($v0)
    ctx->pc = 0x4106bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948744)));
label_4106c0:
    // 0x4106c0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4106c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4106c4:
    // 0x4106c4: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x4106c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_4106c8:
    // 0x4106c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4106c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4106cc:
    // 0x4106cc: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x4106ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_4106d0:
    // 0x4106d0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4106d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4106d4:
    // 0x4106d4: 0x40f809  jalr        $v0
label_4106d8:
    if (ctx->pc == 0x4106D8u) {
        ctx->pc = 0x4106D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4106D4u;
        // 0x4106d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4106DCu;
        goto label_4106dc;
    }
    ctx->pc = 0x4106D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4106DCu);
        ctx->pc = 0x4106D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4106D4u;
        // 0x4106d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4106D4u, 0x4106DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4106DCu;
label_4106dc:
    // 0x4106dc: 0x24030087  addiu       $v1, $zero, 0x87
    ctx->pc = 0x4106dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_4106e0:
    // 0x4106e0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x4106e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_4106e4:
    // 0x4106e4: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x4106e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4106e8:
    // 0x4106e8: 0x3c04000a  lui         $a0, 0xA
    ctx->pc = 0x4106e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10 << 16));
label_4106ec:
    // 0x4106ec: 0xaea2216c  sw          $v0, 0x216C($s5)
    ctx->pc = 0x4106ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8556), GPR_U32(ctx, 2));
label_4106f0:
    // 0x4106f0: 0x3484f000  ori         $a0, $a0, 0xF000
    ctx->pc = 0x4106f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
label_4106f4:
    // 0x4106f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4106f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4106f8:
    // 0x4106f8: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_4106fc:
    if (ctx->pc == 0x4106FCu) {
        ctx->pc = 0x4106FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4106F8u;
        // 0x4106fc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x410700u;
        goto label_410700;
    }
    ctx->pc = 0x4106F8u;
    {
        const bool branch_taken_0x4106f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4106f8) {
            ctx->pc = 0x4106FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4106F8u;
            // 0x4106fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x410700u;
            goto label_410700;
        }
    }
    ctx->pc = 0x410700u;
label_410700:
    // 0x410700: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x410700u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_410704:
    // 0x410704: 0x1812  mflo        $v1
    ctx->pc = 0x410704u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_410708:
    // 0x410708: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x410708u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_41070c:
    // 0x41070c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x41070cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_410710:
    // 0x410710: 0xaea22170  sw          $v0, 0x2170($s5)
    ctx->pc = 0x410710u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8560), GPR_U32(ctx, 2));
label_410714:
    // 0x410714: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x410714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_410718:
    // 0x410718: 0x8ea52170  lw          $a1, 0x2170($s5)
    ctx->pc = 0x410718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8560)));
label_41071c:
    // 0x41071c: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x41071cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_410720:
    // 0x410720: 0xc061f4a  jal         func_187D28
label_410724:
    if (ctx->pc == 0x410724u) {
        ctx->pc = 0x410724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410720u;
        // 0x410724: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410728u;
        goto label_410728;
    }
    ctx->pc = 0x410720u;
    SET_GPR_U32(ctx, 31, 0x410728u);
    ctx->pc = 0x410724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410720u;
    // 0x410724: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x410720u, 0x410728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410728u;
label_410728:
    // 0x410728: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_41072c:
    if (ctx->pc == 0x41072Cu) {
        ctx->pc = 0x41072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410728u;
        // 0x41072c: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410730u;
        goto label_410730;
    }
    ctx->pc = 0x410728u;
    {
        const bool branch_taken_0x410728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410728u;
        // 0x41072c: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410728) {
            ctx->pc = 0x410738u;
            goto label_410738;
        }
    }
    ctx->pc = 0x410730u;
label_410730:
    // 0x410730: 0x100000ba  b           . + 4 + (0xBA << 2)
label_410734:
    if (ctx->pc == 0x410734u) {
        ctx->pc = 0x410734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410730u;
        // 0x410734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410738u;
        goto label_410738;
    }
    ctx->pc = 0x410730u;
    {
        const bool branch_taken_0x410730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410730u;
        // 0x410734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410730) {
            ctx->pc = 0x410A1Cu;
            goto label_410a1c;
        }
    }
    ctx->pc = 0x410738u;
label_410738:
    // 0x410738: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x410738u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_41073c:
    // 0x41073c: 0x8ec627e4  lw          $a2, 0x27E4($s6)
    ctx->pc = 0x41073cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_410740:
    // 0x410740: 0x8e25b9c8  lw          $a1, -0x4638($s1)
    ctx->pc = 0x410740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949320)));
label_410744:
    // 0x410744: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x410744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_410748:
    // 0x410748: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x410748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_41074c:
    // 0x41074c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x41074cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_410750:
    // 0x410750: 0x60f809  jalr        $v1
label_410754:
    if (ctx->pc == 0x410754u) {
        ctx->pc = 0x410754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410750u;
        // 0x410754: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410758u;
        goto label_410758;
    }
    ctx->pc = 0x410750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410758u);
        ctx->pc = 0x410754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410750u;
        // 0x410754: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410750u, 0x410758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410758u;
label_410758:
    // 0x410758: 0x8ecb27e4  lw          $t3, 0x27E4($s6)
    ctx->pc = 0x410758u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_41075c:
    // 0x41075c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41075cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_410760:
    // 0x410760: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x410760u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_410764:
    // 0x410764: 0x24a58cc8  addiu       $a1, $a1, -0x7338
    ctx->pc = 0x410764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937800));
label_410768:
    // 0x410768: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x410768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_41076c:
    // 0x41076c: 0x25088dc0  addiu       $t0, $t0, -0x7240
    ctx->pc = 0x41076cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938048));
label_410770:
    // 0x410770: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x410770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_410774:
    // 0x410774: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x410774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_410778:
    // 0x410778: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x410778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_41077c:
    // 0x41077c: 0x240900cd  addiu       $t1, $zero, 0xCD
    ctx->pc = 0x41077cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
label_410780:
    // 0x410780: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x410780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_410784:
    // 0x410784: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x410784u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410788:
    // 0x410788: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x410788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_41078c:
    // 0x41078c: 0x40f809  jalr        $v0
label_410790:
    if (ctx->pc == 0x410790u) {
        ctx->pc = 0x410790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41078Cu;
        // 0x410790: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410794u;
        goto label_410794;
    }
    ctx->pc = 0x41078Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410794u);
        ctx->pc = 0x410790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41078Cu;
        // 0x410790: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41078Cu, 0x410794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410794u;
label_410794:
    // 0x410794: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x410794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_410798:
    // 0x410798: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_41079c:
    if (ctx->pc == 0x41079Cu) {
        ctx->pc = 0x41079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410798u;
        // 0x41079c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4107A0u;
        goto label_4107a0;
    }
    ctx->pc = 0x410798u;
    {
        const bool branch_taken_0x410798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410798u;
        // 0x41079c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410798) {
            ctx->pc = 0x4107A8u;
            goto label_4107a8;
        }
    }
    ctx->pc = 0x4107A0u;
label_4107a0:
    // 0x4107a0: 0x24424370  addiu       $v0, $v0, 0x4370
    ctx->pc = 0x4107a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17264));
label_4107a4:
    // 0x4107a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4107a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4107a8:
    // 0x4107a8: 0x8e25b9c8  lw          $a1, -0x4638($s1)
    ctx->pc = 0x4107a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949320)));
label_4107ac:
    // 0x4107ac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x4107acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4107b0:
    // 0x4107b0: 0x8ea62170  lw          $a2, 0x2170($s5)
    ctx->pc = 0x4107b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8560)));
label_4107b4:
    // 0x4107b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4107b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4107b8:
    // 0x4107b8: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x4107b8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
label_4107bc:
    // 0x4107bc: 0xc0ce108  jal         func_338420
label_4107c0:
    if (ctx->pc == 0x4107C0u) {
        ctx->pc = 0x4107C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4107BCu;
        // 0x4107c0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4107C4u;
        goto label_4107c4;
    }
    ctx->pc = 0x4107BCu;
    SET_GPR_U32(ctx, 31, 0x4107C4u);
    ctx->pc = 0x4107C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4107BCu;
    // 0x4107c0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338420u, 0x4107BCu, 0x4107C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4107C4u;
label_4107c4:
    // 0x4107c4: 0x8ec827e4  lw          $t0, 0x27E4($s6)
    ctx->pc = 0x4107c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_4107c8:
    // 0x4107c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4107c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4107cc:
    // 0x4107cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4107ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4107d0:
    // 0x4107d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4107d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4107d4:
    // 0x4107d4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4107d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4107d8:
    // 0x4107d8: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x4107d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_4107dc:
    // 0x4107dc: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x4107dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_4107e0:
    // 0x4107e0: 0x40f809  jalr        $v0
label_4107e4:
    if (ctx->pc == 0x4107E4u) {
        ctx->pc = 0x4107E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4107E0u;
        // 0x4107e4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4107E8u;
        goto label_4107e8;
    }
    ctx->pc = 0x4107E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4107E8u);
        ctx->pc = 0x4107E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4107E0u;
        // 0x4107e4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4107E0u, 0x4107E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4107E8u;
label_4107e8:
    // 0x4107e8: 0x8ec827e4  lw          $t0, 0x27E4($s6)
    ctx->pc = 0x4107e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_4107ec:
    // 0x4107ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4107ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4107f0:
    // 0x4107f0: 0xaea22154  sw          $v0, 0x2154($s5)
    ctx->pc = 0x4107f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8532), GPR_U32(ctx, 2));
label_4107f4:
    // 0x4107f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4107f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4107f8:
    // 0x4107f8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4107f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4107fc:
    // 0x4107fc: 0x8e27b9c8  lw          $a3, -0x4638($s1)
    ctx->pc = 0x4107fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949320)));
label_410800:
    // 0x410800: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x410800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_410804:
    // 0x410804: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x410804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_410808:
    // 0x410808: 0x60f809  jalr        $v1
label_41080c:
    if (ctx->pc == 0x41080Cu) {
        ctx->pc = 0x41080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410808u;
        // 0x41080c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410810u;
        goto label_410810;
    }
    ctx->pc = 0x410808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410810u);
        ctx->pc = 0x41080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410808u;
        // 0x41080c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410808u, 0x410810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410810u;
label_410810:
    // 0x410810: 0x8ec627e4  lw          $a2, 0x27E4($s6)
    ctx->pc = 0x410810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_410814:
    // 0x410814: 0x8e25b9c8  lw          $a1, -0x4638($s1)
    ctx->pc = 0x410814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949320)));
label_410818:
    // 0x410818: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x410818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41081c:
    // 0x41081c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x41081cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_410820:
    // 0x410820: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x410820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_410824:
    // 0x410824: 0x60f809  jalr        $v1
label_410828:
    if (ctx->pc == 0x410828u) {
        ctx->pc = 0x410828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410824u;
        // 0x410828: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41082Cu;
        goto label_41082c;
    }
    ctx->pc = 0x410824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41082Cu);
        ctx->pc = 0x410828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410824u;
        // 0x410828: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410824u, 0x41082Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41082Cu;
label_41082c:
    // 0x41082c: 0x8ec627e4  lw          $a2, 0x27E4($s6)
    ctx->pc = 0x41082cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_410830:
    // 0x410830: 0x8e85b9b8  lw          $a1, -0x4648($s4)
    ctx->pc = 0x410830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949304)));
label_410834:
    // 0x410834: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x410834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_410838:
    // 0x410838: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x410838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_41083c:
    // 0x41083c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x41083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_410840:
    // 0x410840: 0x60f809  jalr        $v1
label_410844:
    if (ctx->pc == 0x410844u) {
        ctx->pc = 0x410844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410840u;
        // 0x410844: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410848u;
        goto label_410848;
    }
    ctx->pc = 0x410840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410848u);
        ctx->pc = 0x410844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410840u;
        // 0x410844: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410840u, 0x410848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410848u;
label_410848:
    // 0x410848: 0x8e42b788  lw          $v0, -0x4878($s2)
    ctx->pc = 0x410848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948744)));
label_41084c:
    // 0x41084c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41084cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_410850:
    // 0x410850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x410850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410854:
    // 0x410854: 0x8c470090  lw          $a3, 0x90($v0)
    ctx->pc = 0x410854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_410858:
    // 0x410858: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x410858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41085c:
    // 0x41085c: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x41085cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_410860:
    // 0x410860: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x410860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_410864:
    // 0x410864: 0x40f809  jalr        $v0
label_410868:
    if (ctx->pc == 0x410868u) {
        ctx->pc = 0x410868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410864u;
        // 0x410868: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41086Cu;
        goto label_41086c;
    }
    ctx->pc = 0x410864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41086Cu);
        ctx->pc = 0x410868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410864u;
        // 0x410868: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410864u, 0x41086Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41086Cu;
label_41086c:
    // 0x41086c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x41086cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_410870:
    // 0x410870: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x410870u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_410874:
    // 0x410874: 0x8c625340  lw          $v0, 0x5340($v1)
    ctx->pc = 0x410874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21312)));
label_410878:
    // 0x410878: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x410878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_41087c:
    // 0x41087c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41087cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410880:
    // 0x410880: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x410880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_410884:
    // 0x410884: 0x8c470040  lw          $a3, 0x40($v0)
    ctx->pc = 0x410884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_410888:
    // 0x410888: 0xc055130  jal         func_1544C0
label_41088c:
    if (ctx->pc == 0x41088Cu) {
        ctx->pc = 0x41088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410888u;
        // 0x41088c: 0x8c46003c  lw          $a2, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410890u;
        goto label_410890;
    }
    ctx->pc = 0x410888u;
    SET_GPR_U32(ctx, 31, 0x410890u);
    ctx->pc = 0x41088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410888u;
    // 0x41088c: 0x8c46003c  lw          $a2, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1544C0u, 0x410888u, 0x410890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410890u;
label_410890:
    // 0x410890: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x410890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_410894:
    // 0x410894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x410894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410898:
    // 0x410898: 0xc065f7c  jal         func_197DF0
label_41089c:
    if (ctx->pc == 0x41089Cu) {
        ctx->pc = 0x41089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410898u;
        // 0x41089c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4108A0u;
        goto label_4108a0;
    }
    ctx->pc = 0x410898u;
    SET_GPR_U32(ctx, 31, 0x4108A0u);
    ctx->pc = 0x41089Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410898u;
    // 0x41089c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197DF0u, 0x410898u, 0x4108A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4108A0u;
label_4108a0:
    // 0x4108a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4108a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4108a4:
    // 0x4108a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4108a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4108a8:
    // 0x4108a8: 0xc11fc7e  jal         func_47F1F8
label_4108ac:
    if (ctx->pc == 0x4108ACu) {
        ctx->pc = 0x4108ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4108A8u;
        // 0x4108ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4108B0u;
        goto label_4108b0;
    }
    ctx->pc = 0x4108A8u;
    SET_GPR_U32(ctx, 31, 0x4108B0u);
    ctx->pc = 0x4108ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4108A8u;
    // 0x4108ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F1F8u, 0x4108A8u, 0x4108B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4108B0u;
label_4108b0:
    // 0x4108b0: 0x8ec627e4  lw          $a2, 0x27E4($s6)
    ctx->pc = 0x4108b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_4108b4:
    // 0x4108b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4108b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4108b8:
    // 0x4108b8: 0x8ea52154  lw          $a1, 0x2154($s5)
    ctx->pc = 0x4108b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8532)));
label_4108bc:
    // 0x4108bc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4108bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4108c0:
    // 0x4108c0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x4108c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_4108c4:
    // 0x4108c4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x4108c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_4108c8:
    // 0x4108c8: 0x60f809  jalr        $v1
label_4108cc:
    if (ctx->pc == 0x4108CCu) {
        ctx->pc = 0x4108CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4108C8u;
        // 0x4108cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4108D0u;
        goto label_4108d0;
    }
    ctx->pc = 0x4108C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4108D0u);
        ctx->pc = 0x4108CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4108C8u;
        // 0x4108cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4108C8u, 0x4108D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4108D0u;
label_4108d0:
    // 0x4108d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4108d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4108d4:
    // 0x4108d4: 0xc104294  jal         func_410A50
label_4108d8:
    if (ctx->pc == 0x4108D8u) {
        ctx->pc = 0x4108D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4108D4u;
        // 0x4108d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4108DCu;
        goto label_4108dc;
    }
    ctx->pc = 0x4108D4u;
    SET_GPR_U32(ctx, 31, 0x4108DCu);
    ctx->pc = 0x4108D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4108D4u;
    // 0x4108d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A50u, 0x4108D4u, 0x4108DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4108DCu;
label_4108dc:
    // 0x4108dc: 0x8ec627e4  lw          $a2, 0x27E4($s6)
    ctx->pc = 0x4108dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_4108e0:
    // 0x4108e0: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x4108e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_4108e4:
    // 0x4108e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4108e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4108e8:
    // 0x4108e8: 0x8ea52154  lw          $a1, 0x2154($s5)
    ctx->pc = 0x4108e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8532)));
label_4108ec:
    // 0x4108ec: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x4108ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_4108f0:
    // 0x4108f0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x4108f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_4108f4:
    // 0x4108f4: 0x60f809  jalr        $v1
label_4108f8:
    if (ctx->pc == 0x4108F8u) {
        ctx->pc = 0x4108F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4108F4u;
        // 0x4108f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4108FCu;
        goto label_4108fc;
    }
    ctx->pc = 0x4108F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4108FCu);
        ctx->pc = 0x4108F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4108F4u;
        // 0x4108f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4108F4u, 0x4108FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4108FCu;
label_4108fc:
    // 0x4108fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4108fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410900:
    // 0x410900: 0xc11fcaa  jal         func_47F2A8
label_410904:
    if (ctx->pc == 0x410904u) {
        ctx->pc = 0x410904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410900u;
        // 0x410904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410908u;
        goto label_410908;
    }
    ctx->pc = 0x410900u;
    SET_GPR_U32(ctx, 31, 0x410908u);
    ctx->pc = 0x410904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410900u;
    // 0x410904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F2A8u, 0x410900u, 0x410908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410908u;
label_410908:
    // 0x410908: 0xc0551c6  jal         func_154718
label_41090c:
    if (ctx->pc == 0x41090Cu) {
        ctx->pc = 0x41090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410908u;
        // 0x41090c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410910u;
        goto label_410910;
    }
    ctx->pc = 0x410908u;
    SET_GPR_U32(ctx, 31, 0x410910u);
    ctx->pc = 0x41090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410908u;
    // 0x41090c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154718u, 0x410908u, 0x410910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410910u;
label_410910:
    // 0x410910: 0x8e43b788  lw          $v1, -0x4878($s2)
    ctx->pc = 0x410910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948744)));
label_410914:
    // 0x410914: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x410914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_410918:
    // 0x410918: 0x8c660090  lw          $a2, 0x90($v1)
    ctx->pc = 0x410918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_41091c:
    // 0x41091c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_410920:
    // 0x410920: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x410920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_410924:
    // 0x410924: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x410924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_410928:
    // 0x410928: 0x60f809  jalr        $v1
label_41092c:
    if (ctx->pc == 0x41092Cu) {
        ctx->pc = 0x41092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410928u;
        // 0x41092c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410930u;
        goto label_410930;
    }
    ctx->pc = 0x410928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410930u);
        ctx->pc = 0x41092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410928u;
        // 0x41092c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410928u, 0x410930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410930u;
label_410930:
    // 0x410930: 0x8ec627e4  lw          $a2, 0x27E4($s6)
    ctx->pc = 0x410930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_410934:
    // 0x410934: 0x8e85b9b8  lw          $a1, -0x4648($s4)
    ctx->pc = 0x410934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949304)));
label_410938:
    // 0x410938: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x410938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41093c:
    // 0x41093c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x41093cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_410940:
    // 0x410940: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x410940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_410944:
    // 0x410944: 0x60f809  jalr        $v1
label_410948:
    if (ctx->pc == 0x410948u) {
        ctx->pc = 0x410948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410944u;
        // 0x410948: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41094Cu;
        goto label_41094c;
    }
    ctx->pc = 0x410944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41094Cu);
        ctx->pc = 0x410948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410944u;
        // 0x410948: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410944u, 0x41094Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41094Cu;
label_41094c:
    // 0x41094c: 0x8ea4215c  lw          $a0, 0x215C($s5)
    ctx->pc = 0x41094cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8540)));
label_410950:
    // 0x410950: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x410950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_410954:
    // 0x410954: 0x16e0002d  bnez        $s7, . + 4 + (0x2D << 2)
label_410958:
    if (ctx->pc == 0x410958u) {
        ctx->pc = 0x410958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410954u;
        // 0x410958: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41095Cu;
        goto label_41095c;
    }
    ctx->pc = 0x410954u;
    {
        const bool branch_taken_0x410954 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x410958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410954u;
        // 0x410958: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410954) {
            ctx->pc = 0x410A0Cu;
            goto label_410a0c;
        }
    }
    ctx->pc = 0x41095Cu;
label_41095c:
    // 0x41095c: 0x8ea22164  lw          $v0, 0x2164($s5)
    ctx->pc = 0x41095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8548)));
label_410960:
    // 0x410960: 0x1840002a  blez        $v0, . + 4 + (0x2A << 2)
label_410964:
    if (ctx->pc == 0x410964u) {
        ctx->pc = 0x410964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410960u;
        // 0x410964: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410968u;
        goto label_410968;
    }
    ctx->pc = 0x410960u;
    {
        const bool branch_taken_0x410960 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x410964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410960u;
        // 0x410964: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410960) {
            ctx->pc = 0x410A0Cu;
            goto label_410a0c;
        }
    }
    ctx->pc = 0x410968u;
label_410968:
    // 0x410968: 0x27b10140  addiu       $s1, $sp, 0x140
    ctx->pc = 0x410968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_41096c:
    // 0x41096c: 0x241e001c  addiu       $fp, $zero, 0x1C
    ctx->pc = 0x41096cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_410970:
    // 0x410970: 0x26b61210  addiu       $s6, $s5, 0x1210
    ctx->pc = 0x410970u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4624));
label_410974:
    // 0x410974: 0x26b41214  addiu       $s4, $s5, 0x1214
    ctx->pc = 0x410974u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 4628));
label_410978:
    // 0x410978: 0x24170082  addiu       $s7, $zero, 0x82
    ctx->pc = 0x410978u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_41097c:
    // 0x41097c: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x41097cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_410980:
    // 0x410980: 0x3c130004  lui         $s3, 0x4
    ctx->pc = 0x410980u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4 << 16));
label_410984:
    // 0x410984: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x410984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_410988:
    // 0x410988: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x410988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_41098c:
    // 0x41098c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41098cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410990:
    // 0x410990: 0x24468df0  addiu       $a2, $v0, -0x7210
    ctx->pc = 0x410990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938096));
label_410994:
    // 0x410994: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x410994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_410998:
    // 0x410998: 0x26a72174  addiu       $a3, $s5, 0x2174
    ctx->pc = 0x410998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 8564));
label_41099c:
    // 0x41099c: 0xc10ca04  jal         func_432810
label_4109a0:
    if (ctx->pc == 0x4109A0u) {
        ctx->pc = 0x4109A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41099Cu;
        // 0x4109a0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4109A4u;
        goto label_4109a4;
    }
    ctx->pc = 0x41099Cu;
    SET_GPR_U32(ctx, 31, 0x4109A4u);
    ctx->pc = 0x4109A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41099Cu;
    // 0x4109a0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x41099Cu, 0x4109A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4109A4u;
label_4109a4:
    // 0x4109a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4109a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4109a8:
    // 0x4109a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4109a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4109ac:
    // 0x4109ac: 0x8c44b788  lw          $a0, -0x4878($v0)
    ctx->pc = 0x4109acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948744)));
label_4109b0:
    // 0x4109b0: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x4109b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_4109b4:
    // 0x4109b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4109b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4109b8:
    // 0x4109b8: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x4109b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_4109bc:
    // 0x4109bc: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4109bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4109c0:
    // 0x4109c0: 0x40f809  jalr        $v0
label_4109c4:
    if (ctx->pc == 0x4109C4u) {
        ctx->pc = 0x4109C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4109C0u;
        // 0x4109c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4109C8u;
        goto label_4109c8;
    }
    ctx->pc = 0x4109C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4109C8u);
        ctx->pc = 0x4109C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4109C0u;
        // 0x4109c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4109C0u, 0x4109C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4109C8u;
label_4109c8:
    // 0x4109c8: 0x571818  mult        $v1, $v0, $s7
    ctx->pc = 0x4109c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4109cc:
    // 0x4109cc: 0x21e2018  mult        $a0, $s0, $fp
    ctx->pc = 0x4109ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4109d0:
    // 0x4109d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4109d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4109d4:
    // 0x4109d4: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x4109d4u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4109d8:
    // 0x4109d8: 0x2c43021  addu        $a2, $s6, $a0
    ctx->pc = 0x4109d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_4109dc:
    // 0x4109dc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4109dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4109e0:
    // 0x4109e0: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x4109e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_4109e4:
    // 0x4109e4: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_4109e8:
    if (ctx->pc == 0x4109E8u) {
        ctx->pc = 0x4109E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4109E4u;
        // 0x4109e8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4109ECu;
        goto label_4109ec;
    }
    ctx->pc = 0x4109E4u;
    {
        const bool branch_taken_0x4109e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4109e4) {
            ctx->pc = 0x4109E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4109E4u;
            // 0x4109e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4109ECu;
            goto label_4109ec;
        }
    }
    ctx->pc = 0x4109ECu;
label_4109ec:
    // 0x4109ec: 0x1812  mflo        $v1
    ctx->pc = 0x4109ecu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4109f0:
    // 0x4109f0: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x4109f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4109f4:
    // 0x4109f4: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x4109f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4109f8:
    // 0x4109f8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4109f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4109fc:
    // 0x4109fc: 0x8ea22164  lw          $v0, 0x2164($s5)
    ctx->pc = 0x4109fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8548)));
label_410a00:
    // 0x410a00: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x410a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_410a04:
    // 0x410a04: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_410a08:
    if (ctx->pc == 0x410A08u) {
        ctx->pc = 0x410A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A04u;
        // 0x410a08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410A0Cu;
        goto label_410a0c;
    }
    ctx->pc = 0x410A04u;
    {
        const bool branch_taken_0x410a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x410A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A04u;
        // 0x410a08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410a04) {
            ctx->pc = 0x410988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410988;
        }
    }
    ctx->pc = 0x410A0Cu;
label_410a0c:
    // 0x410a0c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x410a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_410a10:
    // 0x410a10: 0xc055168  jal         func_1545A0
label_410a14:
    if (ctx->pc == 0x410A14u) {
        ctx->pc = 0x410A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A10u;
        // 0x410a14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410A18u;
        goto label_410a18;
    }
    ctx->pc = 0x410A10u;
    SET_GPR_U32(ctx, 31, 0x410A18u);
    ctx->pc = 0x410A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410A10u;
    // 0x410a14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1545A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1545A0u, 0x410A10u, 0x410A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410A18u;
label_410a18:
    // 0x410a18: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x410a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_410a1c:
    // 0x410a1c: 0x7bb002e0  lq          $s0, 0x2E0($sp)
    ctx->pc = 0x410a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_410a20:
    // 0x410a20: 0x7bb102d0  lq          $s1, 0x2D0($sp)
    ctx->pc = 0x410a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_410a24:
    // 0x410a24: 0x7bb202c0  lq          $s2, 0x2C0($sp)
    ctx->pc = 0x410a24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_410a28:
    // 0x410a28: 0x7bb302b0  lq          $s3, 0x2B0($sp)
    ctx->pc = 0x410a28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_410a2c:
    // 0x410a2c: 0x7bb402a0  lq          $s4, 0x2A0($sp)
    ctx->pc = 0x410a2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_410a30:
    // 0x410a30: 0x7bb50290  lq          $s5, 0x290($sp)
    ctx->pc = 0x410a30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_410a34:
    // 0x410a34: 0x7bb60280  lq          $s6, 0x280($sp)
    ctx->pc = 0x410a34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_410a38:
    // 0x410a38: 0x7bb70270  lq          $s7, 0x270($sp)
    ctx->pc = 0x410a38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_410a3c:
    // 0x410a3c: 0x7bbe0260  lq          $fp, 0x260($sp)
    ctx->pc = 0x410a3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_410a40:
    // 0x410a40: 0xdfbf0250  ld          $ra, 0x250($sp)
    ctx->pc = 0x410a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 592)));
label_410a44:
    // 0x410a44: 0x3e00008  jr          $ra
label_410a48:
    if (ctx->pc == 0x410A48u) {
        ctx->pc = 0x410A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A44u;
        // 0x410a48: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410A4Cu;
        goto label_410a4c;
    }
    ctx->pc = 0x410A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A44u;
        // 0x410a48: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x410A4Cu;
label_410a4c:
    // 0x410a4c: 0x0  nop
    ctx->pc = 0x410a4cu;
    // NOP
    ctx->pc = 0x410a50u;
}
