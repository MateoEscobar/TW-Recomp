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

// Function: sub_0027A6C0
// Address: 0x27a6c0 - 0x27aa38
void sub_0027A6C0_0x27a6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A6C0_0x27a6c0");
#endif

    switch (ctx->pc) {
        case 0x27a6c0u: goto label_27a6c0;
        case 0x27a6c4u: goto label_27a6c4;
        case 0x27a6c8u: goto label_27a6c8;
        case 0x27a6ccu: goto label_27a6cc;
        case 0x27a6d0u: goto label_27a6d0;
        case 0x27a6d4u: goto label_27a6d4;
        case 0x27a6d8u: goto label_27a6d8;
        case 0x27a6dcu: goto label_27a6dc;
        case 0x27a6e0u: goto label_27a6e0;
        case 0x27a6e4u: goto label_27a6e4;
        case 0x27a6e8u: goto label_27a6e8;
        case 0x27a6ecu: goto label_27a6ec;
        case 0x27a6f0u: goto label_27a6f0;
        case 0x27a6f4u: goto label_27a6f4;
        case 0x27a6f8u: goto label_27a6f8;
        case 0x27a6fcu: goto label_27a6fc;
        case 0x27a700u: goto label_27a700;
        case 0x27a704u: goto label_27a704;
        case 0x27a708u: goto label_27a708;
        case 0x27a70cu: goto label_27a70c;
        case 0x27a710u: goto label_27a710;
        case 0x27a714u: goto label_27a714;
        case 0x27a718u: goto label_27a718;
        case 0x27a71cu: goto label_27a71c;
        case 0x27a720u: goto label_27a720;
        case 0x27a724u: goto label_27a724;
        case 0x27a728u: goto label_27a728;
        case 0x27a72cu: goto label_27a72c;
        case 0x27a730u: goto label_27a730;
        case 0x27a734u: goto label_27a734;
        case 0x27a738u: goto label_27a738;
        case 0x27a73cu: goto label_27a73c;
        case 0x27a740u: goto label_27a740;
        case 0x27a744u: goto label_27a744;
        case 0x27a748u: goto label_27a748;
        case 0x27a74cu: goto label_27a74c;
        case 0x27a750u: goto label_27a750;
        case 0x27a754u: goto label_27a754;
        case 0x27a758u: goto label_27a758;
        case 0x27a75cu: goto label_27a75c;
        case 0x27a760u: goto label_27a760;
        case 0x27a764u: goto label_27a764;
        case 0x27a768u: goto label_27a768;
        case 0x27a76cu: goto label_27a76c;
        case 0x27a770u: goto label_27a770;
        case 0x27a774u: goto label_27a774;
        case 0x27a778u: goto label_27a778;
        case 0x27a77cu: goto label_27a77c;
        case 0x27a780u: goto label_27a780;
        case 0x27a784u: goto label_27a784;
        case 0x27a788u: goto label_27a788;
        case 0x27a78cu: goto label_27a78c;
        case 0x27a790u: goto label_27a790;
        case 0x27a794u: goto label_27a794;
        case 0x27a798u: goto label_27a798;
        case 0x27a79cu: goto label_27a79c;
        case 0x27a7a0u: goto label_27a7a0;
        case 0x27a7a4u: goto label_27a7a4;
        case 0x27a7a8u: goto label_27a7a8;
        case 0x27a7acu: goto label_27a7ac;
        case 0x27a7b0u: goto label_27a7b0;
        case 0x27a7b4u: goto label_27a7b4;
        case 0x27a7b8u: goto label_27a7b8;
        case 0x27a7bcu: goto label_27a7bc;
        case 0x27a7c0u: goto label_27a7c0;
        case 0x27a7c4u: goto label_27a7c4;
        case 0x27a7c8u: goto label_27a7c8;
        case 0x27a7ccu: goto label_27a7cc;
        case 0x27a7d0u: goto label_27a7d0;
        case 0x27a7d4u: goto label_27a7d4;
        case 0x27a7d8u: goto label_27a7d8;
        case 0x27a7dcu: goto label_27a7dc;
        case 0x27a7e0u: goto label_27a7e0;
        case 0x27a7e4u: goto label_27a7e4;
        case 0x27a7e8u: goto label_27a7e8;
        case 0x27a7ecu: goto label_27a7ec;
        case 0x27a7f0u: goto label_27a7f0;
        case 0x27a7f4u: goto label_27a7f4;
        case 0x27a7f8u: goto label_27a7f8;
        case 0x27a7fcu: goto label_27a7fc;
        case 0x27a800u: goto label_27a800;
        case 0x27a804u: goto label_27a804;
        case 0x27a808u: goto label_27a808;
        case 0x27a80cu: goto label_27a80c;
        case 0x27a810u: goto label_27a810;
        case 0x27a814u: goto label_27a814;
        case 0x27a818u: goto label_27a818;
        case 0x27a81cu: goto label_27a81c;
        case 0x27a820u: goto label_27a820;
        case 0x27a824u: goto label_27a824;
        case 0x27a828u: goto label_27a828;
        case 0x27a82cu: goto label_27a82c;
        case 0x27a830u: goto label_27a830;
        case 0x27a834u: goto label_27a834;
        case 0x27a838u: goto label_27a838;
        case 0x27a83cu: goto label_27a83c;
        case 0x27a840u: goto label_27a840;
        case 0x27a844u: goto label_27a844;
        case 0x27a848u: goto label_27a848;
        case 0x27a84cu: goto label_27a84c;
        case 0x27a850u: goto label_27a850;
        case 0x27a854u: goto label_27a854;
        case 0x27a858u: goto label_27a858;
        case 0x27a85cu: goto label_27a85c;
        case 0x27a860u: goto label_27a860;
        case 0x27a864u: goto label_27a864;
        case 0x27a868u: goto label_27a868;
        case 0x27a86cu: goto label_27a86c;
        case 0x27a870u: goto label_27a870;
        case 0x27a874u: goto label_27a874;
        case 0x27a878u: goto label_27a878;
        case 0x27a87cu: goto label_27a87c;
        case 0x27a880u: goto label_27a880;
        case 0x27a884u: goto label_27a884;
        case 0x27a888u: goto label_27a888;
        case 0x27a88cu: goto label_27a88c;
        case 0x27a890u: goto label_27a890;
        case 0x27a894u: goto label_27a894;
        case 0x27a898u: goto label_27a898;
        case 0x27a89cu: goto label_27a89c;
        case 0x27a8a0u: goto label_27a8a0;
        case 0x27a8a4u: goto label_27a8a4;
        case 0x27a8a8u: goto label_27a8a8;
        case 0x27a8acu: goto label_27a8ac;
        case 0x27a8b0u: goto label_27a8b0;
        case 0x27a8b4u: goto label_27a8b4;
        case 0x27a8b8u: goto label_27a8b8;
        case 0x27a8bcu: goto label_27a8bc;
        case 0x27a8c0u: goto label_27a8c0;
        case 0x27a8c4u: goto label_27a8c4;
        case 0x27a8c8u: goto label_27a8c8;
        case 0x27a8ccu: goto label_27a8cc;
        case 0x27a8d0u: goto label_27a8d0;
        case 0x27a8d4u: goto label_27a8d4;
        case 0x27a8d8u: goto label_27a8d8;
        case 0x27a8dcu: goto label_27a8dc;
        case 0x27a8e0u: goto label_27a8e0;
        case 0x27a8e4u: goto label_27a8e4;
        case 0x27a8e8u: goto label_27a8e8;
        case 0x27a8ecu: goto label_27a8ec;
        case 0x27a8f0u: goto label_27a8f0;
        case 0x27a8f4u: goto label_27a8f4;
        case 0x27a8f8u: goto label_27a8f8;
        case 0x27a8fcu: goto label_27a8fc;
        case 0x27a900u: goto label_27a900;
        case 0x27a904u: goto label_27a904;
        case 0x27a908u: goto label_27a908;
        case 0x27a90cu: goto label_27a90c;
        case 0x27a910u: goto label_27a910;
        case 0x27a914u: goto label_27a914;
        case 0x27a918u: goto label_27a918;
        case 0x27a91cu: goto label_27a91c;
        case 0x27a920u: goto label_27a920;
        case 0x27a924u: goto label_27a924;
        case 0x27a928u: goto label_27a928;
        case 0x27a92cu: goto label_27a92c;
        case 0x27a930u: goto label_27a930;
        case 0x27a934u: goto label_27a934;
        case 0x27a938u: goto label_27a938;
        case 0x27a93cu: goto label_27a93c;
        case 0x27a940u: goto label_27a940;
        case 0x27a944u: goto label_27a944;
        case 0x27a948u: goto label_27a948;
        case 0x27a94cu: goto label_27a94c;
        case 0x27a950u: goto label_27a950;
        case 0x27a954u: goto label_27a954;
        case 0x27a958u: goto label_27a958;
        case 0x27a95cu: goto label_27a95c;
        case 0x27a960u: goto label_27a960;
        case 0x27a964u: goto label_27a964;
        case 0x27a968u: goto label_27a968;
        case 0x27a96cu: goto label_27a96c;
        case 0x27a970u: goto label_27a970;
        case 0x27a974u: goto label_27a974;
        case 0x27a978u: goto label_27a978;
        case 0x27a97cu: goto label_27a97c;
        case 0x27a980u: goto label_27a980;
        case 0x27a984u: goto label_27a984;
        case 0x27a988u: goto label_27a988;
        case 0x27a98cu: goto label_27a98c;
        case 0x27a990u: goto label_27a990;
        case 0x27a994u: goto label_27a994;
        case 0x27a998u: goto label_27a998;
        case 0x27a99cu: goto label_27a99c;
        case 0x27a9a0u: goto label_27a9a0;
        case 0x27a9a4u: goto label_27a9a4;
        case 0x27a9a8u: goto label_27a9a8;
        case 0x27a9acu: goto label_27a9ac;
        case 0x27a9b0u: goto label_27a9b0;
        case 0x27a9b4u: goto label_27a9b4;
        case 0x27a9b8u: goto label_27a9b8;
        case 0x27a9bcu: goto label_27a9bc;
        case 0x27a9c0u: goto label_27a9c0;
        case 0x27a9c4u: goto label_27a9c4;
        case 0x27a9c8u: goto label_27a9c8;
        case 0x27a9ccu: goto label_27a9cc;
        case 0x27a9d0u: goto label_27a9d0;
        case 0x27a9d4u: goto label_27a9d4;
        case 0x27a9d8u: goto label_27a9d8;
        case 0x27a9dcu: goto label_27a9dc;
        case 0x27a9e0u: goto label_27a9e0;
        case 0x27a9e4u: goto label_27a9e4;
        case 0x27a9e8u: goto label_27a9e8;
        case 0x27a9ecu: goto label_27a9ec;
        case 0x27a9f0u: goto label_27a9f0;
        case 0x27a9f4u: goto label_27a9f4;
        case 0x27a9f8u: goto label_27a9f8;
        case 0x27a9fcu: goto label_27a9fc;
        case 0x27aa00u: goto label_27aa00;
        case 0x27aa04u: goto label_27aa04;
        case 0x27aa08u: goto label_27aa08;
        case 0x27aa0cu: goto label_27aa0c;
        case 0x27aa10u: goto label_27aa10;
        case 0x27aa14u: goto label_27aa14;
        case 0x27aa18u: goto label_27aa18;
        case 0x27aa1cu: goto label_27aa1c;
        case 0x27aa20u: goto label_27aa20;
        case 0x27aa24u: goto label_27aa24;
        case 0x27aa28u: goto label_27aa28;
        case 0x27aa2cu: goto label_27aa2c;
        case 0x27aa30u: goto label_27aa30;
        case 0x27aa34u: goto label_27aa34;
        default: break;
    }

    ctx->pc = 0x27a6c0u;

label_27a6c0:
    // 0x27a6c0: 0x27bdfa50  addiu       $sp, $sp, -0x5B0
    ctx->pc = 0x27a6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965840));
label_27a6c4:
    // 0x27a6c4: 0x7fb10580  sq          $s1, 0x580($sp)
    ctx->pc = 0x27a6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 17));
label_27a6c8:
    // 0x27a6c8: 0xe7b505a8  swc1        $f21, 0x5A8($sp)
    ctx->pc = 0x27a6c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1448), bits); }
label_27a6cc:
    // 0x27a6cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27a6ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27a6d0:
    // 0x27a6d0: 0x7fb40550  sq          $s4, 0x550($sp)
    ctx->pc = 0x27a6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 20));
label_27a6d4:
    // 0x27a6d4: 0x7fb70520  sq          $s7, 0x520($sp)
    ctx->pc = 0x27a6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 23));
label_27a6d8:
    // 0x27a6d8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x27a6d8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_27a6dc:
    // 0x27a6dc: 0x7fb00590  sq          $s0, 0x590($sp)
    ctx->pc = 0x27a6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 16));
label_27a6e0:
    // 0x27a6e0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x27a6e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a6e4:
    // 0x27a6e4: 0x7fb20570  sq          $s2, 0x570($sp)
    ctx->pc = 0x27a6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 18));
label_27a6e8:
    // 0x27a6e8: 0x7fb30560  sq          $s3, 0x560($sp)
    ctx->pc = 0x27a6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 19));
label_27a6ec:
    // 0x27a6ec: 0x7fb50540  sq          $s5, 0x540($sp)
    ctx->pc = 0x27a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 21));
label_27a6f0:
    // 0x27a6f0: 0x7fb60530  sq          $s6, 0x530($sp)
    ctx->pc = 0x27a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 22));
label_27a6f4:
    // 0x27a6f4: 0x7fbe0510  sq          $fp, 0x510($sp)
    ctx->pc = 0x27a6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 30));
label_27a6f8:
    // 0x27a6f8: 0xffbf0500  sd          $ra, 0x500($sp)
    ctx->pc = 0x27a6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1280), GPR_U64(ctx, 31));
label_27a6fc:
    // 0x27a6fc: 0xc089baa  jal         func_226EA8
label_27a700:
    if (ctx->pc == 0x27A700u) {
        ctx->pc = 0x27A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6FCu;
        // 0x27a700: 0xe7b405a0  swc1        $f20, 0x5A0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1440), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A704u;
        goto label_27a704;
    }
    ctx->pc = 0x27A6FCu;
    SET_GPR_U32(ctx, 31, 0x27A704u);
    ctx->pc = 0x27A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A6FCu;
    // 0x27a700: 0xe7b405a0  swc1        $f20, 0x5A0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1440), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226EA8u, 0x27A6FCu, 0x27A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A704u;
label_27a704:
    // 0x27a704: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27a704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a708:
    // 0x27a708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a70c:
    // 0x27a70c: 0xc09e848  jal         func_27A120
label_27a710:
    if (ctx->pc == 0x27A710u) {
        ctx->pc = 0x27A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A70Cu;
        // 0x27a710: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A714u;
        goto label_27a714;
    }
    ctx->pc = 0x27A70Cu;
    SET_GPR_U32(ctx, 31, 0x27A714u);
    ctx->pc = 0x27A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A70Cu;
    // 0x27a710: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A120u, 0x27A70Cu, 0x27A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A714u;
label_27a714:
    // 0x27a714: 0x144000ba  bnez        $v0, . + 4 + (0xBA << 2)
label_27a718:
    if (ctx->pc == 0x27A718u) {
        ctx->pc = 0x27A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A714u;
        // 0x27a718: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A71Cu;
        goto label_27a71c;
    }
    ctx->pc = 0x27A714u;
    {
        const bool branch_taken_0x27a714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A714u;
        // 0x27a718: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a714) {
            ctx->pc = 0x27AA00u;
            goto label_27aa00;
        }
    }
    ctx->pc = 0x27A71Cu;
label_27a71c:
    // 0x27a71c: 0x3c013f71  lui         $at, 0x3F71
    ctx->pc = 0x27a71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16241 << 16));
label_27a720:
    // 0x27a720: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x27a720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
label_27a724:
    // 0x27a724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27a728:
    // 0x27a728: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27a728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_27a72c:
    // 0x27a72c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x27a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_27a730:
    // 0x27a730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a734:
    // 0x27a734: 0xe440096c  swc1        $f0, 0x96C($v0)
    ctx->pc = 0x27a734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2412), bits); }
label_27a738:
    // 0x27a738: 0x26300090  addiu       $s0, $s1, 0x90
    ctx->pc = 0x27a738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_27a73c:
    // 0x27a73c: 0xac6000d8  sw          $zero, 0xD8($v1)
    ctx->pc = 0x27a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 0));
label_27a740:
    // 0x27a740: 0xc087468  jal         func_21D1A0
label_27a744:
    if (ctx->pc == 0x27A744u) {
        ctx->pc = 0x27A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A740u;
        // 0x27a744: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A748u;
        goto label_27a748;
    }
    ctx->pc = 0x27A740u;
    SET_GPR_U32(ctx, 31, 0x27A748u);
    ctx->pc = 0x27A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A740u;
    // 0x27a744: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D1A0u, 0x27A740u, 0x27A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A748u;
label_27a748:
    // 0x27a748: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x27a748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_27a74c:
    // 0x27a74c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x27a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_27a750:
    // 0x27a750: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x27a750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_27a754:
    // 0x27a754: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27a754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_27a758:
    // 0x27a758: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27a758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27a75c:
    // 0x27a75c: 0x24564b00  addiu       $s6, $v0, 0x4B00
    ctx->pc = 0x27a75cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_27a760:
    // 0x27a760: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x27a760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_27a764:
    // 0x27a764: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27a764u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
label_27a768:
    // 0x27a768: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x27a768u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_27a76c:
    // 0x27a76c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x27a76cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a770:
    // 0x27a770: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x27a770u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_27a774:
    // 0x27a774: 0x25089410  addiu       $t0, $t0, -0x6BF0
    ctx->pc = 0x27a774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939664));
label_27a778:
    // 0x27a778: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27a77c:
    // 0x27a77c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27a77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27a780:
    // 0x27a780: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27a780u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_27a784:
    // 0x27a784: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27a784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a788:
    // 0x27a788: 0xf63821  addu        $a3, $a3, $s6
    ctx->pc = 0x27a788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
label_27a78c:
    // 0x27a78c: 0xc089d66  jal         func_227598
label_27a790:
    if (ctx->pc == 0x27A790u) {
        ctx->pc = 0x27A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A78Cu;
        // 0x27a790: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A794u;
        goto label_27a794;
    }
    ctx->pc = 0x27A78Cu;
    SET_GPR_U32(ctx, 31, 0x27A794u);
    ctx->pc = 0x27A790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A78Cu;
    // 0x27a790: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27A78Cu, 0x27A794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A794u;
label_27a794:
    // 0x27a794: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a798:
    // 0x27a798: 0x16000055  bnez        $s0, . + 4 + (0x55 << 2)
label_27a79c:
    if (ctx->pc == 0x27A79Cu) {
        ctx->pc = 0x27A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A798u;
        // 0x27a79c: 0x3c080028  lui         $t0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A7A0u;
        goto label_27a7a0;
    }
    ctx->pc = 0x27A798u;
    {
        const bool branch_taken_0x27a798 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A798u;
        // 0x27a79c: 0x3c080028  lui         $t0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a798) {
            ctx->pc = 0x27A8F0u;
            goto label_27a8f0;
        }
    }
    ctx->pc = 0x27A7A0u;
label_27a7a0:
    // 0x27a7a0: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27a7a0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_27a7a4:
    // 0x27a7a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27a7a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_27a7a8:
    // 0x27a7a8: 0x25089568  addiu       $t0, $t0, -0x6A98
    ctx->pc = 0x27a7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940008));
label_27a7ac:
    // 0x27a7ac: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27a7acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_27a7b0:
    // 0x27a7b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27a7b4:
    // 0x27a7b4: 0xf63821  addu        $a3, $a3, $s6
    ctx->pc = 0x27a7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
label_27a7b8:
    // 0x27a7b8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27a7bc:
    // 0x27a7bc: 0xc089d66  jal         func_227598
label_27a7c0:
    if (ctx->pc == 0x27A7C0u) {
        ctx->pc = 0x27A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A7BCu;
        // 0x27a7c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A7C4u;
        goto label_27a7c4;
    }
    ctx->pc = 0x27A7BCu;
    SET_GPR_U32(ctx, 31, 0x27A7C4u);
    ctx->pc = 0x27A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A7BCu;
    // 0x27a7c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27A7BCu, 0x27A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A7C4u;
label_27a7c4:
    // 0x27a7c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a7c8:
    // 0x27a7c8: 0x16000049  bnez        $s0, . + 4 + (0x49 << 2)
label_27a7cc:
    if (ctx->pc == 0x27A7CCu) {
        ctx->pc = 0x27A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A7C8u;
        // 0x27a7cc: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A7D0u;
        goto label_27a7d0;
    }
    ctx->pc = 0x27A7C8u;
    {
        const bool branch_taken_0x27a7c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A7C8u;
        // 0x27a7cc: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7c8) {
            ctx->pc = 0x27A8F0u;
            goto label_27a8f0;
        }
    }
    ctx->pc = 0x27A7D0u;
label_27a7d0:
    // 0x27a7d0: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x27a7d0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_27a7d4:
    // 0x27a7d4: 0x8ea22c7c  lw          $v0, 0x2C7C($s5)
    ctx->pc = 0x27a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
label_27a7d8:
    // 0x27a7d8: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x27a7d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_27a7dc:
    // 0x27a7dc: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x27a7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_27a7e0:
    // 0x27a7e0: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x27a7e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
label_27a7e4:
    // 0x27a7e4: 0x8c440844  lw          $a0, 0x844($v0)
    ctx->pc = 0x27a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2116)));
label_27a7e8:
    // 0x27a7e8: 0x1164021  addu        $t0, $t0, $s6
    ctx->pc = 0x27a7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 22)));
label_27a7ec:
    // 0x27a7ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27a7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27a7f0:
    // 0x27a7f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27a7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27a7f4:
    // 0x27a7f4: 0x25299f50  addiu       $t1, $t1, -0x60B0
    ctx->pc = 0x27a7f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942544));
label_27a7f8:
    // 0x27a7f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27a7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27a7fc:
    // 0x27a7fc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x27a7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27a800:
    // 0x27a800: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27a800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a804:
    // 0x27a804: 0xc0e3a18  jal         func_38E860
label_27a808:
    if (ctx->pc == 0x27A808u) {
        ctx->pc = 0x27A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A804u;
        // 0x27a808: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A80Cu;
        goto label_27a80c;
    }
    ctx->pc = 0x27A804u;
    SET_GPR_U32(ctx, 31, 0x27A80Cu);
    ctx->pc = 0x27A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A804u;
    // 0x27a808: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E860u, 0x27A804u, 0x27A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A80Cu;
label_27a80c:
    // 0x27a80c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a80cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a810:
    // 0x27a810: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_27a814:
    if (ctx->pc == 0x27A814u) {
        ctx->pc = 0x27A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A810u;
        // 0x27a814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A818u;
        goto label_27a818;
    }
    ctx->pc = 0x27A810u;
    {
        const bool branch_taken_0x27a810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A810u;
        // 0x27a814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a810) {
            ctx->pc = 0x27A838u;
            goto label_27a838;
        }
    }
    ctx->pc = 0x27A818u;
label_27a818:
    // 0x27a818: 0xc0e1a48  jal         func_386920
label_27a81c:
    if (ctx->pc == 0x27A81Cu) {
        ctx->pc = 0x27A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A818u;
        // 0x27a81c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A820u;
        goto label_27a820;
    }
    ctx->pc = 0x27A818u;
    SET_GPR_U32(ctx, 31, 0x27A820u);
    ctx->pc = 0x27A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A818u;
    // 0x27a81c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386920u, 0x27A818u, 0x27A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A820u;
label_27a820:
    // 0x27a820: 0x8fb70110  lw          $s7, 0x110($sp)
    ctx->pc = 0x27a820u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_27a824:
    // 0x27a824: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x27a824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_27a828:
    // 0x27a828: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x27a828u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_27a82c:
    // 0x27a82c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x27a82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27a830:
    // 0x27a830: 0x10000073  b           . + 4 + (0x73 << 2)
label_27a834:
    if (ctx->pc == 0x27A834u) {
        ctx->pc = 0x27A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A830u;
        // 0x27a834: 0x7c8300e0  sq          $v1, 0xE0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 224), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A838u;
        goto label_27a838;
    }
    ctx->pc = 0x27A830u;
    {
        const bool branch_taken_0x27a830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A830u;
        // 0x27a834: 0x7c8300e0  sq          $v1, 0xE0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 224), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a830) {
            ctx->pc = 0x27AA00u;
            goto label_27aa00;
        }
    }
    ctx->pc = 0x27A838u;
label_27a838:
    // 0x27a838: 0x8ea22c7c  lw          $v0, 0x2C7C($s5)
    ctx->pc = 0x27a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
label_27a83c:
    // 0x27a83c: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x27a83cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
label_27a840:
    // 0x27a840: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x27a840u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_27a844:
    // 0x27a844: 0x2529a120  addiu       $t1, $t1, -0x5EE0
    ctx->pc = 0x27a844u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294943008));
label_27a848:
    // 0x27a848: 0x8c440840  lw          $a0, 0x840($v0)
    ctx->pc = 0x27a848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
label_27a84c:
    // 0x27a84c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27a84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27a850:
    // 0x27a850: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x27a850u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_27a854:
    // 0x27a854: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x27a854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27a858:
    // 0x27a858: 0x1164021  addu        $t0, $t0, $s6
    ctx->pc = 0x27a858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 22)));
label_27a85c:
    // 0x27a85c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27a85cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a860:
    // 0x27a860: 0xc0e6ac8  jal         func_39AB20
label_27a864:
    if (ctx->pc == 0x27A864u) {
        ctx->pc = 0x27A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A860u;
        // 0x27a864: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A868u;
        goto label_27a868;
    }
    ctx->pc = 0x27A860u;
    SET_GPR_U32(ctx, 31, 0x27A868u);
    ctx->pc = 0x27A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A860u;
    // 0x27a864: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x27A860u, 0x27A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A868u;
label_27a868:
    // 0x27a868: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a86c:
    // 0x27a86c: 0x16000020  bnez        $s0, . + 4 + (0x20 << 2)
label_27a870:
    if (ctx->pc == 0x27A870u) {
        ctx->pc = 0x27A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A86Cu;
        // 0x27a870: 0x8ea22c7c  lw          $v0, 0x2C7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A874u;
        goto label_27a874;
    }
    ctx->pc = 0x27A86Cu;
    {
        const bool branch_taken_0x27a86c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A86Cu;
        // 0x27a870: 0x8ea22c7c  lw          $v0, 0x2C7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a86c) {
            ctx->pc = 0x27A8F0u;
            goto label_27a8f0;
        }
    }
    ctx->pc = 0x27A874u;
label_27a874:
    // 0x27a874: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x27a874u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
label_27a878:
    // 0x27a878: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x27a878u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_27a87c:
    // 0x27a87c: 0x2529a070  addiu       $t1, $t1, -0x5F90
    ctx->pc = 0x27a87cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942832));
label_27a880:
    // 0x27a880: 0x8c44084c  lw          $a0, 0x84C($v0)
    ctx->pc = 0x27a880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
label_27a884:
    // 0x27a884: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27a884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27a888:
    // 0x27a888: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x27a888u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_27a88c:
    // 0x27a88c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x27a88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27a890:
    // 0x27a890: 0x1164021  addu        $t0, $t0, $s6
    ctx->pc = 0x27a890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 22)));
label_27a894:
    // 0x27a894: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27a894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a898:
    // 0x27a898: 0xc0e3f1c  jal         func_38FC70
label_27a89c:
    if (ctx->pc == 0x27A89Cu) {
        ctx->pc = 0x27A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A898u;
        // 0x27a89c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A8A0u;
        goto label_27a8a0;
    }
    ctx->pc = 0x27A898u;
    SET_GPR_U32(ctx, 31, 0x27A8A0u);
    ctx->pc = 0x27A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A898u;
    // 0x27a89c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x27A898u, 0x27A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A8A0u;
label_27a8a0:
    // 0x27a8a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a8a4:
    // 0x27a8a4: 0x16000012  bnez        $s0, . + 4 + (0x12 << 2)
label_27a8a8:
    if (ctx->pc == 0x27A8A8u) {
        ctx->pc = 0x27A8ACu;
        goto label_27a8ac;
    }
    ctx->pc = 0x27A8A4u;
    {
        const bool branch_taken_0x27a8a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a8a4) {
            ctx->pc = 0x27A8F0u;
            goto label_27a8f0;
        }
    }
    ctx->pc = 0x27A8ACu;
label_27a8ac:
    // 0x27a8ac: 0xc089b98  jal         func_226E60
label_27a8b0:
    if (ctx->pc == 0x27A8B0u) {
        ctx->pc = 0x27A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8ACu;
        // 0x27a8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A8B4u;
        goto label_27a8b4;
    }
    ctx->pc = 0x27A8ACu;
    SET_GPR_U32(ctx, 31, 0x27A8B4u);
    ctx->pc = 0x27A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A8ACu;
    // 0x27a8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27A8ACu, 0x27A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A8B4u;
label_27a8b4:
    // 0x27a8b4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_27a8b8:
    if (ctx->pc == 0x27A8B8u) {
        ctx->pc = 0x27A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8B4u;
        // 0x27a8b8: 0x3c080028  lui         $t0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A8BCu;
        goto label_27a8bc;
    }
    ctx->pc = 0x27A8B4u;
    {
        const bool branch_taken_0x27a8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8B4u;
        // 0x27a8b8: 0x3c080028  lui         $t0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8b4) {
            ctx->pc = 0x27A8F0u;
            goto label_27a8f0;
        }
    }
    ctx->pc = 0x27A8BCu;
label_27a8bc:
    // 0x27a8bc: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x27a8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_27a8c0:
    // 0x27a8c0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x27a8c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_27a8c4:
    // 0x27a8c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27a8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27a8c8:
    // 0x27a8c8: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27a8c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_27a8cc:
    // 0x27a8cc: 0x250897b0  addiu       $t0, $t0, -0x6850
    ctx->pc = 0x27a8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940592));
label_27a8d0:
    // 0x27a8d0: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x27a8d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
label_27a8d4:
    // 0x27a8d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27a8d8:
    // 0x27a8d8: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27a8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_27a8dc:
    // 0x27a8dc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27a8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27a8e0:
    // 0x27a8e0: 0xf63821  addu        $a3, $a3, $s6
    ctx->pc = 0x27a8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
label_27a8e4:
    // 0x27a8e4: 0xc089d66  jal         func_227598
label_27a8e8:
    if (ctx->pc == 0x27A8E8u) {
        ctx->pc = 0x27A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8E4u;
        // 0x27a8e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A8ECu;
        goto label_27a8ec;
    }
    ctx->pc = 0x27A8E4u;
    SET_GPR_U32(ctx, 31, 0x27A8ECu);
    ctx->pc = 0x27A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A8E4u;
    // 0x27a8e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27A8E4u, 0x27A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A8ECu;
label_27a8ec:
    // 0x27a8ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a8f0:
    // 0x27a8f0: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x27a8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
label_27a8f4:
    // 0x27a8f4: 0x3421cbe5  ori         $at, $at, 0xCBE5
    ctx->pc = 0x27a8f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52197);
label_27a8f8:
    // 0x27a8f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27a8fc:
    // 0x27a8fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_27a900:
    // 0x27a900: 0x16000025  bnez        $s0, . + 4 + (0x25 << 2)
label_27a904:
    if (ctx->pc == 0x27A904u) {
        ctx->pc = 0x27A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A900u;
        // 0x27a904: 0xe440096c  swc1        $f0, 0x96C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2412), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A908u;
        goto label_27a908;
    }
    ctx->pc = 0x27A900u;
    {
        const bool branch_taken_0x27a900 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A900u;
        // 0x27a904: 0xe440096c  swc1        $f0, 0x96C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2412), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a900) {
            ctx->pc = 0x27A998u;
            goto label_27a998;
        }
    }
    ctx->pc = 0x27A908u;
label_27a908:
    // 0x27a908: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27a908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_27a90c:
    // 0x27a90c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x27a90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_27a910:
    // 0x27a910: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27a910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_27a914:
    // 0x27a914: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27a914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27a918:
    // 0x27a918: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x27a918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_27a91c:
    // 0x27a91c: 0x27d34b00  addiu       $s3, $fp, 0x4B00
    ctx->pc = 0x27a91cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_27a920:
    // 0x27a920: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x27a920u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_27a924:
    // 0x27a924: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x27a924u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
label_27a928:
    // 0x27a928: 0x8c640840  lw          $a0, 0x840($v1)
    ctx->pc = 0x27a928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
label_27a92c:
    // 0x27a92c: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x27a92cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
label_27a930:
    // 0x27a930: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x27a930u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_27a934:
    // 0x27a934: 0x2529a120  addiu       $t1, $t1, -0x5EE0
    ctx->pc = 0x27a934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294943008));
label_27a938:
    // 0x27a938: 0x1134021  addu        $t0, $t0, $s3
    ctx->pc = 0x27a938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
label_27a93c:
    // 0x27a93c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27a93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27a940:
    // 0x27a940: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x27a940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27a944:
    // 0x27a944: 0xc0e6ac8  jal         func_39AB20
label_27a948:
    if (ctx->pc == 0x27A948u) {
        ctx->pc = 0x27A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A944u;
        // 0x27a948: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A94Cu;
        goto label_27a94c;
    }
    ctx->pc = 0x27A944u;
    SET_GPR_U32(ctx, 31, 0x27A94Cu);
    ctx->pc = 0x27A948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A944u;
    // 0x27a948: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x27A944u, 0x27A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A94Cu;
label_27a94c:
    // 0x27a94c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a950:
    // 0x27a950: 0x16000012  bnez        $s0, . + 4 + (0x12 << 2)
label_27a954:
    if (ctx->pc == 0x27A954u) {
        ctx->pc = 0x27A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A950u;
        // 0x27a954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A958u;
        goto label_27a958;
    }
    ctx->pc = 0x27A950u;
    {
        const bool branch_taken_0x27a950 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A950u;
        // 0x27a954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a950) {
            ctx->pc = 0x27A99Cu;
            goto label_27a99c;
        }
    }
    ctx->pc = 0x27A958u;
label_27a958:
    // 0x27a958: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x27a958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_27a95c:
    // 0x27a95c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x27a95cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_27a960:
    // 0x27a960: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27a960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27a964:
    // 0x27a964: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27a964u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
label_27a968:
    // 0x27a968: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27a968u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_27a96c:
    // 0x27a96c: 0x250896a0  addiu       $t0, $t0, -0x6960
    ctx->pc = 0x27a96cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940320));
label_27a970:
    // 0x27a970: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x27a970u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
label_27a974:
    // 0x27a974: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27a978:
    // 0x27a978: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27a978u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_27a97c:
    // 0x27a97c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27a97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27a980:
    // 0x27a980: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x27a980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_27a984:
    // 0x27a984: 0xc089d66  jal         func_227598
label_27a988:
    if (ctx->pc == 0x27A988u) {
        ctx->pc = 0x27A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A984u;
        // 0x27a988: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A98Cu;
        goto label_27a98c;
    }
    ctx->pc = 0x27A984u;
    SET_GPR_U32(ctx, 31, 0x27A98Cu);
    ctx->pc = 0x27A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A984u;
    // 0x27a988: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27A984u, 0x27A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A98Cu;
label_27a98c:
    // 0x27a98c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a990:
    // 0x27a990: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_27a994:
    if (ctx->pc == 0x27A994u) {
        ctx->pc = 0x27A998u;
        goto label_27a998;
    }
    ctx->pc = 0x27A990u;
    {
        const bool branch_taken_0x27a990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a990) {
            ctx->pc = 0x27A9A8u;
            goto label_27a9a8;
        }
    }
    ctx->pc = 0x27A998u;
label_27a998:
    // 0x27a998: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27a998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27a99c:
    // 0x27a99c: 0xc0e1a34  jal         func_3868D0
label_27a9a0:
    if (ctx->pc == 0x27A9A0u) {
        ctx->pc = 0x27A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A99Cu;
        // 0x27a9a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A9A4u;
        goto label_27a9a4;
    }
    ctx->pc = 0x27A99Cu;
    SET_GPR_U32(ctx, 31, 0x27A9A4u);
    ctx->pc = 0x27A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A99Cu;
    // 0x27a9a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x27A99Cu, 0x27A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9A4u;
label_27a9a4:
    // 0x27a9a4: 0x8fb70000  lw          $s7, 0x0($sp)
    ctx->pc = 0x27a9a4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27a9a8:
    // 0x27a9a8: 0x16e00015  bnez        $s7, . + 4 + (0x15 << 2)
label_27a9ac:
    if (ctx->pc == 0x27A9ACu) {
        ctx->pc = 0x27A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9A8u;
        // 0x27a9ac: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A9B0u;
        goto label_27a9b0;
    }
    ctx->pc = 0x27A9A8u;
    {
        const bool branch_taken_0x27a9a8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9A8u;
        // 0x27a9ac: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9a8) {
            ctx->pc = 0x27AA00u;
            goto label_27aa00;
        }
    }
    ctx->pc = 0x27A9B0u;
label_27a9b0:
    // 0x27a9b0: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
label_27a9b4:
    if (ctx->pc == 0x27A9B4u) {
        ctx->pc = 0x27A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9B0u;
        // 0x27a9b4: 0x7bb00590  lq          $s0, 0x590($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A9B8u;
        goto label_27a9b8;
    }
    ctx->pc = 0x27A9B0u;
    {
        const bool branch_taken_0x27a9b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9B0u;
        // 0x27a9b4: 0x7bb00590  lq          $s0, 0x590($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9b0) {
            ctx->pc = 0x27AA04u;
            goto label_27aa04;
        }
    }
    ctx->pc = 0x27A9B8u;
label_27a9b8:
    // 0x27a9b8: 0xc0e2612  jal         func_389848
label_27a9bc:
    if (ctx->pc == 0x27A9BCu) {
        ctx->pc = 0x27A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9B8u;
        // 0x27a9bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A9C0u;
        goto label_27a9c0;
    }
    ctx->pc = 0x27A9B8u;
    SET_GPR_U32(ctx, 31, 0x27A9C0u);
    ctx->pc = 0x27A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9B8u;
    // 0x27a9bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x27A9B8u, 0x27A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9C0u;
label_27a9c0:
    // 0x27a9c0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_27a9c4:
    if (ctx->pc == 0x27A9C4u) {
        ctx->pc = 0x27A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9C0u;
        // 0x27a9c4: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A9C8u;
        goto label_27a9c8;
    }
    ctx->pc = 0x27A9C0u;
    {
        const bool branch_taken_0x27a9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9C0u;
        // 0x27a9c4: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9c0) {
            ctx->pc = 0x27AA00u;
            goto label_27aa00;
        }
    }
    ctx->pc = 0x27A9C8u;
label_27a9c8:
    // 0x27a9c8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x27a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27a9cc:
    // 0x27a9cc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x27a9ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_27a9d0:
    // 0x27a9d0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x27a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_27a9d4:
    // 0x27a9d4: 0x40f809  jalr        $v0
label_27a9d8:
    if (ctx->pc == 0x27A9D8u) {
        ctx->pc = 0x27A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9D4u;
        // 0x27a9d8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A9DCu;
        goto label_27a9dc;
    }
    ctx->pc = 0x27A9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27A9DCu);
        ctx->pc = 0x27A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9D4u;
        // 0x27a9d8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A9D4u, 0x27A9DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A9DCu;
label_27a9dc:
    // 0x27a9dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_27a9e0:
    if (ctx->pc == 0x27A9E0u) {
        ctx->pc = 0x27A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9DCu;
        // 0x27a9e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A9E4u;
        goto label_27a9e4;
    }
    ctx->pc = 0x27A9DCu;
    {
        const bool branch_taken_0x27a9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9DCu;
        // 0x27a9e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9dc) {
            ctx->pc = 0x27A9FCu;
            goto label_27a9fc;
        }
    }
    ctx->pc = 0x27A9E4u;
label_27a9e4:
    // 0x27a9e4: 0xc08a658  jal         func_229960
label_27a9e8:
    if (ctx->pc == 0x27A9E8u) {
        ctx->pc = 0x27A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9E4u;
        // 0x27a9e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A9ECu;
        goto label_27a9ec;
    }
    ctx->pc = 0x27A9E4u;
    SET_GPR_U32(ctx, 31, 0x27A9ECu);
    ctx->pc = 0x27A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9E4u;
    // 0x27a9e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x27A9E4u, 0x27A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9ECu;
label_27a9ec:
    // 0x27a9ec: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x27a9ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a9f0:
    // 0x27a9f0: 0x0  nop
    ctx->pc = 0x27a9f0u;
    // NOP
label_27a9f4:
    // 0x27a9f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_27a9f8:
    if (ctx->pc == 0x27A9F8u) {
        ctx->pc = 0x27A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9F4u;
        // 0x27a9f8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A9FCu;
        goto label_27a9fc;
    }
    ctx->pc = 0x27A9F4u;
    {
        const bool branch_taken_0x27a9f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9F4u;
        // 0x27a9f8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9f4) {
            ctx->pc = 0x27AA00u;
            goto label_27aa00;
        }
    }
    ctx->pc = 0x27A9FCu;
label_27a9fc:
    // 0x27a9fc: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x27a9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27aa00:
    // 0x27aa00: 0x7bb00590  lq          $s0, 0x590($sp)
    ctx->pc = 0x27aa00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
label_27aa04:
    // 0x27aa04: 0x7bb10580  lq          $s1, 0x580($sp)
    ctx->pc = 0x27aa04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
label_27aa08:
    // 0x27aa08: 0x7bb20570  lq          $s2, 0x570($sp)
    ctx->pc = 0x27aa08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_27aa0c:
    // 0x27aa0c: 0x7bb30560  lq          $s3, 0x560($sp)
    ctx->pc = 0x27aa0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_27aa10:
    // 0x27aa10: 0x7bb40550  lq          $s4, 0x550($sp)
    ctx->pc = 0x27aa10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_27aa14:
    // 0x27aa14: 0x7bb50540  lq          $s5, 0x540($sp)
    ctx->pc = 0x27aa14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_27aa18:
    // 0x27aa18: 0x7bb60530  lq          $s6, 0x530($sp)
    ctx->pc = 0x27aa18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_27aa1c:
    // 0x27aa1c: 0x7bb70520  lq          $s7, 0x520($sp)
    ctx->pc = 0x27aa1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_27aa20:
    // 0x27aa20: 0x7bbe0510  lq          $fp, 0x510($sp)
    ctx->pc = 0x27aa20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_27aa24:
    // 0x27aa24: 0xdfbf0500  ld          $ra, 0x500($sp)
    ctx->pc = 0x27aa24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1280)));
label_27aa28:
    // 0x27aa28: 0xc7b505a8  lwc1        $f21, 0x5A8($sp)
    ctx->pc = 0x27aa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_27aa2c:
    // 0x27aa2c: 0xc7b405a0  lwc1        $f20, 0x5A0($sp)
    ctx->pc = 0x27aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27aa30:
    // 0x27aa30: 0x3e00008  jr          $ra
label_27aa34:
    if (ctx->pc == 0x27AA34u) {
        ctx->pc = 0x27AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA30u;
        // 0x27aa34: 0x27bd05b0  addiu       $sp, $sp, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AA38u;
        goto label_fallthrough_0x27aa30;
    }
    ctx->pc = 0x27AA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA30u;
        // 0x27aa34: 0x27bd05b0  addiu       $sp, $sp, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27aa30:
    ctx->pc = 0x27AA38u;
}
