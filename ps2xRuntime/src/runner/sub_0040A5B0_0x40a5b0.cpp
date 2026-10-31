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

// Function: sub_0040A5B0
// Address: 0x40a5b0 - 0x40a770
void sub_0040A5B0_0x40a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A5B0_0x40a5b0");
#endif

    switch (ctx->pc) {
        case 0x40a5b0u: goto label_40a5b0;
        case 0x40a5b4u: goto label_40a5b4;
        case 0x40a5b8u: goto label_40a5b8;
        case 0x40a5bcu: goto label_40a5bc;
        case 0x40a5c0u: goto label_40a5c0;
        case 0x40a5c4u: goto label_40a5c4;
        case 0x40a5c8u: goto label_40a5c8;
        case 0x40a5ccu: goto label_40a5cc;
        case 0x40a5d0u: goto label_40a5d0;
        case 0x40a5d4u: goto label_40a5d4;
        case 0x40a5d8u: goto label_40a5d8;
        case 0x40a5dcu: goto label_40a5dc;
        case 0x40a5e0u: goto label_40a5e0;
        case 0x40a5e4u: goto label_40a5e4;
        case 0x40a5e8u: goto label_40a5e8;
        case 0x40a5ecu: goto label_40a5ec;
        case 0x40a5f0u: goto label_40a5f0;
        case 0x40a5f4u: goto label_40a5f4;
        case 0x40a5f8u: goto label_40a5f8;
        case 0x40a5fcu: goto label_40a5fc;
        case 0x40a600u: goto label_40a600;
        case 0x40a604u: goto label_40a604;
        case 0x40a608u: goto label_40a608;
        case 0x40a60cu: goto label_40a60c;
        case 0x40a610u: goto label_40a610;
        case 0x40a614u: goto label_40a614;
        case 0x40a618u: goto label_40a618;
        case 0x40a61cu: goto label_40a61c;
        case 0x40a620u: goto label_40a620;
        case 0x40a624u: goto label_40a624;
        case 0x40a628u: goto label_40a628;
        case 0x40a62cu: goto label_40a62c;
        case 0x40a630u: goto label_40a630;
        case 0x40a634u: goto label_40a634;
        case 0x40a638u: goto label_40a638;
        case 0x40a63cu: goto label_40a63c;
        case 0x40a640u: goto label_40a640;
        case 0x40a644u: goto label_40a644;
        case 0x40a648u: goto label_40a648;
        case 0x40a64cu: goto label_40a64c;
        case 0x40a650u: goto label_40a650;
        case 0x40a654u: goto label_40a654;
        case 0x40a658u: goto label_40a658;
        case 0x40a65cu: goto label_40a65c;
        case 0x40a660u: goto label_40a660;
        case 0x40a664u: goto label_40a664;
        case 0x40a668u: goto label_40a668;
        case 0x40a66cu: goto label_40a66c;
        case 0x40a670u: goto label_40a670;
        case 0x40a674u: goto label_40a674;
        case 0x40a678u: goto label_40a678;
        case 0x40a67cu: goto label_40a67c;
        case 0x40a680u: goto label_40a680;
        case 0x40a684u: goto label_40a684;
        case 0x40a688u: goto label_40a688;
        case 0x40a68cu: goto label_40a68c;
        case 0x40a690u: goto label_40a690;
        case 0x40a694u: goto label_40a694;
        case 0x40a698u: goto label_40a698;
        case 0x40a69cu: goto label_40a69c;
        case 0x40a6a0u: goto label_40a6a0;
        case 0x40a6a4u: goto label_40a6a4;
        case 0x40a6a8u: goto label_40a6a8;
        case 0x40a6acu: goto label_40a6ac;
        case 0x40a6b0u: goto label_40a6b0;
        case 0x40a6b4u: goto label_40a6b4;
        case 0x40a6b8u: goto label_40a6b8;
        case 0x40a6bcu: goto label_40a6bc;
        case 0x40a6c0u: goto label_40a6c0;
        case 0x40a6c4u: goto label_40a6c4;
        case 0x40a6c8u: goto label_40a6c8;
        case 0x40a6ccu: goto label_40a6cc;
        case 0x40a6d0u: goto label_40a6d0;
        case 0x40a6d4u: goto label_40a6d4;
        case 0x40a6d8u: goto label_40a6d8;
        case 0x40a6dcu: goto label_40a6dc;
        case 0x40a6e0u: goto label_40a6e0;
        case 0x40a6e4u: goto label_40a6e4;
        case 0x40a6e8u: goto label_40a6e8;
        case 0x40a6ecu: goto label_40a6ec;
        case 0x40a6f0u: goto label_40a6f0;
        case 0x40a6f4u: goto label_40a6f4;
        case 0x40a6f8u: goto label_40a6f8;
        case 0x40a6fcu: goto label_40a6fc;
        case 0x40a700u: goto label_40a700;
        case 0x40a704u: goto label_40a704;
        case 0x40a708u: goto label_40a708;
        case 0x40a70cu: goto label_40a70c;
        case 0x40a710u: goto label_40a710;
        case 0x40a714u: goto label_40a714;
        case 0x40a718u: goto label_40a718;
        case 0x40a71cu: goto label_40a71c;
        case 0x40a720u: goto label_40a720;
        case 0x40a724u: goto label_40a724;
        case 0x40a728u: goto label_40a728;
        case 0x40a72cu: goto label_40a72c;
        case 0x40a730u: goto label_40a730;
        case 0x40a734u: goto label_40a734;
        case 0x40a738u: goto label_40a738;
        case 0x40a73cu: goto label_40a73c;
        case 0x40a740u: goto label_40a740;
        case 0x40a744u: goto label_40a744;
        case 0x40a748u: goto label_40a748;
        case 0x40a74cu: goto label_40a74c;
        case 0x40a750u: goto label_40a750;
        case 0x40a754u: goto label_40a754;
        case 0x40a758u: goto label_40a758;
        case 0x40a75cu: goto label_40a75c;
        case 0x40a760u: goto label_40a760;
        case 0x40a764u: goto label_40a764;
        case 0x40a768u: goto label_40a768;
        case 0x40a76cu: goto label_40a76c;
        default: break;
    }

    ctx->pc = 0x40a5b0u;

label_40a5b0:
    // 0x40a5b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x40a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_40a5b4:
    // 0x40a5b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40a5b8:
    // 0x40a5b8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x40a5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_40a5bc:
    // 0x40a5bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40a5bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40a5c0:
    // 0x40a5c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x40a5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_40a5c4:
    // 0x40a5c4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x40a5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_40a5c8:
    // 0x40a5c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x40a5c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40a5cc:
    // 0x40a5cc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x40a5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_40a5d0:
    // 0x40a5d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x40a5d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_40a5d4:
    // 0x40a5d4: 0x8c4447a0  lw          $a0, 0x47A0($v0)
    ctx->pc = 0x40a5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18336)));
label_40a5d8:
    // 0x40a5d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x40a5d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40a5dc:
    // 0x40a5dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x40a5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_40a5e0:
    // 0x40a5e0: 0x1080005a  beqz        $a0, . + 4 + (0x5A << 2)
label_40a5e4:
    if (ctx->pc == 0x40A5E4u) {
        ctx->pc = 0x40A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A5E0u;
        // 0x40a5e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A5E8u;
        goto label_40a5e8;
    }
    ctx->pc = 0x40A5E0u;
    {
        const bool branch_taken_0x40a5e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A5E0u;
        // 0x40a5e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a5e0) {
            ctx->pc = 0x40A74Cu;
            goto label_40a74c;
        }
    }
    ctx->pc = 0x40A5E8u;
label_40a5e8:
    // 0x40a5e8: 0xc0c8f4e  jal         func_323D38
label_40a5ec:
    if (ctx->pc == 0x40A5ECu) {
        ctx->pc = 0x40A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A5E8u;
        // 0x40a5ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A5F0u;
        goto label_40a5f0;
    }
    ctx->pc = 0x40A5E8u;
    SET_GPR_U32(ctx, 31, 0x40A5F0u);
    ctx->pc = 0x40A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A5E8u;
    // 0x40a5ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323D38u, 0x40A5E8u, 0x40A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A5F0u;
label_40a5f0:
    // 0x40a5f0: 0x8e4447a0  lw          $a0, 0x47A0($s2)
    ctx->pc = 0x40a5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18336)));
label_40a5f4:
    // 0x40a5f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40a5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40a5f8:
    // 0x40a5f8: 0xc0c8e86  jal         func_323A18
label_40a5fc:
    if (ctx->pc == 0x40A5FCu) {
        ctx->pc = 0x40A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A5F8u;
        // 0x40a5fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A600u;
        goto label_40a600;
    }
    ctx->pc = 0x40A5F8u;
    SET_GPR_U32(ctx, 31, 0x40A600u);
    ctx->pc = 0x40A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A5F8u;
    // 0x40a5fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A18u, 0x40A5F8u, 0x40A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A600u;
label_40a600:
    // 0x40a600: 0x8e4447a0  lw          $a0, 0x47A0($s2)
    ctx->pc = 0x40a600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18336)));
label_40a604:
    // 0x40a604: 0xc0c8ed4  jal         func_323B50
label_40a608:
    if (ctx->pc == 0x40A608u) {
        ctx->pc = 0x40A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A604u;
        // 0x40a608: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A60Cu;
        goto label_40a60c;
    }
    ctx->pc = 0x40A604u;
    SET_GPR_U32(ctx, 31, 0x40A60Cu);
    ctx->pc = 0x40A608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A604u;
    // 0x40a608: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x40A604u, 0x40A60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A60Cu;
label_40a60c:
    // 0x40a60c: 0x8e4447a0  lw          $a0, 0x47A0($s2)
    ctx->pc = 0x40a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18336)));
label_40a610:
    // 0x40a610: 0xc0c8d5a  jal         func_323568
label_40a614:
    if (ctx->pc == 0x40A614u) {
        ctx->pc = 0x40A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A610u;
        // 0x40a614: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A618u;
        goto label_40a618;
    }
    ctx->pc = 0x40A610u;
    SET_GPR_U32(ctx, 31, 0x40A618u);
    ctx->pc = 0x40A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A610u;
    // 0x40a614: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323568u, 0x40A610u, 0x40A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A618u;
label_40a618:
    // 0x40a618: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_40a61c:
    if (ctx->pc == 0x40A61Cu) {
        ctx->pc = 0x40A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A618u;
        // 0x40a61c: 0x8e4447a0  lw          $a0, 0x47A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A620u;
        goto label_40a620;
    }
    ctx->pc = 0x40A618u;
    {
        const bool branch_taken_0x40a618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A618u;
        // 0x40a61c: 0x8e4447a0  lw          $a0, 0x47A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a618) {
            ctx->pc = 0x40A740u;
            goto label_40a740;
        }
    }
    ctx->pc = 0x40A620u;
label_40a620:
    // 0x40a620: 0xc0c8da2  jal         func_323688
label_40a624:
    if (ctx->pc == 0x40A624u) {
        ctx->pc = 0x40A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A620u;
        // 0x40a624: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A628u;
        goto label_40a628;
    }
    ctx->pc = 0x40A620u;
    SET_GPR_U32(ctx, 31, 0x40A628u);
    ctx->pc = 0x40A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A620u;
    // 0x40a624: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x40A620u, 0x40A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A628u;
label_40a628:
    // 0x40a628: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40a628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40a62c:
    // 0x40a62c: 0xc10b0b4  jal         func_42C2D0
label_40a630:
    if (ctx->pc == 0x40A630u) {
        ctx->pc = 0x40A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A62Cu;
        // 0x40a630: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A634u;
        goto label_40a634;
    }
    ctx->pc = 0x40A62Cu;
    SET_GPR_U32(ctx, 31, 0x40A634u);
    ctx->pc = 0x40A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A62Cu;
    // 0x40a630: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40A62Cu, 0x40A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A634u;
label_40a634:
    // 0x40a634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40a638:
    // 0x40a638: 0xc10b0a0  jal         func_42C280
label_40a63c:
    if (ctx->pc == 0x40A63Cu) {
        ctx->pc = 0x40A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A638u;
        // 0x40a63c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A640u;
        goto label_40a640;
    }
    ctx->pc = 0x40A638u;
    SET_GPR_U32(ctx, 31, 0x40A640u);
    ctx->pc = 0x40A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A638u;
    // 0x40a63c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x40A638u, 0x40A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A640u;
label_40a640:
    // 0x40a640: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_40a644:
    if (ctx->pc == 0x40A644u) {
        ctx->pc = 0x40A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A640u;
        // 0x40a644: 0x8e4447a0  lw          $a0, 0x47A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A648u;
        goto label_40a648;
    }
    ctx->pc = 0x40A640u;
    {
        const bool branch_taken_0x40a640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A640u;
        // 0x40a644: 0x8e4447a0  lw          $a0, 0x47A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a640) {
            ctx->pc = 0x40A744u;
            goto label_40a744;
        }
    }
    ctx->pc = 0x40A648u;
label_40a648:
    // 0x40a648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40a648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40a64c:
    // 0x40a64c: 0xc0c8e86  jal         func_323A18
label_40a650:
    if (ctx->pc == 0x40A650u) {
        ctx->pc = 0x40A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A64Cu;
        // 0x40a650: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A654u;
        goto label_40a654;
    }
    ctx->pc = 0x40A64Cu;
    SET_GPR_U32(ctx, 31, 0x40A654u);
    ctx->pc = 0x40A650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A64Cu;
    // 0x40a650: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A18u, 0x40A64Cu, 0x40A654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A654u;
label_40a654:
    // 0x40a654: 0xc0c8e22  jal         func_323888
label_40a658:
    if (ctx->pc == 0x40A658u) {
        ctx->pc = 0x40A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A654u;
        // 0x40a658: 0x8e4447a0  lw          $a0, 0x47A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A65Cu;
        goto label_40a65c;
    }
    ctx->pc = 0x40A654u;
    SET_GPR_U32(ctx, 31, 0x40A65Cu);
    ctx->pc = 0x40A658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A654u;
    // 0x40a658: 0x8e4447a0  lw          $a0, 0x47A0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x40A654u, 0x40A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A65Cu;
label_40a65c:
    // 0x40a65c: 0x8e4447a0  lw          $a0, 0x47A0($s2)
    ctx->pc = 0x40a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18336)));
label_40a660:
    // 0x40a660: 0xc0c8faa  jal         func_323EA8
label_40a664:
    if (ctx->pc == 0x40A664u) {
        ctx->pc = 0x40A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A660u;
        // 0x40a664: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A668u;
        goto label_40a668;
    }
    ctx->pc = 0x40A660u;
    SET_GPR_U32(ctx, 31, 0x40A668u);
    ctx->pc = 0x40A664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A660u;
    // 0x40a664: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x40A660u, 0x40A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A668u;
label_40a668:
    // 0x40a668: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40a668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_40a66c:
    // 0x40a66c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40a66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40a670:
    // 0x40a670: 0xc102866  jal         func_40A198
label_40a674:
    if (ctx->pc == 0x40A674u) {
        ctx->pc = 0x40A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A670u;
        // 0x40a674: 0x24a58188  addiu       $a1, $a1, -0x7E78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A678u;
        goto label_40a678;
    }
    ctx->pc = 0x40A670u;
    SET_GPR_U32(ctx, 31, 0x40A678u);
    ctx->pc = 0x40A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A670u;
    // 0x40a674: 0x24a58188  addiu       $a1, $a1, -0x7E78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40A670u, 0x40A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A678u;
label_40a678:
    // 0x40a678: 0xc10b0b4  jal         func_42C2D0
label_40a67c:
    if (ctx->pc == 0x40A67Cu) {
        ctx->pc = 0x40A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A678u;
        // 0x40a67c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A680u;
        goto label_40a680;
    }
    ctx->pc = 0x40A678u;
    SET_GPR_U32(ctx, 31, 0x40A680u);
    ctx->pc = 0x40A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A678u;
    // 0x40a67c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40A678u, 0x40A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A680u;
label_40a680:
    // 0x40a680: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40a680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40a684:
    // 0x40a684: 0xc0c8e38  jal         func_3238E0
label_40a688:
    if (ctx->pc == 0x40A688u) {
        ctx->pc = 0x40A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A684u;
        // 0x40a688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A68Cu;
        goto label_40a68c;
    }
    ctx->pc = 0x40A684u;
    SET_GPR_U32(ctx, 31, 0x40A68Cu);
    ctx->pc = 0x40A688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A684u;
    // 0x40a688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40A684u, 0x40A68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A68Cu;
label_40a68c:
    // 0x40a68c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x40a68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_40a690:
    // 0x40a690: 0xc0c8ef2  jal         func_323BC8
label_40a694:
    if (ctx->pc == 0x40A694u) {
        ctx->pc = 0x40A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A690u;
        // 0x40a694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A698u;
        goto label_40a698;
    }
    ctx->pc = 0x40A690u;
    SET_GPR_U32(ctx, 31, 0x40A698u);
    ctx->pc = 0x40A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A690u;
    // 0x40a694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40A690u, 0x40A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A698u;
label_40a698:
    // 0x40a698: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40a698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_40a69c:
    // 0x40a69c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40a69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40a6a0:
    // 0x40a6a0: 0xc0c8e68  jal         func_3239A0
label_40a6a4:
    if (ctx->pc == 0x40A6A4u) {
        ctx->pc = 0x40A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A6A0u;
        // 0x40a6a4: 0x24a58220  addiu       $a1, $a1, -0x7DE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A6A8u;
        goto label_40a6a8;
    }
    ctx->pc = 0x40A6A0u;
    SET_GPR_U32(ctx, 31, 0x40A6A8u);
    ctx->pc = 0x40A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A6A0u;
    // 0x40a6a4: 0x24a58220  addiu       $a1, $a1, -0x7DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40A6A0u, 0x40A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A6A8u;
label_40a6a8:
    // 0x40a6a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40a6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40a6ac:
    // 0x40a6ac: 0xc0c8ed4  jal         func_323B50
label_40a6b0:
    if (ctx->pc == 0x40A6B0u) {
        ctx->pc = 0x40A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A6ACu;
        // 0x40a6b0: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A6B4u;
        goto label_40a6b4;
    }
    ctx->pc = 0x40A6ACu;
    SET_GPR_U32(ctx, 31, 0x40A6B4u);
    ctx->pc = 0x40A6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A6ACu;
    // 0x40a6b0: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x40A6ACu, 0x40A6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A6B4u;
label_40a6b4:
    // 0x40a6b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40a6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40a6b8:
    // 0x40a6b8: 0xc0c8d46  jal         func_323518
label_40a6bc:
    if (ctx->pc == 0x40A6BCu) {
        ctx->pc = 0x40A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A6B8u;
        // 0x40a6bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A6C0u;
        goto label_40a6c0;
    }
    ctx->pc = 0x40A6B8u;
    SET_GPR_U32(ctx, 31, 0x40A6C0u);
    ctx->pc = 0x40A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A6B8u;
    // 0x40a6bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323518u, 0x40A6B8u, 0x40A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A6C0u;
label_40a6c0:
    // 0x40a6c0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_40a6c4:
    if (ctx->pc == 0x40A6C4u) {
        ctx->pc = 0x40A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A6C0u;
        // 0x40a6c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A6C8u;
        goto label_40a6c8;
    }
    ctx->pc = 0x40A6C0u;
    {
        const bool branch_taken_0x40a6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A6C0u;
        // 0x40a6c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a6c0) {
            ctx->pc = 0x40A70Cu;
            goto label_40a70c;
        }
    }
    ctx->pc = 0x40A6C8u;
label_40a6c8:
    // 0x40a6c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40a6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40a6cc:
    // 0x40a6cc: 0xc0c8dec  jal         func_3237B0
label_40a6d0:
    if (ctx->pc == 0x40A6D0u) {
        ctx->pc = 0x40A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A6CCu;
        // 0x40a6d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A6D4u;
        goto label_40a6d4;
    }
    ctx->pc = 0x40A6CCu;
    SET_GPR_U32(ctx, 31, 0x40A6D4u);
    ctx->pc = 0x40A6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A6CCu;
    // 0x40a6d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3237B0u, 0x40A6CCu, 0x40A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A6D4u;
label_40a6d4:
    // 0x40a6d4: 0x8e4447a0  lw          $a0, 0x47A0($s2)
    ctx->pc = 0x40a6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18336)));
label_40a6d8:
    // 0x40a6d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40a6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40a6dc:
    // 0x40a6dc: 0xc0c8e7e  jal         func_3239F8
label_40a6e0:
    if (ctx->pc == 0x40A6E0u) {
        ctx->pc = 0x40A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A6DCu;
        // 0x40a6e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A6E4u;
        goto label_40a6e4;
    }
    ctx->pc = 0x40A6DCu;
    SET_GPR_U32(ctx, 31, 0x40A6E4u);
    ctx->pc = 0x40A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A6DCu;
    // 0x40a6e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40A6DCu, 0x40A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A6E4u;
label_40a6e4:
    // 0x40a6e4: 0x8e4447a0  lw          $a0, 0x47A0($s2)
    ctx->pc = 0x40a6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18336)));
label_40a6e8:
    // 0x40a6e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40a6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40a6ec:
    // 0x40a6ec: 0xc0c8e86  jal         func_323A18
label_40a6f0:
    if (ctx->pc == 0x40A6F0u) {
        ctx->pc = 0x40A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A6ECu;
        // 0x40a6f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A6F4u;
        goto label_40a6f4;
    }
    ctx->pc = 0x40A6ECu;
    SET_GPR_U32(ctx, 31, 0x40A6F4u);
    ctx->pc = 0x40A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A6ECu;
    // 0x40a6f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A18u, 0x40A6ECu, 0x40A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A6F4u;
label_40a6f4:
    // 0x40a6f4: 0x8e4447a0  lw          $a0, 0x47A0($s2)
    ctx->pc = 0x40a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18336)));
label_40a6f8:
    // 0x40a6f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40a6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40a6fc:
    // 0x40a6fc: 0xc0ca350  jal         func_328D40
label_40a700:
    if (ctx->pc == 0x40A700u) {
        ctx->pc = 0x40A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A6FCu;
        // 0x40a700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A704u;
        goto label_40a704;
    }
    ctx->pc = 0x40A6FCu;
    SET_GPR_U32(ctx, 31, 0x40A704u);
    ctx->pc = 0x40A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A6FCu;
    // 0x40a700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x40A6FCu, 0x40A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A704u;
label_40a704:
    // 0x40a704: 0x1000000c  b           . + 4 + (0xC << 2)
label_40a708:
    if (ctx->pc == 0x40A708u) {
        ctx->pc = 0x40A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A704u;
        // 0x40a708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A70Cu;
        goto label_40a70c;
    }
    ctx->pc = 0x40A704u;
    {
        const bool branch_taken_0x40a704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A704u;
        // 0x40a708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a704) {
            ctx->pc = 0x40A738u;
            goto label_40a738;
        }
    }
    ctx->pc = 0x40A70Cu;
label_40a70c:
    // 0x40a70c: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40a70cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_40a710:
    // 0x40a710: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x40a710u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_40a714:
    // 0x40a714: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40a714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40a718:
    // 0x40a718: 0x24c681d0  addiu       $a2, $a2, -0x7E30
    ctx->pc = 0x40a718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934992));
label_40a71c:
    // 0x40a71c: 0x240700b3  addiu       $a3, $zero, 0xB3
    ctx->pc = 0x40a71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_40a720:
    // 0x40a720: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x40a720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_40a724:
    // 0x40a724: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x40a724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_40a728:
    // 0x40a728: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x40a728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_40a72c:
    // 0x40a72c: 0x60f809  jalr        $v1
label_40a730:
    if (ctx->pc == 0x40A730u) {
        ctx->pc = 0x40A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A72Cu;
        // 0x40a730: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A734u;
        goto label_40a734;
    }
    ctx->pc = 0x40A72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40A734u);
        ctx->pc = 0x40A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A72Cu;
        // 0x40a730: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A72Cu, 0x40A734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40A734u;
label_40a734:
    // 0x40a734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40a734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40a738:
    // 0x40a738: 0xc0c8ccc  jal         func_323330
label_40a73c:
    if (ctx->pc == 0x40A73Cu) {
        ctx->pc = 0x40A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A738u;
        // 0x40a73c: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A740u;
        goto label_40a740;
    }
    ctx->pc = 0x40A738u;
    SET_GPR_U32(ctx, 31, 0x40A740u);
    ctx->pc = 0x40A73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A738u;
    // 0x40a73c: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40A738u, 0x40A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A740u;
label_40a740:
    // 0x40a740: 0x8e4447a0  lw          $a0, 0x47A0($s2)
    ctx->pc = 0x40a740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18336)));
label_40a744:
    // 0x40a744: 0xc0c8ccc  jal         func_323330
label_40a748:
    if (ctx->pc == 0x40A748u) {
        ctx->pc = 0x40A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A744u;
        // 0x40a748: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A74Cu;
        goto label_40a74c;
    }
    ctx->pc = 0x40A744u;
    SET_GPR_U32(ctx, 31, 0x40A74Cu);
    ctx->pc = 0x40A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A744u;
    // 0x40a748: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40A744u, 0x40A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A74Cu;
label_40a74c:
    // 0x40a74c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x40a74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40a750:
    // 0x40a750: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x40a750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40a754:
    // 0x40a754: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x40a754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40a758:
    // 0x40a758: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x40a758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40a75c:
    // 0x40a75c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x40a75cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40a760:
    // 0x40a760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40a760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40a764:
    // 0x40a764: 0x3e00008  jr          $ra
label_40a768:
    if (ctx->pc == 0x40A768u) {
        ctx->pc = 0x40A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A764u;
        // 0x40a768: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40A76Cu;
        goto label_40a76c;
    }
    ctx->pc = 0x40A764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A764u;
        // 0x40a768: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A76Cu;
label_40a76c:
    // 0x40a76c: 0x0  nop
    ctx->pc = 0x40a76cu;
    // NOP
    ctx->pc = 0x40a770u;
}
