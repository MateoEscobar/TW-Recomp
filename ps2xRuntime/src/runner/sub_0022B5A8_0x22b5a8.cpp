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

// Function: sub_0022B5A8
// Address: 0x22b5a8 - 0x22b760
void sub_0022B5A8_0x22b5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B5A8_0x22b5a8");
#endif

    switch (ctx->pc) {
        case 0x22b5a8u: goto label_22b5a8;
        case 0x22b5acu: goto label_22b5ac;
        case 0x22b5b0u: goto label_22b5b0;
        case 0x22b5b4u: goto label_22b5b4;
        case 0x22b5b8u: goto label_22b5b8;
        case 0x22b5bcu: goto label_22b5bc;
        case 0x22b5c0u: goto label_22b5c0;
        case 0x22b5c4u: goto label_22b5c4;
        case 0x22b5c8u: goto label_22b5c8;
        case 0x22b5ccu: goto label_22b5cc;
        case 0x22b5d0u: goto label_22b5d0;
        case 0x22b5d4u: goto label_22b5d4;
        case 0x22b5d8u: goto label_22b5d8;
        case 0x22b5dcu: goto label_22b5dc;
        case 0x22b5e0u: goto label_22b5e0;
        case 0x22b5e4u: goto label_22b5e4;
        case 0x22b5e8u: goto label_22b5e8;
        case 0x22b5ecu: goto label_22b5ec;
        case 0x22b5f0u: goto label_22b5f0;
        case 0x22b5f4u: goto label_22b5f4;
        case 0x22b5f8u: goto label_22b5f8;
        case 0x22b5fcu: goto label_22b5fc;
        case 0x22b600u: goto label_22b600;
        case 0x22b604u: goto label_22b604;
        case 0x22b608u: goto label_22b608;
        case 0x22b60cu: goto label_22b60c;
        case 0x22b610u: goto label_22b610;
        case 0x22b614u: goto label_22b614;
        case 0x22b618u: goto label_22b618;
        case 0x22b61cu: goto label_22b61c;
        case 0x22b620u: goto label_22b620;
        case 0x22b624u: goto label_22b624;
        case 0x22b628u: goto label_22b628;
        case 0x22b62cu: goto label_22b62c;
        case 0x22b630u: goto label_22b630;
        case 0x22b634u: goto label_22b634;
        case 0x22b638u: goto label_22b638;
        case 0x22b63cu: goto label_22b63c;
        case 0x22b640u: goto label_22b640;
        case 0x22b644u: goto label_22b644;
        case 0x22b648u: goto label_22b648;
        case 0x22b64cu: goto label_22b64c;
        case 0x22b650u: goto label_22b650;
        case 0x22b654u: goto label_22b654;
        case 0x22b658u: goto label_22b658;
        case 0x22b65cu: goto label_22b65c;
        case 0x22b660u: goto label_22b660;
        case 0x22b664u: goto label_22b664;
        case 0x22b668u: goto label_22b668;
        case 0x22b66cu: goto label_22b66c;
        case 0x22b670u: goto label_22b670;
        case 0x22b674u: goto label_22b674;
        case 0x22b678u: goto label_22b678;
        case 0x22b67cu: goto label_22b67c;
        case 0x22b680u: goto label_22b680;
        case 0x22b684u: goto label_22b684;
        case 0x22b688u: goto label_22b688;
        case 0x22b68cu: goto label_22b68c;
        case 0x22b690u: goto label_22b690;
        case 0x22b694u: goto label_22b694;
        case 0x22b698u: goto label_22b698;
        case 0x22b69cu: goto label_22b69c;
        case 0x22b6a0u: goto label_22b6a0;
        case 0x22b6a4u: goto label_22b6a4;
        case 0x22b6a8u: goto label_22b6a8;
        case 0x22b6acu: goto label_22b6ac;
        case 0x22b6b0u: goto label_22b6b0;
        case 0x22b6b4u: goto label_22b6b4;
        case 0x22b6b8u: goto label_22b6b8;
        case 0x22b6bcu: goto label_22b6bc;
        case 0x22b6c0u: goto label_22b6c0;
        case 0x22b6c4u: goto label_22b6c4;
        case 0x22b6c8u: goto label_22b6c8;
        case 0x22b6ccu: goto label_22b6cc;
        case 0x22b6d0u: goto label_22b6d0;
        case 0x22b6d4u: goto label_22b6d4;
        case 0x22b6d8u: goto label_22b6d8;
        case 0x22b6dcu: goto label_22b6dc;
        case 0x22b6e0u: goto label_22b6e0;
        case 0x22b6e4u: goto label_22b6e4;
        case 0x22b6e8u: goto label_22b6e8;
        case 0x22b6ecu: goto label_22b6ec;
        case 0x22b6f0u: goto label_22b6f0;
        case 0x22b6f4u: goto label_22b6f4;
        case 0x22b6f8u: goto label_22b6f8;
        case 0x22b6fcu: goto label_22b6fc;
        case 0x22b700u: goto label_22b700;
        case 0x22b704u: goto label_22b704;
        case 0x22b708u: goto label_22b708;
        case 0x22b70cu: goto label_22b70c;
        case 0x22b710u: goto label_22b710;
        case 0x22b714u: goto label_22b714;
        case 0x22b718u: goto label_22b718;
        case 0x22b71cu: goto label_22b71c;
        case 0x22b720u: goto label_22b720;
        case 0x22b724u: goto label_22b724;
        case 0x22b728u: goto label_22b728;
        case 0x22b72cu: goto label_22b72c;
        case 0x22b730u: goto label_22b730;
        case 0x22b734u: goto label_22b734;
        case 0x22b738u: goto label_22b738;
        case 0x22b73cu: goto label_22b73c;
        case 0x22b740u: goto label_22b740;
        case 0x22b744u: goto label_22b744;
        case 0x22b748u: goto label_22b748;
        case 0x22b74cu: goto label_22b74c;
        case 0x22b750u: goto label_22b750;
        case 0x22b754u: goto label_22b754;
        case 0x22b758u: goto label_22b758;
        case 0x22b75cu: goto label_22b75c;
        default: break;
    }

    ctx->pc = 0x22b5a8u;

label_22b5a8:
    // 0x22b5a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22b5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22b5ac:
    // 0x22b5ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_22b5b0:
    // 0x22b5b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_22b5b4:
    // 0x22b5b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b5b8:
    // 0x22b5b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22b5bc:
    // 0x22b5bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22b5bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22b5c0:
    // 0x22b5c0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22b5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_22b5c4:
    // 0x22b5c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22b5c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22b5c8:
    // 0x22b5c8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_22b5cc:
    if (ctx->pc == 0x22B5CCu) {
        ctx->pc = 0x22B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5C8u;
        // 0x22b5cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B5D0u;
        goto label_22b5d0;
    }
    ctx->pc = 0x22B5C8u;
    {
        const bool branch_taken_0x22b5c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5C8u;
        // 0x22b5cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b5c8) {
            ctx->pc = 0x22B5E4u;
            goto label_22b5e4;
        }
    }
    ctx->pc = 0x22B5D0u;
label_22b5d0:
    // 0x22b5d0: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_22b5d4:
    if (ctx->pc == 0x22B5D4u) {
        ctx->pc = 0x22B5D8u;
        goto label_22b5d8;
    }
    ctx->pc = 0x22B5D0u;
    {
        const bool branch_taken_0x22b5d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b5d0) {
            ctx->pc = 0x22B5E4u;
            goto label_22b5e4;
        }
    }
    ctx->pc = 0x22B5D8u;
label_22b5d8:
    // 0x22b5d8: 0xc089a76  jal         func_2269D8
label_22b5dc:
    if (ctx->pc == 0x22B5DCu) {
        ctx->pc = 0x22B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5D8u;
        // 0x22b5dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B5E0u;
        goto label_22b5e0;
    }
    ctx->pc = 0x22B5D8u;
    SET_GPR_U32(ctx, 31, 0x22B5E0u);
    ctx->pc = 0x22B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B5D8u;
    // 0x22b5dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x22B5D8u, 0x22B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5E0u;
label_22b5e0:
    // 0x22b5e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b5e4:
    // 0x22b5e4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_22b5e8:
    if (ctx->pc == 0x22B5E8u) {
        ctx->pc = 0x22B5ECu;
        goto label_22b5ec;
    }
    ctx->pc = 0x22B5E4u;
    {
        const bool branch_taken_0x22b5e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b5e4) {
            ctx->pc = 0x22B600u;
            goto label_22b600;
        }
    }
    ctx->pc = 0x22B5ECu;
label_22b5ec:
    // 0x22b5ec: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_22b5f0:
    if (ctx->pc == 0x22B5F0u) {
        ctx->pc = 0x22B5F4u;
        goto label_22b5f4;
    }
    ctx->pc = 0x22B5ECu;
    {
        const bool branch_taken_0x22b5ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b5ec) {
            ctx->pc = 0x22B608u;
            goto label_22b608;
        }
    }
    ctx->pc = 0x22B5F4u;
label_22b5f4:
    // 0x22b5f4: 0xc0e409a  jal         func_390268
label_22b5f8:
    if (ctx->pc == 0x22B5F8u) {
        ctx->pc = 0x22B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5F4u;
        // 0x22b5f8: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B5FCu;
        goto label_22b5fc;
    }
    ctx->pc = 0x22B5F4u;
    SET_GPR_U32(ctx, 31, 0x22B5FCu);
    ctx->pc = 0x22B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B5F4u;
    // 0x22b5f8: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22B5F4u, 0x22B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5FCu;
label_22b5fc:
    // 0x22b5fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b5fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b600:
    // 0x22b600: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_22b604:
    if (ctx->pc == 0x22B604u) {
        ctx->pc = 0x22B608u;
        goto label_22b608;
    }
    ctx->pc = 0x22B600u;
    {
        const bool branch_taken_0x22b600 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b600) {
            ctx->pc = 0x22B638u;
            goto label_22b638;
        }
    }
    ctx->pc = 0x22B608u;
label_22b608:
    // 0x22b608: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_22b60c:
    if (ctx->pc == 0x22B60Cu) {
        ctx->pc = 0x22B610u;
        goto label_22b610;
    }
    ctx->pc = 0x22B608u;
    {
        const bool branch_taken_0x22b608 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b608) {
            ctx->pc = 0x22B61Cu;
            goto label_22b61c;
        }
    }
    ctx->pc = 0x22B610u;
label_22b610:
    // 0x22b610: 0xc089a76  jal         func_2269D8
label_22b614:
    if (ctx->pc == 0x22B614u) {
        ctx->pc = 0x22B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B610u;
        // 0x22b614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B618u;
        goto label_22b618;
    }
    ctx->pc = 0x22B610u;
    SET_GPR_U32(ctx, 31, 0x22B618u);
    ctx->pc = 0x22B614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B610u;
    // 0x22b614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x22B610u, 0x22B618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B618u;
label_22b618:
    // 0x22b618: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22b618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b61c:
    // 0x22b61c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_22b620:
    if (ctx->pc == 0x22B620u) {
        ctx->pc = 0x22B624u;
        goto label_22b624;
    }
    ctx->pc = 0x22B61Cu;
    {
        const bool branch_taken_0x22b61c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b61c) {
            ctx->pc = 0x22B638u;
            goto label_22b638;
        }
    }
    ctx->pc = 0x22B624u;
label_22b624:
    // 0x22b624: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_22b628:
    if (ctx->pc == 0x22B628u) {
        ctx->pc = 0x22B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B624u;
        // 0x22b628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B62Cu;
        goto label_22b62c;
    }
    ctx->pc = 0x22B624u;
    {
        const bool branch_taken_0x22b624 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B624u;
        // 0x22b628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b624) {
            ctx->pc = 0x22B640u;
            goto label_22b640;
        }
    }
    ctx->pc = 0x22B62Cu;
label_22b62c:
    // 0x22b62c: 0xc0e409a  jal         func_390268
label_22b630:
    if (ctx->pc == 0x22B630u) {
        ctx->pc = 0x22B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B62Cu;
        // 0x22b630: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B634u;
        goto label_22b634;
    }
    ctx->pc = 0x22B62Cu;
    SET_GPR_U32(ctx, 31, 0x22B634u);
    ctx->pc = 0x22B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B62Cu;
    // 0x22b630: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22B62Cu, 0x22B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B634u;
label_22b634:
    // 0x22b634: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b638:
    // 0x22b638: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
label_22b63c:
    if (ctx->pc == 0x22B63Cu) {
        ctx->pc = 0x22B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B638u;
        // 0x22b63c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B640u;
        goto label_22b640;
    }
    ctx->pc = 0x22B638u;
    {
        const bool branch_taken_0x22b638 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B638u;
        // 0x22b63c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b638) {
            ctx->pc = 0x22B744u;
            goto label_22b744;
        }
    }
    ctx->pc = 0x22B640u;
label_22b640:
    // 0x22b640: 0xc08997c  jal         func_2265F0
label_22b644:
    if (ctx->pc == 0x22B644u) {
        ctx->pc = 0x22B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B640u;
        // 0x22b644: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B648u;
        goto label_22b648;
    }
    ctx->pc = 0x22B640u;
    SET_GPR_U32(ctx, 31, 0x22B648u);
    ctx->pc = 0x22B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B640u;
    // 0x22b644: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22B640u, 0x22B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B648u;
label_22b648:
    // 0x22b648: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_22b64c:
    if (ctx->pc == 0x22B64Cu) {
        ctx->pc = 0x22B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B648u;
        // 0x22b64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B650u;
        goto label_22b650;
    }
    ctx->pc = 0x22B648u;
    {
        const bool branch_taken_0x22b648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B648u;
        // 0x22b64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b648) {
            ctx->pc = 0x22B744u;
            goto label_22b744;
        }
    }
    ctx->pc = 0x22B650u;
label_22b650:
    // 0x22b650: 0xc089988  jal         func_226620
label_22b654:
    if (ctx->pc == 0x22B654u) {
        ctx->pc = 0x22B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B650u;
        // 0x22b654: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B658u;
        goto label_22b658;
    }
    ctx->pc = 0x22B650u;
    SET_GPR_U32(ctx, 31, 0x22B658u);
    ctx->pc = 0x22B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B650u;
    // 0x22b654: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22B650u, 0x22B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B658u;
label_22b658:
    // 0x22b658: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22b658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22b65c:
    // 0x22b65c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22b660:
    // 0x22b660: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22b660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22b664:
    // 0x22b664: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22b664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22b668:
    // 0x22b668: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22b668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b66c:
    // 0x22b66c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b670:
    // 0x22b670: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22b670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22b674:
    // 0x22b674: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x22b674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_22b678:
    // 0x22b678: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22b678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22b67c:
    // 0x22b67c: 0x8c4600e4  lw          $a2, 0xE4($v0)
    ctx->pc = 0x22b67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22b680:
    // 0x22b680: 0xc0f809  jalr        $a2
label_22b684:
    if (ctx->pc == 0x22B684u) {
        ctx->pc = 0x22B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B680u;
        // 0x22b684: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B688u;
        goto label_22b688;
    }
    ctx->pc = 0x22B680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x22B688u);
        ctx->pc = 0x22B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B680u;
        // 0x22b684: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B680u, 0x22B688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B688u;
label_22b688:
    // 0x22b688: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22b688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b68c:
    // 0x22b68c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b68cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b690:
    // 0x22b690: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b694:
    // 0x22b694: 0x40f809  jalr        $v0
label_22b698:
    if (ctx->pc == 0x22B698u) {
        ctx->pc = 0x22B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B694u;
        // 0x22b698: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B69Cu;
        goto label_22b69c;
    }
    ctx->pc = 0x22B694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B69Cu);
        ctx->pc = 0x22B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B694u;
        // 0x22b698: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B694u, 0x22B69Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B69Cu;
label_22b69c:
    // 0x22b69c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_22b6a0:
    if (ctx->pc == 0x22B6A0u) {
        ctx->pc = 0x22B6A4u;
        goto label_22b6a4;
    }
    ctx->pc = 0x22B69Cu;
    {
        const bool branch_taken_0x22b69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b69c) {
            ctx->pc = 0x22B6E0u;
            goto label_22b6e0;
        }
    }
    ctx->pc = 0x22B6A4u;
label_22b6a4:
    // 0x22b6a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b6a8:
    // 0x22b6a8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b6a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b6ac:
    // 0x22b6ac: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b6b0:
    // 0x22b6b0: 0x40f809  jalr        $v0
label_22b6b4:
    if (ctx->pc == 0x22B6B4u) {
        ctx->pc = 0x22B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6B0u;
        // 0x22b6b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6B8u;
        goto label_22b6b8;
    }
    ctx->pc = 0x22B6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B6B8u);
        ctx->pc = 0x22B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6B0u;
        // 0x22b6b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B6B0u, 0x22B6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B6B8u;
label_22b6b8:
    // 0x22b6b8: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22b6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22b6bc:
    // 0x22b6bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b6c0:
    // 0x22b6c0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b6c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b6c4:
    // 0x22b6c4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b6c8:
    // 0x22b6c8: 0x40f809  jalr        $v0
label_22b6cc:
    if (ctx->pc == 0x22B6CCu) {
        ctx->pc = 0x22B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6C8u;
        // 0x22b6cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6D0u;
        goto label_22b6d0;
    }
    ctx->pc = 0x22B6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B6D0u);
        ctx->pc = 0x22B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6C8u;
        // 0x22b6cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B6C8u, 0x22B6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B6D0u;
label_22b6d0:
    // 0x22b6d0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22b6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22b6d4:
    // 0x22b6d4: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x22b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_22b6d8:
    // 0x22b6d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22b6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22b6dc:
    // 0x22b6dc: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22b6e0:
    // 0x22b6e0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_22b6e4:
    if (ctx->pc == 0x22B6E4u) {
        ctx->pc = 0x22B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6E0u;
        // 0x22b6e4: 0x8e62bd30  lw          $v0, -0x42D0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6E8u;
        goto label_22b6e8;
    }
    ctx->pc = 0x22B6E0u;
    {
        const bool branch_taken_0x22b6e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6E0u;
        // 0x22b6e4: 0x8e62bd30  lw          $v0, -0x42D0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6e0) {
            ctx->pc = 0x22B714u;
            goto label_22b714;
        }
    }
    ctx->pc = 0x22B6E8u;
label_22b6e8:
    // 0x22b6e8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_22b6ec:
    if (ctx->pc == 0x22B6ECu) {
        ctx->pc = 0x22B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6E8u;
        // 0x22b6ec: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6F0u;
        goto label_22b6f0;
    }
    ctx->pc = 0x22B6E8u;
    {
        const bool branch_taken_0x22b6e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6E8u;
        // 0x22b6ec: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6e8) {
            ctx->pc = 0x22B70Cu;
            goto label_22b70c;
        }
    }
    ctx->pc = 0x22B6F0u;
label_22b6f0:
    // 0x22b6f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22b6f4:
    // 0x22b6f4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22b6f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22b6f8:
    // 0x22b6f8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22b6fc:
    // 0x22b6fc: 0x40f809  jalr        $v0
label_22b700:
    if (ctx->pc == 0x22B700u) {
        ctx->pc = 0x22B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6FCu;
        // 0x22b700: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B704u;
        goto label_22b704;
    }
    ctx->pc = 0x22B6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B704u);
        ctx->pc = 0x22B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6FCu;
        // 0x22b700: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B6FCu, 0x22B704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B704u;
label_22b704:
    // 0x22b704: 0x10000003  b           . + 4 + (0x3 << 2)
label_22b708:
    if (ctx->pc == 0x22B708u) {
        ctx->pc = 0x22B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B704u;
        // 0x22b708: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B70Cu;
        goto label_22b70c;
    }
    ctx->pc = 0x22B704u;
    {
        const bool branch_taken_0x22b704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B704u;
        // 0x22b708: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b704) {
            ctx->pc = 0x22B714u;
            goto label_22b714;
        }
    }
    ctx->pc = 0x22B70Cu;
label_22b70c:
    // 0x22b70c: 0x8e62bd30  lw          $v0, -0x42D0($s3)
    ctx->pc = 0x22b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
label_22b710:
    // 0x22b710: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x22b710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_22b714:
    // 0x22b714: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_22b718:
    if (ctx->pc == 0x22B718u) {
        ctx->pc = 0x22B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B714u;
        // 0x22b718: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B71Cu;
        goto label_22b71c;
    }
    ctx->pc = 0x22B714u;
    {
        const bool branch_taken_0x22b714 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B714u;
        // 0x22b718: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b714) {
            ctx->pc = 0x22B748u;
            goto label_22b748;
        }
    }
    ctx->pc = 0x22B71Cu;
label_22b71c:
    // 0x22b71c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_22b720:
    if (ctx->pc == 0x22B720u) {
        ctx->pc = 0x22B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B71Cu;
        // 0x22b720: 0x8e62bd30  lw          $v0, -0x42D0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B724u;
        goto label_22b724;
    }
    ctx->pc = 0x22B71Cu;
    {
        const bool branch_taken_0x22b71c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B71Cu;
        // 0x22b720: 0x8e62bd30  lw          $v0, -0x42D0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b71c) {
            ctx->pc = 0x22B740u;
            goto label_22b740;
        }
    }
    ctx->pc = 0x22B724u;
label_22b724:
    // 0x22b724: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22b724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22b728:
    // 0x22b728: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22b728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22b72c:
    // 0x22b72c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22b730:
    // 0x22b730: 0x40f809  jalr        $v0
label_22b734:
    if (ctx->pc == 0x22B734u) {
        ctx->pc = 0x22B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B730u;
        // 0x22b734: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B738u;
        goto label_22b738;
    }
    ctx->pc = 0x22B730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B738u);
        ctx->pc = 0x22B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B730u;
        // 0x22b734: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B730u, 0x22B738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B738u;
label_22b738:
    // 0x22b738: 0x10000002  b           . + 4 + (0x2 << 2)
label_22b73c:
    if (ctx->pc == 0x22B73Cu) {
        ctx->pc = 0x22B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B738u;
        // 0x22b73c: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B740u;
        goto label_22b740;
    }
    ctx->pc = 0x22B738u;
    {
        const bool branch_taken_0x22b738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B738u;
        // 0x22b73c: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b738) {
            ctx->pc = 0x22B744u;
            goto label_22b744;
        }
    }
    ctx->pc = 0x22B740u;
label_22b740:
    // 0x22b740: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x22b740u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_22b744:
    // 0x22b744: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22b744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22b748:
    // 0x22b748: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22b748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22b74c:
    // 0x22b74c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22b74cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22b750:
    // 0x22b750: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22b750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22b754:
    // 0x22b754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22b758:
    // 0x22b758: 0x3e00008  jr          $ra
label_22b75c:
    if (ctx->pc == 0x22B75Cu) {
        ctx->pc = 0x22B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B758u;
        // 0x22b75c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B760u;
        goto label_fallthrough_0x22b758;
    }
    ctx->pc = 0x22B758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B758u;
        // 0x22b75c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22b758:
    ctx->pc = 0x22B760u;
}
