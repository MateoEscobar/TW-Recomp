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

// Function: sub_002625A8
// Address: 0x2625a8 - 0x2628c0
void sub_002625A8_0x2625a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002625A8_0x2625a8");
#endif

    switch (ctx->pc) {
        case 0x2625a8u: goto label_2625a8;
        case 0x2625acu: goto label_2625ac;
        case 0x2625b0u: goto label_2625b0;
        case 0x2625b4u: goto label_2625b4;
        case 0x2625b8u: goto label_2625b8;
        case 0x2625bcu: goto label_2625bc;
        case 0x2625c0u: goto label_2625c0;
        case 0x2625c4u: goto label_2625c4;
        case 0x2625c8u: goto label_2625c8;
        case 0x2625ccu: goto label_2625cc;
        case 0x2625d0u: goto label_2625d0;
        case 0x2625d4u: goto label_2625d4;
        case 0x2625d8u: goto label_2625d8;
        case 0x2625dcu: goto label_2625dc;
        case 0x2625e0u: goto label_2625e0;
        case 0x2625e4u: goto label_2625e4;
        case 0x2625e8u: goto label_2625e8;
        case 0x2625ecu: goto label_2625ec;
        case 0x2625f0u: goto label_2625f0;
        case 0x2625f4u: goto label_2625f4;
        case 0x2625f8u: goto label_2625f8;
        case 0x2625fcu: goto label_2625fc;
        case 0x262600u: goto label_262600;
        case 0x262604u: goto label_262604;
        case 0x262608u: goto label_262608;
        case 0x26260cu: goto label_26260c;
        case 0x262610u: goto label_262610;
        case 0x262614u: goto label_262614;
        case 0x262618u: goto label_262618;
        case 0x26261cu: goto label_26261c;
        case 0x262620u: goto label_262620;
        case 0x262624u: goto label_262624;
        case 0x262628u: goto label_262628;
        case 0x26262cu: goto label_26262c;
        case 0x262630u: goto label_262630;
        case 0x262634u: goto label_262634;
        case 0x262638u: goto label_262638;
        case 0x26263cu: goto label_26263c;
        case 0x262640u: goto label_262640;
        case 0x262644u: goto label_262644;
        case 0x262648u: goto label_262648;
        case 0x26264cu: goto label_26264c;
        case 0x262650u: goto label_262650;
        case 0x262654u: goto label_262654;
        case 0x262658u: goto label_262658;
        case 0x26265cu: goto label_26265c;
        case 0x262660u: goto label_262660;
        case 0x262664u: goto label_262664;
        case 0x262668u: goto label_262668;
        case 0x26266cu: goto label_26266c;
        case 0x262670u: goto label_262670;
        case 0x262674u: goto label_262674;
        case 0x262678u: goto label_262678;
        case 0x26267cu: goto label_26267c;
        case 0x262680u: goto label_262680;
        case 0x262684u: goto label_262684;
        case 0x262688u: goto label_262688;
        case 0x26268cu: goto label_26268c;
        case 0x262690u: goto label_262690;
        case 0x262694u: goto label_262694;
        case 0x262698u: goto label_262698;
        case 0x26269cu: goto label_26269c;
        case 0x2626a0u: goto label_2626a0;
        case 0x2626a4u: goto label_2626a4;
        case 0x2626a8u: goto label_2626a8;
        case 0x2626acu: goto label_2626ac;
        case 0x2626b0u: goto label_2626b0;
        case 0x2626b4u: goto label_2626b4;
        case 0x2626b8u: goto label_2626b8;
        case 0x2626bcu: goto label_2626bc;
        case 0x2626c0u: goto label_2626c0;
        case 0x2626c4u: goto label_2626c4;
        case 0x2626c8u: goto label_2626c8;
        case 0x2626ccu: goto label_2626cc;
        case 0x2626d0u: goto label_2626d0;
        case 0x2626d4u: goto label_2626d4;
        case 0x2626d8u: goto label_2626d8;
        case 0x2626dcu: goto label_2626dc;
        case 0x2626e0u: goto label_2626e0;
        case 0x2626e4u: goto label_2626e4;
        case 0x2626e8u: goto label_2626e8;
        case 0x2626ecu: goto label_2626ec;
        case 0x2626f0u: goto label_2626f0;
        case 0x2626f4u: goto label_2626f4;
        case 0x2626f8u: goto label_2626f8;
        case 0x2626fcu: goto label_2626fc;
        case 0x262700u: goto label_262700;
        case 0x262704u: goto label_262704;
        case 0x262708u: goto label_262708;
        case 0x26270cu: goto label_26270c;
        case 0x262710u: goto label_262710;
        case 0x262714u: goto label_262714;
        case 0x262718u: goto label_262718;
        case 0x26271cu: goto label_26271c;
        case 0x262720u: goto label_262720;
        case 0x262724u: goto label_262724;
        case 0x262728u: goto label_262728;
        case 0x26272cu: goto label_26272c;
        case 0x262730u: goto label_262730;
        case 0x262734u: goto label_262734;
        case 0x262738u: goto label_262738;
        case 0x26273cu: goto label_26273c;
        case 0x262740u: goto label_262740;
        case 0x262744u: goto label_262744;
        case 0x262748u: goto label_262748;
        case 0x26274cu: goto label_26274c;
        case 0x262750u: goto label_262750;
        case 0x262754u: goto label_262754;
        case 0x262758u: goto label_262758;
        case 0x26275cu: goto label_26275c;
        case 0x262760u: goto label_262760;
        case 0x262764u: goto label_262764;
        case 0x262768u: goto label_262768;
        case 0x26276cu: goto label_26276c;
        case 0x262770u: goto label_262770;
        case 0x262774u: goto label_262774;
        case 0x262778u: goto label_262778;
        case 0x26277cu: goto label_26277c;
        case 0x262780u: goto label_262780;
        case 0x262784u: goto label_262784;
        case 0x262788u: goto label_262788;
        case 0x26278cu: goto label_26278c;
        case 0x262790u: goto label_262790;
        case 0x262794u: goto label_262794;
        case 0x262798u: goto label_262798;
        case 0x26279cu: goto label_26279c;
        case 0x2627a0u: goto label_2627a0;
        case 0x2627a4u: goto label_2627a4;
        case 0x2627a8u: goto label_2627a8;
        case 0x2627acu: goto label_2627ac;
        case 0x2627b0u: goto label_2627b0;
        case 0x2627b4u: goto label_2627b4;
        case 0x2627b8u: goto label_2627b8;
        case 0x2627bcu: goto label_2627bc;
        case 0x2627c0u: goto label_2627c0;
        case 0x2627c4u: goto label_2627c4;
        case 0x2627c8u: goto label_2627c8;
        case 0x2627ccu: goto label_2627cc;
        case 0x2627d0u: goto label_2627d0;
        case 0x2627d4u: goto label_2627d4;
        case 0x2627d8u: goto label_2627d8;
        case 0x2627dcu: goto label_2627dc;
        case 0x2627e0u: goto label_2627e0;
        case 0x2627e4u: goto label_2627e4;
        case 0x2627e8u: goto label_2627e8;
        case 0x2627ecu: goto label_2627ec;
        case 0x2627f0u: goto label_2627f0;
        case 0x2627f4u: goto label_2627f4;
        case 0x2627f8u: goto label_2627f8;
        case 0x2627fcu: goto label_2627fc;
        case 0x262800u: goto label_262800;
        case 0x262804u: goto label_262804;
        case 0x262808u: goto label_262808;
        case 0x26280cu: goto label_26280c;
        case 0x262810u: goto label_262810;
        case 0x262814u: goto label_262814;
        case 0x262818u: goto label_262818;
        case 0x26281cu: goto label_26281c;
        case 0x262820u: goto label_262820;
        case 0x262824u: goto label_262824;
        case 0x262828u: goto label_262828;
        case 0x26282cu: goto label_26282c;
        case 0x262830u: goto label_262830;
        case 0x262834u: goto label_262834;
        case 0x262838u: goto label_262838;
        case 0x26283cu: goto label_26283c;
        case 0x262840u: goto label_262840;
        case 0x262844u: goto label_262844;
        case 0x262848u: goto label_262848;
        case 0x26284cu: goto label_26284c;
        case 0x262850u: goto label_262850;
        case 0x262854u: goto label_262854;
        case 0x262858u: goto label_262858;
        case 0x26285cu: goto label_26285c;
        case 0x262860u: goto label_262860;
        case 0x262864u: goto label_262864;
        case 0x262868u: goto label_262868;
        case 0x26286cu: goto label_26286c;
        case 0x262870u: goto label_262870;
        case 0x262874u: goto label_262874;
        case 0x262878u: goto label_262878;
        case 0x26287cu: goto label_26287c;
        case 0x262880u: goto label_262880;
        case 0x262884u: goto label_262884;
        case 0x262888u: goto label_262888;
        case 0x26288cu: goto label_26288c;
        case 0x262890u: goto label_262890;
        case 0x262894u: goto label_262894;
        case 0x262898u: goto label_262898;
        case 0x26289cu: goto label_26289c;
        case 0x2628a0u: goto label_2628a0;
        case 0x2628a4u: goto label_2628a4;
        case 0x2628a8u: goto label_2628a8;
        case 0x2628acu: goto label_2628ac;
        case 0x2628b0u: goto label_2628b0;
        case 0x2628b4u: goto label_2628b4;
        case 0x2628b8u: goto label_2628b8;
        case 0x2628bcu: goto label_2628bc;
        default: break;
    }

    ctx->pc = 0x2625a8u;

label_2625a8:
    // 0x2625a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2625a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2625ac:
    // 0x2625ac: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2625acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2625b0:
    // 0x2625b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2625b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2625b4:
    // 0x2625b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2625b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2625b8:
    // 0x2625b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2625b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2625bc:
    // 0x2625bc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2625bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2625c0:
    // 0x2625c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2625c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2625c4:
    // 0x2625c4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2625c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2625c8:
    // 0x2625c8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2625c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_2625cc:
    // 0x2625cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2625ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2625d0:
    // 0x2625d0: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x2625d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2625d4:
    // 0x2625d4: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2625d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2625d8:
    // 0x2625d8: 0xc089b98  jal         func_226E60
label_2625dc:
    if (ctx->pc == 0x2625DCu) {
        ctx->pc = 0x2625DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625D8u;
        // 0x2625dc: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2625E0u;
        goto label_2625e0;
    }
    ctx->pc = 0x2625D8u;
    SET_GPR_U32(ctx, 31, 0x2625E0u);
    ctx->pc = 0x2625DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2625D8u;
    // 0x2625dc: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x2625D8u, 0x2625E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625E0u;
label_2625e0:
    // 0x2625e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2625e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2625e4:
    // 0x2625e4: 0xc088ee6  jal         func_223B98
label_2625e8:
    if (ctx->pc == 0x2625E8u) {
        ctx->pc = 0x2625E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625E4u;
        // 0x2625e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2625ECu;
        goto label_2625ec;
    }
    ctx->pc = 0x2625E4u;
    SET_GPR_U32(ctx, 31, 0x2625ECu);
    ctx->pc = 0x2625E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2625E4u;
    // 0x2625e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x2625E4u, 0x2625ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625ECu;
label_2625ec:
    // 0x2625ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2625f0:
    if (ctx->pc == 0x2625F0u) {
        ctx->pc = 0x2625F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625ECu;
        // 0x2625f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2625F4u;
        goto label_2625f4;
    }
    ctx->pc = 0x2625ECu;
    {
        const bool branch_taken_0x2625ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2625F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625ECu;
        // 0x2625f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625ec) {
            ctx->pc = 0x262614u;
            goto label_262614;
        }
    }
    ctx->pc = 0x2625F4u;
label_2625f4:
    // 0x2625f4: 0xc095018  jal         func_254060
label_2625f8:
    if (ctx->pc == 0x2625F8u) {
        ctx->pc = 0x2625F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625F4u;
        // 0x2625f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2625FCu;
        goto label_2625fc;
    }
    ctx->pc = 0x2625F4u;
    SET_GPR_U32(ctx, 31, 0x2625FCu);
    ctx->pc = 0x2625F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2625F4u;
    // 0x2625f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x2625F4u, 0x2625FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625FCu;
label_2625fc:
    // 0x2625fc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2625fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_262600:
    // 0x262600: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_262604:
    if (ctx->pc == 0x262604u) {
        ctx->pc = 0x262604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262600u;
        // 0x262604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262608u;
        goto label_262608;
    }
    ctx->pc = 0x262600u;
    {
        const bool branch_taken_0x262600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x262604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262600u;
        // 0x262604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262600) {
            ctx->pc = 0x262614u;
            goto label_262614;
        }
    }
    ctx->pc = 0x262608u;
label_262608:
    // 0x262608: 0xc094fca  jal         func_253F28
label_26260c:
    if (ctx->pc == 0x26260Cu) {
        ctx->pc = 0x26260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262608u;
        // 0x26260c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262610u;
        goto label_262610;
    }
    ctx->pc = 0x262608u;
    SET_GPR_U32(ctx, 31, 0x262610u);
    ctx->pc = 0x26260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262608u;
    // 0x26260c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x262608u, 0x262610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262610u;
label_262610:
    // 0x262610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_262614:
    // 0x262614: 0xc095142  jal         func_254508
label_262618:
    if (ctx->pc == 0x262618u) {
        ctx->pc = 0x262618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262614u;
        // 0x262618: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26261Cu;
        goto label_26261c;
    }
    ctx->pc = 0x262614u;
    SET_GPR_U32(ctx, 31, 0x26261Cu);
    ctx->pc = 0x262618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262614u;
    // 0x262618: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x262614u, 0x26261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26261Cu;
label_26261c:
    // 0x26261c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_262620:
    if (ctx->pc == 0x262620u) {
        ctx->pc = 0x262620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26261Cu;
        // 0x262620: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x262624u;
        goto label_262624;
    }
    ctx->pc = 0x26261Cu;
    {
        const bool branch_taken_0x26261c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x262620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26261Cu;
        // 0x262620: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26261c) {
            ctx->pc = 0x262638u;
            goto label_262638;
        }
    }
    ctx->pc = 0x262624u;
label_262624:
    // 0x262624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_262628:
    // 0x262628: 0xc08a658  jal         func_229960
label_26262c:
    if (ctx->pc == 0x26262Cu) {
        ctx->pc = 0x26262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262628u;
        // 0x26262c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262630u;
        goto label_262630;
    }
    ctx->pc = 0x262628u;
    SET_GPR_U32(ctx, 31, 0x262630u);
    ctx->pc = 0x26262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262628u;
    // 0x26262c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x262628u, 0x262630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262630u;
label_262630:
    // 0x262630: 0x10000003  b           . + 4 + (0x3 << 2)
label_262634:
    if (ctx->pc == 0x262634u) {
        ctx->pc = 0x262634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262630u;
        // 0x262634: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x262638u;
        goto label_262638;
    }
    ctx->pc = 0x262630u;
    {
        const bool branch_taken_0x262630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262630u;
        // 0x262634: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262630) {
            ctx->pc = 0x262640u;
            goto label_262640;
        }
    }
    ctx->pc = 0x262638u;
label_262638:
    // 0x262638: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x262638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_26263c:
    // 0x26263c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26263cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_262640:
    // 0x262640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_262644:
    // 0x262644: 0xc095128  jal         func_2544A0
label_262648:
    if (ctx->pc == 0x262648u) {
        ctx->pc = 0x262648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262644u;
        // 0x262648: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26264Cu;
        goto label_26264c;
    }
    ctx->pc = 0x262644u;
    SET_GPR_U32(ctx, 31, 0x26264Cu);
    ctx->pc = 0x262648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262644u;
    // 0x262648: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x262644u, 0x26264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26264Cu;
label_26264c:
    // 0x26264c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26264cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_262650:
    // 0x262650: 0xc040596  jal         func_101658
label_262654:
    if (ctx->pc == 0x262654u) {
        ctx->pc = 0x262654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262650u;
        // 0x262654: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262658u;
        goto label_262658;
    }
    ctx->pc = 0x262650u;
    SET_GPR_U32(ctx, 31, 0x262658u);
    ctx->pc = 0x262654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262650u;
    // 0x262654: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x262650u, 0x262658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262658u;
label_262658:
    // 0x262658: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_26265c:
    if (ctx->pc == 0x26265Cu) {
        ctx->pc = 0x26265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262658u;
        // 0x26265c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x262660u;
        goto label_262660;
    }
    ctx->pc = 0x262658u;
    {
        const bool branch_taken_0x262658 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262658u;
        // 0x26265c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262658) {
            ctx->pc = 0x2626ECu;
            goto label_2626ec;
        }
    }
    ctx->pc = 0x262660u;
label_262660:
    // 0x262660: 0x4616a836  c.le.s      $f21, $f22
    ctx->pc = 0x262660u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_262664:
    // 0x262664: 0x0  nop
    ctx->pc = 0x262664u;
    // NOP
label_262668:
    // 0x262668: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_26266c:
    if (ctx->pc == 0x26266Cu) {
        ctx->pc = 0x26266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262668u;
        // 0x26266c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262670u;
        goto label_262670;
    }
    ctx->pc = 0x262668u;
    {
        const bool branch_taken_0x262668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262668u;
        // 0x26266c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262668) {
            ctx->pc = 0x2626D8u;
            goto label_2626d8;
        }
    }
    ctx->pc = 0x262670u;
label_262670:
    // 0x262670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x262670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_262674:
    // 0x262674: 0xc087570  jal         func_21D5C0
label_262678:
    if (ctx->pc == 0x262678u) {
        ctx->pc = 0x262678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262674u;
        // 0x262678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26267Cu;
        goto label_26267c;
    }
    ctx->pc = 0x262674u;
    SET_GPR_U32(ctx, 31, 0x26267Cu);
    ctx->pc = 0x262678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262674u;
    // 0x262678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x262674u, 0x26267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26267Cu;
label_26267c:
    // 0x26267c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x26267cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_262680:
    // 0x262680: 0x8c4302c4  lw          $v1, 0x2C4($v0)
    ctx->pc = 0x262680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 708)));
label_262684:
    // 0x262684: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_262688:
    if (ctx->pc == 0x262688u) {
        ctx->pc = 0x262688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262684u;
        // 0x262688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26268Cu;
        goto label_26268c;
    }
    ctx->pc = 0x262684u;
    {
        const bool branch_taken_0x262684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262684u;
        // 0x262688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262684) {
            ctx->pc = 0x2626BCu;
            goto label_2626bc;
        }
    }
    ctx->pc = 0x26268Cu;
label_26268c:
    // 0x26268c: 0xc095358  jal         func_254D60
label_262690:
    if (ctx->pc == 0x262690u) {
        ctx->pc = 0x262690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26268Cu;
        // 0x262690: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262694u;
        goto label_262694;
    }
    ctx->pc = 0x26268Cu;
    SET_GPR_U32(ctx, 31, 0x262694u);
    ctx->pc = 0x262690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26268Cu;
    // 0x262690: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D60u, 0x26268Cu, 0x262694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262694u;
label_262694:
    // 0x262694: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x262694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_262698:
    // 0x262698: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_26269c:
    if (ctx->pc == 0x26269Cu) {
        ctx->pc = 0x26269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262698u;
        // 0x26269c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2626A0u;
        goto label_2626a0;
    }
    ctx->pc = 0x262698u;
    {
        const bool branch_taken_0x262698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262698u;
        // 0x26269c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262698) {
            ctx->pc = 0x2626BCu;
            goto label_2626bc;
        }
    }
    ctx->pc = 0x2626A0u;
label_2626a0:
    // 0x2626a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2626a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2626a4:
    // 0x2626a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2626a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2626a8:
    // 0x2626a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2626a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2626ac:
    // 0x2626ac: 0xc09d59e  jal         func_275678
label_2626b0:
    if (ctx->pc == 0x2626B0u) {
        ctx->pc = 0x2626B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626ACu;
        // 0x2626b0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2626B4u;
        goto label_2626b4;
    }
    ctx->pc = 0x2626ACu;
    SET_GPR_U32(ctx, 31, 0x2626B4u);
    ctx->pc = 0x2626B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626ACu;
    // 0x2626b0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275678u, 0x2626ACu, 0x2626B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626B4u;
label_2626b4:
    // 0x2626b4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2626b8:
    if (ctx->pc == 0x2626B8u) {
        ctx->pc = 0x2626B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626B4u;
        // 0x2626b8: 0x8e3400d8  lw          $s4, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2626BCu;
        goto label_2626bc;
    }
    ctx->pc = 0x2626B4u;
    {
        const bool branch_taken_0x2626b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2626B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626B4u;
        // 0x2626b8: 0x8e3400d8  lw          $s4, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626b4) {
            ctx->pc = 0x2626F0u;
            goto label_2626f0;
        }
    }
    ctx->pc = 0x2626BCu;
label_2626bc:
    // 0x2626bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2626bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2626c0:
    // 0x2626c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2626c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2626c4:
    // 0x2626c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2626c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2626c8:
    // 0x2626c8: 0xc09d872  jal         func_2761C8
label_2626cc:
    if (ctx->pc == 0x2626CCu) {
        ctx->pc = 0x2626CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626C8u;
        // 0x2626cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2626D0u;
        goto label_2626d0;
    }
    ctx->pc = 0x2626C8u;
    SET_GPR_U32(ctx, 31, 0x2626D0u);
    ctx->pc = 0x2626CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626C8u;
    // 0x2626cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761C8u, 0x2626C8u, 0x2626D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626D0u;
label_2626d0:
    // 0x2626d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2626d4:
    if (ctx->pc == 0x2626D4u) {
        ctx->pc = 0x2626D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626D0u;
        // 0x2626d4: 0x8e3400d8  lw          $s4, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2626D8u;
        goto label_2626d8;
    }
    ctx->pc = 0x2626D0u;
    {
        const bool branch_taken_0x2626d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2626D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626D0u;
        // 0x2626d4: 0x8e3400d8  lw          $s4, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626d0) {
            ctx->pc = 0x2626F0u;
            goto label_2626f0;
        }
    }
    ctx->pc = 0x2626D8u;
label_2626d8:
    // 0x2626d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2626d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2626dc:
    // 0x2626dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2626dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2626e0:
    // 0x2626e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2626e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2626e4:
    // 0x2626e4: 0xc09d802  jal         func_276008
label_2626e8:
    if (ctx->pc == 0x2626E8u) {
        ctx->pc = 0x2626E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626E4u;
        // 0x2626e8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2626ECu;
        goto label_2626ec;
    }
    ctx->pc = 0x2626E4u;
    SET_GPR_U32(ctx, 31, 0x2626ECu);
    ctx->pc = 0x2626E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626E4u;
    // 0x2626e8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276008u, 0x2626E4u, 0x2626ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626ECu;
label_2626ec:
    // 0x2626ec: 0x8e3400d8  lw          $s4, 0xD8($s1)
    ctx->pc = 0x2626ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2626f0:
    // 0x2626f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2626f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2626f4:
    // 0x2626f4: 0xc089998  jal         func_226660
label_2626f8:
    if (ctx->pc == 0x2626F8u) {
        ctx->pc = 0x2626F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626F4u;
        // 0x2626f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2626FCu;
        goto label_2626fc;
    }
    ctx->pc = 0x2626F4u;
    SET_GPR_U32(ctx, 31, 0x2626FCu);
    ctx->pc = 0x2626F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626F4u;
    // 0x2626f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2626F4u, 0x2626FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626FCu;
label_2626fc:
    // 0x2626fc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_262700:
    if (ctx->pc == 0x262700u) {
        ctx->pc = 0x262700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626FCu;
        // 0x262700: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262704u;
        goto label_262704;
    }
    ctx->pc = 0x2626FCu;
    {
        const bool branch_taken_0x2626fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626FCu;
        // 0x262700: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626fc) {
            ctx->pc = 0x262768u;
            goto label_262768;
        }
    }
    ctx->pc = 0x262704u;
label_262704:
    // 0x262704: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x262704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_262708:
    // 0x262708: 0x844200bc  lh          $v0, 0xBC($v0)
    ctx->pc = 0x262708u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 188)));
label_26270c:
    // 0x26270c: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
label_262710:
    if (ctx->pc == 0x262710u) {
        ctx->pc = 0x262710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26270Cu;
        // 0x262710: 0x28420003  slti        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x262714u;
        goto label_262714;
    }
    ctx->pc = 0x26270Cu;
    {
        const bool branch_taken_0x26270c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x262710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26270Cu;
        // 0x262710: 0x28420003  slti        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26270c) {
            ctx->pc = 0x262768u;
            goto label_262768;
        }
    }
    ctx->pc = 0x262714u;
label_262714:
    // 0x262714: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_262718:
    if (ctx->pc == 0x262718u) {
        ctx->pc = 0x262718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262714u;
        // 0x262718: 0x2610dd30  addiu       $s0, $s0, -0x22D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26271Cu;
        goto label_26271c;
    }
    ctx->pc = 0x262714u;
    {
        const bool branch_taken_0x262714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262714u;
        // 0x262718: 0x2610dd30  addiu       $s0, $s0, -0x22D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262714) {
            ctx->pc = 0x26276Cu;
            goto label_26276c;
        }
    }
    ctx->pc = 0x26271Cu;
label_26271c:
    // 0x26271c: 0xc05d462  jal         func_175188
label_262720:
    if (ctx->pc == 0x262720u) {
        ctx->pc = 0x262720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26271Cu;
        // 0x262720: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262724u;
        goto label_262724;
    }
    ctx->pc = 0x26271Cu;
    SET_GPR_U32(ctx, 31, 0x262724u);
    ctx->pc = 0x262720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26271Cu;
    // 0x262720: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x26271Cu, 0x262724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262724u;
label_262724:
    // 0x262724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x262724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262728:
    // 0x262728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26272c:
    // 0x26272c: 0xc0899a2  jal         func_226688
label_262730:
    if (ctx->pc == 0x262730u) {
        ctx->pc = 0x262730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26272Cu;
        // 0x262730: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262734u;
        goto label_262734;
    }
    ctx->pc = 0x26272Cu;
    SET_GPR_U32(ctx, 31, 0x262734u);
    ctx->pc = 0x262730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26272Cu;
    // 0x262730: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226688u, 0x26272Cu, 0x262734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262734u;
label_262734:
    // 0x262734: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x262734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_262738:
    // 0x262738: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x262738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26273c:
    // 0x26273c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x26273cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_262740:
    // 0x262740: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x262740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_262744:
    // 0x262744: 0x60f809  jalr        $v1
label_262748:
    if (ctx->pc == 0x262748u) {
        ctx->pc = 0x262748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262744u;
        // 0x262748: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26274Cu;
        goto label_26274c;
    }
    ctx->pc = 0x262744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26274Cu);
        ctx->pc = 0x262748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262744u;
        // 0x262748: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262744u, 0x26274Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26274Cu;
label_26274c:
    // 0x26274c: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x26274cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_262750:
    // 0x262750: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x262750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_262754:
    // 0x262754: 0x24a600c0  addiu       $a2, $a1, 0xC0
    ctx->pc = 0x262754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_262758:
    // 0x262758: 0xc05d4b2  jal         func_1752C8
label_26275c:
    if (ctx->pc == 0x26275Cu) {
        ctx->pc = 0x26275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262758u;
        // 0x26275c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262760u;
        goto label_262760;
    }
    ctx->pc = 0x262758u;
    SET_GPR_U32(ctx, 31, 0x262760u);
    ctx->pc = 0x26275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262758u;
    // 0x26275c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1752C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1752C8u, 0x262758u, 0x262760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262760u;
label_262760:
    // 0x262760: 0x10000042  b           . + 4 + (0x42 << 2)
label_262764:
    if (ctx->pc == 0x262764u) {
        ctx->pc = 0x262764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262760u;
        // 0x262764: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262768u;
        goto label_262768;
    }
    ctx->pc = 0x262760u;
    {
        const bool branch_taken_0x262760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262760u;
        // 0x262764: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262760) {
            ctx->pc = 0x26286Cu;
            goto label_26286c;
        }
    }
    ctx->pc = 0x262768u;
label_262768:
    // 0x262768: 0x2610dd30  addiu       $s0, $s0, -0x22D0
    ctx->pc = 0x262768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958384));
label_26276c:
    // 0x26276c: 0xc041532  jal         func_1054C8
label_262770:
    if (ctx->pc == 0x262770u) {
        ctx->pc = 0x262770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26276Cu;
        // 0x262770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262774u;
        goto label_262774;
    }
    ctx->pc = 0x26276Cu;
    SET_GPR_U32(ctx, 31, 0x262774u);
    ctx->pc = 0x262770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26276Cu;
    // 0x262770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26276Cu, 0x262774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262774u;
label_262774:
    // 0x262774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262778:
    // 0x262778: 0xc041532  jal         func_1054C8
label_26277c:
    if (ctx->pc == 0x26277Cu) {
        ctx->pc = 0x26277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262778u;
        // 0x26277c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262780u;
        goto label_262780;
    }
    ctx->pc = 0x262778u;
    SET_GPR_U32(ctx, 31, 0x262780u);
    ctx->pc = 0x26277Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262778u;
    // 0x26277c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x262778u, 0x262780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262780u;
label_262780:
    // 0x262780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262784:
    // 0x262784: 0xc041532  jal         func_1054C8
label_262788:
    if (ctx->pc == 0x262788u) {
        ctx->pc = 0x262788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262784u;
        // 0x262788: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26278Cu;
        goto label_26278c;
    }
    ctx->pc = 0x262784u;
    SET_GPR_U32(ctx, 31, 0x26278Cu);
    ctx->pc = 0x262788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262784u;
    // 0x262788: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x262784u, 0x26278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26278Cu;
label_26278c:
    // 0x26278c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_262790:
    if (ctx->pc == 0x262790u) {
        ctx->pc = 0x262790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26278Cu;
        // 0x262790: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262794u;
        goto label_262794;
    }
    ctx->pc = 0x26278Cu;
    {
        const bool branch_taken_0x26278c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x262790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26278Cu;
        // 0x262790: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26278c) {
            ctx->pc = 0x2627B8u;
            goto label_2627b8;
        }
    }
    ctx->pc = 0x262794u;
label_262794:
    // 0x262794: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x262794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_262798:
    // 0x262798: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x262798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26279c:
    // 0x26279c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26279cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2627a0:
    // 0x2627a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2627a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2627a4:
    // 0x2627a4: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x2627a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2627a8:
    // 0x2627a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2627a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2627ac:
    // 0x2627ac: 0xc04159e  jal         func_105678
label_2627b0:
    if (ctx->pc == 0x2627B0u) {
        ctx->pc = 0x2627B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627ACu;
        // 0x2627b0: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2627B4u;
        goto label_2627b4;
    }
    ctx->pc = 0x2627ACu;
    SET_GPR_U32(ctx, 31, 0x2627B4u);
    ctx->pc = 0x2627B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2627ACu;
    // 0x2627b0: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2627ACu, 0x2627B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2627B4u;
label_2627b4:
    // 0x2627b4: 0x0  nop
    ctx->pc = 0x2627b4u;
    // NOP
label_2627b8:
    // 0x2627b8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2627b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2627bc:
    // 0x2627bc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2627bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2627c0:
    // 0x2627c0: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
label_2627c4:
    if (ctx->pc == 0x2627C4u) {
        ctx->pc = 0x2627C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627C0u;
        // 0x2627c4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2627C8u;
        goto label_2627c8;
    }
    ctx->pc = 0x2627C0u;
    {
        const bool branch_taken_0x2627c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627C0u;
        // 0x2627c4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627c0) {
            ctx->pc = 0x262808u;
            goto label_262808;
        }
    }
    ctx->pc = 0x2627C8u;
label_2627c8:
    // 0x2627c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2627c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2627cc:
    // 0x2627cc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2627ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2627d0:
    // 0x2627d0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2627d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2627d4:
    // 0x2627d4: 0x40f809  jalr        $v0
label_2627d8:
    if (ctx->pc == 0x2627D8u) {
        ctx->pc = 0x2627D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627D4u;
        // 0x2627d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2627DCu;
        goto label_2627dc;
    }
    ctx->pc = 0x2627D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2627DCu);
        ctx->pc = 0x2627D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627D4u;
        // 0x2627d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2627D4u, 0x2627DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2627DCu;
label_2627dc:
    // 0x2627dc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2627dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2627e0:
    // 0x2627e0: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x2627e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_2627e4:
    // 0x2627e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2627e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2627e8:
    // 0x2627e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2627e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2627ec:
    // 0x2627ec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2627ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2627f0:
    // 0x2627f0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2627f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2627f4:
    // 0x2627f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2627f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2627f8:
    // 0x2627f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2627f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2627fc:
    // 0x2627fc: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2627fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_262800:
    // 0x262800: 0xc041664  jal         func_105990
label_262804:
    if (ctx->pc == 0x262804u) {
        ctx->pc = 0x262804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262800u;
        // 0x262804: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262808u;
        goto label_262808;
    }
    ctx->pc = 0x262800u;
    SET_GPR_U32(ctx, 31, 0x262808u);
    ctx->pc = 0x262804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262800u;
    // 0x262804: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x262800u, 0x262808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262808u;
label_262808:
    // 0x262808: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_26280c:
    if (ctx->pc == 0x26280Cu) {
        ctx->pc = 0x26280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262808u;
        // 0x26280c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262810u;
        goto label_262810;
    }
    ctx->pc = 0x262808u;
    {
        const bool branch_taken_0x262808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262808u;
        // 0x26280c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262808) {
            ctx->pc = 0x262828u;
            goto label_262828;
        }
    }
    ctx->pc = 0x262810u;
label_262810:
    // 0x262810: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x262810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_262814:
    // 0x262814: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x262814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_262818:
    // 0x262818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26281c:
    // 0x26281c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26281cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262820:
    // 0x262820: 0xc041b20  jal         func_106C80
label_262824:
    if (ctx->pc == 0x262824u) {
        ctx->pc = 0x262824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262820u;
        // 0x262824: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262828u;
        goto label_262828;
    }
    ctx->pc = 0x262820u;
    SET_GPR_U32(ctx, 31, 0x262828u);
    ctx->pc = 0x262824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262820u;
    // 0x262824: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x262820u, 0x262828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262828u;
label_262828:
    // 0x262828: 0xc05d484  jal         func_175210
label_26282c:
    if (ctx->pc == 0x26282Cu) {
        ctx->pc = 0x26282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262828u;
        // 0x26282c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262830u;
        goto label_262830;
    }
    ctx->pc = 0x262828u;
    SET_GPR_U32(ctx, 31, 0x262830u);
    ctx->pc = 0x26282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262828u;
    // 0x26282c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x262828u, 0x262830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262830u;
label_262830:
    // 0x262830: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x262830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_262834:
    // 0x262834: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x262834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_262838:
    // 0x262838: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x262838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26283c:
    // 0x26283c: 0xa0f809  jalr        $a1
label_262840:
    if (ctx->pc == 0x262840u) {
        ctx->pc = 0x262840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26283Cu;
        // 0x262840: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262844u;
        goto label_262844;
    }
    ctx->pc = 0x26283Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x262844u);
        ctx->pc = 0x262840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26283Cu;
        // 0x262840: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26283Cu, 0x262844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262844u;
label_262844:
    // 0x262844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_262848:
    // 0x262848: 0xc087016  jal         func_21C058
label_26284c:
    if (ctx->pc == 0x26284Cu) {
        ctx->pc = 0x26284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262848u;
        // 0x26284c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262850u;
        goto label_262850;
    }
    ctx->pc = 0x262848u;
    SET_GPR_U32(ctx, 31, 0x262850u);
    ctx->pc = 0x26284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262848u;
    // 0x26284c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x262848u, 0x262850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262850u;
label_262850:
    // 0x262850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x262850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262854:
    // 0x262854: 0xc05d4f6  jal         func_1753D8
label_262858:
    if (ctx->pc == 0x262858u) {
        ctx->pc = 0x262858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262854u;
        // 0x262858: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26285Cu;
        goto label_26285c;
    }
    ctx->pc = 0x262854u;
    SET_GPR_U32(ctx, 31, 0x26285Cu);
    ctx->pc = 0x262858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262854u;
    // 0x262858: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x262854u, 0x26285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26285Cu;
label_26285c:
    // 0x26285c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26285cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_262860:
    // 0x262860: 0xc05d53a  jal         func_1754E8
label_262864:
    if (ctx->pc == 0x262864u) {
        ctx->pc = 0x262864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262860u;
        // 0x262864: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262868u;
        goto label_262868;
    }
    ctx->pc = 0x262860u;
    SET_GPR_U32(ctx, 31, 0x262868u);
    ctx->pc = 0x262864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262860u;
    // 0x262864: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x262860u, 0x262868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262868u;
label_262868:
    // 0x262868: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x262868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26286c:
    // 0x26286c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26286cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_262870:
    // 0x262870: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262874:
    // 0x262874: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x262874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
label_262878:
    // 0x262878: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x262878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26287c:
    // 0x26287c: 0x946200bc  lhu         $v0, 0xBC($v1)
    ctx->pc = 0x26287cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 188)));
label_262880:
    // 0x262880: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x262880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_262884:
    // 0x262884: 0xc089990  jal         func_226640
label_262888:
    if (ctx->pc == 0x262888u) {
        ctx->pc = 0x262888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262884u;
        // 0x262888: 0xa46200bc  sh          $v0, 0xBC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26288Cu;
        goto label_26288c;
    }
    ctx->pc = 0x262884u;
    SET_GPR_U32(ctx, 31, 0x26288Cu);
    ctx->pc = 0x262888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262884u;
    // 0x262888: 0xa46200bc  sh          $v0, 0xBC($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x262884u, 0x26288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26288Cu;
label_26288c:
    // 0x26288c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x26288cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_262890:
    // 0x262890: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x262890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_262894:
    // 0x262894: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x262894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_262898:
    // 0x262898: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x262898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26289c:
    // 0x26289c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x26289cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2628a0:
    // 0x2628a0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2628a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2628a4:
    // 0x2628a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2628a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2628a8:
    // 0x2628a8: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x2628a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2628ac:
    // 0x2628ac: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2628acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2628b0:
    // 0x2628b0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2628b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2628b4:
    // 0x2628b4: 0x3e00008  jr          $ra
label_2628b8:
    if (ctx->pc == 0x2628B8u) {
        ctx->pc = 0x2628B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628B4u;
        // 0x2628b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2628BCu;
        goto label_2628bc;
    }
    ctx->pc = 0x2628B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2628B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628B4u;
        // 0x2628b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2628B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2628BCu;
label_2628bc:
    // 0x2628bc: 0x0  nop
    ctx->pc = 0x2628bcu;
    // NOP
    ctx->pc = 0x2628c0u;
}
