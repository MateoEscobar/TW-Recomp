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

// Function: sub_002CF690
// Address: 0x2cf690 - 0x2cf8f8
void sub_002CF690_0x2cf690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF690_0x2cf690");
#endif

    switch (ctx->pc) {
        case 0x2cf690u: goto label_2cf690;
        case 0x2cf694u: goto label_2cf694;
        case 0x2cf698u: goto label_2cf698;
        case 0x2cf69cu: goto label_2cf69c;
        case 0x2cf6a0u: goto label_2cf6a0;
        case 0x2cf6a4u: goto label_2cf6a4;
        case 0x2cf6a8u: goto label_2cf6a8;
        case 0x2cf6acu: goto label_2cf6ac;
        case 0x2cf6b0u: goto label_2cf6b0;
        case 0x2cf6b4u: goto label_2cf6b4;
        case 0x2cf6b8u: goto label_2cf6b8;
        case 0x2cf6bcu: goto label_2cf6bc;
        case 0x2cf6c0u: goto label_2cf6c0;
        case 0x2cf6c4u: goto label_2cf6c4;
        case 0x2cf6c8u: goto label_2cf6c8;
        case 0x2cf6ccu: goto label_2cf6cc;
        case 0x2cf6d0u: goto label_2cf6d0;
        case 0x2cf6d4u: goto label_2cf6d4;
        case 0x2cf6d8u: goto label_2cf6d8;
        case 0x2cf6dcu: goto label_2cf6dc;
        case 0x2cf6e0u: goto label_2cf6e0;
        case 0x2cf6e4u: goto label_2cf6e4;
        case 0x2cf6e8u: goto label_2cf6e8;
        case 0x2cf6ecu: goto label_2cf6ec;
        case 0x2cf6f0u: goto label_2cf6f0;
        case 0x2cf6f4u: goto label_2cf6f4;
        case 0x2cf6f8u: goto label_2cf6f8;
        case 0x2cf6fcu: goto label_2cf6fc;
        case 0x2cf700u: goto label_2cf700;
        case 0x2cf704u: goto label_2cf704;
        case 0x2cf708u: goto label_2cf708;
        case 0x2cf70cu: goto label_2cf70c;
        case 0x2cf710u: goto label_2cf710;
        case 0x2cf714u: goto label_2cf714;
        case 0x2cf718u: goto label_2cf718;
        case 0x2cf71cu: goto label_2cf71c;
        case 0x2cf720u: goto label_2cf720;
        case 0x2cf724u: goto label_2cf724;
        case 0x2cf728u: goto label_2cf728;
        case 0x2cf72cu: goto label_2cf72c;
        case 0x2cf730u: goto label_2cf730;
        case 0x2cf734u: goto label_2cf734;
        case 0x2cf738u: goto label_2cf738;
        case 0x2cf73cu: goto label_2cf73c;
        case 0x2cf740u: goto label_2cf740;
        case 0x2cf744u: goto label_2cf744;
        case 0x2cf748u: goto label_2cf748;
        case 0x2cf74cu: goto label_2cf74c;
        case 0x2cf750u: goto label_2cf750;
        case 0x2cf754u: goto label_2cf754;
        case 0x2cf758u: goto label_2cf758;
        case 0x2cf75cu: goto label_2cf75c;
        case 0x2cf760u: goto label_2cf760;
        case 0x2cf764u: goto label_2cf764;
        case 0x2cf768u: goto label_2cf768;
        case 0x2cf76cu: goto label_2cf76c;
        case 0x2cf770u: goto label_2cf770;
        case 0x2cf774u: goto label_2cf774;
        case 0x2cf778u: goto label_2cf778;
        case 0x2cf77cu: goto label_2cf77c;
        case 0x2cf780u: goto label_2cf780;
        case 0x2cf784u: goto label_2cf784;
        case 0x2cf788u: goto label_2cf788;
        case 0x2cf78cu: goto label_2cf78c;
        case 0x2cf790u: goto label_2cf790;
        case 0x2cf794u: goto label_2cf794;
        case 0x2cf798u: goto label_2cf798;
        case 0x2cf79cu: goto label_2cf79c;
        case 0x2cf7a0u: goto label_2cf7a0;
        case 0x2cf7a4u: goto label_2cf7a4;
        case 0x2cf7a8u: goto label_2cf7a8;
        case 0x2cf7acu: goto label_2cf7ac;
        case 0x2cf7b0u: goto label_2cf7b0;
        case 0x2cf7b4u: goto label_2cf7b4;
        case 0x2cf7b8u: goto label_2cf7b8;
        case 0x2cf7bcu: goto label_2cf7bc;
        case 0x2cf7c0u: goto label_2cf7c0;
        case 0x2cf7c4u: goto label_2cf7c4;
        case 0x2cf7c8u: goto label_2cf7c8;
        case 0x2cf7ccu: goto label_2cf7cc;
        case 0x2cf7d0u: goto label_2cf7d0;
        case 0x2cf7d4u: goto label_2cf7d4;
        case 0x2cf7d8u: goto label_2cf7d8;
        case 0x2cf7dcu: goto label_2cf7dc;
        case 0x2cf7e0u: goto label_2cf7e0;
        case 0x2cf7e4u: goto label_2cf7e4;
        case 0x2cf7e8u: goto label_2cf7e8;
        case 0x2cf7ecu: goto label_2cf7ec;
        case 0x2cf7f0u: goto label_2cf7f0;
        case 0x2cf7f4u: goto label_2cf7f4;
        case 0x2cf7f8u: goto label_2cf7f8;
        case 0x2cf7fcu: goto label_2cf7fc;
        case 0x2cf800u: goto label_2cf800;
        case 0x2cf804u: goto label_2cf804;
        case 0x2cf808u: goto label_2cf808;
        case 0x2cf80cu: goto label_2cf80c;
        case 0x2cf810u: goto label_2cf810;
        case 0x2cf814u: goto label_2cf814;
        case 0x2cf818u: goto label_2cf818;
        case 0x2cf81cu: goto label_2cf81c;
        case 0x2cf820u: goto label_2cf820;
        case 0x2cf824u: goto label_2cf824;
        case 0x2cf828u: goto label_2cf828;
        case 0x2cf82cu: goto label_2cf82c;
        case 0x2cf830u: goto label_2cf830;
        case 0x2cf834u: goto label_2cf834;
        case 0x2cf838u: goto label_2cf838;
        case 0x2cf83cu: goto label_2cf83c;
        case 0x2cf840u: goto label_2cf840;
        case 0x2cf844u: goto label_2cf844;
        case 0x2cf848u: goto label_2cf848;
        case 0x2cf84cu: goto label_2cf84c;
        case 0x2cf850u: goto label_2cf850;
        case 0x2cf854u: goto label_2cf854;
        case 0x2cf858u: goto label_2cf858;
        case 0x2cf85cu: goto label_2cf85c;
        case 0x2cf860u: goto label_2cf860;
        case 0x2cf864u: goto label_2cf864;
        case 0x2cf868u: goto label_2cf868;
        case 0x2cf86cu: goto label_2cf86c;
        case 0x2cf870u: goto label_2cf870;
        case 0x2cf874u: goto label_2cf874;
        case 0x2cf878u: goto label_2cf878;
        case 0x2cf87cu: goto label_2cf87c;
        case 0x2cf880u: goto label_2cf880;
        case 0x2cf884u: goto label_2cf884;
        case 0x2cf888u: goto label_2cf888;
        case 0x2cf88cu: goto label_2cf88c;
        case 0x2cf890u: goto label_2cf890;
        case 0x2cf894u: goto label_2cf894;
        case 0x2cf898u: goto label_2cf898;
        case 0x2cf89cu: goto label_2cf89c;
        case 0x2cf8a0u: goto label_2cf8a0;
        case 0x2cf8a4u: goto label_2cf8a4;
        case 0x2cf8a8u: goto label_2cf8a8;
        case 0x2cf8acu: goto label_2cf8ac;
        case 0x2cf8b0u: goto label_2cf8b0;
        case 0x2cf8b4u: goto label_2cf8b4;
        case 0x2cf8b8u: goto label_2cf8b8;
        case 0x2cf8bcu: goto label_2cf8bc;
        case 0x2cf8c0u: goto label_2cf8c0;
        case 0x2cf8c4u: goto label_2cf8c4;
        case 0x2cf8c8u: goto label_2cf8c8;
        case 0x2cf8ccu: goto label_2cf8cc;
        case 0x2cf8d0u: goto label_2cf8d0;
        case 0x2cf8d4u: goto label_2cf8d4;
        case 0x2cf8d8u: goto label_2cf8d8;
        case 0x2cf8dcu: goto label_2cf8dc;
        case 0x2cf8e0u: goto label_2cf8e0;
        case 0x2cf8e4u: goto label_2cf8e4;
        case 0x2cf8e8u: goto label_2cf8e8;
        case 0x2cf8ecu: goto label_2cf8ec;
        case 0x2cf8f0u: goto label_2cf8f0;
        case 0x2cf8f4u: goto label_2cf8f4;
        default: break;
    }

    ctx->pc = 0x2cf690u;

label_2cf690:
    // 0x2cf690: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cf690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2cf694:
    // 0x2cf694: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2cf694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2cf698:
    // 0x2cf698: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2cf698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2cf69c:
    // 0x2cf69c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cf69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf6a0:
    // 0x2cf6a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2cf6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2cf6a4:
    // 0x2cf6a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cf6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2cf6a8:
    // 0x2cf6a8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2cf6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2cf6ac:
    // 0x2cf6ac: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2cf6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_2cf6b0:
    // 0x2cf6b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cf6b4:
    // 0x2cf6b4: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2cf6b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2cf6b8:
    // 0x2cf6b8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2cf6b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2cf6bc:
    // 0x2cf6bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cf6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cf6c0:
    // 0x2cf6c0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2cf6c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cf6c4:
    // 0x2cf6c4: 0xc08a1a8  jal         func_2286A0
label_2cf6c8:
    if (ctx->pc == 0x2CF6C8u) {
        ctx->pc = 0x2CF6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6C4u;
        // 0x2cf6c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF6CCu;
        goto label_2cf6cc;
    }
    ctx->pc = 0x2CF6C4u;
    SET_GPR_U32(ctx, 31, 0x2CF6CCu);
    ctx->pc = 0x2CF6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF6C4u;
    // 0x2cf6c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2286A0u, 0x2CF6C4u, 0x2CF6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6CCu;
label_2cf6cc:
    // 0x2cf6cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cf6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf6d0:
    // 0x2cf6d0: 0x1044007e  beq         $v0, $a0, . + 4 + (0x7E << 2)
label_2cf6d4:
    if (ctx->pc == 0x2CF6D4u) {
        ctx->pc = 0x2CF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6D0u;
        // 0x2cf6d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF6D8u;
        goto label_2cf6d8;
    }
    ctx->pc = 0x2CF6D0u;
    {
        const bool branch_taken_0x2cf6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6D0u;
        // 0x2cf6d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf6d0) {
            ctx->pc = 0x2CF8CCu;
            goto label_2cf8cc;
        }
    }
    ctx->pc = 0x2CF6D8u;
label_2cf6d8:
    // 0x2cf6d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2cf6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cf6dc:
    // 0x2cf6dc: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2cf6dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2cf6e0:
    // 0x2cf6e0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2cf6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2cf6e4:
    // 0x2cf6e4: 0x10440078  beq         $v0, $a0, . + 4 + (0x78 << 2)
label_2cf6e8:
    if (ctx->pc == 0x2CF6E8u) {
        ctx->pc = 0x2CF6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6E4u;
        // 0x2cf6e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF6ECu;
        goto label_2cf6ec;
    }
    ctx->pc = 0x2CF6E4u;
    {
        const bool branch_taken_0x2cf6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CF6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6E4u;
        // 0x2cf6e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf6e4) {
            ctx->pc = 0x2CF8C8u;
            goto label_2cf8c8;
        }
    }
    ctx->pc = 0x2CF6ECu;
label_2cf6ec:
    // 0x2cf6ec: 0xc088fa8  jal         func_223EA0
label_2cf6f0:
    if (ctx->pc == 0x2CF6F0u) {
        ctx->pc = 0x2CF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6ECu;
        // 0x2cf6f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF6F4u;
        goto label_2cf6f4;
    }
    ctx->pc = 0x2CF6ECu;
    SET_GPR_U32(ctx, 31, 0x2CF6F4u);
    ctx->pc = 0x2CF6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF6ECu;
    // 0x2cf6f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2CF6ECu, 0x2CF6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6F4u;
label_2cf6f4:
    // 0x2cf6f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2cf6f8:
    if (ctx->pc == 0x2CF6F8u) {
        ctx->pc = 0x2CF6FCu;
        goto label_2cf6fc;
    }
    ctx->pc = 0x2CF6F4u;
    {
        const bool branch_taken_0x2cf6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf6f4) {
            ctx->pc = 0x2CF70Cu;
            goto label_2cf70c;
        }
    }
    ctx->pc = 0x2CF6FCu;
label_2cf6fc:
    // 0x2cf6fc: 0xc089000  jal         func_224000
label_2cf700:
    if (ctx->pc == 0x2CF700u) {
        ctx->pc = 0x2CF700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6FCu;
        // 0x2cf700: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF704u;
        goto label_2cf704;
    }
    ctx->pc = 0x2CF6FCu;
    SET_GPR_U32(ctx, 31, 0x2CF704u);
    ctx->pc = 0x2CF700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF6FCu;
    // 0x2cf700: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2CF6FCu, 0x2CF704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF704u;
label_2cf704:
    // 0x2cf704: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_2cf708:
    if (ctx->pc == 0x2CF708u) {
        ctx->pc = 0x2CF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF704u;
        // 0x2cf708: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF70Cu;
        goto label_2cf70c;
    }
    ctx->pc = 0x2CF704u;
    {
        const bool branch_taken_0x2cf704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF704u;
        // 0x2cf708: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf704) {
            ctx->pc = 0x2CF8CCu;
            goto label_2cf8cc;
        }
    }
    ctx->pc = 0x2CF70Cu;
label_2cf70c:
    // 0x2cf70c: 0xc0e40a2  jal         func_390288
label_2cf710:
    if (ctx->pc == 0x2CF710u) {
        ctx->pc = 0x2CF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF70Cu;
        // 0x2cf710: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF714u;
        goto label_2cf714;
    }
    ctx->pc = 0x2CF70Cu;
    SET_GPR_U32(ctx, 31, 0x2CF714u);
    ctx->pc = 0x2CF710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF70Cu;
    // 0x2cf710: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2CF70Cu, 0x2CF714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF714u;
label_2cf714:
    // 0x2cf714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf718:
    // 0x2cf718: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2cf71c:
    if (ctx->pc == 0x2CF71Cu) {
        ctx->pc = 0x2CF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF718u;
        // 0x2cf71c: 0x26720090  addiu       $s2, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF720u;
        goto label_2cf720;
    }
    ctx->pc = 0x2CF718u;
    {
        const bool branch_taken_0x2cf718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF718u;
        // 0x2cf71c: 0x26720090  addiu       $s2, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf718) {
            ctx->pc = 0x2CF728u;
            goto label_2cf728;
        }
    }
    ctx->pc = 0x2CF720u;
label_2cf720:
    // 0x2cf720: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2cf724:
    if (ctx->pc == 0x2CF724u) {
        ctx->pc = 0x2CF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF720u;
        // 0x2cf724: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF728u;
        goto label_2cf728;
    }
    ctx->pc = 0x2CF720u;
    {
        const bool branch_taken_0x2cf720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF720u;
        // 0x2cf724: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf720) {
            ctx->pc = 0x2CF8CCu;
            goto label_2cf8cc;
        }
    }
    ctx->pc = 0x2CF728u;
label_2cf728:
    // 0x2cf728: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2cf728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2cf72c:
    // 0x2cf72c: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x2cf72cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2cf730:
    // 0x2cf730: 0x24754b00  addiu       $s5, $v1, 0x4B00
    ctx->pc = 0x2cf730u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2cf734:
    // 0x2cf734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf738:
    // 0x2cf738: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2cf738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2cf73c:
    // 0x2cf73c: 0xc10587a  jal         func_4161E8
label_2cf740:
    if (ctx->pc == 0x2CF740u) {
        ctx->pc = 0x2CF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF73Cu;
        // 0x2cf740: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF744u;
        goto label_2cf744;
    }
    ctx->pc = 0x2CF73Cu;
    SET_GPR_U32(ctx, 31, 0x2CF744u);
    ctx->pc = 0x2CF740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF73Cu;
    // 0x2cf740: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2CF73Cu, 0x2CF744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF744u;
label_2cf744:
    // 0x2cf744: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cf744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf748:
    // 0x2cf748: 0xc0cdb38  jal         func_336CE0
label_2cf74c:
    if (ctx->pc == 0x2CF74Cu) {
        ctx->pc = 0x2CF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF748u;
        // 0x2cf74c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF750u;
        goto label_2cf750;
    }
    ctx->pc = 0x2CF748u;
    SET_GPR_U32(ctx, 31, 0x2CF750u);
    ctx->pc = 0x2CF74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF748u;
    // 0x2cf74c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CF748u, 0x2CF750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF750u;
label_2cf750:
    // 0x2cf750: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2cf750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cf754:
    // 0x2cf754: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2cf754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2cf758:
    // 0x2cf758: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cf75c:
    // 0x2cf75c: 0x0  nop
    ctx->pc = 0x2cf75cu;
    // NOP
label_2cf760:
    // 0x2cf760: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_2cf764:
    if (ctx->pc == 0x2CF764u) {
        ctx->pc = 0x2CF764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF760u;
        // 0x2cf764: 0x86440002  lh          $a0, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF768u;
        goto label_2cf768;
    }
    ctx->pc = 0x2CF760u;
    {
        const bool branch_taken_0x2cf760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cf760) {
            ctx->pc = 0x2CF764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF760u;
            // 0x2cf764: 0x86440002  lh          $a0, 0x2($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF7B8u;
            goto label_2cf7b8;
        }
    }
    ctx->pc = 0x2CF768u;
label_2cf768:
    // 0x2cf768: 0xc0a367c  jal         func_28D9F0
label_2cf76c:
    if (ctx->pc == 0x2CF76Cu) {
        ctx->pc = 0x2CF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF768u;
        // 0x2cf76c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF770u;
        goto label_2cf770;
    }
    ctx->pc = 0x2CF768u;
    SET_GPR_U32(ctx, 31, 0x2CF770u);
    ctx->pc = 0x2CF76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF768u;
    // 0x2cf76c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CF768u, 0x2CF770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF770u;
label_2cf770:
    // 0x2cf770: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cf770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf774:
    // 0x2cf774: 0x12400055  beqz        $s2, . + 4 + (0x55 << 2)
label_2cf778:
    if (ctx->pc == 0x2CF778u) {
        ctx->pc = 0x2CF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF774u;
        // 0x2cf778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF77Cu;
        goto label_2cf77c;
    }
    ctx->pc = 0x2CF774u;
    {
        const bool branch_taken_0x2cf774 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF774u;
        // 0x2cf778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf774) {
            ctx->pc = 0x2CF8CCu;
            goto label_2cf8cc;
        }
    }
    ctx->pc = 0x2CF77Cu;
label_2cf77c:
    // 0x2cf77c: 0xc10587a  jal         func_4161E8
label_2cf780:
    if (ctx->pc == 0x2CF780u) {
        ctx->pc = 0x2CF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF77Cu;
        // 0x2cf780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF784u;
        goto label_2cf784;
    }
    ctx->pc = 0x2CF77Cu;
    SET_GPR_U32(ctx, 31, 0x2CF784u);
    ctx->pc = 0x2CF780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF77Cu;
    // 0x2cf780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2CF77Cu, 0x2CF784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF784u;
label_2cf784:
    // 0x2cf784: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2cf784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2cf788:
    // 0x2cf788: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x2cf788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2cf78c:
    // 0x2cf78c: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2cf78cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2cf790:
    // 0x2cf790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cf790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cf794:
    // 0x2cf794: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cf794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cf798:
    // 0x2cf798: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cf798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf79c:
    // 0x2cf79c: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x2cf79cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2cf7a0:
    // 0x2cf7a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cf7a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf7a4:
    // 0x2cf7a4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2cf7a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cf7a8:
    // 0x2cf7a8: 0xc0bee7a  jal         func_2FB9E8
label_2cf7ac:
    if (ctx->pc == 0x2CF7ACu) {
        ctx->pc = 0x2CF7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7A8u;
        // 0x2cf7ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF7B0u;
        goto label_2cf7b0;
    }
    ctx->pc = 0x2CF7A8u;
    SET_GPR_U32(ctx, 31, 0x2CF7B0u);
    ctx->pc = 0x2CF7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7A8u;
    // 0x2cf7ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2CF7A8u, 0x2CF7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7B0u;
label_2cf7b0:
    // 0x2cf7b0: 0x10000046  b           . + 4 + (0x46 << 2)
label_2cf7b4:
    if (ctx->pc == 0x2CF7B4u) {
        ctx->pc = 0x2CF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7B0u;
        // 0x2cf7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF7B8u;
        goto label_2cf7b8;
    }
    ctx->pc = 0x2CF7B0u;
    {
        const bool branch_taken_0x2cf7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7B0u;
        // 0x2cf7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf7b0) {
            ctx->pc = 0x2CF8CCu;
            goto label_2cf8cc;
        }
    }
    ctx->pc = 0x2CF7B8u;
label_2cf7b8:
    // 0x2cf7b8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2cf7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2cf7bc:
    // 0x2cf7bc: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2cf7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_2cf7c0:
    // 0x2cf7c0: 0xc0cd7d2  jal         func_335F48
label_2cf7c4:
    if (ctx->pc == 0x2CF7C4u) {
        ctx->pc = 0x2CF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7C0u;
        // 0x2cf7c4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF7C8u;
        goto label_2cf7c8;
    }
    ctx->pc = 0x2CF7C0u;
    SET_GPR_U32(ctx, 31, 0x2CF7C8u);
    ctx->pc = 0x2CF7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7C0u;
    // 0x2cf7c4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2CF7C0u, 0x2CF7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7C8u;
label_2cf7c8:
    // 0x2cf7c8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2cf7c8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2cf7cc:
    // 0x2cf7cc: 0xc10587a  jal         func_4161E8
label_2cf7d0:
    if (ctx->pc == 0x2CF7D0u) {
        ctx->pc = 0x2CF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7CCu;
        // 0x2cf7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF7D4u;
        goto label_2cf7d4;
    }
    ctx->pc = 0x2CF7CCu;
    SET_GPR_U32(ctx, 31, 0x2CF7D4u);
    ctx->pc = 0x2CF7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7CCu;
    // 0x2cf7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2CF7CCu, 0x2CF7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7D4u;
label_2cf7d4:
    // 0x2cf7d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cf7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cf7d8:
    // 0x2cf7d8: 0xc0cd780  jal         func_335E00
label_2cf7dc:
    if (ctx->pc == 0x2CF7DCu) {
        ctx->pc = 0x2CF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7D8u;
        // 0x2cf7dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF7E0u;
        goto label_2cf7e0;
    }
    ctx->pc = 0x2CF7D8u;
    SET_GPR_U32(ctx, 31, 0x2CF7E0u);
    ctx->pc = 0x2CF7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7D8u;
    // 0x2cf7dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2CF7D8u, 0x2CF7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7E0u;
label_2cf7e0:
    // 0x2cf7e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2cf7e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2cf7e4:
    // 0x2cf7e4: 0xc0cd742  jal         func_335D08
label_2cf7e8:
    if (ctx->pc == 0x2CF7E8u) {
        ctx->pc = 0x2CF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7E4u;
        // 0x2cf7e8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF7ECu;
        goto label_2cf7ec;
    }
    ctx->pc = 0x2CF7E4u;
    SET_GPR_U32(ctx, 31, 0x2CF7ECu);
    ctx->pc = 0x2CF7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7E4u;
    // 0x2cf7e8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2CF7E4u, 0x2CF7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7ECu;
label_2cf7ec:
    // 0x2cf7ec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2cf7ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2cf7f0:
    // 0x2cf7f0: 0xc0cdd2e  jal         func_3374B8
label_2cf7f4:
    if (ctx->pc == 0x2CF7F4u) {
        ctx->pc = 0x2CF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7F0u;
        // 0x2cf7f4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF7F8u;
        goto label_2cf7f8;
    }
    ctx->pc = 0x2CF7F0u;
    SET_GPR_U32(ctx, 31, 0x2CF7F8u);
    ctx->pc = 0x2CF7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7F0u;
    // 0x2cf7f4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2CF7F0u, 0x2CF7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7F8u;
label_2cf7f8:
    // 0x2cf7f8: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2cf7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2cf7fc:
    // 0x2cf7fc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2cf7fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2cf800:
    // 0x2cf800: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cf800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cf804:
    // 0x2cf804: 0x0  nop
    ctx->pc = 0x2cf804u;
    // NOP
label_2cf808:
    // 0x2cf808: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cf80c:
    // 0x2cf80c: 0x0  nop
    ctx->pc = 0x2cf80cu;
    // NOP
label_2cf810:
    // 0x2cf810: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_2cf814:
    if (ctx->pc == 0x2CF814u) {
        ctx->pc = 0x2CF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF810u;
        // 0x2cf814: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF818u;
        goto label_2cf818;
    }
    ctx->pc = 0x2CF810u;
    {
        const bool branch_taken_0x2cf810 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF810u;
        // 0x2cf814: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf810) {
            ctx->pc = 0x2CF860u;
            goto label_2cf860;
        }
    }
    ctx->pc = 0x2CF818u;
label_2cf818:
    // 0x2cf818: 0xc0a367c  jal         func_28D9F0
label_2cf81c:
    if (ctx->pc == 0x2CF81Cu) {
        ctx->pc = 0x2CF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF818u;
        // 0x2cf81c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF820u;
        goto label_2cf820;
    }
    ctx->pc = 0x2CF818u;
    SET_GPR_U32(ctx, 31, 0x2CF820u);
    ctx->pc = 0x2CF81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF818u;
    // 0x2cf81c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CF818u, 0x2CF820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF820u;
label_2cf820:
    // 0x2cf820: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cf820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf824:
    // 0x2cf824: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
label_2cf828:
    if (ctx->pc == 0x2CF828u) {
        ctx->pc = 0x2CF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF824u;
        // 0x2cf828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF82Cu;
        goto label_2cf82c;
    }
    ctx->pc = 0x2CF824u;
    {
        const bool branch_taken_0x2cf824 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF824u;
        // 0x2cf828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf824) {
            ctx->pc = 0x2CF8CCu;
            goto label_2cf8cc;
        }
    }
    ctx->pc = 0x2CF82Cu;
label_2cf82c:
    // 0x2cf82c: 0xc10587a  jal         func_4161E8
label_2cf830:
    if (ctx->pc == 0x2CF830u) {
        ctx->pc = 0x2CF830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF82Cu;
        // 0x2cf830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF834u;
        goto label_2cf834;
    }
    ctx->pc = 0x2CF82Cu;
    SET_GPR_U32(ctx, 31, 0x2CF834u);
    ctx->pc = 0x2CF830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF82Cu;
    // 0x2cf830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2CF82Cu, 0x2CF834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF834u;
label_2cf834:
    // 0x2cf834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf838:
    // 0x2cf838: 0xc0884f6  jal         func_2213D8
label_2cf83c:
    if (ctx->pc == 0x2CF83Cu) {
        ctx->pc = 0x2CF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF838u;
        // 0x2cf83c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF840u;
        goto label_2cf840;
    }
    ctx->pc = 0x2CF838u;
    SET_GPR_U32(ctx, 31, 0x2CF840u);
    ctx->pc = 0x2CF83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF838u;
    // 0x2cf83c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2CF838u, 0x2CF840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF840u;
label_2cf840:
    // 0x2cf840: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cf840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cf844:
    // 0x2cf844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cf844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cf848:
    // 0x2cf848: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cf848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf84c:
    // 0x2cf84c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2cf84cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2cf850:
    // 0x2cf850: 0xc0bf800  jal         func_2FE000
label_2cf854:
    if (ctx->pc == 0x2CF854u) {
        ctx->pc = 0x2CF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF850u;
        // 0x2cf854: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF858u;
        goto label_2cf858;
    }
    ctx->pc = 0x2CF850u;
    SET_GPR_U32(ctx, 31, 0x2CF858u);
    ctx->pc = 0x2CF854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF850u;
    // 0x2cf854: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CF850u, 0x2CF858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF858u;
label_2cf858:
    // 0x2cf858: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2cf85c:
    if (ctx->pc == 0x2CF85Cu) {
        ctx->pc = 0x2CF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF858u;
        // 0x2cf85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF860u;
        goto label_2cf860;
    }
    ctx->pc = 0x2CF858u;
    {
        const bool branch_taken_0x2cf858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF858u;
        // 0x2cf85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf858) {
            ctx->pc = 0x2CF8CCu;
            goto label_2cf8cc;
        }
    }
    ctx->pc = 0x2CF860u;
label_2cf860:
    // 0x2cf860: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x2cf860u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cf864:
    // 0x2cf864: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2cf868:
    if (ctx->pc == 0x2CF868u) {
        ctx->pc = 0x2CF868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF864u;
        // 0x2cf868: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF86Cu;
        goto label_2cf86c;
    }
    ctx->pc = 0x2CF864u;
    {
        const bool branch_taken_0x2cf864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf864) {
            ctx->pc = 0x2CF868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF864u;
            // 0x2cf868: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF86Cu;
            goto label_2cf86c;
        }
    }
    ctx->pc = 0x2CF86Cu;
label_2cf86c:
    // 0x2cf86c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2cf86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2cf870:
    // 0x2cf870: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2cf870u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2cf874:
    // 0x2cf874: 0x2010  mfhi        $a0
    ctx->pc = 0x2cf874u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2cf878:
    // 0x2cf878: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2cf87c:
    if (ctx->pc == 0x2CF87Cu) {
        ctx->pc = 0x2CF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF878u;
        // 0x2cf87c: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF880u;
        goto label_2cf880;
    }
    ctx->pc = 0x2CF878u;
    {
        const bool branch_taken_0x2cf878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF878u;
        // 0x2cf87c: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf878) {
            ctx->pc = 0x2CF88Cu;
            goto label_2cf88c;
        }
    }
    ctx->pc = 0x2CF880u;
label_2cf880:
    // 0x2cf880: 0x8e6300cc  lw          $v1, 0xCC($s3)
    ctx->pc = 0x2cf880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2cf884:
    // 0x2cf884: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_2cf888:
    if (ctx->pc == 0x2CF888u) {
        ctx->pc = 0x2CF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF884u;
        // 0x2cf888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF88Cu;
        goto label_2cf88c;
    }
    ctx->pc = 0x2CF884u;
    {
        const bool branch_taken_0x2cf884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF884u;
        // 0x2cf888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf884) {
            ctx->pc = 0x2CF8CCu;
            goto label_2cf8cc;
        }
    }
    ctx->pc = 0x2CF88Cu;
label_2cf88c:
    // 0x2cf88c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cf88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cf890:
    // 0x2cf890: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cf890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cf894:
    // 0x2cf894: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cf894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cf898:
    // 0x2cf898: 0x40f809  jalr        $v0
label_2cf89c:
    if (ctx->pc == 0x2CF89Cu) {
        ctx->pc = 0x2CF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF898u;
        // 0x2cf89c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF8A0u;
        goto label_2cf8a0;
    }
    ctx->pc = 0x2CF898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CF8A0u);
        ctx->pc = 0x2CF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF898u;
        // 0x2cf89c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF898u, 0x2CF8A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CF8A0u;
label_2cf8a0:
    // 0x2cf8a0: 0xae420128  sw          $v0, 0x128($s2)
    ctx->pc = 0x2cf8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 2));
label_2cf8a4:
    // 0x2cf8a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cf8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cf8a8:
    // 0x2cf8a8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2cf8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2cf8ac:
    // 0x2cf8ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cf8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cf8b0:
    // 0x2cf8b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cf8b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf8b4:
    // 0x2cf8b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2cf8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cf8b8:
    // 0x2cf8b8: 0xc0a3892  jal         func_28E248
label_2cf8bc:
    if (ctx->pc == 0x2CF8BCu) {
        ctx->pc = 0x2CF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF8B8u;
        // 0x2cf8bc: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF8C0u;
        goto label_2cf8c0;
    }
    ctx->pc = 0x2CF8B8u;
    SET_GPR_U32(ctx, 31, 0x2CF8C0u);
    ctx->pc = 0x2CF8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF8B8u;
    // 0x2cf8bc: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2CF8B8u, 0x2CF8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF8C0u;
label_2cf8c0:
    // 0x2cf8c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf8c4:
    // 0x2cf8c4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2cf8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2cf8c8:
    // 0x2cf8c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cf8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf8cc:
    // 0x2cf8cc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2cf8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cf8d0:
    // 0x2cf8d0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2cf8d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cf8d4:
    // 0x2cf8d4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2cf8d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cf8d8:
    // 0x2cf8d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cf8d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cf8dc:
    // 0x2cf8dc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2cf8dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cf8e0:
    // 0x2cf8e0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2cf8e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf8e4:
    // 0x2cf8e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf8e8:
    // 0x2cf8e8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2cf8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2cf8ec:
    // 0x2cf8ec: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2cf8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cf8f0:
    // 0x2cf8f0: 0x3e00008  jr          $ra
label_2cf8f4:
    if (ctx->pc == 0x2CF8F4u) {
        ctx->pc = 0x2CF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF8F0u;
        // 0x2cf8f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF8F8u;
        goto label_fallthrough_0x2cf8f0;
    }
    ctx->pc = 0x2CF8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF8F0u;
        // 0x2cf8f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cf8f0:
    ctx->pc = 0x2CF8F8u;
}
