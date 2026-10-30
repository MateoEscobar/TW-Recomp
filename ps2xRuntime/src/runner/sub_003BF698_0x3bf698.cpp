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

// Function: sub_003BF698
// Address: 0x3bf698 - 0x3bf900
void sub_003BF698_0x3bf698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF698_0x3bf698");
#endif

    switch (ctx->pc) {
        case 0x3bf698u: goto label_3bf698;
        case 0x3bf69cu: goto label_3bf69c;
        case 0x3bf6a0u: goto label_3bf6a0;
        case 0x3bf6a4u: goto label_3bf6a4;
        case 0x3bf6a8u: goto label_3bf6a8;
        case 0x3bf6acu: goto label_3bf6ac;
        case 0x3bf6b0u: goto label_3bf6b0;
        case 0x3bf6b4u: goto label_3bf6b4;
        case 0x3bf6b8u: goto label_3bf6b8;
        case 0x3bf6bcu: goto label_3bf6bc;
        case 0x3bf6c0u: goto label_3bf6c0;
        case 0x3bf6c4u: goto label_3bf6c4;
        case 0x3bf6c8u: goto label_3bf6c8;
        case 0x3bf6ccu: goto label_3bf6cc;
        case 0x3bf6d0u: goto label_3bf6d0;
        case 0x3bf6d4u: goto label_3bf6d4;
        case 0x3bf6d8u: goto label_3bf6d8;
        case 0x3bf6dcu: goto label_3bf6dc;
        case 0x3bf6e0u: goto label_3bf6e0;
        case 0x3bf6e4u: goto label_3bf6e4;
        case 0x3bf6e8u: goto label_3bf6e8;
        case 0x3bf6ecu: goto label_3bf6ec;
        case 0x3bf6f0u: goto label_3bf6f0;
        case 0x3bf6f4u: goto label_3bf6f4;
        case 0x3bf6f8u: goto label_3bf6f8;
        case 0x3bf6fcu: goto label_3bf6fc;
        case 0x3bf700u: goto label_3bf700;
        case 0x3bf704u: goto label_3bf704;
        case 0x3bf708u: goto label_3bf708;
        case 0x3bf70cu: goto label_3bf70c;
        case 0x3bf710u: goto label_3bf710;
        case 0x3bf714u: goto label_3bf714;
        case 0x3bf718u: goto label_3bf718;
        case 0x3bf71cu: goto label_3bf71c;
        case 0x3bf720u: goto label_3bf720;
        case 0x3bf724u: goto label_3bf724;
        case 0x3bf728u: goto label_3bf728;
        case 0x3bf72cu: goto label_3bf72c;
        case 0x3bf730u: goto label_3bf730;
        case 0x3bf734u: goto label_3bf734;
        case 0x3bf738u: goto label_3bf738;
        case 0x3bf73cu: goto label_3bf73c;
        case 0x3bf740u: goto label_3bf740;
        case 0x3bf744u: goto label_3bf744;
        case 0x3bf748u: goto label_3bf748;
        case 0x3bf74cu: goto label_3bf74c;
        case 0x3bf750u: goto label_3bf750;
        case 0x3bf754u: goto label_3bf754;
        case 0x3bf758u: goto label_3bf758;
        case 0x3bf75cu: goto label_3bf75c;
        case 0x3bf760u: goto label_3bf760;
        case 0x3bf764u: goto label_3bf764;
        case 0x3bf768u: goto label_3bf768;
        case 0x3bf76cu: goto label_3bf76c;
        case 0x3bf770u: goto label_3bf770;
        case 0x3bf774u: goto label_3bf774;
        case 0x3bf778u: goto label_3bf778;
        case 0x3bf77cu: goto label_3bf77c;
        case 0x3bf780u: goto label_3bf780;
        case 0x3bf784u: goto label_3bf784;
        case 0x3bf788u: goto label_3bf788;
        case 0x3bf78cu: goto label_3bf78c;
        case 0x3bf790u: goto label_3bf790;
        case 0x3bf794u: goto label_3bf794;
        case 0x3bf798u: goto label_3bf798;
        case 0x3bf79cu: goto label_3bf79c;
        case 0x3bf7a0u: goto label_3bf7a0;
        case 0x3bf7a4u: goto label_3bf7a4;
        case 0x3bf7a8u: goto label_3bf7a8;
        case 0x3bf7acu: goto label_3bf7ac;
        case 0x3bf7b0u: goto label_3bf7b0;
        case 0x3bf7b4u: goto label_3bf7b4;
        case 0x3bf7b8u: goto label_3bf7b8;
        case 0x3bf7bcu: goto label_3bf7bc;
        case 0x3bf7c0u: goto label_3bf7c0;
        case 0x3bf7c4u: goto label_3bf7c4;
        case 0x3bf7c8u: goto label_3bf7c8;
        case 0x3bf7ccu: goto label_3bf7cc;
        case 0x3bf7d0u: goto label_3bf7d0;
        case 0x3bf7d4u: goto label_3bf7d4;
        case 0x3bf7d8u: goto label_3bf7d8;
        case 0x3bf7dcu: goto label_3bf7dc;
        case 0x3bf7e0u: goto label_3bf7e0;
        case 0x3bf7e4u: goto label_3bf7e4;
        case 0x3bf7e8u: goto label_3bf7e8;
        case 0x3bf7ecu: goto label_3bf7ec;
        case 0x3bf7f0u: goto label_3bf7f0;
        case 0x3bf7f4u: goto label_3bf7f4;
        case 0x3bf7f8u: goto label_3bf7f8;
        case 0x3bf7fcu: goto label_3bf7fc;
        case 0x3bf800u: goto label_3bf800;
        case 0x3bf804u: goto label_3bf804;
        case 0x3bf808u: goto label_3bf808;
        case 0x3bf80cu: goto label_3bf80c;
        case 0x3bf810u: goto label_3bf810;
        case 0x3bf814u: goto label_3bf814;
        case 0x3bf818u: goto label_3bf818;
        case 0x3bf81cu: goto label_3bf81c;
        case 0x3bf820u: goto label_3bf820;
        case 0x3bf824u: goto label_3bf824;
        case 0x3bf828u: goto label_3bf828;
        case 0x3bf82cu: goto label_3bf82c;
        case 0x3bf830u: goto label_3bf830;
        case 0x3bf834u: goto label_3bf834;
        case 0x3bf838u: goto label_3bf838;
        case 0x3bf83cu: goto label_3bf83c;
        case 0x3bf840u: goto label_3bf840;
        case 0x3bf844u: goto label_3bf844;
        case 0x3bf848u: goto label_3bf848;
        case 0x3bf84cu: goto label_3bf84c;
        case 0x3bf850u: goto label_3bf850;
        case 0x3bf854u: goto label_3bf854;
        case 0x3bf858u: goto label_3bf858;
        case 0x3bf85cu: goto label_3bf85c;
        case 0x3bf860u: goto label_3bf860;
        case 0x3bf864u: goto label_3bf864;
        case 0x3bf868u: goto label_3bf868;
        case 0x3bf86cu: goto label_3bf86c;
        case 0x3bf870u: goto label_3bf870;
        case 0x3bf874u: goto label_3bf874;
        case 0x3bf878u: goto label_3bf878;
        case 0x3bf87cu: goto label_3bf87c;
        case 0x3bf880u: goto label_3bf880;
        case 0x3bf884u: goto label_3bf884;
        case 0x3bf888u: goto label_3bf888;
        case 0x3bf88cu: goto label_3bf88c;
        case 0x3bf890u: goto label_3bf890;
        case 0x3bf894u: goto label_3bf894;
        case 0x3bf898u: goto label_3bf898;
        case 0x3bf89cu: goto label_3bf89c;
        case 0x3bf8a0u: goto label_3bf8a0;
        case 0x3bf8a4u: goto label_3bf8a4;
        case 0x3bf8a8u: goto label_3bf8a8;
        case 0x3bf8acu: goto label_3bf8ac;
        case 0x3bf8b0u: goto label_3bf8b0;
        case 0x3bf8b4u: goto label_3bf8b4;
        case 0x3bf8b8u: goto label_3bf8b8;
        case 0x3bf8bcu: goto label_3bf8bc;
        case 0x3bf8c0u: goto label_3bf8c0;
        case 0x3bf8c4u: goto label_3bf8c4;
        case 0x3bf8c8u: goto label_3bf8c8;
        case 0x3bf8ccu: goto label_3bf8cc;
        case 0x3bf8d0u: goto label_3bf8d0;
        case 0x3bf8d4u: goto label_3bf8d4;
        case 0x3bf8d8u: goto label_3bf8d8;
        case 0x3bf8dcu: goto label_3bf8dc;
        case 0x3bf8e0u: goto label_3bf8e0;
        case 0x3bf8e4u: goto label_3bf8e4;
        case 0x3bf8e8u: goto label_3bf8e8;
        case 0x3bf8ecu: goto label_3bf8ec;
        case 0x3bf8f0u: goto label_3bf8f0;
        case 0x3bf8f4u: goto label_3bf8f4;
        case 0x3bf8f8u: goto label_3bf8f8;
        case 0x3bf8fcu: goto label_3bf8fc;
        default: break;
    }

    ctx->pc = 0x3bf698u;

label_3bf698:
    // 0x3bf698: 0x27bdfa90  addiu       $sp, $sp, -0x570
    ctx->pc = 0x3bf698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965904));
label_3bf69c:
    // 0x3bf69c: 0x7fb00550  sq          $s0, 0x550($sp)
    ctx->pc = 0x3bf69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 16));
label_3bf6a0:
    // 0x3bf6a0: 0x7fb10540  sq          $s1, 0x540($sp)
    ctx->pc = 0x3bf6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 17));
label_3bf6a4:
    // 0x3bf6a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bf6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bf6a8:
    // 0x3bf6a8: 0x7fb50500  sq          $s5, 0x500($sp)
    ctx->pc = 0x3bf6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 21));
label_3bf6ac:
    // 0x3bf6ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bf6acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bf6b0:
    // 0x3bf6b0: 0xe7b40560  swc1        $f20, 0x560($sp)
    ctx->pc = 0x3bf6b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1376), bits); }
label_3bf6b4:
    // 0x3bf6b4: 0x7fb20530  sq          $s2, 0x530($sp)
    ctx->pc = 0x3bf6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 18));
label_3bf6b8:
    // 0x3bf6b8: 0x7fb30520  sq          $s3, 0x520($sp)
    ctx->pc = 0x3bf6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 19));
label_3bf6bc:
    // 0x3bf6bc: 0x7fb40510  sq          $s4, 0x510($sp)
    ctx->pc = 0x3bf6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 20));
label_3bf6c0:
    // 0x3bf6c0: 0xffbf04f0  sd          $ra, 0x4F0($sp)
    ctx->pc = 0x3bf6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1264), GPR_U64(ctx, 31));
label_3bf6c4:
    // 0x3bf6c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3bf6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3bf6c8:
    // 0x3bf6c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3bf6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3bf6cc:
    // 0x3bf6cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3bf6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bf6d0:
    // 0x3bf6d0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3bf6d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3bf6d4:
    // 0x3bf6d4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3bf6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3bf6d8:
    // 0x3bf6d8: 0x40f809  jalr        $v0
label_3bf6dc:
    if (ctx->pc == 0x3BF6DCu) {
        ctx->pc = 0x3BF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF6D8u;
        // 0x3bf6dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF6E0u;
        goto label_3bf6e0;
    }
    ctx->pc = 0x3BF6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BF6E0u);
        ctx->pc = 0x3BF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF6D8u;
        // 0x3bf6dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF6D8u, 0x3BF6E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF6E0u;
label_3bf6e0:
    // 0x3bf6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bf6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bf6e4:
    // 0x3bf6e4: 0xc0ea14c  jal         func_3A8530
label_3bf6e8:
    if (ctx->pc == 0x3BF6E8u) {
        ctx->pc = 0x3BF6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF6E4u;
        // 0x3bf6e8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF6ECu;
        goto label_3bf6ec;
    }
    ctx->pc = 0x3BF6E4u;
    SET_GPR_U32(ctx, 31, 0x3BF6ECu);
    ctx->pc = 0x3BF6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF6E4u;
    // 0x3bf6e8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3BF6E4u, 0x3BF6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF6ECu;
label_3bf6ec:
    // 0x3bf6ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3bf6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3bf6f0:
    // 0x3bf6f0: 0xc0ea12a  jal         func_3A84A8
label_3bf6f4:
    if (ctx->pc == 0x3BF6F4u) {
        ctx->pc = 0x3BF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF6F0u;
        // 0x3bf6f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF6F8u;
        goto label_3bf6f8;
    }
    ctx->pc = 0x3BF6F0u;
    SET_GPR_U32(ctx, 31, 0x3BF6F8u);
    ctx->pc = 0x3BF6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF6F0u;
    // 0x3bf6f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3BF6F0u, 0x3BF6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF6F8u;
label_3bf6f8:
    // 0x3bf6f8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3bf6f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bf6fc:
    // 0x3bf6fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3bf6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3bf700:
    // 0x3bf700: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bf700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bf704:
    // 0x3bf704: 0xc0ea12a  jal         func_3A84A8
label_3bf708:
    if (ctx->pc == 0x3BF708u) {
        ctx->pc = 0x3BF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF704u;
        // 0x3bf708: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF70Cu;
        goto label_3bf70c;
    }
    ctx->pc = 0x3BF704u;
    SET_GPR_U32(ctx, 31, 0x3BF70Cu);
    ctx->pc = 0x3BF708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF704u;
    // 0x3bf708: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3BF704u, 0x3BF70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF70Cu;
label_3bf70c:
    // 0x3bf70c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3bf70cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bf710:
    // 0x3bf710: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3bf710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_3bf714:
    // 0x3bf714: 0x34420401  ori         $v0, $v0, 0x401
    ctx->pc = 0x3bf714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1025);
label_3bf718:
    // 0x3bf718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bf718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf71c:
    // 0x3bf71c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3bf71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3bf720:
    // 0x3bf720: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3bf720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3bf724:
    // 0x3bf724: 0xc0e858c  jal         func_3A1630
label_3bf728:
    if (ctx->pc == 0x3BF728u) {
        ctx->pc = 0x3BF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF724u;
        // 0x3bf728: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF72Cu;
        goto label_3bf72c;
    }
    ctx->pc = 0x3BF724u;
    SET_GPR_U32(ctx, 31, 0x3BF72Cu);
    ctx->pc = 0x3BF728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF724u;
    // 0x3bf728: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3BF724u, 0x3BF72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF72Cu;
label_3bf72c:
    // 0x3bf72c: 0x3c051c21  lui         $a1, 0x1C21
    ctx->pc = 0x3bf72cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7201 << 16));
label_3bf730:
    // 0x3bf730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bf730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf734:
    // 0x3bf734: 0xc0e9132  jal         func_3A44C8
label_3bf738:
    if (ctx->pc == 0x3BF738u) {
        ctx->pc = 0x3BF738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF734u;
        // 0x3bf738: 0x34a5bdc3  ori         $a1, $a1, 0xBDC3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48579);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF73Cu;
        goto label_3bf73c;
    }
    ctx->pc = 0x3BF734u;
    SET_GPR_U32(ctx, 31, 0x3BF73Cu);
    ctx->pc = 0x3BF738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF734u;
    // 0x3bf738: 0x34a5bdc3  ori         $a1, $a1, 0xBDC3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48579);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3BF734u, 0x3BF73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF73Cu;
label_3bf73c:
    // 0x3bf73c: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3bf73cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3bf740:
    // 0x3bf740: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x3bf740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3bf744:
    // 0x3bf744: 0x3c013f94  lui         $at, 0x3F94
    ctx->pc = 0x3bf744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16276 << 16));
label_3bf748:
    // 0x3bf748: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x3bf748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_3bf74c:
    // 0x3bf74c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3bf74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3bf750:
    // 0x3bf750: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x3bf750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_3bf754:
    // 0x3bf754: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3bf754u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bf758:
    // 0x3bf758: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3bf758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bf75c:
    // 0x3bf75c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3bf75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3bf760:
    // 0x3bf760: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3bf760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3bf764:
    // 0x3bf764: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3bf764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3bf768:
    // 0x3bf768: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3bf768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3bf76c:
    // 0x3bf76c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3bf76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3bf770:
    // 0x3bf770: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x3bf770u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3bf774:
    // 0x3bf774: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3bf774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3bf778:
    // 0x3bf778: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3bf778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3bf77c:
    // 0x3bf77c: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3bf77cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bf780:
    // 0x3bf780: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3bf780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3bf784:
    // 0x3bf784: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3bf784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3bf788:
    // 0x3bf788: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3bf788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3bf78c:
    // 0x3bf78c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3bf78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3bf790:
    // 0x3bf790: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3bf790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3bf794:
    // 0x3bf794: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3bf794u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3bf798:
    // 0x3bf798: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3bf798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bf79c:
    // 0x3bf79c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3bf79cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3bf7a0:
    // 0x3bf7a0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3bf7a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3bf7a4:
    // 0x3bf7a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3bf7a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bf7a8:
    // 0x3bf7a8: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3bf7a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3bf7ac:
    // 0x3bf7ac: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3bf7acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3bf7b0:
    // 0x3bf7b0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3bf7b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bf7b4:
    // 0x3bf7b4: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3bf7b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3bf7b8:
    // 0x3bf7b8: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3bf7b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3bf7bc:
    // 0x3bf7bc: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3bf7bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3bf7c0:
    // 0x3bf7c0: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x3bf7c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bf7c4:
    // 0x3bf7c4: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x3bf7c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_3bf7c8:
    // 0x3bf7c8: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3bf7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_3bf7cc:
    // 0x3bf7cc: 0x27b400e0  addiu       $s4, $sp, 0xE0
    ctx->pc = 0x3bf7ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3bf7d0:
    // 0x3bf7d0: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x3bf7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_3bf7d4:
    // 0x3bf7d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3bf7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bf7d8:
    // 0x3bf7d8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3bf7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3bf7dc:
    // 0x3bf7dc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3bf7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3bf7e0:
    // 0x3bf7e0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3bf7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3bf7e4:
    // 0x3bf7e4: 0x26522558  addiu       $s2, $s2, 0x2558
    ctx->pc = 0x3bf7e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9560));
label_3bf7e8:
    // 0x3bf7e8: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x3bf7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
label_3bf7ec:
    // 0x3bf7ec: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x3bf7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_3bf7f0:
    // 0x3bf7f0: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x3bf7f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_3bf7f4:
    // 0x3bf7f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3bf7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bf7f8:
    // 0x3bf7f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bf7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bf7fc:
    // 0x3bf7fc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3bf7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3bf800:
    // 0x3bf800: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3bf800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3bf804:
    // 0x3bf804: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3bf804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3bf808:
    // 0x3bf808: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3bf808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3bf80c:
    // 0x3bf80c: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3bf80cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3bf810:
    // 0x3bf810: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3bf810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3bf814:
    // 0x3bf814: 0xc136b18  jal         func_4DAC60
label_3bf818:
    if (ctx->pc == 0x3BF818u) {
        ctx->pc = 0x3BF818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF814u;
        // 0x3bf818: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF81Cu;
        goto label_3bf81c;
    }
    ctx->pc = 0x3BF814u;
    SET_GPR_U32(ctx, 31, 0x3BF81Cu);
    ctx->pc = 0x3BF818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF814u;
    // 0x3bf818: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3BF814u, 0x3BF81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF81Cu;
label_3bf81c:
    // 0x3bf81c: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3bf81cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3bf820:
    // 0x3bf820: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3bf820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3bf824:
    // 0x3bf824: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3bf824u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3bf828:
    // 0x3bf828: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x3bf828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3bf82c:
    // 0x3bf82c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3bf82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3bf830:
    // 0x3bf830: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3bf830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bf834:
    // 0x3bf834: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3bf834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3bf838:
    // 0x3bf838: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3bf838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bf83c:
    // 0x3bf83c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3bf83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3bf840:
    // 0x3bf840: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3bf840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf844:
    // 0x3bf844: 0xc0e9fa6  jal         func_3A7E98
label_3bf848:
    if (ctx->pc == 0x3BF848u) {
        ctx->pc = 0x3BF848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF844u;
        // 0x3bf848: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF84Cu;
        goto label_3bf84c;
    }
    ctx->pc = 0x3BF844u;
    SET_GPR_U32(ctx, 31, 0x3BF84Cu);
    ctx->pc = 0x3BF848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF844u;
    // 0x3bf848: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3BF844u, 0x3BF84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF84Cu;
label_3bf84c:
    // 0x3bf84c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3bf84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bf850:
    // 0x3bf850: 0xc0f15bc  jal         func_3C56F0
label_3bf854:
    if (ctx->pc == 0x3BF854u) {
        ctx->pc = 0x3BF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF850u;
        // 0x3bf854: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF858u;
        goto label_3bf858;
    }
    ctx->pc = 0x3BF850u;
    SET_GPR_U32(ctx, 31, 0x3BF858u);
    ctx->pc = 0x3BF854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF850u;
    // 0x3bf854: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3BF850u, 0x3BF858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF858u;
label_3bf858:
    // 0x3bf858: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3bf858u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3bf85c:
    // 0x3bf85c: 0x27b00480  addiu       $s0, $sp, 0x480
    ctx->pc = 0x3bf85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3bf860:
    // 0x3bf860: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x3bf860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
label_3bf864:
    // 0x3bf864: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x3bf864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_3bf868:
    // 0x3bf868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3bf868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bf86c:
    // 0x3bf86c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3bf86cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3bf870:
    // 0x3bf870: 0xafa00480  sw          $zero, 0x480($sp)
    ctx->pc = 0x3bf870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
label_3bf874:
    // 0x3bf874: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3bf874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3bf878:
    // 0x3bf878: 0xafa00484  sw          $zero, 0x484($sp)
    ctx->pc = 0x3bf878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 0));
label_3bf87c:
    // 0x3bf87c: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3bf87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3bf880:
    // 0x3bf880: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3bf880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3bf884:
    // 0x3bf884: 0x263128c8  addiu       $s1, $s1, 0x28C8
    ctx->pc = 0x3bf884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10440));
label_3bf888:
    // 0x3bf888: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3bf888u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3bf88c:
    // 0x3bf88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bf88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bf890:
    // 0x3bf890: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3bf890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3bf894:
    // 0x3bf894: 0xc136afa  jal         func_4DABE8
label_3bf898:
    if (ctx->pc == 0x3BF898u) {
        ctx->pc = 0x3BF898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF894u;
        // 0x3bf898: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF89Cu;
        goto label_3bf89c;
    }
    ctx->pc = 0x3BF894u;
    SET_GPR_U32(ctx, 31, 0x3BF89Cu);
    ctx->pc = 0x3BF898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF894u;
    // 0x3bf898: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3BF894u, 0x3BF89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF89Cu;
label_3bf89c:
    // 0x3bf89c: 0x7ba30480  lq          $v1, 0x480($sp)
    ctx->pc = 0x3bf89cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3bf8a0:
    // 0x3bf8a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3bf8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bf8a4:
    // 0x3bf8a4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3bf8a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bf8a8:
    // 0x3bf8a8: 0x27a50450  addiu       $a1, $sp, 0x450
    ctx->pc = 0x3bf8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3bf8ac:
    // 0x3bf8ac: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3bf8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3bf8b0:
    // 0x3bf8b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf8b4:
    // 0x3bf8b4: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3bf8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3bf8b8:
    // 0x3bf8b8: 0x27a70490  addiu       $a3, $sp, 0x490
    ctx->pc = 0x3bf8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3bf8bc:
    // 0x3bf8bc: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3bf8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3bf8c0:
    // 0x3bf8c0: 0xc0e9fa6  jal         func_3A7E98
label_3bf8c4:
    if (ctx->pc == 0x3BF8C4u) {
        ctx->pc = 0x3BF8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF8C0u;
        // 0x3bf8c4: 0xafa00490  sw          $zero, 0x490($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF8C8u;
        goto label_3bf8c8;
    }
    ctx->pc = 0x3BF8C0u;
    SET_GPR_U32(ctx, 31, 0x3BF8C8u);
    ctx->pc = 0x3BF8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF8C0u;
    // 0x3bf8c4: 0xafa00490  sw          $zero, 0x490($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3BF8C0u, 0x3BF8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF8C8u;
label_3bf8c8:
    // 0x3bf8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bf8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf8cc:
    // 0x3bf8cc: 0xc0f15bc  jal         func_3C56F0
label_3bf8d0:
    if (ctx->pc == 0x3BF8D0u) {
        ctx->pc = 0x3BF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF8CCu;
        // 0x3bf8d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF8D4u;
        goto label_3bf8d4;
    }
    ctx->pc = 0x3BF8CCu;
    SET_GPR_U32(ctx, 31, 0x3BF8D4u);
    ctx->pc = 0x3BF8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF8CCu;
    // 0x3bf8d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3BF8CCu, 0x3BF8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF8D4u;
label_3bf8d4:
    // 0x3bf8d4: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3bf8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_3bf8d8:
    // 0x3bf8d8: 0x7bb00550  lq          $s0, 0x550($sp)
    ctx->pc = 0x3bf8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_3bf8dc:
    // 0x3bf8dc: 0x7bb10540  lq          $s1, 0x540($sp)
    ctx->pc = 0x3bf8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3bf8e0:
    // 0x3bf8e0: 0x7bb20530  lq          $s2, 0x530($sp)
    ctx->pc = 0x3bf8e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3bf8e4:
    // 0x3bf8e4: 0x7bb30520  lq          $s3, 0x520($sp)
    ctx->pc = 0x3bf8e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3bf8e8:
    // 0x3bf8e8: 0x7bb40510  lq          $s4, 0x510($sp)
    ctx->pc = 0x3bf8e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3bf8ec:
    // 0x3bf8ec: 0x7bb50500  lq          $s5, 0x500($sp)
    ctx->pc = 0x3bf8ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3bf8f0:
    // 0x3bf8f0: 0xdfbf04f0  ld          $ra, 0x4F0($sp)
    ctx->pc = 0x3bf8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1264)));
label_3bf8f4:
    // 0x3bf8f4: 0xc7b40560  lwc1        $f20, 0x560($sp)
    ctx->pc = 0x3bf8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3bf8f8:
    // 0x3bf8f8: 0x3e00008  jr          $ra
label_3bf8fc:
    if (ctx->pc == 0x3BF8FCu) {
        ctx->pc = 0x3BF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF8F8u;
        // 0x3bf8fc: 0x27bd0570  addiu       $sp, $sp, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF900u;
        goto label_fallthrough_0x3bf8f8;
    }
    ctx->pc = 0x3BF8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF8F8u;
        // 0x3bf8fc: 0x27bd0570  addiu       $sp, $sp, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bf8f8:
    ctx->pc = 0x3BF900u;
}
