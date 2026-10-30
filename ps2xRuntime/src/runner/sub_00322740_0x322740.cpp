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

// Function: sub_00322740
// Address: 0x322740 - 0x322988
void sub_00322740_0x322740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322740_0x322740");
#endif

    switch (ctx->pc) {
        case 0x322740u: goto label_322740;
        case 0x322744u: goto label_322744;
        case 0x322748u: goto label_322748;
        case 0x32274cu: goto label_32274c;
        case 0x322750u: goto label_322750;
        case 0x322754u: goto label_322754;
        case 0x322758u: goto label_322758;
        case 0x32275cu: goto label_32275c;
        case 0x322760u: goto label_322760;
        case 0x322764u: goto label_322764;
        case 0x322768u: goto label_322768;
        case 0x32276cu: goto label_32276c;
        case 0x322770u: goto label_322770;
        case 0x322774u: goto label_322774;
        case 0x322778u: goto label_322778;
        case 0x32277cu: goto label_32277c;
        case 0x322780u: goto label_322780;
        case 0x322784u: goto label_322784;
        case 0x322788u: goto label_322788;
        case 0x32278cu: goto label_32278c;
        case 0x322790u: goto label_322790;
        case 0x322794u: goto label_322794;
        case 0x322798u: goto label_322798;
        case 0x32279cu: goto label_32279c;
        case 0x3227a0u: goto label_3227a0;
        case 0x3227a4u: goto label_3227a4;
        case 0x3227a8u: goto label_3227a8;
        case 0x3227acu: goto label_3227ac;
        case 0x3227b0u: goto label_3227b0;
        case 0x3227b4u: goto label_3227b4;
        case 0x3227b8u: goto label_3227b8;
        case 0x3227bcu: goto label_3227bc;
        case 0x3227c0u: goto label_3227c0;
        case 0x3227c4u: goto label_3227c4;
        case 0x3227c8u: goto label_3227c8;
        case 0x3227ccu: goto label_3227cc;
        case 0x3227d0u: goto label_3227d0;
        case 0x3227d4u: goto label_3227d4;
        case 0x3227d8u: goto label_3227d8;
        case 0x3227dcu: goto label_3227dc;
        case 0x3227e0u: goto label_3227e0;
        case 0x3227e4u: goto label_3227e4;
        case 0x3227e8u: goto label_3227e8;
        case 0x3227ecu: goto label_3227ec;
        case 0x3227f0u: goto label_3227f0;
        case 0x3227f4u: goto label_3227f4;
        case 0x3227f8u: goto label_3227f8;
        case 0x3227fcu: goto label_3227fc;
        case 0x322800u: goto label_322800;
        case 0x322804u: goto label_322804;
        case 0x322808u: goto label_322808;
        case 0x32280cu: goto label_32280c;
        case 0x322810u: goto label_322810;
        case 0x322814u: goto label_322814;
        case 0x322818u: goto label_322818;
        case 0x32281cu: goto label_32281c;
        case 0x322820u: goto label_322820;
        case 0x322824u: goto label_322824;
        case 0x322828u: goto label_322828;
        case 0x32282cu: goto label_32282c;
        case 0x322830u: goto label_322830;
        case 0x322834u: goto label_322834;
        case 0x322838u: goto label_322838;
        case 0x32283cu: goto label_32283c;
        case 0x322840u: goto label_322840;
        case 0x322844u: goto label_322844;
        case 0x322848u: goto label_322848;
        case 0x32284cu: goto label_32284c;
        case 0x322850u: goto label_322850;
        case 0x322854u: goto label_322854;
        case 0x322858u: goto label_322858;
        case 0x32285cu: goto label_32285c;
        case 0x322860u: goto label_322860;
        case 0x322864u: goto label_322864;
        case 0x322868u: goto label_322868;
        case 0x32286cu: goto label_32286c;
        case 0x322870u: goto label_322870;
        case 0x322874u: goto label_322874;
        case 0x322878u: goto label_322878;
        case 0x32287cu: goto label_32287c;
        case 0x322880u: goto label_322880;
        case 0x322884u: goto label_322884;
        case 0x322888u: goto label_322888;
        case 0x32288cu: goto label_32288c;
        case 0x322890u: goto label_322890;
        case 0x322894u: goto label_322894;
        case 0x322898u: goto label_322898;
        case 0x32289cu: goto label_32289c;
        case 0x3228a0u: goto label_3228a0;
        case 0x3228a4u: goto label_3228a4;
        case 0x3228a8u: goto label_3228a8;
        case 0x3228acu: goto label_3228ac;
        case 0x3228b0u: goto label_3228b0;
        case 0x3228b4u: goto label_3228b4;
        case 0x3228b8u: goto label_3228b8;
        case 0x3228bcu: goto label_3228bc;
        case 0x3228c0u: goto label_3228c0;
        case 0x3228c4u: goto label_3228c4;
        case 0x3228c8u: goto label_3228c8;
        case 0x3228ccu: goto label_3228cc;
        case 0x3228d0u: goto label_3228d0;
        case 0x3228d4u: goto label_3228d4;
        case 0x3228d8u: goto label_3228d8;
        case 0x3228dcu: goto label_3228dc;
        case 0x3228e0u: goto label_3228e0;
        case 0x3228e4u: goto label_3228e4;
        case 0x3228e8u: goto label_3228e8;
        case 0x3228ecu: goto label_3228ec;
        case 0x3228f0u: goto label_3228f0;
        case 0x3228f4u: goto label_3228f4;
        case 0x3228f8u: goto label_3228f8;
        case 0x3228fcu: goto label_3228fc;
        case 0x322900u: goto label_322900;
        case 0x322904u: goto label_322904;
        case 0x322908u: goto label_322908;
        case 0x32290cu: goto label_32290c;
        case 0x322910u: goto label_322910;
        case 0x322914u: goto label_322914;
        case 0x322918u: goto label_322918;
        case 0x32291cu: goto label_32291c;
        case 0x322920u: goto label_322920;
        case 0x322924u: goto label_322924;
        case 0x322928u: goto label_322928;
        case 0x32292cu: goto label_32292c;
        case 0x322930u: goto label_322930;
        case 0x322934u: goto label_322934;
        case 0x322938u: goto label_322938;
        case 0x32293cu: goto label_32293c;
        case 0x322940u: goto label_322940;
        case 0x322944u: goto label_322944;
        case 0x322948u: goto label_322948;
        case 0x32294cu: goto label_32294c;
        case 0x322950u: goto label_322950;
        case 0x322954u: goto label_322954;
        case 0x322958u: goto label_322958;
        case 0x32295cu: goto label_32295c;
        case 0x322960u: goto label_322960;
        case 0x322964u: goto label_322964;
        case 0x322968u: goto label_322968;
        case 0x32296cu: goto label_32296c;
        case 0x322970u: goto label_322970;
        case 0x322974u: goto label_322974;
        case 0x322978u: goto label_322978;
        case 0x32297cu: goto label_32297c;
        case 0x322980u: goto label_322980;
        case 0x322984u: goto label_322984;
        default: break;
    }

    ctx->pc = 0x322740u;

label_322740:
    // 0x322740: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x322740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_322744:
    // 0x322744: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x322744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_322748:
    // 0x322748: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x322748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_32274c:
    // 0x32274c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x32274cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_322750:
    // 0x322750: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x322750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_322754:
    // 0x322754: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x322754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_322758:
    // 0x322758: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x322758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_32275c:
    // 0x32275c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x32275cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_322760:
    // 0x322760: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x322760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_322764:
    // 0x322764: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x322764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_322768:
    // 0x322768: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x322768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_32276c:
    // 0x32276c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32276cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_322770:
    // 0x322770: 0xc05959e  jal         func_165678
label_322774:
    if (ctx->pc == 0x322774u) {
        ctx->pc = 0x322774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322770u;
        // 0x322774: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322778u;
        goto label_322778;
    }
    ctx->pc = 0x322770u;
    SET_GPR_U32(ctx, 31, 0x322778u);
    ctx->pc = 0x322774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322770u;
    // 0x322774: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x322770u, 0x322778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322778u;
label_322778:
    // 0x322778: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_32277c:
    if (ctx->pc == 0x32277Cu) {
        ctx->pc = 0x32277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322778u;
        // 0x32277c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322780u;
        goto label_322780;
    }
    ctx->pc = 0x322778u;
    {
        const bool branch_taken_0x322778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322778u;
        // 0x32277c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322778) {
            ctx->pc = 0x322954u;
            goto label_322954;
        }
    }
    ctx->pc = 0x322780u;
label_322780:
    // 0x322780: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x322780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_322784:
    // 0x322784: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x322784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_322788:
    // 0x322788: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x322788u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32278c:
    // 0x32278c: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x32278cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_322790:
    // 0x322790: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
label_322794:
    if (ctx->pc == 0x322794u) {
        ctx->pc = 0x322794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322790u;
        // 0x322794: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322798u;
        goto label_322798;
    }
    ctx->pc = 0x322790u;
    {
        const bool branch_taken_0x322790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322790u;
        // 0x322794: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322790) {
            ctx->pc = 0x322954u;
            goto label_322954;
        }
    }
    ctx->pc = 0x322798u;
label_322798:
    // 0x322798: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x322798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32279c:
    // 0x32279c: 0x0  nop
    ctx->pc = 0x32279cu;
    // NOP
label_3227a0:
    // 0x3227a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3227a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3227a4:
    // 0x3227a4: 0xc137826  jal         func_4DE098
label_3227a8:
    if (ctx->pc == 0x3227A8u) {
        ctx->pc = 0x3227A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227A4u;
        // 0x3227a8: 0x26960001  addiu       $s6, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227ACu;
        goto label_3227ac;
    }
    ctx->pc = 0x3227A4u;
    SET_GPR_U32(ctx, 31, 0x3227ACu);
    ctx->pc = 0x3227A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3227A4u;
    // 0x3227a8: 0x26960001  addiu       $s6, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3227A4u, 0x3227ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3227ACu;
label_3227ac:
    // 0x3227ac: 0xc0e409a  jal         func_390268
label_3227b0:
    if (ctx->pc == 0x3227B0u) {
        ctx->pc = 0x3227B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227ACu;
        // 0x3227b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227B4u;
        goto label_3227b4;
    }
    ctx->pc = 0x3227ACu;
    SET_GPR_U32(ctx, 31, 0x3227B4u);
    ctx->pc = 0x3227B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3227ACu;
    // 0x3227b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3227ACu, 0x3227B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3227B4u;
label_3227b4:
    // 0x3227b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3227b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3227b8:
    // 0x3227b8: 0x1200005e  beqz        $s0, . + 4 + (0x5E << 2)
label_3227bc:
    if (ctx->pc == 0x3227BCu) {
        ctx->pc = 0x3227BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227B8u;
        // 0x3227bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227C0u;
        goto label_3227c0;
    }
    ctx->pc = 0x3227B8u;
    {
        const bool branch_taken_0x3227b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3227BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227B8u;
        // 0x3227bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3227b8) {
            ctx->pc = 0x322934u;
            goto label_322934;
        }
    }
    ctx->pc = 0x3227C0u;
label_3227c0:
    // 0x3227c0: 0xc08a096  jal         func_228258
label_3227c4:
    if (ctx->pc == 0x3227C4u) {
        ctx->pc = 0x3227C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227C0u;
        // 0x3227c4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227C8u;
        goto label_3227c8;
    }
    ctx->pc = 0x3227C0u;
    SET_GPR_U32(ctx, 31, 0x3227C8u);
    ctx->pc = 0x3227C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3227C0u;
    // 0x3227c4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x3227C0u, 0x3227C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3227C8u;
label_3227c8:
    // 0x3227c8: 0x5051005b  beql        $v0, $s1, . + 4 + (0x5B << 2)
label_3227cc:
    if (ctx->pc == 0x3227CCu) {
        ctx->pc = 0x3227CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227C8u;
        // 0x3227cc: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227D0u;
        goto label_3227d0;
    }
    ctx->pc = 0x3227C8u;
    {
        const bool branch_taken_0x3227c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x3227c8) {
            ctx->pc = 0x3227CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3227C8u;
            // 0x3227cc: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322938u;
            goto label_322938;
        }
    }
    ctx->pc = 0x3227D0u;
label_3227d0:
    // 0x3227d0: 0xc08a08a  jal         func_228228
label_3227d4:
    if (ctx->pc == 0x3227D4u) {
        ctx->pc = 0x3227D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227D0u;
        // 0x3227d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227D8u;
        goto label_3227d8;
    }
    ctx->pc = 0x3227D0u;
    SET_GPR_U32(ctx, 31, 0x3227D8u);
    ctx->pc = 0x3227D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3227D0u;
    // 0x3227d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x3227D0u, 0x3227D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3227D8u;
label_3227d8:
    // 0x3227d8: 0x50510057  beql        $v0, $s1, . + 4 + (0x57 << 2)
label_3227dc:
    if (ctx->pc == 0x3227DCu) {
        ctx->pc = 0x3227DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227D8u;
        // 0x3227dc: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227E0u;
        goto label_3227e0;
    }
    ctx->pc = 0x3227D8u;
    {
        const bool branch_taken_0x3227d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x3227d8) {
            ctx->pc = 0x3227DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3227D8u;
            // 0x3227dc: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322938u;
            goto label_322938;
        }
    }
    ctx->pc = 0x3227E0u;
label_3227e0:
    // 0x3227e0: 0xc087502  jal         func_21D408
label_3227e4:
    if (ctx->pc == 0x3227E4u) {
        ctx->pc = 0x3227E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227E0u;
        // 0x3227e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227E8u;
        goto label_3227e8;
    }
    ctx->pc = 0x3227E0u;
    SET_GPR_U32(ctx, 31, 0x3227E8u);
    ctx->pc = 0x3227E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3227E0u;
    // 0x3227e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3227E0u, 0x3227E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3227E8u;
label_3227e8:
    // 0x3227e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3227e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3227ec:
    // 0x3227ec: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x3227ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_3227f0:
    // 0x3227f0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3227f4:
    if (ctx->pc == 0x3227F4u) {
        ctx->pc = 0x3227F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227F0u;
        // 0x3227f4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227F8u;
        goto label_3227f8;
    }
    ctx->pc = 0x3227F0u;
    {
        const bool branch_taken_0x3227f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3227F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227F0u;
        // 0x3227f4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3227f0) {
            ctx->pc = 0x322804u;
            goto label_322804;
        }
    }
    ctx->pc = 0x3227F8u;
label_3227f8:
    // 0x3227f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3227f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3227fc:
    // 0x3227fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_322800:
    if (ctx->pc == 0x322800u) {
        ctx->pc = 0x322800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227FCu;
        // 0x322800: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322804u;
        goto label_322804;
    }
    ctx->pc = 0x3227FCu;
    {
        const bool branch_taken_0x3227fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227FCu;
        // 0x322800: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3227fc) {
            ctx->pc = 0x322808u;
            goto label_322808;
        }
    }
    ctx->pc = 0x322804u;
label_322804:
    // 0x322804: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x322804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322808:
    // 0x322808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32280c:
    // 0x32280c: 0xc0a3658  jal         func_28D960
label_322810:
    if (ctx->pc == 0x322810u) {
        ctx->pc = 0x322810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32280Cu;
        // 0x322810: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322814u;
        goto label_322814;
    }
    ctx->pc = 0x32280Cu;
    SET_GPR_U32(ctx, 31, 0x322814u);
    ctx->pc = 0x322810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32280Cu;
    // 0x322810: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x32280Cu, 0x322814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322814u;
label_322814:
    // 0x322814: 0x4410047  bgez        $v0, . + 4 + (0x47 << 2)
label_322818:
    if (ctx->pc == 0x322818u) {
        ctx->pc = 0x322818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322814u;
        // 0x322818: 0x26960001  addiu       $s6, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32281Cu;
        goto label_32281c;
    }
    ctx->pc = 0x322814u;
    {
        const bool branch_taken_0x322814 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x322818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322814u;
        // 0x322818: 0x26960001  addiu       $s6, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322814) {
            ctx->pc = 0x322934u;
            goto label_322934;
        }
    }
    ctx->pc = 0x32281Cu;
label_32281c:
    // 0x32281c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_322820:
    if (ctx->pc == 0x322820u) {
        ctx->pc = 0x322820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32281Cu;
        // 0x322820: 0x26330164  addiu       $s3, $s1, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322824u;
        goto label_322824;
    }
    ctx->pc = 0x32281Cu;
    {
        const bool branch_taken_0x32281c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x322820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32281Cu;
        // 0x322820: 0x26330164  addiu       $s3, $s1, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32281c) {
            ctx->pc = 0x322848u;
            goto label_322848;
        }
    }
    ctx->pc = 0x322824u;
label_322824:
    // 0x322824: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x322824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_322828:
    // 0x322828: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x322828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_32282c:
    // 0x32282c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x32282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_322830:
    // 0x322830: 0x40f809  jalr        $v0
label_322834:
    if (ctx->pc == 0x322834u) {
        ctx->pc = 0x322834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322830u;
        // 0x322834: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322838u;
        goto label_322838;
    }
    ctx->pc = 0x322830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322838u);
        ctx->pc = 0x322834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322830u;
        // 0x322834: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322830u, 0x322838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322838u;
label_322838:
    // 0x322838: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x322838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_32283c:
    // 0x32283c: 0x5043003e  beql        $v0, $v1, . + 4 + (0x3E << 2)
label_322840:
    if (ctx->pc == 0x322840u) {
        ctx->pc = 0x322840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32283Cu;
        // 0x322840: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322844u;
        goto label_322844;
    }
    ctx->pc = 0x32283Cu;
    {
        const bool branch_taken_0x32283c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x32283c) {
            ctx->pc = 0x322840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32283Cu;
            // 0x322840: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322938u;
            goto label_322938;
        }
    }
    ctx->pc = 0x322844u;
label_322844:
    // 0x322844: 0x26330164  addiu       $s3, $s1, 0x164
    ctx->pc = 0x322844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
label_322848:
    // 0x322848: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x322848u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32284c:
    // 0x32284c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32284cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322850:
    // 0x322850: 0x26960001  addiu       $s6, $s4, 0x1
    ctx->pc = 0x322850u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_322854:
    // 0x322854: 0x0  nop
    ctx->pc = 0x322854u;
    // NOP
label_322858:
    // 0x322858: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x322858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_32285c:
    // 0x32285c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_322860:
    if (ctx->pc == 0x322860u) {
        ctx->pc = 0x322864u;
        goto label_322864;
    }
    ctx->pc = 0x32285Cu;
    {
        const bool branch_taken_0x32285c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32285c) {
            ctx->pc = 0x3228A0u;
            goto label_3228a0;
        }
    }
    ctx->pc = 0x322864u;
label_322864:
    // 0x322864: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x322864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_322868:
    // 0x322868: 0xc137826  jal         func_4DE098
label_32286c:
    if (ctx->pc == 0x32286Cu) {
        ctx->pc = 0x32286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322868u;
        // 0x32286c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322870u;
        goto label_322870;
    }
    ctx->pc = 0x322868u;
    SET_GPR_U32(ctx, 31, 0x322870u);
    ctx->pc = 0x32286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322868u;
    // 0x32286c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x322868u, 0x322870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322870u;
label_322870:
    // 0x322870: 0xc0e409a  jal         func_390268
label_322874:
    if (ctx->pc == 0x322874u) {
        ctx->pc = 0x322874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322870u;
        // 0x322874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322878u;
        goto label_322878;
    }
    ctx->pc = 0x322870u;
    SET_GPR_U32(ctx, 31, 0x322878u);
    ctx->pc = 0x322874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322870u;
    // 0x322874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x322870u, 0x322878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322878u;
label_322878:
    // 0x322878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32287c:
    // 0x32287c: 0x5200fff6  beql        $s0, $zero, . + 4 + (-0xA << 2)
label_322880:
    if (ctx->pc == 0x322880u) {
        ctx->pc = 0x322880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32287Cu;
        // 0x322880: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322884u;
        goto label_322884;
    }
    ctx->pc = 0x32287Cu;
    {
        const bool branch_taken_0x32287c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32287c) {
            ctx->pc = 0x322880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32287Cu;
            // 0x322880: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322858;
        }
    }
    ctx->pc = 0x322884u;
label_322884:
    // 0x322884: 0xc087502  jal         func_21D408
label_322888:
    if (ctx->pc == 0x322888u) {
        ctx->pc = 0x322888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322884u;
        // 0x322888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32288Cu;
        goto label_32288c;
    }
    ctx->pc = 0x322884u;
    SET_GPR_U32(ctx, 31, 0x32288Cu);
    ctx->pc = 0x322888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322884u;
    // 0x322888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x322884u, 0x32288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32288Cu;
label_32288c:
    // 0x32288c: 0xc05959e  jal         func_165678
label_322890:
    if (ctx->pc == 0x322890u) {
        ctx->pc = 0x322890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32288Cu;
        // 0x322890: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322894u;
        goto label_322894;
    }
    ctx->pc = 0x32288Cu;
    SET_GPR_U32(ctx, 31, 0x322894u);
    ctx->pc = 0x322890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32288Cu;
    // 0x322890: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x32288Cu, 0x322894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322894u;
label_322894:
    // 0x322894: 0x5602fff0  bnel        $s0, $v0, . + 4 + (-0x10 << 2)
label_322898:
    if (ctx->pc == 0x322898u) {
        ctx->pc = 0x322898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322894u;
        // 0x322898: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32289Cu;
        goto label_32289c;
    }
    ctx->pc = 0x322894u;
    {
        const bool branch_taken_0x322894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x322894) {
            ctx->pc = 0x322898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322894u;
            // 0x322898: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322858;
        }
    }
    ctx->pc = 0x32289Cu;
label_32289c:
    // 0x32289c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x32289cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3228a0:
    // 0x3228a0: 0x12a00024  beqz        $s5, . + 4 + (0x24 << 2)
label_3228a4:
    if (ctx->pc == 0x3228A4u) {
        ctx->pc = 0x3228A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228A0u;
        // 0x3228a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3228A8u;
        goto label_3228a8;
    }
    ctx->pc = 0x3228A0u;
    {
        const bool branch_taken_0x3228a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3228A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228A0u;
        // 0x3228a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3228a0) {
            ctx->pc = 0x322934u;
            goto label_322934;
        }
    }
    ctx->pc = 0x3228A8u;
label_3228a8:
    // 0x3228a8: 0xc0a3658  jal         func_28D960
label_3228ac:
    if (ctx->pc == 0x3228ACu) {
        ctx->pc = 0x3228ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228A8u;
        // 0x3228ac: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3228B0u;
        goto label_3228b0;
    }
    ctx->pc = 0x3228A8u;
    SET_GPR_U32(ctx, 31, 0x3228B0u);
    ctx->pc = 0x3228ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3228A8u;
    // 0x3228ac: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x3228A8u, 0x3228B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3228B0u;
label_3228b0:
    // 0x3228b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3228b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3228b4:
    // 0x3228b4: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
label_3228b8:
    if (ctx->pc == 0x3228B8u) {
        ctx->pc = 0x3228B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228B4u;
        // 0x3228b8: 0x26f20001  addiu       $s2, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3228BCu;
        goto label_3228bc;
    }
    ctx->pc = 0x3228B4u;
    {
        const bool branch_taken_0x3228b4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3228B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228B4u;
        // 0x3228b8: 0x26f20001  addiu       $s2, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3228b4) {
            ctx->pc = 0x3228E8u;
            goto label_3228e8;
        }
    }
    ctx->pc = 0x3228BCu;
label_3228bc:
    // 0x3228bc: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x3228bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_3228c0:
    // 0x3228c0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3228c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3228c4:
    // 0x3228c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3228c8:
    if (ctx->pc == 0x3228C8u) {
        ctx->pc = 0x3228CCu;
        goto label_3228cc;
    }
    ctx->pc = 0x3228C4u;
    {
        const bool branch_taken_0x3228c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3228c4) {
            ctx->pc = 0x3228E8u;
            goto label_3228e8;
        }
    }
    ctx->pc = 0x3228CCu;
label_3228cc:
    // 0x3228cc: 0x0  nop
    ctx->pc = 0x3228ccu;
    // NOP
label_3228d0:
    // 0x3228d0: 0xc0a35f6  jal         func_28D7D8
label_3228d4:
    if (ctx->pc == 0x3228D4u) {
        ctx->pc = 0x3228D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228D0u;
        // 0x3228d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3228D8u;
        goto label_3228d8;
    }
    ctx->pc = 0x3228D0u;
    SET_GPR_U32(ctx, 31, 0x3228D8u);
    ctx->pc = 0x3228D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3228D0u;
    // 0x3228d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x3228D0u, 0x3228D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3228D8u;
label_3228d8:
    // 0x3228d8: 0x8223002c  lb          $v1, 0x2C($s1)
    ctx->pc = 0x3228d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_3228dc:
    // 0x3228dc: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x3228dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3228e0:
    // 0x3228e0: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
label_3228e4:
    if (ctx->pc == 0x3228E4u) {
        ctx->pc = 0x3228E8u;
        goto label_3228e8;
    }
    ctx->pc = 0x3228E0u;
    {
        const bool branch_taken_0x3228e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3228e0) {
            ctx->pc = 0x3228D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3228d0;
        }
    }
    ctx->pc = 0x3228E8u;
label_3228e8:
    // 0x3228e8: 0xc0a4e54  jal         func_293950
label_3228ec:
    if (ctx->pc == 0x3228ECu) {
        ctx->pc = 0x3228F0u;
        goto label_3228f0;
    }
    ctx->pc = 0x3228E8u;
    SET_GPR_U32(ctx, 31, 0x3228F0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x3228E8u, 0x3228F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3228F0u;
label_3228f0:
    // 0x3228f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3228f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3228f4:
    // 0x3228f4: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_3228f8:
    if (ctx->pc == 0x3228F8u) {
        ctx->pc = 0x3228F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228F4u;
        // 0x3228f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3228FCu;
        goto label_3228fc;
    }
    ctx->pc = 0x3228F4u;
    {
        const bool branch_taken_0x3228f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3228f4) {
            ctx->pc = 0x3228F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3228F4u;
            // 0x3228f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322928u;
            goto label_322928;
        }
    }
    ctx->pc = 0x3228FCu;
label_3228fc:
    // 0x3228fc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3228fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_322900:
    // 0x322900: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x322900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_322904:
    // 0x322904: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x322904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_322908:
    // 0x322908: 0x40f809  jalr        $v0
label_32290c:
    if (ctx->pc == 0x32290Cu) {
        ctx->pc = 0x32290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322908u;
        // 0x32290c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322910u;
        goto label_322910;
    }
    ctx->pc = 0x322908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322910u);
        ctx->pc = 0x32290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322908u;
        // 0x32290c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322908u, 0x322910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322910u;
label_322910:
    // 0x322910: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x322910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322914:
    // 0x322914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322918:
    // 0x322918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x322918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32291c:
    // 0x32291c: 0xc0abd6c  jal         func_2AF5B0
label_322920:
    if (ctx->pc == 0x322920u) {
        ctx->pc = 0x322920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32291Cu;
        // 0x322920: 0x2407008f  addiu       $a3, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322924u;
        goto label_322924;
    }
    ctx->pc = 0x32291Cu;
    SET_GPR_U32(ctx, 31, 0x322924u);
    ctx->pc = 0x322920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32291Cu;
    // 0x322920: 0x2407008f  addiu       $a3, $zero, 0x8F (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x32291Cu, 0x322924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322924u;
label_322924:
    // 0x322924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322928:
    // 0x322928: 0xc0a35d6  jal         func_28D758
label_32292c:
    if (ctx->pc == 0x32292Cu) {
        ctx->pc = 0x32292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322928u;
        // 0x32292c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322930u;
        goto label_322930;
    }
    ctx->pc = 0x322928u;
    SET_GPR_U32(ctx, 31, 0x322930u);
    ctx->pc = 0x32292Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322928u;
    // 0x32292c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x322928u, 0x322930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322930u;
label_322930:
    // 0x322930: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x322930u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_322934:
    // 0x322934: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x322934u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_322938:
    // 0x322938: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x322938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_32293c:
    // 0x32293c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_322940:
    if (ctx->pc == 0x322940u) {
        ctx->pc = 0x322940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32293Cu;
        // 0x322940: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322944u;
        goto label_322944;
    }
    ctx->pc = 0x32293Cu;
    {
        const bool branch_taken_0x32293c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32293Cu;
        // 0x322940: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32293c) {
            ctx->pc = 0x322958u;
            goto label_322958;
        }
    }
    ctx->pc = 0x322944u;
label_322944:
    // 0x322944: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x322944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_322948:
    // 0x322948: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x322948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32294c:
    // 0x32294c: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
label_322950:
    if (ctx->pc == 0x322950u) {
        ctx->pc = 0x322950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32294Cu;
        // 0x322950: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322954u;
        goto label_322954;
    }
    ctx->pc = 0x32294Cu;
    {
        const bool branch_taken_0x32294c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32294Cu;
        // 0x322950: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32294c) {
            ctx->pc = 0x3227A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3227a0;
        }
    }
    ctx->pc = 0x322954u;
label_322954:
    // 0x322954: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x322954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_322958:
    // 0x322958: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x322958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_32295c:
    // 0x32295c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x32295cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_322960:
    // 0x322960: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x322960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_322964:
    // 0x322964: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x322964u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_322968:
    // 0x322968: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x322968u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32296c:
    // 0x32296c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x32296cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_322970:
    // 0x322970: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x322970u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_322974:
    // 0x322974: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x322974u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_322978:
    // 0x322978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x322978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32297c:
    // 0x32297c: 0x3e00008  jr          $ra
label_322980:
    if (ctx->pc == 0x322980u) {
        ctx->pc = 0x322980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32297Cu;
        // 0x322980: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322984u;
        goto label_322984;
    }
    ctx->pc = 0x32297Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32297Cu;
        // 0x322980: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32297Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322984u;
label_322984:
    // 0x322984: 0x0  nop
    ctx->pc = 0x322984u;
    // NOP
    ctx->pc = 0x322988u;
}
