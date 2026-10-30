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

// Function: sub_003ED7B8
// Address: 0x3ed7b8 - 0x3ed890
void sub_003ED7B8_0x3ed7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED7B8_0x3ed7b8");
#endif

    switch (ctx->pc) {
        case 0x3ed7b8u: goto label_3ed7b8;
        case 0x3ed7bcu: goto label_3ed7bc;
        case 0x3ed7c0u: goto label_3ed7c0;
        case 0x3ed7c4u: goto label_3ed7c4;
        case 0x3ed7c8u: goto label_3ed7c8;
        case 0x3ed7ccu: goto label_3ed7cc;
        case 0x3ed7d0u: goto label_3ed7d0;
        case 0x3ed7d4u: goto label_3ed7d4;
        case 0x3ed7d8u: goto label_3ed7d8;
        case 0x3ed7dcu: goto label_3ed7dc;
        case 0x3ed7e0u: goto label_3ed7e0;
        case 0x3ed7e4u: goto label_3ed7e4;
        case 0x3ed7e8u: goto label_3ed7e8;
        case 0x3ed7ecu: goto label_3ed7ec;
        case 0x3ed7f0u: goto label_3ed7f0;
        case 0x3ed7f4u: goto label_3ed7f4;
        case 0x3ed7f8u: goto label_3ed7f8;
        case 0x3ed7fcu: goto label_3ed7fc;
        case 0x3ed800u: goto label_3ed800;
        case 0x3ed804u: goto label_3ed804;
        case 0x3ed808u: goto label_3ed808;
        case 0x3ed80cu: goto label_3ed80c;
        case 0x3ed810u: goto label_3ed810;
        case 0x3ed814u: goto label_3ed814;
        case 0x3ed818u: goto label_3ed818;
        case 0x3ed81cu: goto label_3ed81c;
        case 0x3ed820u: goto label_3ed820;
        case 0x3ed824u: goto label_3ed824;
        case 0x3ed828u: goto label_3ed828;
        case 0x3ed82cu: goto label_3ed82c;
        case 0x3ed830u: goto label_3ed830;
        case 0x3ed834u: goto label_3ed834;
        case 0x3ed838u: goto label_3ed838;
        case 0x3ed83cu: goto label_3ed83c;
        case 0x3ed840u: goto label_3ed840;
        case 0x3ed844u: goto label_3ed844;
        case 0x3ed848u: goto label_3ed848;
        case 0x3ed84cu: goto label_3ed84c;
        case 0x3ed850u: goto label_3ed850;
        case 0x3ed854u: goto label_3ed854;
        case 0x3ed858u: goto label_3ed858;
        case 0x3ed85cu: goto label_3ed85c;
        case 0x3ed860u: goto label_3ed860;
        case 0x3ed864u: goto label_3ed864;
        case 0x3ed868u: goto label_3ed868;
        case 0x3ed86cu: goto label_3ed86c;
        case 0x3ed870u: goto label_3ed870;
        case 0x3ed874u: goto label_3ed874;
        case 0x3ed878u: goto label_3ed878;
        case 0x3ed87cu: goto label_3ed87c;
        case 0x3ed880u: goto label_3ed880;
        case 0x3ed884u: goto label_3ed884;
        case 0x3ed888u: goto label_3ed888;
        case 0x3ed88cu: goto label_3ed88c;
        default: break;
    }

    ctx->pc = 0x3ed7b8u;

label_3ed7b8:
    // 0x3ed7b8: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x3ed7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
label_3ed7bc:
    // 0x3ed7bc: 0x7fb00460  sq          $s0, 0x460($sp)
    ctx->pc = 0x3ed7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 16));
label_3ed7c0:
    // 0x3ed7c0: 0x7fb10450  sq          $s1, 0x450($sp)
    ctx->pc = 0x3ed7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 17));
label_3ed7c4:
    // 0x3ed7c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ed7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ed7c8:
    // 0x3ed7c8: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x3ed7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
label_3ed7cc:
    // 0x3ed7cc: 0x7fb30430  sq          $s3, 0x430($sp)
    ctx->pc = 0x3ed7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 19));
label_3ed7d0:
    // 0x3ed7d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ed7d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ed7d4:
    // 0x3ed7d4: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x3ed7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_3ed7d8:
    // 0x3ed7d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3ed7d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ed7dc:
    // 0x3ed7dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ed7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ed7e0:
    // 0x3ed7e0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ed7e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ed7e4:
    // 0x3ed7e4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ed7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ed7e8:
    // 0x3ed7e8: 0x40f809  jalr        $v0
label_3ed7ec:
    if (ctx->pc == 0x3ED7ECu) {
        ctx->pc = 0x3ED7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED7E8u;
        // 0x3ed7ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED7F0u;
        goto label_3ed7f0;
    }
    ctx->pc = 0x3ED7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ED7F0u);
        ctx->pc = 0x3ED7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED7E8u;
        // 0x3ed7ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED7E8u, 0x3ED7F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED7F0u;
label_3ed7f0:
    // 0x3ed7f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ed7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ed7f4:
    // 0x3ed7f4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3ed7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3ed7f8:
    // 0x3ed7f8: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_3ed7fc:
    if (ctx->pc == 0x3ED7FCu) {
        ctx->pc = 0x3ED7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED7F8u;
        // 0x3ed7fc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED800u;
        goto label_3ed800;
    }
    ctx->pc = 0x3ED7F8u;
    {
        const bool branch_taken_0x3ed7f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED7F8u;
        // 0x3ed7fc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed7f8) {
            ctx->pc = 0x3ED810u;
            goto label_3ed810;
        }
    }
    ctx->pc = 0x3ED800u;
label_3ed800:
    // 0x3ed800: 0x12420012  beq         $s2, $v0, . + 4 + (0x12 << 2)
label_3ed804:
    if (ctx->pc == 0x3ED804u) {
        ctx->pc = 0x3ED804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED800u;
        // 0x3ed804: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED808u;
        goto label_3ed808;
    }
    ctx->pc = 0x3ED800u;
    {
        const bool branch_taken_0x3ed800 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED800u;
        // 0x3ed804: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed800) {
            ctx->pc = 0x3ED84Cu;
            goto label_3ed84c;
        }
    }
    ctx->pc = 0x3ED808u;
label_3ed808:
    // 0x3ed808: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3ed80c:
    if (ctx->pc == 0x3ED80Cu) {
        ctx->pc = 0x3ED80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED808u;
        // 0x3ed80c: 0x7bb10450  lq          $s1, 0x450($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED810u;
        goto label_3ed810;
    }
    ctx->pc = 0x3ED808u;
    {
        const bool branch_taken_0x3ed808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED808u;
        // 0x3ed80c: 0x7bb10450  lq          $s1, 0x450($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed808) {
            ctx->pc = 0x3ED87Cu;
            goto label_3ed87c;
        }
    }
    ctx->pc = 0x3ED810u;
label_3ed810:
    // 0x3ed810: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ed810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ed814:
    // 0x3ed814: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_3ed818:
    if (ctx->pc == 0x3ED818u) {
        ctx->pc = 0x3ED818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED814u;
        // 0x3ed818: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED81Cu;
        goto label_3ed81c;
    }
    ctx->pc = 0x3ED814u;
    {
        const bool branch_taken_0x3ed814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed814) {
            ctx->pc = 0x3ED818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED814u;
            // 0x3ed818: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED878u;
            goto label_3ed878;
        }
    }
    ctx->pc = 0x3ED81Cu;
label_3ed81c:
    // 0x3ed81c: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3ed81cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3ed820:
    // 0x3ed820: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ed820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ed824:
    // 0x3ed824: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3ed824u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3ed828:
    // 0x3ed828: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3ed828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3ed82c:
    // 0x3ed82c: 0x26105c60  addiu       $s0, $s0, 0x5C60
    ctx->pc = 0x3ed82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23648));
label_3ed830:
    // 0x3ed830: 0xc0e9f6a  jal         func_3A7DA8
label_3ed834:
    if (ctx->pc == 0x3ED834u) {
        ctx->pc = 0x3ED834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED830u;
        // 0x3ed834: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED838u;
        goto label_3ed838;
    }
    ctx->pc = 0x3ED830u;
    SET_GPR_U32(ctx, 31, 0x3ED838u);
    ctx->pc = 0x3ED834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED830u;
    // 0x3ed834: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x3ED830u, 0x3ED838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED838u;
label_3ed838:
    // 0x3ed838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed83c:
    // 0x3ed83c: 0xc0f15bc  jal         func_3C56F0
label_3ed840:
    if (ctx->pc == 0x3ED840u) {
        ctx->pc = 0x3ED840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED83Cu;
        // 0x3ed840: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED844u;
        goto label_3ed844;
    }
    ctx->pc = 0x3ED83Cu;
    SET_GPR_U32(ctx, 31, 0x3ED844u);
    ctx->pc = 0x3ED840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED83Cu;
    // 0x3ed840: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3ED83Cu, 0x3ED844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED844u;
label_3ed844:
    // 0x3ed844: 0x1000000b  b           . + 4 + (0xB << 2)
label_3ed848:
    if (ctx->pc == 0x3ED848u) {
        ctx->pc = 0x3ED848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED844u;
        // 0x3ed848: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED84Cu;
        goto label_3ed84c;
    }
    ctx->pc = 0x3ED844u;
    {
        const bool branch_taken_0x3ed844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED844u;
        // 0x3ed848: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed844) {
            ctx->pc = 0x3ED874u;
            goto label_3ed874;
        }
    }
    ctx->pc = 0x3ED84Cu;
label_3ed84c:
    // 0x3ed84c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x3ed84cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ed850:
    // 0x3ed850: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3ed854:
    if (ctx->pc == 0x3ED854u) {
        ctx->pc = 0x3ED854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED850u;
        // 0x3ed854: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED858u;
        goto label_3ed858;
    }
    ctx->pc = 0x3ED850u;
    {
        const bool branch_taken_0x3ed850 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED850u;
        // 0x3ed854: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed850) {
            ctx->pc = 0x3ED870u;
            goto label_3ed870;
        }
    }
    ctx->pc = 0x3ED858u;
label_3ed858:
    // 0x3ed858: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ed858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ed85c:
    // 0x3ed85c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3ed85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3ed860:
    // 0x3ed860: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ed860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ed864:
    // 0x3ed864: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ed864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ed868:
    // 0x3ed868: 0x60f809  jalr        $v1
label_3ed86c:
    if (ctx->pc == 0x3ED86Cu) {
        ctx->pc = 0x3ED86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED868u;
        // 0x3ed86c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED870u;
        goto label_3ed870;
    }
    ctx->pc = 0x3ED868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3ED870u);
        ctx->pc = 0x3ED86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED868u;
        // 0x3ed86c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED868u, 0x3ED870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED870u;
label_3ed870:
    // 0x3ed870: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3ed870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3ed874:
    // 0x3ed874: 0x7bb00460  lq          $s0, 0x460($sp)
    ctx->pc = 0x3ed874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3ed878:
    // 0x3ed878: 0x7bb10450  lq          $s1, 0x450($sp)
    ctx->pc = 0x3ed878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3ed87c:
    // 0x3ed87c: 0x7bb20440  lq          $s2, 0x440($sp)
    ctx->pc = 0x3ed87cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3ed880:
    // 0x3ed880: 0x7bb30430  lq          $s3, 0x430($sp)
    ctx->pc = 0x3ed880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3ed884:
    // 0x3ed884: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3ed884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_3ed888:
    // 0x3ed888: 0x3e00008  jr          $ra
label_3ed88c:
    if (ctx->pc == 0x3ED88Cu) {
        ctx->pc = 0x3ED88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED888u;
        // 0x3ed88c: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED890u;
        goto label_fallthrough_0x3ed888;
    }
    ctx->pc = 0x3ED888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED888u;
        // 0x3ed88c: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ed888:
    ctx->pc = 0x3ED890u;
}
