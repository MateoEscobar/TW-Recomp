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

// Function: sub_0022D790
// Address: 0x22d790 - 0x22d908
void sub_0022D790_0x22d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D790_0x22d790");
#endif

    switch (ctx->pc) {
        case 0x22d790u: goto label_22d790;
        case 0x22d794u: goto label_22d794;
        case 0x22d798u: goto label_22d798;
        case 0x22d79cu: goto label_22d79c;
        case 0x22d7a0u: goto label_22d7a0;
        case 0x22d7a4u: goto label_22d7a4;
        case 0x22d7a8u: goto label_22d7a8;
        case 0x22d7acu: goto label_22d7ac;
        case 0x22d7b0u: goto label_22d7b0;
        case 0x22d7b4u: goto label_22d7b4;
        case 0x22d7b8u: goto label_22d7b8;
        case 0x22d7bcu: goto label_22d7bc;
        case 0x22d7c0u: goto label_22d7c0;
        case 0x22d7c4u: goto label_22d7c4;
        case 0x22d7c8u: goto label_22d7c8;
        case 0x22d7ccu: goto label_22d7cc;
        case 0x22d7d0u: goto label_22d7d0;
        case 0x22d7d4u: goto label_22d7d4;
        case 0x22d7d8u: goto label_22d7d8;
        case 0x22d7dcu: goto label_22d7dc;
        case 0x22d7e0u: goto label_22d7e0;
        case 0x22d7e4u: goto label_22d7e4;
        case 0x22d7e8u: goto label_22d7e8;
        case 0x22d7ecu: goto label_22d7ec;
        case 0x22d7f0u: goto label_22d7f0;
        case 0x22d7f4u: goto label_22d7f4;
        case 0x22d7f8u: goto label_22d7f8;
        case 0x22d7fcu: goto label_22d7fc;
        case 0x22d800u: goto label_22d800;
        case 0x22d804u: goto label_22d804;
        case 0x22d808u: goto label_22d808;
        case 0x22d80cu: goto label_22d80c;
        case 0x22d810u: goto label_22d810;
        case 0x22d814u: goto label_22d814;
        case 0x22d818u: goto label_22d818;
        case 0x22d81cu: goto label_22d81c;
        case 0x22d820u: goto label_22d820;
        case 0x22d824u: goto label_22d824;
        case 0x22d828u: goto label_22d828;
        case 0x22d82cu: goto label_22d82c;
        case 0x22d830u: goto label_22d830;
        case 0x22d834u: goto label_22d834;
        case 0x22d838u: goto label_22d838;
        case 0x22d83cu: goto label_22d83c;
        case 0x22d840u: goto label_22d840;
        case 0x22d844u: goto label_22d844;
        case 0x22d848u: goto label_22d848;
        case 0x22d84cu: goto label_22d84c;
        case 0x22d850u: goto label_22d850;
        case 0x22d854u: goto label_22d854;
        case 0x22d858u: goto label_22d858;
        case 0x22d85cu: goto label_22d85c;
        case 0x22d860u: goto label_22d860;
        case 0x22d864u: goto label_22d864;
        case 0x22d868u: goto label_22d868;
        case 0x22d86cu: goto label_22d86c;
        case 0x22d870u: goto label_22d870;
        case 0x22d874u: goto label_22d874;
        case 0x22d878u: goto label_22d878;
        case 0x22d87cu: goto label_22d87c;
        case 0x22d880u: goto label_22d880;
        case 0x22d884u: goto label_22d884;
        case 0x22d888u: goto label_22d888;
        case 0x22d88cu: goto label_22d88c;
        case 0x22d890u: goto label_22d890;
        case 0x22d894u: goto label_22d894;
        case 0x22d898u: goto label_22d898;
        case 0x22d89cu: goto label_22d89c;
        case 0x22d8a0u: goto label_22d8a0;
        case 0x22d8a4u: goto label_22d8a4;
        case 0x22d8a8u: goto label_22d8a8;
        case 0x22d8acu: goto label_22d8ac;
        case 0x22d8b0u: goto label_22d8b0;
        case 0x22d8b4u: goto label_22d8b4;
        case 0x22d8b8u: goto label_22d8b8;
        case 0x22d8bcu: goto label_22d8bc;
        case 0x22d8c0u: goto label_22d8c0;
        case 0x22d8c4u: goto label_22d8c4;
        case 0x22d8c8u: goto label_22d8c8;
        case 0x22d8ccu: goto label_22d8cc;
        case 0x22d8d0u: goto label_22d8d0;
        case 0x22d8d4u: goto label_22d8d4;
        case 0x22d8d8u: goto label_22d8d8;
        case 0x22d8dcu: goto label_22d8dc;
        case 0x22d8e0u: goto label_22d8e0;
        case 0x22d8e4u: goto label_22d8e4;
        case 0x22d8e8u: goto label_22d8e8;
        case 0x22d8ecu: goto label_22d8ec;
        case 0x22d8f0u: goto label_22d8f0;
        case 0x22d8f4u: goto label_22d8f4;
        case 0x22d8f8u: goto label_22d8f8;
        case 0x22d8fcu: goto label_22d8fc;
        case 0x22d900u: goto label_22d900;
        case 0x22d904u: goto label_22d904;
        default: break;
    }

    ctx->pc = 0x22d790u;

label_22d790:
    // 0x22d790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22d790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22d794:
    // 0x22d794: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22d794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_22d798:
    // 0x22d798: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22d798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_22d79c:
    // 0x22d79c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22d79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22d7a0:
    // 0x22d7a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22d7a4:
    // 0x22d7a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22d7a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d7a8:
    // 0x22d7a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22d7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_22d7ac:
    // 0x22d7ac: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_22d7b0:
    if (ctx->pc == 0x22D7B0u) {
        ctx->pc = 0x22D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7ACu;
        // 0x22d7b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D7B4u;
        goto label_22d7b4;
    }
    ctx->pc = 0x22D7ACu;
    {
        const bool branch_taken_0x22d7ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7ACu;
        // 0x22d7b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d7ac) {
            ctx->pc = 0x22D7D0u;
            goto label_22d7d0;
        }
    }
    ctx->pc = 0x22D7B4u;
label_22d7b4:
    // 0x22d7b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d7b8:
    // 0x22d7b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22d7b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22d7bc:
    // 0x22d7bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22d7c0:
    // 0x22d7c0: 0x40f809  jalr        $v0
label_22d7c4:
    if (ctx->pc == 0x22D7C4u) {
        ctx->pc = 0x22D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7C0u;
        // 0x22d7c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D7C8u;
        goto label_22d7c8;
    }
    ctx->pc = 0x22D7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D7C8u);
        ctx->pc = 0x22D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7C0u;
        // 0x22d7c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D7C0u, 0x22D7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D7C8u;
label_22d7c8:
    // 0x22d7c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_22d7cc:
    if (ctx->pc == 0x22D7CCu) {
        ctx->pc = 0x22D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7C8u;
        // 0x22d7cc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D7D0u;
        goto label_22d7d0;
    }
    ctx->pc = 0x22D7C8u;
    {
        const bool branch_taken_0x22d7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7C8u;
        // 0x22d7cc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d7c8) {
            ctx->pc = 0x22D7D8u;
            goto label_22d7d8;
        }
    }
    ctx->pc = 0x22D7D0u;
label_22d7d0:
    // 0x22d7d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22d7d4:
    // 0x22d7d4: 0x8c52bd30  lw          $s2, -0x42D0($v0)
    ctx->pc = 0x22d7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22d7d8:
    // 0x22d7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d7dc:
    // 0x22d7dc: 0xc088ac6  jal         func_222B18
label_22d7e0:
    if (ctx->pc == 0x22D7E0u) {
        ctx->pc = 0x22D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7DCu;
        // 0x22d7e0: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D7E4u;
        goto label_22d7e4;
    }
    ctx->pc = 0x22D7DCu;
    SET_GPR_U32(ctx, 31, 0x22D7E4u);
    ctx->pc = 0x22D7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D7DCu;
    // 0x22d7e0: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22D7DCu, 0x22D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D7E4u;
label_22d7e4:
    // 0x22d7e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22d7e8:
    // 0x22d7e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d7ec:
    // 0x22d7ec: 0xc088ac6  jal         func_222B18
label_22d7f0:
    if (ctx->pc == 0x22D7F0u) {
        ctx->pc = 0x22D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7ECu;
        // 0x22d7f0: 0xa4430046  sh          $v1, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D7F4u;
        goto label_22d7f4;
    }
    ctx->pc = 0x22D7ECu;
    SET_GPR_U32(ctx, 31, 0x22D7F4u);
    ctx->pc = 0x22D7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D7ECu;
    // 0x22d7f0: 0xa4430046  sh          $v1, 0x46($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22D7ECu, 0x22D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D7F4u;
label_22d7f4:
    // 0x22d7f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d7f8:
    // 0x22d7f8: 0xc088ac6  jal         func_222B18
label_22d7fc:
    if (ctx->pc == 0x22D7FCu) {
        ctx->pc = 0x22D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7F8u;
        // 0x22d7fc: 0xa4400042  sh          $zero, 0x42($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D800u;
        goto label_22d800;
    }
    ctx->pc = 0x22D7F8u;
    SET_GPR_U32(ctx, 31, 0x22D800u);
    ctx->pc = 0x22D7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D7F8u;
    // 0x22d7fc: 0xa4400042  sh          $zero, 0x42($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22D7F8u, 0x22D800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D800u;
label_22d800:
    // 0x22d800: 0xa4400044  sh          $zero, 0x44($v0)
    ctx->pc = 0x22d800u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 0));
label_22d804:
    // 0x22d804: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22d804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22d808:
    // 0x22d808: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22d808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_22d80c:
    // 0x22d80c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22d80cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_22d810:
    // 0x22d810: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22d810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22d814:
    // 0x22d814: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22d818:
    // 0x22d818: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22d818u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22d81c:
    // 0x22d81c: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x22d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22d820:
    // 0x22d820: 0x60f809  jalr        $v1
label_22d824:
    if (ctx->pc == 0x22D824u) {
        ctx->pc = 0x22D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D820u;
        // 0x22d824: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D828u;
        goto label_22d828;
    }
    ctx->pc = 0x22D820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22D828u);
        ctx->pc = 0x22D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D820u;
        // 0x22d824: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D820u, 0x22D828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D828u;
label_22d828:
    // 0x22d828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d82c:
    // 0x22d82c: 0xc089988  jal         func_226620
label_22d830:
    if (ctx->pc == 0x22D830u) {
        ctx->pc = 0x22D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D82Cu;
        // 0x22d830: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D834u;
        goto label_22d834;
    }
    ctx->pc = 0x22D82Cu;
    SET_GPR_U32(ctx, 31, 0x22D834u);
    ctx->pc = 0x22D830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D82Cu;
    // 0x22d830: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22D82Cu, 0x22D834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D834u;
label_22d834:
    // 0x22d834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d838:
    // 0x22d838: 0xc089974  jal         func_2265D0
label_22d83c:
    if (ctx->pc == 0x22D83Cu) {
        ctx->pc = 0x22D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D838u;
        // 0x22d83c: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D840u;
        goto label_22d840;
    }
    ctx->pc = 0x22D838u;
    SET_GPR_U32(ctx, 31, 0x22D840u);
    ctx->pc = 0x22D83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D838u;
    // 0x22d83c: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22D838u, 0x22D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D840u;
label_22d840:
    // 0x22d840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d844:
    // 0x22d844: 0xc089c20  jal         func_227080
label_22d848:
    if (ctx->pc == 0x22D848u) {
        ctx->pc = 0x22D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D844u;
        // 0x22d848: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D84Cu;
        goto label_22d84c;
    }
    ctx->pc = 0x22D844u;
    SET_GPR_U32(ctx, 31, 0x22D84Cu);
    ctx->pc = 0x22D848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D844u;
    // 0x22d848: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x22D844u, 0x22D84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D84Cu;
label_22d84c:
    // 0x22d84c: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x22d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_22d850:
    // 0x22d850: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x22d850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_22d854:
    // 0x22d854: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22d858:
    if (ctx->pc == 0x22D858u) {
        ctx->pc = 0x22D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D854u;
        // 0x22d858: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D85Cu;
        goto label_22d85c;
    }
    ctx->pc = 0x22D854u;
    {
        const bool branch_taken_0x22d854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D854u;
        // 0x22d858: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d854) {
            ctx->pc = 0x22D868u;
            goto label_22d868;
        }
    }
    ctx->pc = 0x22D85Cu;
label_22d85c:
    // 0x22d85c: 0xc107444  jal         func_41D110
label_22d860:
    if (ctx->pc == 0x22D860u) {
        ctx->pc = 0x22D864u;
        goto label_22d864;
    }
    ctx->pc = 0x22D85Cu;
    SET_GPR_U32(ctx, 31, 0x22D864u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x22D85Cu, 0x22D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D864u;
label_22d864:
    // 0x22d864: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x22d864u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22d868:
    // 0x22d868: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_22d86c:
    if (ctx->pc == 0x22D86Cu) {
        ctx->pc = 0x22D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D868u;
        // 0x22d86c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D870u;
        goto label_22d870;
    }
    ctx->pc = 0x22D868u;
    {
        const bool branch_taken_0x22d868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d868) {
            ctx->pc = 0x22D86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D868u;
            // 0x22d86c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D8ACu;
            goto label_22d8ac;
        }
    }
    ctx->pc = 0x22D870u;
label_22d870:
    // 0x22d870: 0xc073a8e  jal         func_1CEA38
label_22d874:
    if (ctx->pc == 0x22D874u) {
        ctx->pc = 0x22D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D870u;
        // 0x22d874: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D878u;
        goto label_22d878;
    }
    ctx->pc = 0x22D870u;
    SET_GPR_U32(ctx, 31, 0x22D878u);
    ctx->pc = 0x22D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D870u;
    // 0x22d874: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x22D870u, 0x22D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D878u;
label_22d878:
    // 0x22d878: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_22d87c:
    if (ctx->pc == 0x22D87Cu) {
        ctx->pc = 0x22D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D878u;
        // 0x22d87c: 0x8e63489c  lw          $v1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D880u;
        goto label_22d880;
    }
    ctx->pc = 0x22D878u;
    {
        const bool branch_taken_0x22d878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D878u;
        // 0x22d87c: 0x8e63489c  lw          $v1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d878) {
            ctx->pc = 0x22D8A8u;
            goto label_22d8a8;
        }
    }
    ctx->pc = 0x22D880u;
label_22d880:
    // 0x22d880: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x22d880u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_22d884:
    // 0x22d884: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x22d884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
label_22d888:
    // 0x22d888: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22d888u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22d88c:
    // 0x22d88c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22d88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22d890:
    // 0x22d890: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22d890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22d894:
    // 0x22d894: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22d898:
    if (ctx->pc == 0x22D898u) {
        ctx->pc = 0x22D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D894u;
        // 0x22d898: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D89Cu;
        goto label_22d89c;
    }
    ctx->pc = 0x22D894u;
    {
        const bool branch_taken_0x22d894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D894u;
        // 0x22d898: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d894) {
            ctx->pc = 0x22D8A8u;
            goto label_22d8a8;
        }
    }
    ctx->pc = 0x22D89Cu;
label_22d89c:
    // 0x22d89c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x22d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_22d8a0:
    // 0x22d8a0: 0xc07387a  jal         func_1CE1E8
label_22d8a4:
    if (ctx->pc == 0x22D8A4u) {
        ctx->pc = 0x22D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8A0u;
        // 0x22d8a4: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8A8u;
        goto label_22d8a8;
    }
    ctx->pc = 0x22D8A0u;
    SET_GPR_U32(ctx, 31, 0x22D8A8u);
    ctx->pc = 0x22D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8A0u;
    // 0x22d8a4: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x22D8A0u, 0x22D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8A8u;
label_22d8a8:
    // 0x22d8a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22d8ac:
    // 0x22d8ac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22d8acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22d8b0:
    // 0x22d8b0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22d8b4:
    // 0x22d8b4: 0x40f809  jalr        $v0
label_22d8b8:
    if (ctx->pc == 0x22D8B8u) {
        ctx->pc = 0x22D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8B4u;
        // 0x22d8b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8BCu;
        goto label_22d8bc;
    }
    ctx->pc = 0x22D8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D8BCu);
        ctx->pc = 0x22D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8B4u;
        // 0x22d8b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D8B4u, 0x22D8BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D8BCu;
label_22d8bc:
    // 0x22d8bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d8c0:
    // 0x22d8c0: 0xc08d9e0  jal         func_236780
label_22d8c4:
    if (ctx->pc == 0x22D8C4u) {
        ctx->pc = 0x22D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8C0u;
        // 0x22d8c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8C8u;
        goto label_22d8c8;
    }
    ctx->pc = 0x22D8C0u;
    SET_GPR_U32(ctx, 31, 0x22D8C8u);
    ctx->pc = 0x22D8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8C0u;
    // 0x22d8c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236780u, 0x22D8C0u, 0x22D8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8C8u;
label_22d8c8:
    // 0x22d8c8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x22d8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_22d8cc:
    // 0x22d8cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d8d0:
    // 0x22d8d0: 0xc088ad6  jal         func_222B58
label_22d8d4:
    if (ctx->pc == 0x22D8D4u) {
        ctx->pc = 0x22D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8D0u;
        // 0x22d8d4: 0x26100840  addiu       $s0, $s0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8D8u;
        goto label_22d8d8;
    }
    ctx->pc = 0x22D8D0u;
    SET_GPR_U32(ctx, 31, 0x22D8D8u);
    ctx->pc = 0x22D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8D0u;
    // 0x22d8d4: 0x26100840  addiu       $s0, $s0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x22D8D0u, 0x22D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8D8u;
label_22d8d8:
    // 0x22d8d8: 0x9046000a  lbu         $a2, 0xA($v0)
    ctx->pc = 0x22d8d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
label_22d8dc:
    // 0x22d8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d8e0:
    // 0x22d8e0: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x22d8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_22d8e4:
    // 0x22d8e4: 0xc06ce78  jal         func_1B39E0
label_22d8e8:
    if (ctx->pc == 0x22D8E8u) {
        ctx->pc = 0x22D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8E4u;
        // 0x22d8e8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8ECu;
        goto label_22d8ec;
    }
    ctx->pc = 0x22D8E4u;
    SET_GPR_U32(ctx, 31, 0x22D8ECu);
    ctx->pc = 0x22D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8E4u;
    // 0x22d8e8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B39E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B39E0u, 0x22D8E4u, 0x22D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8ECu;
label_22d8ec:
    // 0x22d8ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22d8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22d8f0:
    // 0x22d8f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22d8f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22d8f4:
    // 0x22d8f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d8f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d8f8:
    // 0x22d8f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22d8f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d8fc:
    // 0x22d8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d900:
    // 0x22d900: 0x3e00008  jr          $ra
label_22d904:
    if (ctx->pc == 0x22D904u) {
        ctx->pc = 0x22D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D900u;
        // 0x22d904: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D908u;
        goto label_fallthrough_0x22d900;
    }
    ctx->pc = 0x22D900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D900u;
        // 0x22d904: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22d900:
    ctx->pc = 0x22D908u;
}
