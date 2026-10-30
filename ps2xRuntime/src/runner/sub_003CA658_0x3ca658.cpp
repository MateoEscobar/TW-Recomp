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

// Function: sub_003CA658
// Address: 0x3ca658 - 0x3ca9d8
void sub_003CA658_0x3ca658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA658_0x3ca658");
#endif

    switch (ctx->pc) {
        case 0x3ca658u: goto label_3ca658;
        case 0x3ca65cu: goto label_3ca65c;
        case 0x3ca660u: goto label_3ca660;
        case 0x3ca664u: goto label_3ca664;
        case 0x3ca668u: goto label_3ca668;
        case 0x3ca66cu: goto label_3ca66c;
        case 0x3ca670u: goto label_3ca670;
        case 0x3ca674u: goto label_3ca674;
        case 0x3ca678u: goto label_3ca678;
        case 0x3ca67cu: goto label_3ca67c;
        case 0x3ca680u: goto label_3ca680;
        case 0x3ca684u: goto label_3ca684;
        case 0x3ca688u: goto label_3ca688;
        case 0x3ca68cu: goto label_3ca68c;
        case 0x3ca690u: goto label_3ca690;
        case 0x3ca694u: goto label_3ca694;
        case 0x3ca698u: goto label_3ca698;
        case 0x3ca69cu: goto label_3ca69c;
        case 0x3ca6a0u: goto label_3ca6a0;
        case 0x3ca6a4u: goto label_3ca6a4;
        case 0x3ca6a8u: goto label_3ca6a8;
        case 0x3ca6acu: goto label_3ca6ac;
        case 0x3ca6b0u: goto label_3ca6b0;
        case 0x3ca6b4u: goto label_3ca6b4;
        case 0x3ca6b8u: goto label_3ca6b8;
        case 0x3ca6bcu: goto label_3ca6bc;
        case 0x3ca6c0u: goto label_3ca6c0;
        case 0x3ca6c4u: goto label_3ca6c4;
        case 0x3ca6c8u: goto label_3ca6c8;
        case 0x3ca6ccu: goto label_3ca6cc;
        case 0x3ca6d0u: goto label_3ca6d0;
        case 0x3ca6d4u: goto label_3ca6d4;
        case 0x3ca6d8u: goto label_3ca6d8;
        case 0x3ca6dcu: goto label_3ca6dc;
        case 0x3ca6e0u: goto label_3ca6e0;
        case 0x3ca6e4u: goto label_3ca6e4;
        case 0x3ca6e8u: goto label_3ca6e8;
        case 0x3ca6ecu: goto label_3ca6ec;
        case 0x3ca6f0u: goto label_3ca6f0;
        case 0x3ca6f4u: goto label_3ca6f4;
        case 0x3ca6f8u: goto label_3ca6f8;
        case 0x3ca6fcu: goto label_3ca6fc;
        case 0x3ca700u: goto label_3ca700;
        case 0x3ca704u: goto label_3ca704;
        case 0x3ca708u: goto label_3ca708;
        case 0x3ca70cu: goto label_3ca70c;
        case 0x3ca710u: goto label_3ca710;
        case 0x3ca714u: goto label_3ca714;
        case 0x3ca718u: goto label_3ca718;
        case 0x3ca71cu: goto label_3ca71c;
        case 0x3ca720u: goto label_3ca720;
        case 0x3ca724u: goto label_3ca724;
        case 0x3ca728u: goto label_3ca728;
        case 0x3ca72cu: goto label_3ca72c;
        case 0x3ca730u: goto label_3ca730;
        case 0x3ca734u: goto label_3ca734;
        case 0x3ca738u: goto label_3ca738;
        case 0x3ca73cu: goto label_3ca73c;
        case 0x3ca740u: goto label_3ca740;
        case 0x3ca744u: goto label_3ca744;
        case 0x3ca748u: goto label_3ca748;
        case 0x3ca74cu: goto label_3ca74c;
        case 0x3ca750u: goto label_3ca750;
        case 0x3ca754u: goto label_3ca754;
        case 0x3ca758u: goto label_3ca758;
        case 0x3ca75cu: goto label_3ca75c;
        case 0x3ca760u: goto label_3ca760;
        case 0x3ca764u: goto label_3ca764;
        case 0x3ca768u: goto label_3ca768;
        case 0x3ca76cu: goto label_3ca76c;
        case 0x3ca770u: goto label_3ca770;
        case 0x3ca774u: goto label_3ca774;
        case 0x3ca778u: goto label_3ca778;
        case 0x3ca77cu: goto label_3ca77c;
        case 0x3ca780u: goto label_3ca780;
        case 0x3ca784u: goto label_3ca784;
        case 0x3ca788u: goto label_3ca788;
        case 0x3ca78cu: goto label_3ca78c;
        case 0x3ca790u: goto label_3ca790;
        case 0x3ca794u: goto label_3ca794;
        case 0x3ca798u: goto label_3ca798;
        case 0x3ca79cu: goto label_3ca79c;
        case 0x3ca7a0u: goto label_3ca7a0;
        case 0x3ca7a4u: goto label_3ca7a4;
        case 0x3ca7a8u: goto label_3ca7a8;
        case 0x3ca7acu: goto label_3ca7ac;
        case 0x3ca7b0u: goto label_3ca7b0;
        case 0x3ca7b4u: goto label_3ca7b4;
        case 0x3ca7b8u: goto label_3ca7b8;
        case 0x3ca7bcu: goto label_3ca7bc;
        case 0x3ca7c0u: goto label_3ca7c0;
        case 0x3ca7c4u: goto label_3ca7c4;
        case 0x3ca7c8u: goto label_3ca7c8;
        case 0x3ca7ccu: goto label_3ca7cc;
        case 0x3ca7d0u: goto label_3ca7d0;
        case 0x3ca7d4u: goto label_3ca7d4;
        case 0x3ca7d8u: goto label_3ca7d8;
        case 0x3ca7dcu: goto label_3ca7dc;
        case 0x3ca7e0u: goto label_3ca7e0;
        case 0x3ca7e4u: goto label_3ca7e4;
        case 0x3ca7e8u: goto label_3ca7e8;
        case 0x3ca7ecu: goto label_3ca7ec;
        case 0x3ca7f0u: goto label_3ca7f0;
        case 0x3ca7f4u: goto label_3ca7f4;
        case 0x3ca7f8u: goto label_3ca7f8;
        case 0x3ca7fcu: goto label_3ca7fc;
        case 0x3ca800u: goto label_3ca800;
        case 0x3ca804u: goto label_3ca804;
        case 0x3ca808u: goto label_3ca808;
        case 0x3ca80cu: goto label_3ca80c;
        case 0x3ca810u: goto label_3ca810;
        case 0x3ca814u: goto label_3ca814;
        case 0x3ca818u: goto label_3ca818;
        case 0x3ca81cu: goto label_3ca81c;
        case 0x3ca820u: goto label_3ca820;
        case 0x3ca824u: goto label_3ca824;
        case 0x3ca828u: goto label_3ca828;
        case 0x3ca82cu: goto label_3ca82c;
        case 0x3ca830u: goto label_3ca830;
        case 0x3ca834u: goto label_3ca834;
        case 0x3ca838u: goto label_3ca838;
        case 0x3ca83cu: goto label_3ca83c;
        case 0x3ca840u: goto label_3ca840;
        case 0x3ca844u: goto label_3ca844;
        case 0x3ca848u: goto label_3ca848;
        case 0x3ca84cu: goto label_3ca84c;
        case 0x3ca850u: goto label_3ca850;
        case 0x3ca854u: goto label_3ca854;
        case 0x3ca858u: goto label_3ca858;
        case 0x3ca85cu: goto label_3ca85c;
        case 0x3ca860u: goto label_3ca860;
        case 0x3ca864u: goto label_3ca864;
        case 0x3ca868u: goto label_3ca868;
        case 0x3ca86cu: goto label_3ca86c;
        case 0x3ca870u: goto label_3ca870;
        case 0x3ca874u: goto label_3ca874;
        case 0x3ca878u: goto label_3ca878;
        case 0x3ca87cu: goto label_3ca87c;
        case 0x3ca880u: goto label_3ca880;
        case 0x3ca884u: goto label_3ca884;
        case 0x3ca888u: goto label_3ca888;
        case 0x3ca88cu: goto label_3ca88c;
        case 0x3ca890u: goto label_3ca890;
        case 0x3ca894u: goto label_3ca894;
        case 0x3ca898u: goto label_3ca898;
        case 0x3ca89cu: goto label_3ca89c;
        case 0x3ca8a0u: goto label_3ca8a0;
        case 0x3ca8a4u: goto label_3ca8a4;
        case 0x3ca8a8u: goto label_3ca8a8;
        case 0x3ca8acu: goto label_3ca8ac;
        case 0x3ca8b0u: goto label_3ca8b0;
        case 0x3ca8b4u: goto label_3ca8b4;
        case 0x3ca8b8u: goto label_3ca8b8;
        case 0x3ca8bcu: goto label_3ca8bc;
        case 0x3ca8c0u: goto label_3ca8c0;
        case 0x3ca8c4u: goto label_3ca8c4;
        case 0x3ca8c8u: goto label_3ca8c8;
        case 0x3ca8ccu: goto label_3ca8cc;
        case 0x3ca8d0u: goto label_3ca8d0;
        case 0x3ca8d4u: goto label_3ca8d4;
        case 0x3ca8d8u: goto label_3ca8d8;
        case 0x3ca8dcu: goto label_3ca8dc;
        case 0x3ca8e0u: goto label_3ca8e0;
        case 0x3ca8e4u: goto label_3ca8e4;
        case 0x3ca8e8u: goto label_3ca8e8;
        case 0x3ca8ecu: goto label_3ca8ec;
        case 0x3ca8f0u: goto label_3ca8f0;
        case 0x3ca8f4u: goto label_3ca8f4;
        case 0x3ca8f8u: goto label_3ca8f8;
        case 0x3ca8fcu: goto label_3ca8fc;
        case 0x3ca900u: goto label_3ca900;
        case 0x3ca904u: goto label_3ca904;
        case 0x3ca908u: goto label_3ca908;
        case 0x3ca90cu: goto label_3ca90c;
        case 0x3ca910u: goto label_3ca910;
        case 0x3ca914u: goto label_3ca914;
        case 0x3ca918u: goto label_3ca918;
        case 0x3ca91cu: goto label_3ca91c;
        case 0x3ca920u: goto label_3ca920;
        case 0x3ca924u: goto label_3ca924;
        case 0x3ca928u: goto label_3ca928;
        case 0x3ca92cu: goto label_3ca92c;
        case 0x3ca930u: goto label_3ca930;
        case 0x3ca934u: goto label_3ca934;
        case 0x3ca938u: goto label_3ca938;
        case 0x3ca93cu: goto label_3ca93c;
        case 0x3ca940u: goto label_3ca940;
        case 0x3ca944u: goto label_3ca944;
        case 0x3ca948u: goto label_3ca948;
        case 0x3ca94cu: goto label_3ca94c;
        case 0x3ca950u: goto label_3ca950;
        case 0x3ca954u: goto label_3ca954;
        case 0x3ca958u: goto label_3ca958;
        case 0x3ca95cu: goto label_3ca95c;
        case 0x3ca960u: goto label_3ca960;
        case 0x3ca964u: goto label_3ca964;
        case 0x3ca968u: goto label_3ca968;
        case 0x3ca96cu: goto label_3ca96c;
        case 0x3ca970u: goto label_3ca970;
        case 0x3ca974u: goto label_3ca974;
        case 0x3ca978u: goto label_3ca978;
        case 0x3ca97cu: goto label_3ca97c;
        case 0x3ca980u: goto label_3ca980;
        case 0x3ca984u: goto label_3ca984;
        case 0x3ca988u: goto label_3ca988;
        case 0x3ca98cu: goto label_3ca98c;
        case 0x3ca990u: goto label_3ca990;
        case 0x3ca994u: goto label_3ca994;
        case 0x3ca998u: goto label_3ca998;
        case 0x3ca99cu: goto label_3ca99c;
        case 0x3ca9a0u: goto label_3ca9a0;
        case 0x3ca9a4u: goto label_3ca9a4;
        case 0x3ca9a8u: goto label_3ca9a8;
        case 0x3ca9acu: goto label_3ca9ac;
        case 0x3ca9b0u: goto label_3ca9b0;
        case 0x3ca9b4u: goto label_3ca9b4;
        case 0x3ca9b8u: goto label_3ca9b8;
        case 0x3ca9bcu: goto label_3ca9bc;
        case 0x3ca9c0u: goto label_3ca9c0;
        case 0x3ca9c4u: goto label_3ca9c4;
        case 0x3ca9c8u: goto label_3ca9c8;
        case 0x3ca9ccu: goto label_3ca9cc;
        case 0x3ca9d0u: goto label_3ca9d0;
        case 0x3ca9d4u: goto label_3ca9d4;
        default: break;
    }

    ctx->pc = 0x3ca658u;

label_3ca658:
    // 0x3ca658: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3ca658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_3ca65c:
    // 0x3ca65c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x3ca65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_3ca660:
    // 0x3ca660: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x3ca660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_3ca664:
    // 0x3ca664: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ca664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ca668:
    // 0x3ca668: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x3ca668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_3ca66c:
    // 0x3ca66c: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x3ca66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_3ca670:
    // 0x3ca670: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ca670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ca674:
    // 0x3ca674: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x3ca674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_3ca678:
    // 0x3ca678: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x3ca678u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3ca67c:
    // 0x3ca67c: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x3ca67cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3ca680:
    // 0x3ca680: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x3ca680u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3ca684:
    // 0x3ca684: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x3ca684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_3ca688:
    // 0x3ca688: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3ca688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3ca68c:
    // 0x3ca68c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ca68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ca690:
    // 0x3ca690: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ca690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ca694:
    // 0x3ca694: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ca694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ca698:
    // 0x3ca698: 0x40f809  jalr        $v0
label_3ca69c:
    if (ctx->pc == 0x3CA69Cu) {
        ctx->pc = 0x3CA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA698u;
        // 0x3ca69c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA6A0u;
        goto label_3ca6a0;
    }
    ctx->pc = 0x3CA698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA6A0u);
        ctx->pc = 0x3CA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA698u;
        // 0x3ca69c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA698u, 0x3CA6A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA6A0u;
label_3ca6a0:
    // 0x3ca6a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ca6a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ca6a4:
    // 0x3ca6a4: 0xc0ea146  jal         func_3A8518
label_3ca6a8:
    if (ctx->pc == 0x3CA6A8u) {
        ctx->pc = 0x3CA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6A4u;
        // 0x3ca6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA6ACu;
        goto label_3ca6ac;
    }
    ctx->pc = 0x3CA6A4u;
    SET_GPR_U32(ctx, 31, 0x3CA6ACu);
    ctx->pc = 0x3CA6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA6A4u;
    // 0x3ca6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CA6A4u, 0x3CA6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA6ACu;
label_3ca6ac:
    // 0x3ca6ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ca6acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ca6b0:
    // 0x3ca6b0: 0xc0ea13a  jal         func_3A84E8
label_3ca6b4:
    if (ctx->pc == 0x3CA6B4u) {
        ctx->pc = 0x3CA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6B0u;
        // 0x3ca6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA6B8u;
        goto label_3ca6b8;
    }
    ctx->pc = 0x3CA6B0u;
    SET_GPR_U32(ctx, 31, 0x3CA6B8u);
    ctx->pc = 0x3CA6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA6B0u;
    // 0x3ca6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3CA6B0u, 0x3CA6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA6B8u;
label_3ca6b8:
    // 0x3ca6b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ca6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ca6bc:
    // 0x3ca6bc: 0xc0ea13a  jal         func_3A84E8
label_3ca6c0:
    if (ctx->pc == 0x3CA6C0u) {
        ctx->pc = 0x3CA6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6BCu;
        // 0x3ca6c0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA6C4u;
        goto label_3ca6c4;
    }
    ctx->pc = 0x3CA6BCu;
    SET_GPR_U32(ctx, 31, 0x3CA6C4u);
    ctx->pc = 0x3CA6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA6BCu;
    // 0x3ca6c0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3CA6BCu, 0x3CA6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA6C4u;
label_3ca6c4:
    // 0x3ca6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ca6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ca6c8:
    // 0x3ca6c8: 0xc0ea13a  jal         func_3A84E8
label_3ca6cc:
    if (ctx->pc == 0x3CA6CCu) {
        ctx->pc = 0x3CA6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6C8u;
        // 0x3ca6cc: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA6D0u;
        goto label_3ca6d0;
    }
    ctx->pc = 0x3CA6C8u;
    SET_GPR_U32(ctx, 31, 0x3CA6D0u);
    ctx->pc = 0x3CA6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA6C8u;
    // 0x3ca6cc: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3CA6C8u, 0x3CA6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA6D0u;
label_3ca6d0:
    // 0x3ca6d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ca6d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ca6d4:
    // 0x3ca6d4: 0xc0ea146  jal         func_3A8518
label_3ca6d8:
    if (ctx->pc == 0x3CA6D8u) {
        ctx->pc = 0x3CA6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6D4u;
        // 0x3ca6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA6DCu;
        goto label_3ca6dc;
    }
    ctx->pc = 0x3CA6D4u;
    SET_GPR_U32(ctx, 31, 0x3CA6DCu);
    ctx->pc = 0x3CA6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA6D4u;
    // 0x3ca6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CA6D4u, 0x3CA6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA6DCu;
label_3ca6dc:
    // 0x3ca6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ca6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ca6e0:
    // 0x3ca6e0: 0xc0ea146  jal         func_3A8518
label_3ca6e4:
    if (ctx->pc == 0x3CA6E4u) {
        ctx->pc = 0x3CA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6E0u;
        // 0x3ca6e4: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA6E8u;
        goto label_3ca6e8;
    }
    ctx->pc = 0x3CA6E0u;
    SET_GPR_U32(ctx, 31, 0x3CA6E8u);
    ctx->pc = 0x3CA6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA6E0u;
    // 0x3ca6e4: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CA6E0u, 0x3CA6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA6E8u;
label_3ca6e8:
    // 0x3ca6e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ca6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ca6ec:
    // 0x3ca6ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ca6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ca6f0:
    // 0x3ca6f0: 0xc0ea12a  jal         func_3A84A8
label_3ca6f4:
    if (ctx->pc == 0x3CA6F4u) {
        ctx->pc = 0x3CA6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6F0u;
        // 0x3ca6f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA6F8u;
        goto label_3ca6f8;
    }
    ctx->pc = 0x3CA6F0u;
    SET_GPR_U32(ctx, 31, 0x3CA6F8u);
    ctx->pc = 0x3CA6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA6F0u;
    // 0x3ca6f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CA6F0u, 0x3CA6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA6F8u;
label_3ca6f8:
    // 0x3ca6f8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3ca6f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ca6fc:
    // 0x3ca6fc: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3ca6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3ca700:
    // 0x3ca700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ca700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ca704:
    // 0x3ca704: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ca704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ca708:
    // 0x3ca708: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3ca708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3ca70c:
    // 0x3ca70c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3ca70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3ca710:
    // 0x3ca710: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ca710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ca714:
    // 0x3ca714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ca714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ca718:
    // 0x3ca718: 0xae5100c4  sw          $s1, 0xC4($s2)
    ctx->pc = 0x3ca718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 17));
label_3ca71c:
    // 0x3ca71c: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x3ca71cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_3ca720:
    // 0x3ca720: 0xc0cd508  jal         func_335420
label_3ca724:
    if (ctx->pc == 0x3CA724u) {
        ctx->pc = 0x3CA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA720u;
        // 0x3ca724: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA728u;
        goto label_3ca728;
    }
    ctx->pc = 0x3CA720u;
    SET_GPR_U32(ctx, 31, 0x3CA728u);
    ctx->pc = 0x3CA724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA720u;
    // 0x3ca724: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3CA720u, 0x3CA728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA728u;
label_3ca728:
    // 0x3ca728: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3ca728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3ca72c:
    // 0x3ca72c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ca72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ca730:
    // 0x3ca730: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x3ca730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_3ca734:
    // 0x3ca734: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3ca734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_3ca738:
    // 0x3ca738: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3ca738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3ca73c:
    // 0x3ca73c: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x3ca73cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65280);
label_3ca740:
    // 0x3ca740: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ca740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ca744:
    // 0x3ca744: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ca744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ca748:
    // 0x3ca748: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x3ca748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
label_3ca74c:
    // 0x3ca74c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3ca74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3ca750:
    // 0x3ca750: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3ca750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_3ca754:
    // 0x3ca754: 0xc047e6c  jal         func_11F9B0
label_3ca758:
    if (ctx->pc == 0x3CA758u) {
        ctx->pc = 0x3CA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA754u;
        // 0x3ca758: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA75Cu;
        goto label_3ca75c;
    }
    ctx->pc = 0x3CA754u;
    SET_GPR_U32(ctx, 31, 0x3CA75Cu);
    ctx->pc = 0x3CA758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA754u;
    // 0x3ca758: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3CA754u, 0x3CA75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA75Cu;
label_3ca75c:
    // 0x3ca75c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ca75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ca760:
    // 0x3ca760: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x3ca760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_3ca764:
    // 0x3ca764: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x3ca764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_3ca768:
    // 0x3ca768: 0xa0f809  jalr        $a1
label_3ca76c:
    if (ctx->pc == 0x3CA76Cu) {
        ctx->pc = 0x3CA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA768u;
        // 0x3ca76c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA770u;
        goto label_3ca770;
    }
    ctx->pc = 0x3CA768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3CA770u);
        ctx->pc = 0x3CA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA768u;
        // 0x3ca76c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA768u, 0x3CA770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA770u;
label_3ca770:
    // 0x3ca770: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3ca770u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3ca774:
    // 0x3ca774: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ca774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ca778:
    // 0x3ca778: 0xc047e6c  jal         func_11F9B0
label_3ca77c:
    if (ctx->pc == 0x3CA77Cu) {
        ctx->pc = 0x3CA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA778u;
        // 0x3ca77c: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA780u;
        goto label_3ca780;
    }
    ctx->pc = 0x3CA778u;
    SET_GPR_U32(ctx, 31, 0x3CA780u);
    ctx->pc = 0x3CA77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA778u;
    // 0x3ca77c: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3CA778u, 0x3CA780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA780u;
label_3ca780:
    // 0x3ca780: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ca780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ca784:
    // 0x3ca784: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3ca784u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3ca788:
    // 0x3ca788: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3ca788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3ca78c:
    // 0x3ca78c: 0xa0f809  jalr        $a1
label_3ca790:
    if (ctx->pc == 0x3CA790u) {
        ctx->pc = 0x3CA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA78Cu;
        // 0x3ca790: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA794u;
        goto label_3ca794;
    }
    ctx->pc = 0x3CA78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3CA794u);
        ctx->pc = 0x3CA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA78Cu;
        // 0x3ca790: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA78Cu, 0x3CA794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA794u;
label_3ca794:
    // 0x3ca794: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3ca794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3ca798:
    // 0x3ca798: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3ca798u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3ca79c:
    // 0x3ca79c: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x3ca79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_3ca7a0:
    // 0x3ca7a0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3ca7a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ca7a4:
    // 0x3ca7a4: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x3ca7a4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3ca7a8:
    // 0x3ca7a8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3ca7a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ca7ac:
    // 0x3ca7ac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3ca7acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ca7b0:
    // 0x3ca7b0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3ca7b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ca7b4:
    // 0x3ca7b4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3ca7b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ca7b8:
    // 0x3ca7b8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3ca7b8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3ca7bc:
    // 0x3ca7bc: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3ca7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3ca7c0:
    // 0x3ca7c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ca7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ca7c4:
    // 0x3ca7c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ca7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ca7c8:
    // 0x3ca7c8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3ca7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3ca7cc:
    // 0x3ca7cc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ca7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ca7d0:
    // 0x3ca7d0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3ca7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3ca7d4:
    // 0x3ca7d4: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x3ca7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_3ca7d8:
    // 0x3ca7d8: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3ca7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3ca7dc:
    // 0x3ca7dc: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3ca7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3ca7e0:
    // 0x3ca7e0: 0xc0cd508  jal         func_335420
label_3ca7e4:
    if (ctx->pc == 0x3CA7E4u) {
        ctx->pc = 0x3CA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA7E0u;
        // 0x3ca7e4: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA7E8u;
        goto label_3ca7e8;
    }
    ctx->pc = 0x3CA7E0u;
    SET_GPR_U32(ctx, 31, 0x3CA7E8u);
    ctx->pc = 0x3CA7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA7E0u;
    // 0x3ca7e4: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3CA7E0u, 0x3CA7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA7E8u;
label_3ca7e8:
    // 0x3ca7e8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3ca7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3ca7ec:
    // 0x3ca7ec: 0x7ba60050  lq          $a2, 0x50($sp)
    ctx->pc = 0x3ca7ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ca7f0:
    // 0x3ca7f0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ca7f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ca7f4:
    // 0x3ca7f4: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3ca7f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3ca7f8:
    // 0x3ca7f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3ca7f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ca7fc:
    // 0x3ca7fc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3ca7fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ca800:
    // 0x3ca800: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3ca800u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ca804:
    // 0x3ca804: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3ca804u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ca808:
    // 0x3ca808: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3ca808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ca80c:
    // 0x3ca80c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3ca80cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ca810:
    // 0x3ca810: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3ca810u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ca814:
    // 0x3ca814: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3ca814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ca818:
    // 0x3ca818: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3ca818u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ca81c:
    // 0x3ca81c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3ca81cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ca820:
    // 0x3ca820: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3ca820u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ca824:
    // 0x3ca824: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3ca824u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ca828:
    // 0x3ca828: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3ca828u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ca82c:
    // 0x3ca82c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3ca82cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ca830:
    // 0x3ca830: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3ca830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ca834:
    // 0x3ca834: 0x48262800  qmfc2.ni    $a2, $vf5
    ctx->pc = 0x3ca834u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
label_3ca838:
    // 0x3ca838: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3ca838u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ca83c:
    // 0x3ca83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ca83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ca840:
    // 0x3ca840: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3ca840u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ca844:
    // 0x3ca844: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3ca844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3ca848:
    // 0x3ca848: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3ca848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ca84c:
    // 0x3ca84c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3ca84cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ca850:
    // 0x3ca850: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3ca850u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3ca854:
    // 0x3ca854: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3ca854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_3ca858:
    // 0x3ca858: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3ca858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ca85c:
    // 0x3ca85c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3ca85cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ca860:
    // 0x3ca860: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3ca860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ca864:
    // 0x3ca864: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3ca864u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ca868:
    // 0x3ca868: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3ca868u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3ca86c:
    // 0x3ca86c: 0x4a0003bf  vwaitq
    ctx->pc = 0x3ca86cu;
    // VWAITQ (Q already resolved in this runtime)
label_3ca870:
    // 0x3ca870: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3ca870u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3ca874:
    // 0x3ca874: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3ca874u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3ca878:
    // 0x3ca878: 0x4407a000  mfc1        $a3, $f20
    ctx->pc = 0x3ca878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3ca87c:
    // 0x3ca87c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ca87cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ca880:
    // 0x3ca880: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3ca880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_3ca884:
    // 0x3ca884: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3ca884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3ca888:
    // 0x3ca888: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x3ca888u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_3ca88c:
    // 0x3ca88c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3ca88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3ca890:
    // 0x3ca890: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3ca890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3ca894:
    // 0x3ca894: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3ca894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ca898:
    // 0x3ca898: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x3ca898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_3ca89c:
    // 0x3ca89c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ca89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ca8a0:
    // 0x3ca8a0: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x3ca8a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ca8a4:
    // 0x3ca8a4: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x3ca8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_3ca8a8:
    // 0x3ca8a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ca8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ca8ac:
    // 0x3ca8ac: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x3ca8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
label_3ca8b0:
    // 0x3ca8b0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3ca8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3ca8b4:
    // 0x3ca8b4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3ca8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3ca8b8:
    // 0x3ca8b8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3ca8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3ca8bc:
    // 0x3ca8bc: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x3ca8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
label_3ca8c0:
    // 0x3ca8c0: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x3ca8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
label_3ca8c4:
    // 0x3ca8c4: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x3ca8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_3ca8c8:
    // 0x3ca8c8: 0xc0cd508  jal         func_335420
label_3ca8cc:
    if (ctx->pc == 0x3CA8CCu) {
        ctx->pc = 0x3CA8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA8C8u;
        // 0x3ca8cc: 0x7fa60040  sq          $a2, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA8D0u;
        goto label_3ca8d0;
    }
    ctx->pc = 0x3CA8C8u;
    SET_GPR_U32(ctx, 31, 0x3CA8D0u);
    ctx->pc = 0x3CA8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA8C8u;
    // 0x3ca8cc: 0x7fa60040  sq          $a2, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3CA8C8u, 0x3CA8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA8D0u;
label_3ca8d0:
    // 0x3ca8d0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ca8d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ca8d4:
    // 0x3ca8d4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3ca8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ca8d8:
    // 0x3ca8d8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ca8d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3ca8dc:
    // 0x3ca8dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ca8dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ca8e0:
    // 0x3ca8e0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3ca8e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ca8e4:
    // 0x3ca8e4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3ca8e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3ca8e8:
    // 0x3ca8e8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3ca8e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3ca8ec:
    // 0x3ca8ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ca8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ca8f0:
    // 0x3ca8f0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3ca8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3ca8f4:
    // 0x3ca8f4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3ca8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3ca8f8:
    // 0x3ca8f8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3ca8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3ca8fc:
    // 0x3ca8fc: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3ca8fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3ca900:
    // 0x3ca900: 0x40f809  jalr        $v0
label_3ca904:
    if (ctx->pc == 0x3CA904u) {
        ctx->pc = 0x3CA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA900u;
        // 0x3ca904: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA908u;
        goto label_3ca908;
    }
    ctx->pc = 0x3CA900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA908u);
        ctx->pc = 0x3CA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA900u;
        // 0x3ca904: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA900u, 0x3CA908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA908u;
label_3ca908:
    // 0x3ca908: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x3ca908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_3ca90c:
    // 0x3ca90c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ca90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ca910:
    // 0x3ca910: 0x0  nop
    ctx->pc = 0x3ca910u;
    // NOP
label_3ca914:
    // 0x3ca914: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x3ca914u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[22]); }
label_3ca918:
    // 0x3ca918: 0xc10b1c6  jal         func_42C718
label_3ca91c:
    if (ctx->pc == 0x3CA91Cu) {
        ctx->pc = 0x3CA920u;
        goto label_3ca920;
    }
    ctx->pc = 0x3CA918u;
    SET_GPR_U32(ctx, 31, 0x3CA920u);
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x3CA918u, 0x3CA920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA920u;
label_3ca920:
    // 0x3ca920: 0x92630008  lbu         $v1, 0x8($s3)
    ctx->pc = 0x3ca920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_3ca924:
    // 0x3ca924: 0x42880b  movn        $s1, $v0, $v0
    ctx->pc = 0x3ca924u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3ca928:
    // 0x3ca928: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_3ca92c:
    if (ctx->pc == 0x3CA92Cu) {
        ctx->pc = 0x3CA92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA928u;
        // 0x3ca92c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA930u;
        goto label_3ca930;
    }
    ctx->pc = 0x3CA928u;
    {
        const bool branch_taken_0x3ca928 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca928) {
            ctx->pc = 0x3CA92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CA928u;
            // 0x3ca92c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CA930u;
            goto label_3ca930;
        }
    }
    ctx->pc = 0x3CA930u;
label_3ca930:
    // 0x3ca930: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3ca930u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3ca934:
    // 0x3ca934: 0x71001b  divu        $zero, $v1, $s1
    ctx->pc = 0x3ca934u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_3ca938:
    // 0x3ca938: 0x1812  mflo        $v1
    ctx->pc = 0x3ca938u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3ca93c:
    // 0x3ca93c: 0xc10b1c6  jal         func_42C718
label_3ca940:
    if (ctx->pc == 0x3CA940u) {
        ctx->pc = 0x3CA940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA93Cu;
        // 0x3ca940: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA944u;
        goto label_3ca944;
    }
    ctx->pc = 0x3CA93Cu;
    SET_GPR_U32(ctx, 31, 0x3CA944u);
    ctx->pc = 0x3CA940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA93Cu;
    // 0x3ca940: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x3CA93Cu, 0x3CA944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA944u;
label_3ca944:
    // 0x3ca944: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x3ca944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_3ca948:
    // 0x3ca948: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_3ca94c:
    if (ctx->pc == 0x3CA94Cu) {
        ctx->pc = 0x3CA94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA948u;
        // 0x3ca94c: 0xa2700014  sb          $s0, 0x14($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA950u;
        goto label_3ca950;
    }
    ctx->pc = 0x3CA948u;
    {
        const bool branch_taken_0x3ca948 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca948) {
            ctx->pc = 0x3CA94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CA948u;
            // 0x3ca94c: 0xa2700014  sb          $s0, 0x14($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CA97Cu;
            goto label_3ca97c;
        }
    }
    ctx->pc = 0x3CA950u;
label_3ca950:
    // 0x3ca950: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3ca950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3ca954:
    // 0x3ca954: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ca954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ca958:
    // 0x3ca958: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ca958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ca95c:
    // 0x3ca95c: 0x2415001e  addiu       $s5, $zero, 0x1E
    ctx->pc = 0x3ca95cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3ca960:
    // 0x3ca960: 0x0  nop
    ctx->pc = 0x3ca960u;
    // NOP
label_3ca964:
    // 0x3ca964: 0x0  nop
    ctx->pc = 0x3ca964u;
    // NOP
label_3ca968:
    // 0x3ca968: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x3ca968u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[22]); }
label_3ca96c:
    // 0x3ca96c: 0xc10b1c6  jal         func_42C718
label_3ca970:
    if (ctx->pc == 0x3CA970u) {
        ctx->pc = 0x3CA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA96Cu;
        // 0x3ca970: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA974u;
        goto label_3ca974;
    }
    ctx->pc = 0x3CA96Cu;
    SET_GPR_U32(ctx, 31, 0x3CA974u);
    ctx->pc = 0x3CA970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA96Cu;
    // 0x3ca970: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x3CA96Cu, 0x3CA974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA974u;
label_3ca974:
    // 0x3ca974: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ca974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ca978:
    // 0x3ca978: 0xa2700014  sb          $s0, 0x14($s3)
    ctx->pc = 0x3ca978u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 16));
label_3ca97c:
    // 0x3ca97c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ca97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ca980:
    // 0x3ca980: 0xae740010  sw          $s4, 0x10($s3)
    ctx->pc = 0x3ca980u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
label_3ca984:
    // 0x3ca984: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3ca984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ca988:
    // 0x3ca988: 0xae71000c  sw          $s1, 0xC($s3)
    ctx->pc = 0x3ca988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 17));
label_3ca98c:
    // 0x3ca98c: 0xc0e858c  jal         func_3A1630
label_3ca990:
    if (ctx->pc == 0x3CA990u) {
        ctx->pc = 0x3CA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA98Cu;
        // 0x3ca990: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA994u;
        goto label_3ca994;
    }
    ctx->pc = 0x3CA98Cu;
    SET_GPR_U32(ctx, 31, 0x3CA994u);
    ctx->pc = 0x3CA990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA98Cu;
    // 0x3ca990: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CA98Cu, 0x3CA994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA994u;
label_3ca994:
    // 0x3ca994: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3ca994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3ca998:
    // 0x3ca998: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x3ca998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3ca99c:
    // 0x3ca99c: 0x8c6244cc  lw          $v0, 0x44CC($v1)
    ctx->pc = 0x3ca99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17612)));
label_3ca9a0:
    // 0x3ca9a0: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x3ca9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3ca9a4:
    // 0x3ca9a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ca9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ca9a8:
    // 0x3ca9a8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x3ca9a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3ca9ac:
    // 0x3ca9ac: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x3ca9acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3ca9b0:
    // 0x3ca9b0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x3ca9b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ca9b4:
    // 0x3ca9b4: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x3ca9b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ca9b8:
    // 0x3ca9b8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3ca9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3ca9bc:
    // 0x3ca9bc: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x3ca9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ca9c0:
    // 0x3ca9c0: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x3ca9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ca9c4:
    // 0x3ca9c4: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x3ca9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ca9c8:
    // 0x3ca9c8: 0xac6244cc  sw          $v0, 0x44CC($v1)
    ctx->pc = 0x3ca9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17612), GPR_U32(ctx, 2));
label_3ca9cc:
    // 0x3ca9cc: 0x3e00008  jr          $ra
label_3ca9d0:
    if (ctx->pc == 0x3CA9D0u) {
        ctx->pc = 0x3CA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA9CCu;
        // 0x3ca9d0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA9D4u;
        goto label_3ca9d4;
    }
    ctx->pc = 0x3CA9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA9CCu;
        // 0x3ca9d0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA9D4u;
label_3ca9d4:
    // 0x3ca9d4: 0x0  nop
    ctx->pc = 0x3ca9d4u;
    // NOP
    ctx->pc = 0x3ca9d8u;
}
