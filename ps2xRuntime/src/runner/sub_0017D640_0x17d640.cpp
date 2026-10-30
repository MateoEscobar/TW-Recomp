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

// Function: sub_0017D640
// Address: 0x17d640 - 0x17d880
void sub_0017D640_0x17d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D640_0x17d640");
#endif

    switch (ctx->pc) {
        case 0x17d640u: goto label_17d640;
        case 0x17d644u: goto label_17d644;
        case 0x17d648u: goto label_17d648;
        case 0x17d64cu: goto label_17d64c;
        case 0x17d650u: goto label_17d650;
        case 0x17d654u: goto label_17d654;
        case 0x17d658u: goto label_17d658;
        case 0x17d65cu: goto label_17d65c;
        case 0x17d660u: goto label_17d660;
        case 0x17d664u: goto label_17d664;
        case 0x17d668u: goto label_17d668;
        case 0x17d66cu: goto label_17d66c;
        case 0x17d670u: goto label_17d670;
        case 0x17d674u: goto label_17d674;
        case 0x17d678u: goto label_17d678;
        case 0x17d67cu: goto label_17d67c;
        case 0x17d680u: goto label_17d680;
        case 0x17d684u: goto label_17d684;
        case 0x17d688u: goto label_17d688;
        case 0x17d68cu: goto label_17d68c;
        case 0x17d690u: goto label_17d690;
        case 0x17d694u: goto label_17d694;
        case 0x17d698u: goto label_17d698;
        case 0x17d69cu: goto label_17d69c;
        case 0x17d6a0u: goto label_17d6a0;
        case 0x17d6a4u: goto label_17d6a4;
        case 0x17d6a8u: goto label_17d6a8;
        case 0x17d6acu: goto label_17d6ac;
        case 0x17d6b0u: goto label_17d6b0;
        case 0x17d6b4u: goto label_17d6b4;
        case 0x17d6b8u: goto label_17d6b8;
        case 0x17d6bcu: goto label_17d6bc;
        case 0x17d6c0u: goto label_17d6c0;
        case 0x17d6c4u: goto label_17d6c4;
        case 0x17d6c8u: goto label_17d6c8;
        case 0x17d6ccu: goto label_17d6cc;
        case 0x17d6d0u: goto label_17d6d0;
        case 0x17d6d4u: goto label_17d6d4;
        case 0x17d6d8u: goto label_17d6d8;
        case 0x17d6dcu: goto label_17d6dc;
        case 0x17d6e0u: goto label_17d6e0;
        case 0x17d6e4u: goto label_17d6e4;
        case 0x17d6e8u: goto label_17d6e8;
        case 0x17d6ecu: goto label_17d6ec;
        case 0x17d6f0u: goto label_17d6f0;
        case 0x17d6f4u: goto label_17d6f4;
        case 0x17d6f8u: goto label_17d6f8;
        case 0x17d6fcu: goto label_17d6fc;
        case 0x17d700u: goto label_17d700;
        case 0x17d704u: goto label_17d704;
        case 0x17d708u: goto label_17d708;
        case 0x17d70cu: goto label_17d70c;
        case 0x17d710u: goto label_17d710;
        case 0x17d714u: goto label_17d714;
        case 0x17d718u: goto label_17d718;
        case 0x17d71cu: goto label_17d71c;
        case 0x17d720u: goto label_17d720;
        case 0x17d724u: goto label_17d724;
        case 0x17d728u: goto label_17d728;
        case 0x17d72cu: goto label_17d72c;
        case 0x17d730u: goto label_17d730;
        case 0x17d734u: goto label_17d734;
        case 0x17d738u: goto label_17d738;
        case 0x17d73cu: goto label_17d73c;
        case 0x17d740u: goto label_17d740;
        case 0x17d744u: goto label_17d744;
        case 0x17d748u: goto label_17d748;
        case 0x17d74cu: goto label_17d74c;
        case 0x17d750u: goto label_17d750;
        case 0x17d754u: goto label_17d754;
        case 0x17d758u: goto label_17d758;
        case 0x17d75cu: goto label_17d75c;
        case 0x17d760u: goto label_17d760;
        case 0x17d764u: goto label_17d764;
        case 0x17d768u: goto label_17d768;
        case 0x17d76cu: goto label_17d76c;
        case 0x17d770u: goto label_17d770;
        case 0x17d774u: goto label_17d774;
        case 0x17d778u: goto label_17d778;
        case 0x17d77cu: goto label_17d77c;
        case 0x17d780u: goto label_17d780;
        case 0x17d784u: goto label_17d784;
        case 0x17d788u: goto label_17d788;
        case 0x17d78cu: goto label_17d78c;
        case 0x17d790u: goto label_17d790;
        case 0x17d794u: goto label_17d794;
        case 0x17d798u: goto label_17d798;
        case 0x17d79cu: goto label_17d79c;
        case 0x17d7a0u: goto label_17d7a0;
        case 0x17d7a4u: goto label_17d7a4;
        case 0x17d7a8u: goto label_17d7a8;
        case 0x17d7acu: goto label_17d7ac;
        case 0x17d7b0u: goto label_17d7b0;
        case 0x17d7b4u: goto label_17d7b4;
        case 0x17d7b8u: goto label_17d7b8;
        case 0x17d7bcu: goto label_17d7bc;
        case 0x17d7c0u: goto label_17d7c0;
        case 0x17d7c4u: goto label_17d7c4;
        case 0x17d7c8u: goto label_17d7c8;
        case 0x17d7ccu: goto label_17d7cc;
        case 0x17d7d0u: goto label_17d7d0;
        case 0x17d7d4u: goto label_17d7d4;
        case 0x17d7d8u: goto label_17d7d8;
        case 0x17d7dcu: goto label_17d7dc;
        case 0x17d7e0u: goto label_17d7e0;
        case 0x17d7e4u: goto label_17d7e4;
        case 0x17d7e8u: goto label_17d7e8;
        case 0x17d7ecu: goto label_17d7ec;
        case 0x17d7f0u: goto label_17d7f0;
        case 0x17d7f4u: goto label_17d7f4;
        case 0x17d7f8u: goto label_17d7f8;
        case 0x17d7fcu: goto label_17d7fc;
        case 0x17d800u: goto label_17d800;
        case 0x17d804u: goto label_17d804;
        case 0x17d808u: goto label_17d808;
        case 0x17d80cu: goto label_17d80c;
        case 0x17d810u: goto label_17d810;
        case 0x17d814u: goto label_17d814;
        case 0x17d818u: goto label_17d818;
        case 0x17d81cu: goto label_17d81c;
        case 0x17d820u: goto label_17d820;
        case 0x17d824u: goto label_17d824;
        case 0x17d828u: goto label_17d828;
        case 0x17d82cu: goto label_17d82c;
        case 0x17d830u: goto label_17d830;
        case 0x17d834u: goto label_17d834;
        case 0x17d838u: goto label_17d838;
        case 0x17d83cu: goto label_17d83c;
        case 0x17d840u: goto label_17d840;
        case 0x17d844u: goto label_17d844;
        case 0x17d848u: goto label_17d848;
        case 0x17d84cu: goto label_17d84c;
        case 0x17d850u: goto label_17d850;
        case 0x17d854u: goto label_17d854;
        case 0x17d858u: goto label_17d858;
        case 0x17d85cu: goto label_17d85c;
        case 0x17d860u: goto label_17d860;
        case 0x17d864u: goto label_17d864;
        case 0x17d868u: goto label_17d868;
        case 0x17d86cu: goto label_17d86c;
        case 0x17d870u: goto label_17d870;
        case 0x17d874u: goto label_17d874;
        case 0x17d878u: goto label_17d878;
        case 0x17d87cu: goto label_17d87c;
        default: break;
    }

    ctx->pc = 0x17d640u;

label_17d640:
    // 0x17d640: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x17d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_17d644:
    // 0x17d644: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17d644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_17d648:
    // 0x17d648: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x17d648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_17d64c:
    // 0x17d64c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x17d64cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_17d650:
    // 0x17d650: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x17d650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_17d654:
    // 0x17d654: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x17d654u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_17d658:
    // 0x17d658: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x17d658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_17d65c:
    // 0x17d65c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x17d65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_17d660:
    // 0x17d660: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x17d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_17d664:
    // 0x17d664: 0x24a522a0  addiu       $a1, $a1, 0x22A0
    ctx->pc = 0x17d664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8864));
label_17d668:
    // 0x17d668: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17d668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_17d66c:
    // 0x17d66c: 0x250822b0  addiu       $t0, $t0, 0x22B0
    ctx->pc = 0x17d66cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8880));
label_17d670:
    // 0x17d670: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x17d670u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_17d674:
    // 0x17d674: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x17d674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_17d678:
    // 0x17d678: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x17d678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_17d67c:
    // 0x17d67c: 0x240903ed  addiu       $t1, $zero, 0x3ED
    ctx->pc = 0x17d67cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
label_17d680:
    // 0x17d680: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x17d680u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_17d684:
    // 0x17d684: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17d684u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d688:
    // 0x17d688: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17d688u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d68c:
    // 0x17d68c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x17d68cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_17d690:
    // 0x17d690: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x17d690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_17d694:
    // 0x17d694: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x17d694u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_17d698:
    // 0x17d698: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x17d698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_17d69c:
    // 0x17d69c: 0x40f809  jalr        $v0
label_17d6a0:
    if (ctx->pc == 0x17D6A0u) {
        ctx->pc = 0x17D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D69Cu;
        // 0x17d6a0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D6A4u;
        goto label_17d6a4;
    }
    ctx->pc = 0x17D69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D6A4u);
        ctx->pc = 0x17D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D69Cu;
        // 0x17d6a0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D69Cu, 0x17D6A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D6A4u;
label_17d6a4:
    // 0x17d6a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x17d6a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17d6a8:
    // 0x17d6a8: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_17d6ac:
    if (ctx->pc == 0x17D6ACu) {
        ctx->pc = 0x17D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6A8u;
        // 0x17d6ac: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D6B0u;
        goto label_17d6b0;
    }
    ctx->pc = 0x17D6A8u;
    {
        const bool branch_taken_0x17d6a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6A8u;
        // 0x17d6ac: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d6a8) {
            ctx->pc = 0x17D6C0u;
            goto label_17d6c0;
        }
    }
    ctx->pc = 0x17D6B0u;
label_17d6b0:
    // 0x17d6b0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x17d6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17d6b4:
    // 0x17d6b4: 0xc05f4ce  jal         func_17D338
label_17d6b8:
    if (ctx->pc == 0x17D6B8u) {
        ctx->pc = 0x17D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6B4u;
        // 0x17d6b8: 0x24a522e0  addiu       $a1, $a1, 0x22E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D6BCu;
        goto label_17d6bc;
    }
    ctx->pc = 0x17D6B4u;
    SET_GPR_U32(ctx, 31, 0x17D6BCu);
    ctx->pc = 0x17D6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D6B4u;
    // 0x17d6b8: 0x24a522e0  addiu       $a1, $a1, 0x22E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D338u, 0x17D6B4u, 0x17D6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D6BCu;
label_17d6bc:
    // 0x17d6bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x17d6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17d6c0:
    // 0x17d6c0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x17d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_17d6c4:
    // 0x17d6c4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x17d6c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17d6c8:
    // 0x17d6c8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x17d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_17d6cc:
    // 0x17d6cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17d6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17d6d0:
    // 0x17d6d0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x17d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_17d6d4:
    // 0x17d6d4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x17d6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_17d6d8:
    // 0x17d6d8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x17d6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_17d6dc:
    // 0x17d6dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17d6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17d6e0:
    // 0x17d6e0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x17d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_17d6e4:
    // 0x17d6e4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x17d6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17d6e8:
    // 0x17d6e8: 0xc7b40034  lwc1        $f20, 0x34($sp)
    ctx->pc = 0x17d6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17d6ec:
    // 0x17d6ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17d6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17d6f0:
    // 0x17d6f0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x17d6f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17d6f4:
    // 0x17d6f4: 0xa7a6004e  sh          $a2, 0x4E($sp)
    ctx->pc = 0x17d6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 78), (uint16_t)GPR_U32(ctx, 6));
label_17d6f8:
    // 0x17d6f8: 0xa7a3004c  sh          $v1, 0x4C($sp)
    ctx->pc = 0x17d6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 76), (uint16_t)GPR_U32(ctx, 3));
label_17d6fc:
    // 0x17d6fc: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x17d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_17d700:
    // 0x17d700: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x17d700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_17d704:
    // 0x17d704: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x17d704u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_17d708:
    // 0x17d708: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x17d708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_17d70c:
    // 0x17d70c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x17d70cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_17d710:
    // 0x17d710: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x17d710u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17d714:
    // 0x17d714: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x17d714u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17d718:
    // 0x17d718: 0xafb10044  sw          $s1, 0x44($sp)
    ctx->pc = 0x17d718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
label_17d71c:
    // 0x17d71c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x17d71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_17d720:
    // 0x17d720: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x17d720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_17d724:
    // 0x17d724: 0xae67cce4  sw          $a3, -0x331C($s3)
    ctx->pc = 0x17d724u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294954212), GPR_U32(ctx, 7));
label_17d728:
    // 0x17d728: 0xc05f55e  jal         func_17D578
label_17d72c:
    if (ctx->pc == 0x17D72Cu) {
        ctx->pc = 0x17D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D728u;
        // 0x17d72c: 0x7ce20050  sq          $v0, 0x50($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D730u;
        goto label_17d730;
    }
    ctx->pc = 0x17D728u;
    SET_GPR_U32(ctx, 31, 0x17D730u);
    ctx->pc = 0x17D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D728u;
    // 0x17d72c: 0x7ce20050  sq          $v0, 0x50($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D578u, 0x17D728u, 0x17D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D730u;
label_17d730:
    // 0x17d730: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17d730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17d734:
    // 0x17d734: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x17d734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_17d738:
    // 0x17d738: 0x8e66cce4  lw          $a2, -0x331C($s3)
    ctx->pc = 0x17d738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954212)));
label_17d73c:
    // 0x17d73c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x17d73cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17d740:
    // 0x17d740: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x17d740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_17d744:
    // 0x17d744: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17d748:
    // 0x17d748: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x17d748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_17d74c:
    // 0x17d74c: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x17d74cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
label_17d750:
    // 0x17d750: 0x2407012c  addiu       $a3, $zero, 0x12C
    ctx->pc = 0x17d750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_17d754:
    // 0x17d754: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x17d754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_17d758:
    // 0x17d758: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17d758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_17d75c:
    // 0x17d75c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17d75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17d760:
    // 0x17d760: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x17d760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17d764:
    // 0x17d764: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x17d764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_17d768:
    // 0x17d768: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17d768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17d76c:
    // 0x17d76c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x17d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_17d770:
    // 0x17d770: 0xafb20044  sw          $s2, 0x44($sp)
    ctx->pc = 0x17d770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 18));
label_17d774:
    // 0x17d774: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x17d774u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_17d778:
    // 0x17d778: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x17d778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_17d77c:
    // 0x17d77c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x17d77cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_17d780:
    // 0x17d780: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x17d780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_17d784:
    // 0x17d784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17d788:
    // 0x17d788: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x17d788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_17d78c:
    // 0x17d78c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x17d78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_17d790:
    // 0x17d790: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x17d790u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_17d794:
    // 0x17d794: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x17d794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_17d798:
    // 0x17d798: 0xe7b40054  swc1        $f20, 0x54($sp)
    ctx->pc = 0x17d798u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_17d79c:
    // 0x17d79c: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x17d79cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_17d7a0:
    // 0x17d7a0: 0xe7b5005c  swc1        $f21, 0x5C($sp)
    ctx->pc = 0x17d7a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_17d7a4:
    // 0x17d7a4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x17d7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_17d7a8:
    // 0x17d7a8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x17d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_17d7ac:
    // 0x17d7ac: 0xa7a0004e  sh          $zero, 0x4E($sp)
    ctx->pc = 0x17d7acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 78), (uint16_t)GPR_U32(ctx, 0));
label_17d7b0:
    // 0x17d7b0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x17d7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_17d7b4:
    // 0x17d7b4: 0xe475000c  swc1        $f21, 0xC($v1)
    ctx->pc = 0x17d7b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_17d7b8:
    // 0x17d7b8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x17d7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_17d7bc:
    // 0x17d7bc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x17d7bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17d7c0:
    // 0x17d7c0: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x17d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
label_17d7c4:
    // 0x17d7c4: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x17d7c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17d7c8:
    // 0x17d7c8: 0xacc70080  sw          $a3, 0x80($a2)
    ctx->pc = 0x17d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 7));
label_17d7cc:
    // 0x17d7cc: 0xc05f55e  jal         func_17D578
label_17d7d0:
    if (ctx->pc == 0x17D7D0u) {
        ctx->pc = 0x17D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7CCu;
        // 0x17d7d0: 0x7cc30070  sq          $v1, 0x70($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D7D4u;
        goto label_17d7d4;
    }
    ctx->pc = 0x17D7CCu;
    SET_GPR_U32(ctx, 31, 0x17D7D4u);
    ctx->pc = 0x17D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D7CCu;
    // 0x17d7d0: 0x7cc30070  sq          $v1, 0x70($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D578u, 0x17D7CCu, 0x17D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7D4u;
label_17d7d4:
    // 0x17d7d4: 0x8e64cce4  lw          $a0, -0x331C($s3)
    ctx->pc = 0x17d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954212)));
label_17d7d8:
    // 0x17d7d8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_17d7dc:
    // 0x17d7dc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x17d7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_17d7e0:
    // 0x17d7e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17d7e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_17d7e4:
    // 0x17d7e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17d7e8:
    // 0x17d7e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17d7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17d7ec:
    // 0x17d7ec: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x17d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
label_17d7f0:
    // 0x17d7f0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x17d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_17d7f4:
    // 0x17d7f4: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x17d7f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17d7f8:
    // 0x17d7f8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x17d7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_17d7fc:
    // 0x17d7fc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x17d7fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_17d800:
    // 0x17d800: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x17d800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17d804:
    // 0x17d804: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x17d804u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_17d808:
    // 0x17d808: 0xa7a0004e  sh          $zero, 0x4E($sp)
    ctx->pc = 0x17d808u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 78), (uint16_t)GPR_U32(ctx, 0));
label_17d80c:
    // 0x17d80c: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x17d80cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_17d810:
    // 0x17d810: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x17d810u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_17d814:
    // 0x17d814: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x17d814u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_17d818:
    // 0x17d818: 0xc05f55e  jal         func_17D578
label_17d81c:
    if (ctx->pc == 0x17D81Cu) {
        ctx->pc = 0x17D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D818u;
        // 0x17d81c: 0xafb20044  sw          $s2, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D820u;
        goto label_17d820;
    }
    ctx->pc = 0x17D818u;
    SET_GPR_U32(ctx, 31, 0x17D820u);
    ctx->pc = 0x17D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D818u;
    // 0x17d81c: 0xafb20044  sw          $s2, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D578u, 0x17D818u, 0x17D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D820u;
label_17d820:
    // 0x17d820: 0x8e64cce4  lw          $a0, -0x331C($s3)
    ctx->pc = 0x17d820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954212)));
label_17d824:
    // 0x17d824: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x17d824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_17d828:
    // 0x17d828: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x17d828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
label_17d82c:
    // 0x17d82c: 0x3421a0a1  ori         $at, $at, 0xA0A1
    ctx->pc = 0x17d82cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41121);
label_17d830:
    // 0x17d830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17d834:
    // 0x17d834: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x17d834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17d838:
    // 0x17d838: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x17d838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
label_17d83c:
    // 0x17d83c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x17d83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_17d840:
    // 0x17d840: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x17d840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_17d844:
    // 0x17d844: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x17d844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_17d848:
    // 0x17d848: 0xc05fb0e  jal         func_17EC38
label_17d84c:
    if (ctx->pc == 0x17D84Cu) {
        ctx->pc = 0x17D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D848u;
        // 0x17d84c: 0xe475000c  swc1        $f21, 0xC($v1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D850u;
        goto label_17d850;
    }
    ctx->pc = 0x17D848u;
    SET_GPR_U32(ctx, 31, 0x17D850u);
    ctx->pc = 0x17D84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D848u;
    // 0x17d84c: 0xe475000c  swc1        $f21, 0xC($v1) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC38u, 0x17D848u, 0x17D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D850u;
label_17d850:
    // 0x17d850: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x17d850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_17d854:
    // 0x17d854: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x17d854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_17d858:
    // 0x17d858: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x17d858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_17d85c:
    // 0x17d85c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x17d85cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_17d860:
    // 0x17d860: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17d860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_17d864:
    // 0x17d864: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x17d864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17d868:
    // 0x17d868: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x17d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17d86c:
    // 0x17d86c: 0x3e00008  jr          $ra
label_17d870:
    if (ctx->pc == 0x17D870u) {
        ctx->pc = 0x17D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D86Cu;
        // 0x17d870: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D874u;
        goto label_17d874;
    }
    ctx->pc = 0x17D86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D86Cu;
        // 0x17d870: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D874u;
label_17d874:
    // 0x17d874: 0x0  nop
    ctx->pc = 0x17d874u;
    // NOP
label_17d878:
    // 0x17d878: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17d878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_17d87c:
    // 0x17d87c: 0x0  nop
    ctx->pc = 0x17d87cu;
    // NOP
    ctx->pc = 0x17d880u;
}
