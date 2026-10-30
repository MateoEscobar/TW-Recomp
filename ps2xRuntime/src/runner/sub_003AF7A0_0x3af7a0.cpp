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

// Function: sub_003AF7A0
// Address: 0x3af7a0 - 0x3afa00
void sub_003AF7A0_0x3af7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF7A0_0x3af7a0");
#endif

    switch (ctx->pc) {
        case 0x3af7a0u: goto label_3af7a0;
        case 0x3af7a4u: goto label_3af7a4;
        case 0x3af7a8u: goto label_3af7a8;
        case 0x3af7acu: goto label_3af7ac;
        case 0x3af7b0u: goto label_3af7b0;
        case 0x3af7b4u: goto label_3af7b4;
        case 0x3af7b8u: goto label_3af7b8;
        case 0x3af7bcu: goto label_3af7bc;
        case 0x3af7c0u: goto label_3af7c0;
        case 0x3af7c4u: goto label_3af7c4;
        case 0x3af7c8u: goto label_3af7c8;
        case 0x3af7ccu: goto label_3af7cc;
        case 0x3af7d0u: goto label_3af7d0;
        case 0x3af7d4u: goto label_3af7d4;
        case 0x3af7d8u: goto label_3af7d8;
        case 0x3af7dcu: goto label_3af7dc;
        case 0x3af7e0u: goto label_3af7e0;
        case 0x3af7e4u: goto label_3af7e4;
        case 0x3af7e8u: goto label_3af7e8;
        case 0x3af7ecu: goto label_3af7ec;
        case 0x3af7f0u: goto label_3af7f0;
        case 0x3af7f4u: goto label_3af7f4;
        case 0x3af7f8u: goto label_3af7f8;
        case 0x3af7fcu: goto label_3af7fc;
        case 0x3af800u: goto label_3af800;
        case 0x3af804u: goto label_3af804;
        case 0x3af808u: goto label_3af808;
        case 0x3af80cu: goto label_3af80c;
        case 0x3af810u: goto label_3af810;
        case 0x3af814u: goto label_3af814;
        case 0x3af818u: goto label_3af818;
        case 0x3af81cu: goto label_3af81c;
        case 0x3af820u: goto label_3af820;
        case 0x3af824u: goto label_3af824;
        case 0x3af828u: goto label_3af828;
        case 0x3af82cu: goto label_3af82c;
        case 0x3af830u: goto label_3af830;
        case 0x3af834u: goto label_3af834;
        case 0x3af838u: goto label_3af838;
        case 0x3af83cu: goto label_3af83c;
        case 0x3af840u: goto label_3af840;
        case 0x3af844u: goto label_3af844;
        case 0x3af848u: goto label_3af848;
        case 0x3af84cu: goto label_3af84c;
        case 0x3af850u: goto label_3af850;
        case 0x3af854u: goto label_3af854;
        case 0x3af858u: goto label_3af858;
        case 0x3af85cu: goto label_3af85c;
        case 0x3af860u: goto label_3af860;
        case 0x3af864u: goto label_3af864;
        case 0x3af868u: goto label_3af868;
        case 0x3af86cu: goto label_3af86c;
        case 0x3af870u: goto label_3af870;
        case 0x3af874u: goto label_3af874;
        case 0x3af878u: goto label_3af878;
        case 0x3af87cu: goto label_3af87c;
        case 0x3af880u: goto label_3af880;
        case 0x3af884u: goto label_3af884;
        case 0x3af888u: goto label_3af888;
        case 0x3af88cu: goto label_3af88c;
        case 0x3af890u: goto label_3af890;
        case 0x3af894u: goto label_3af894;
        case 0x3af898u: goto label_3af898;
        case 0x3af89cu: goto label_3af89c;
        case 0x3af8a0u: goto label_3af8a0;
        case 0x3af8a4u: goto label_3af8a4;
        case 0x3af8a8u: goto label_3af8a8;
        case 0x3af8acu: goto label_3af8ac;
        case 0x3af8b0u: goto label_3af8b0;
        case 0x3af8b4u: goto label_3af8b4;
        case 0x3af8b8u: goto label_3af8b8;
        case 0x3af8bcu: goto label_3af8bc;
        case 0x3af8c0u: goto label_3af8c0;
        case 0x3af8c4u: goto label_3af8c4;
        case 0x3af8c8u: goto label_3af8c8;
        case 0x3af8ccu: goto label_3af8cc;
        case 0x3af8d0u: goto label_3af8d0;
        case 0x3af8d4u: goto label_3af8d4;
        case 0x3af8d8u: goto label_3af8d8;
        case 0x3af8dcu: goto label_3af8dc;
        case 0x3af8e0u: goto label_3af8e0;
        case 0x3af8e4u: goto label_3af8e4;
        case 0x3af8e8u: goto label_3af8e8;
        case 0x3af8ecu: goto label_3af8ec;
        case 0x3af8f0u: goto label_3af8f0;
        case 0x3af8f4u: goto label_3af8f4;
        case 0x3af8f8u: goto label_3af8f8;
        case 0x3af8fcu: goto label_3af8fc;
        case 0x3af900u: goto label_3af900;
        case 0x3af904u: goto label_3af904;
        case 0x3af908u: goto label_3af908;
        case 0x3af90cu: goto label_3af90c;
        case 0x3af910u: goto label_3af910;
        case 0x3af914u: goto label_3af914;
        case 0x3af918u: goto label_3af918;
        case 0x3af91cu: goto label_3af91c;
        case 0x3af920u: goto label_3af920;
        case 0x3af924u: goto label_3af924;
        case 0x3af928u: goto label_3af928;
        case 0x3af92cu: goto label_3af92c;
        case 0x3af930u: goto label_3af930;
        case 0x3af934u: goto label_3af934;
        case 0x3af938u: goto label_3af938;
        case 0x3af93cu: goto label_3af93c;
        case 0x3af940u: goto label_3af940;
        case 0x3af944u: goto label_3af944;
        case 0x3af948u: goto label_3af948;
        case 0x3af94cu: goto label_3af94c;
        case 0x3af950u: goto label_3af950;
        case 0x3af954u: goto label_3af954;
        case 0x3af958u: goto label_3af958;
        case 0x3af95cu: goto label_3af95c;
        case 0x3af960u: goto label_3af960;
        case 0x3af964u: goto label_3af964;
        case 0x3af968u: goto label_3af968;
        case 0x3af96cu: goto label_3af96c;
        case 0x3af970u: goto label_3af970;
        case 0x3af974u: goto label_3af974;
        case 0x3af978u: goto label_3af978;
        case 0x3af97cu: goto label_3af97c;
        case 0x3af980u: goto label_3af980;
        case 0x3af984u: goto label_3af984;
        case 0x3af988u: goto label_3af988;
        case 0x3af98cu: goto label_3af98c;
        case 0x3af990u: goto label_3af990;
        case 0x3af994u: goto label_3af994;
        case 0x3af998u: goto label_3af998;
        case 0x3af99cu: goto label_3af99c;
        case 0x3af9a0u: goto label_3af9a0;
        case 0x3af9a4u: goto label_3af9a4;
        case 0x3af9a8u: goto label_3af9a8;
        case 0x3af9acu: goto label_3af9ac;
        case 0x3af9b0u: goto label_3af9b0;
        case 0x3af9b4u: goto label_3af9b4;
        case 0x3af9b8u: goto label_3af9b8;
        case 0x3af9bcu: goto label_3af9bc;
        case 0x3af9c0u: goto label_3af9c0;
        case 0x3af9c4u: goto label_3af9c4;
        case 0x3af9c8u: goto label_3af9c8;
        case 0x3af9ccu: goto label_3af9cc;
        case 0x3af9d0u: goto label_3af9d0;
        case 0x3af9d4u: goto label_3af9d4;
        case 0x3af9d8u: goto label_3af9d8;
        case 0x3af9dcu: goto label_3af9dc;
        case 0x3af9e0u: goto label_3af9e0;
        case 0x3af9e4u: goto label_3af9e4;
        case 0x3af9e8u: goto label_3af9e8;
        case 0x3af9ecu: goto label_3af9ec;
        case 0x3af9f0u: goto label_3af9f0;
        case 0x3af9f4u: goto label_3af9f4;
        case 0x3af9f8u: goto label_3af9f8;
        case 0x3af9fcu: goto label_3af9fc;
        default: break;
    }

    ctx->pc = 0x3af7a0u;

label_3af7a0:
    // 0x3af7a0: 0x27bdfae0  addiu       $sp, $sp, -0x520
    ctx->pc = 0x3af7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965984));
label_3af7a4:
    // 0x3af7a4: 0x7fb00500  sq          $s0, 0x500($sp)
    ctx->pc = 0x3af7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 16));
label_3af7a8:
    // 0x3af7a8: 0x7fb204e0  sq          $s2, 0x4E0($sp)
    ctx->pc = 0x3af7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 18));
label_3af7ac:
    // 0x3af7ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3af7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3af7b0:
    // 0x3af7b0: 0x7fb304d0  sq          $s3, 0x4D0($sp)
    ctx->pc = 0x3af7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 19));
label_3af7b4:
    // 0x3af7b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3af7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3af7b8:
    // 0x3af7b8: 0x7fb404c0  sq          $s4, 0x4C0($sp)
    ctx->pc = 0x3af7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 20));
label_3af7bc:
    // 0x3af7bc: 0x7fb504b0  sq          $s5, 0x4B0($sp)
    ctx->pc = 0x3af7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 21));
label_3af7c0:
    // 0x3af7c0: 0x7fb604a0  sq          $s6, 0x4A0($sp)
    ctx->pc = 0x3af7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 22));
label_3af7c4:
    // 0x3af7c4: 0x7fb70490  sq          $s7, 0x490($sp)
    ctx->pc = 0x3af7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 23));
label_3af7c8:
    // 0x3af7c8: 0x7fbe0480  sq          $fp, 0x480($sp)
    ctx->pc = 0x3af7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 30));
label_3af7cc:
    // 0x3af7cc: 0xe7b40510  swc1        $f20, 0x510($sp)
    ctx->pc = 0x3af7ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
label_3af7d0:
    // 0x3af7d0: 0x7fb104f0  sq          $s1, 0x4F0($sp)
    ctx->pc = 0x3af7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 17));
label_3af7d4:
    // 0x3af7d4: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x3af7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
label_3af7d8:
    // 0x3af7d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3af7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3af7dc:
    // 0x3af7dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3af7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3af7e0:
    // 0x3af7e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3af7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3af7e4:
    // 0x3af7e4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3af7e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3af7e8:
    // 0x3af7e8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3af7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3af7ec:
    // 0x3af7ec: 0x40f809  jalr        $v0
label_3af7f0:
    if (ctx->pc == 0x3AF7F0u) {
        ctx->pc = 0x3AF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF7ECu;
        // 0x3af7f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF7F4u;
        goto label_3af7f4;
    }
    ctx->pc = 0x3AF7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AF7F4u);
        ctx->pc = 0x3AF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF7ECu;
        // 0x3af7f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF7ECu, 0x3AF7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF7F4u;
label_3af7f4:
    // 0x3af7f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3af7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3af7f8:
    // 0x3af7f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3af7f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3af7fc:
    // 0x3af7fc: 0x84640180  lh          $a0, 0x180($v1)
    ctx->pc = 0x3af7fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 384)));
label_3af800:
    // 0x3af800: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x3af800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
label_3af804:
    // 0x3af804: 0x40f809  jalr        $v0
label_3af808:
    if (ctx->pc == 0x3AF808u) {
        ctx->pc = 0x3AF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF804u;
        // 0x3af808: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF80Cu;
        goto label_3af80c;
    }
    ctx->pc = 0x3AF804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AF80Cu);
        ctx->pc = 0x3AF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF804u;
        // 0x3af808: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF804u, 0x3AF80Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF80Cu;
label_3af80c:
    // 0x3af80c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3af80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3af810:
    // 0x3af810: 0xc0e858c  jal         func_3A1630
label_3af814:
    if (ctx->pc == 0x3AF814u) {
        ctx->pc = 0x3AF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF810u;
        // 0x3af814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF818u;
        goto label_3af818;
    }
    ctx->pc = 0x3AF810u;
    SET_GPR_U32(ctx, 31, 0x3AF818u);
    ctx->pc = 0x3AF814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF810u;
    // 0x3af814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AF810u, 0x3AF818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF818u;
label_3af818:
    // 0x3af818: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3af818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3af81c:
    // 0x3af81c: 0xe65400bc  swc1        $f20, 0xBC($s2)
    ctx->pc = 0x3af81cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 188), bits); }
label_3af820:
    // 0x3af820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3af824:
    // 0x3af824: 0xc0ea146  jal         func_3A8518
label_3af828:
    if (ctx->pc == 0x3AF828u) {
        ctx->pc = 0x3AF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF824u;
        // 0x3af828: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF82Cu;
        goto label_3af82c;
    }
    ctx->pc = 0x3AF824u;
    SET_GPR_U32(ctx, 31, 0x3AF82Cu);
    ctx->pc = 0x3AF828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF824u;
    // 0x3af828: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AF824u, 0x3AF82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF82Cu;
label_3af82c:
    // 0x3af82c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3af82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3af830:
    // 0x3af830: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3af830u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3af834:
    // 0x3af834: 0xc0ea12a  jal         func_3A84A8
label_3af838:
    if (ctx->pc == 0x3AF838u) {
        ctx->pc = 0x3AF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF834u;
        // 0x3af838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF83Cu;
        goto label_3af83c;
    }
    ctx->pc = 0x3AF834u;
    SET_GPR_U32(ctx, 31, 0x3AF83Cu);
    ctx->pc = 0x3AF838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF834u;
    // 0x3af838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AF834u, 0x3AF83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF83Cu;
label_3af83c:
    // 0x3af83c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3af83cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3af840:
    // 0x3af840: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3af840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3af844:
    // 0x3af844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3af844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3af848:
    // 0x3af848: 0xc0ea12a  jal         func_3A84A8
label_3af84c:
    if (ctx->pc == 0x3AF84Cu) {
        ctx->pc = 0x3AF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF848u;
        // 0x3af84c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF850u;
        goto label_3af850;
    }
    ctx->pc = 0x3AF848u;
    SET_GPR_U32(ctx, 31, 0x3AF850u);
    ctx->pc = 0x3AF84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF848u;
    // 0x3af84c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AF848u, 0x3AF850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF850u;
label_3af850:
    // 0x3af850: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3af850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3af854:
    // 0x3af854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3af858:
    // 0x3af858: 0xc0ea146  jal         func_3A8518
label_3af85c:
    if (ctx->pc == 0x3AF85Cu) {
        ctx->pc = 0x3AF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF858u;
        // 0x3af85c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF860u;
        goto label_3af860;
    }
    ctx->pc = 0x3AF858u;
    SET_GPR_U32(ctx, 31, 0x3AF860u);
    ctx->pc = 0x3AF85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF858u;
    // 0x3af85c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AF858u, 0x3AF860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF860u;
label_3af860:
    // 0x3af860: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3af860u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3af864:
    // 0x3af864: 0xc0ea14c  jal         func_3A8530
label_3af868:
    if (ctx->pc == 0x3AF868u) {
        ctx->pc = 0x3AF868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF864u;
        // 0x3af868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF86Cu;
        goto label_3af86c;
    }
    ctx->pc = 0x3AF864u;
    SET_GPR_U32(ctx, 31, 0x3AF86Cu);
    ctx->pc = 0x3AF868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF864u;
    // 0x3af868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3AF864u, 0x3AF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF86Cu;
label_3af86c:
    // 0x3af86c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3af86cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3af870:
    // 0x3af870: 0xc0ea146  jal         func_3A8518
label_3af874:
    if (ctx->pc == 0x3AF874u) {
        ctx->pc = 0x3AF874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF870u;
        // 0x3af874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF878u;
        goto label_3af878;
    }
    ctx->pc = 0x3AF870u;
    SET_GPR_U32(ctx, 31, 0x3AF878u);
    ctx->pc = 0x3AF874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF870u;
    // 0x3af874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AF870u, 0x3AF878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF878u;
label_3af878:
    // 0x3af878: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3af878u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3af87c:
    // 0x3af87c: 0x2682fffb  addiu       $v0, $s4, -0x5
    ctx->pc = 0x3af87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967291));
label_3af880:
    // 0x3af880: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x3af880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_3af884:
    // 0x3af884: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3af888:
    if (ctx->pc == 0x3AF888u) {
        ctx->pc = 0x3AF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF884u;
        // 0x3af888: 0x27b70020  addiu       $s7, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF88Cu;
        goto label_3af88c;
    }
    ctx->pc = 0x3AF884u;
    {
        const bool branch_taken_0x3af884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF884u;
        // 0x3af888: 0x27b70020  addiu       $s7, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af884) {
            ctx->pc = 0x3AF8D8u;
            goto label_3af8d8;
        }
    }
    ctx->pc = 0x3AF88Cu;
label_3af88c:
    // 0x3af88c: 0xc0e9694  jal         func_3A5A50
label_3af890:
    if (ctx->pc == 0x3AF890u) {
        ctx->pc = 0x3AF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF88Cu;
        // 0x3af890: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF894u;
        goto label_3af894;
    }
    ctx->pc = 0x3AF88Cu;
    SET_GPR_U32(ctx, 31, 0x3AF894u);
    ctx->pc = 0x3AF890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF88Cu;
    // 0x3af890: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3AF88Cu, 0x3AF894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF894u;
label_3af894:
    // 0x3af894: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3af898:
    if (ctx->pc == 0x3AF898u) {
        ctx->pc = 0x3AF898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF894u;
        // 0x3af898: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF89Cu;
        goto label_3af89c;
    }
    ctx->pc = 0x3AF894u;
    {
        const bool branch_taken_0x3af894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF894u;
        // 0x3af898: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af894) {
            ctx->pc = 0x3AF8D8u;
            goto label_3af8d8;
        }
    }
    ctx->pc = 0x3AF89Cu;
label_3af89c:
    // 0x3af89c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3af89cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3af8a0:
    // 0x3af8a0: 0x26101f98  addiu       $s0, $s0, 0x1F98
    ctx->pc = 0x3af8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8088));
label_3af8a4:
    // 0x3af8a4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3af8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3af8a8:
    // 0x3af8a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3af8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3af8ac:
    // 0x3af8ac: 0xe7b40440  swc1        $f20, 0x440($sp)
    ctx->pc = 0x3af8acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3af8b0:
    // 0x3af8b0: 0xafb50020  sw          $s5, 0x20($sp)
    ctx->pc = 0x3af8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 21));
label_3af8b4:
    // 0x3af8b4: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3af8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3af8b8:
    // 0x3af8b8: 0xafb40450  sw          $s4, 0x450($sp)
    ctx->pc = 0x3af8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 20));
label_3af8bc:
    // 0x3af8bc: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3af8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3af8c0:
    // 0x3af8c0: 0xafb60460  sw          $s6, 0x460($sp)
    ctx->pc = 0x3af8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 22));
label_3af8c4:
    // 0x3af8c4: 0xc0e9fd0  jal         func_3A7F40
label_3af8c8:
    if (ctx->pc == 0x3AF8C8u) {
        ctx->pc = 0x3AF8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF8C4u;
        // 0x3af8c8: 0x27a80460  addiu       $t0, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF8CCu;
        goto label_3af8cc;
    }
    ctx->pc = 0x3AF8C4u;
    SET_GPR_U32(ctx, 31, 0x3AF8CCu);
    ctx->pc = 0x3AF8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF8C4u;
    // 0x3af8c8: 0x27a80460  addiu       $t0, $sp, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3AF8C4u, 0x3AF8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF8CCu;
label_3af8cc:
    // 0x3af8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3af8d0:
    // 0x3af8d0: 0xc0f15bc  jal         func_3C56F0
label_3af8d4:
    if (ctx->pc == 0x3AF8D4u) {
        ctx->pc = 0x3AF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF8D0u;
        // 0x3af8d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF8D8u;
        goto label_3af8d8;
    }
    ctx->pc = 0x3AF8D0u;
    SET_GPR_U32(ctx, 31, 0x3AF8D8u);
    ctx->pc = 0x3AF8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF8D0u;
    // 0x3af8d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AF8D0u, 0x3AF8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF8D8u;
label_3af8d8:
    // 0x3af8d8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3af8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3af8dc:
    // 0x3af8dc: 0xc0e862e  jal         func_3A18B8
label_3af8e0:
    if (ctx->pc == 0x3AF8E0u) {
        ctx->pc = 0x3AF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF8DCu;
        // 0x3af8e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF8E4u;
        goto label_3af8e4;
    }
    ctx->pc = 0x3AF8DCu;
    SET_GPR_U32(ctx, 31, 0x3AF8E4u);
    ctx->pc = 0x3AF8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF8DCu;
    // 0x3af8e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3AF8DCu, 0x3AF8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF8E4u;
label_3af8e4:
    // 0x3af8e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3af8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3af8e8:
    // 0x3af8e8: 0xc0e896c  jal         func_3A25B0
label_3af8ec:
    if (ctx->pc == 0x3AF8ECu) {
        ctx->pc = 0x3AF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF8E8u;
        // 0x3af8ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF8F0u;
        goto label_3af8f0;
    }
    ctx->pc = 0x3AF8E8u;
    SET_GPR_U32(ctx, 31, 0x3AF8F0u);
    ctx->pc = 0x3AF8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF8E8u;
    // 0x3af8ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3AF8E8u, 0x3AF8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF8F0u;
label_3af8f0:
    // 0x3af8f0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3af8f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3af8f4:
    // 0x3af8f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3af8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3af8f8:
    // 0x3af8f8: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3af8f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3af8fc:
    // 0x3af8fc: 0x247016c0  addiu       $s0, $v1, 0x16C0
    ctx->pc = 0x3af8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3af900:
    // 0x3af900: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3af900u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3af904:
    // 0x3af904: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3af904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3af908:
    // 0x3af908: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3af908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3af90c:
    // 0x3af90c: 0x7e440020  sq          $a0, 0x20($s2)
    ctx->pc = 0x3af90cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 4));
label_3af910:
    // 0x3af910: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3af910u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3af914:
    // 0x3af914: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3af914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3af918:
    // 0x3af918: 0x60f809  jalr        $v1
label_3af91c:
    if (ctx->pc == 0x3AF91Cu) {
        ctx->pc = 0x3AF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF918u;
        // 0x3af91c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF920u;
        goto label_3af920;
    }
    ctx->pc = 0x3AF918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AF920u);
        ctx->pc = 0x3AF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF918u;
        // 0x3af91c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF918u, 0x3AF920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF920u;
label_3af920:
    // 0x3af920: 0xa2600020  sb          $zero, 0x20($s3)
    ctx->pc = 0x3af920u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 0));
label_3af924:
    // 0x3af924: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3af924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3af928:
    // 0x3af928: 0xc0e90ca  jal         func_3A4328
label_3af92c:
    if (ctx->pc == 0x3AF92Cu) {
        ctx->pc = 0x3AF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF928u;
        // 0x3af92c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF930u;
        goto label_3af930;
    }
    ctx->pc = 0x3AF928u;
    SET_GPR_U32(ctx, 31, 0x3AF930u);
    ctx->pc = 0x3AF92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF928u;
    // 0x3af92c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3AF928u, 0x3AF930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF930u;
label_3af930:
    // 0x3af930: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3af930u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3af934:
    // 0x3af934: 0xae760024  sw          $s6, 0x24($s3)
    ctx->pc = 0x3af934u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 22));
label_3af938:
    // 0x3af938: 0x17c00021  bnez        $fp, . + 4 + (0x21 << 2)
label_3af93c:
    if (ctx->pc == 0x3AF93Cu) {
        ctx->pc = 0x3AF93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF938u;
        // 0x3af93c: 0x7e620000  sq          $v0, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF940u;
        goto label_3af940;
    }
    ctx->pc = 0x3AF938u;
    {
        const bool branch_taken_0x3af938 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF938u;
        // 0x3af93c: 0x7e620000  sq          $v0, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af938) {
            ctx->pc = 0x3AF9C0u;
            goto label_3af9c0;
        }
    }
    ctx->pc = 0x3AF940u;
label_3af940:
    // 0x3af940: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3af940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3af944:
    // 0x3af944: 0xc0e911e  jal         func_3A4478
label_3af948:
    if (ctx->pc == 0x3AF948u) {
        ctx->pc = 0x3AF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF944u;
        // 0x3af948: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF94Cu;
        goto label_3af94c;
    }
    ctx->pc = 0x3AF944u;
    SET_GPR_U32(ctx, 31, 0x3AF94Cu);
    ctx->pc = 0x3AF948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF944u;
    // 0x3af948: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3AF944u, 0x3AF94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF94Cu;
label_3af94c:
    // 0x3af94c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3af94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3af950:
    // 0x3af950: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3af950u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3af954:
    // 0x3af954: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x3af954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_3af958:
    // 0x3af958: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3af958u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3af95c:
    // 0x3af95c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3af95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3af960:
    // 0x3af960: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x3af960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_3af964:
    // 0x3af964: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3af964u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3af968:
    // 0x3af968: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3af968u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3af96c:
    // 0x3af96c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3af96cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3af970:
    // 0x3af970: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3af970u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3af974:
    // 0x3af974: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3af974u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3af978:
    // 0x3af978: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3af978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3af97c:
    // 0x3af97c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3af97cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3af980:
    // 0x3af980: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3af980u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3af984:
    // 0x3af984: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3af984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3af988:
    // 0x3af988: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3af988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3af98c:
    // 0x3af98c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3af98cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3af990:
    // 0x3af990: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3af990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3af994:
    // 0x3af994: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3af994u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3af998:
    // 0x3af998: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3af998u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3af99c:
    // 0x3af99c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3af99cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3af9a0:
    // 0x3af9a0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3af9a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3af9a4:
    // 0x3af9a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3af9a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3af9a8:
    // 0x3af9a8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3af9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3af9ac:
    // 0x3af9ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3af9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3af9b0:
    // 0x3af9b0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3af9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3af9b4:
    // 0x3af9b4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3af9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3af9b8:
    // 0x3af9b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3af9bc:
    if (ctx->pc == 0x3AF9BCu) {
        ctx->pc = 0x3AF9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF9B8u;
        // 0x3af9bc: 0xae630028  sw          $v1, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF9C0u;
        goto label_3af9c0;
    }
    ctx->pc = 0x3AF9B8u;
    {
        const bool branch_taken_0x3af9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF9B8u;
        // 0x3af9bc: 0xae630028  sw          $v1, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af9b8) {
            ctx->pc = 0x3AF9C8u;
            goto label_3af9c8;
        }
    }
    ctx->pc = 0x3AF9C0u;
label_3af9c0:
    // 0x3af9c0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3af9c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3af9c4:
    // 0x3af9c4: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x3af9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_3af9c8:
    // 0x3af9c8: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3af9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3af9cc:
    // 0x3af9cc: 0x7bb00500  lq          $s0, 0x500($sp)
    ctx->pc = 0x3af9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3af9d0:
    // 0x3af9d0: 0x7bb104f0  lq          $s1, 0x4F0($sp)
    ctx->pc = 0x3af9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3af9d4:
    // 0x3af9d4: 0x7bb204e0  lq          $s2, 0x4E0($sp)
    ctx->pc = 0x3af9d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3af9d8:
    // 0x3af9d8: 0x7bb304d0  lq          $s3, 0x4D0($sp)
    ctx->pc = 0x3af9d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3af9dc:
    // 0x3af9dc: 0x7bb404c0  lq          $s4, 0x4C0($sp)
    ctx->pc = 0x3af9dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3af9e0:
    // 0x3af9e0: 0x7bb504b0  lq          $s5, 0x4B0($sp)
    ctx->pc = 0x3af9e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3af9e4:
    // 0x3af9e4: 0x7bb604a0  lq          $s6, 0x4A0($sp)
    ctx->pc = 0x3af9e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3af9e8:
    // 0x3af9e8: 0x7bb70490  lq          $s7, 0x490($sp)
    ctx->pc = 0x3af9e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3af9ec:
    // 0x3af9ec: 0x7bbe0480  lq          $fp, 0x480($sp)
    ctx->pc = 0x3af9ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3af9f0:
    // 0x3af9f0: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x3af9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
label_3af9f4:
    // 0x3af9f4: 0xc7b40510  lwc1        $f20, 0x510($sp)
    ctx->pc = 0x3af9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3af9f8:
    // 0x3af9f8: 0x3e00008  jr          $ra
label_3af9fc:
    if (ctx->pc == 0x3AF9FCu) {
        ctx->pc = 0x3AF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF9F8u;
        // 0x3af9fc: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFA00u;
        goto label_fallthrough_0x3af9f8;
    }
    ctx->pc = 0x3AF9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF9F8u;
        // 0x3af9fc: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3af9f8:
    ctx->pc = 0x3AFA00u;
}
