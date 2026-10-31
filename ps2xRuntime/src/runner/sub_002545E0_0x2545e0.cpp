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

// Function: sub_002545E0
// Address: 0x2545e0 - 0x2548b4
void sub_002545E0_0x2545e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002545E0_0x2545e0");
#endif

    switch (ctx->pc) {
        case 0x25462cu: goto label_25462c;
        case 0x25463cu: goto label_25463c;
        case 0x25464cu: goto label_25464c;
        case 0x25465cu: goto label_25465c;
        case 0x25466cu: goto label_25466c;
        case 0x25467cu: goto label_25467c;
        case 0x254694u: goto label_254694;
        case 0x2546acu: goto label_2546ac;
        case 0x2546c4u: goto label_2546c4;
        case 0x2546dcu: goto label_2546dc;
        case 0x2546f4u: goto label_2546f4;
        case 0x25470cu: goto label_25470c;
        case 0x254724u: goto label_254724;
        case 0x25473cu: goto label_25473c;
        case 0x254754u: goto label_254754;
        case 0x25476cu: goto label_25476c;
        case 0x254784u: goto label_254784;
        case 0x25479cu: goto label_25479c;
        case 0x2547acu: goto label_2547ac;
        case 0x2547c4u: goto label_2547c4;
        case 0x2547d4u: goto label_2547d4;
        case 0x2547e4u: goto label_2547e4;
        case 0x2547f4u: goto label_2547f4;
        case 0x25480cu: goto label_25480c;
        case 0x254824u: goto label_254824;
        case 0x25483cu: goto label_25483c;
        case 0x254854u: goto label_254854;
        case 0x254864u: goto label_254864;
        case 0x25487cu: goto label_25487c;
        case 0x25488cu: goto label_25488c;
        case 0x2548a4u: goto label_2548a4;
        default: break;
    }

    ctx->pc = 0x2545e0u;

    // 0x2545e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2545e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2545e4: 0x2ca2002a  sltiu       $v0, $a1, 0x2A
    ctx->pc = 0x2545e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)42) ? 1 : 0);
    // 0x2545e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2545e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2545ec: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2545ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2545f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2545f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2545f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2545f8: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x2545F8u;
    {
        const bool branch_taken_0x2545f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545F8u;
        // 0x2545fc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545f8) {
            ctx->pc = 0x2548B4u;
            return;
        }
    }
    ctx->pc = 0x254600u;
    // 0x254600: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x254600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x254604: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x254604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x254608: 0x2442d640  addiu       $v0, $v0, -0x29C0
    ctx->pc = 0x254608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956608));
    // 0x25460c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254610: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x254610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254614: 0x800008  jr          $a0
    ctx->pc = 0x254614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25461Cu: goto label_25461c;
            case 0x254684u: goto label_254684;
            case 0x25469Cu: goto label_25469c;
            case 0x2546B4u: goto label_2546b4;
            case 0x2546CCu: goto label_2546cc;
            case 0x2546E4u: goto label_2546e4;
            case 0x2546FCu: goto label_2546fc;
            case 0x254714u: goto label_254714;
            case 0x25472Cu: goto label_25472c;
            case 0x254744u: goto label_254744;
            case 0x25475Cu: goto label_25475c;
            case 0x254774u: goto label_254774;
            case 0x25478Cu: goto label_25478c;
            case 0x2547B4u: goto label_2547b4;
            case 0x2547FCu: goto label_2547fc;
            case 0x254814u: goto label_254814;
            case 0x25482Cu: goto label_25482c;
            case 0x254844u: goto label_254844;
            case 0x25486Cu: goto label_25486c;
            case 0x254894u: goto label_254894;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254614u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25461Cu;
label_25461c:
    // 0x25461c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25461cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254620: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x254620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x254624: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x254624u;
    SET_GPR_U32(ctx, 31, 0x25462Cu);
    ctx->pc = 0x254628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254624u;
    // 0x254628: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x254624u, 0x25462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25462Cu;
label_25462c:
    // 0x25462c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254630: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x254630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x254634: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x254634u;
    SET_GPR_U32(ctx, 31, 0x25463Cu);
    ctx->pc = 0x254638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254634u;
    // 0x254638: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x254634u, 0x25463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25463Cu;
label_25463c:
    // 0x25463c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25463cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254640: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x254640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x254644: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x254644u;
    SET_GPR_U32(ctx, 31, 0x25464Cu);
    ctx->pc = 0x254648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254644u;
    // 0x254648: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x254644u, 0x25464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25464Cu;
label_25464c:
    // 0x25464c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25464cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254650: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x254650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x254654: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x254654u;
    SET_GPR_U32(ctx, 31, 0x25465Cu);
    ctx->pc = 0x254658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254654u;
    // 0x254658: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x254654u, 0x25465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25465Cu;
label_25465c:
    // 0x25465c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25465cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254660: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x254660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x254664: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x254664u;
    SET_GPR_U32(ctx, 31, 0x25466Cu);
    ctx->pc = 0x254668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254664u;
    // 0x254668: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x254664u, 0x25466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25466Cu;
label_25466c:
    // 0x25466c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25466cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254670: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x254670u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x254674: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x254674u;
    SET_GPR_U32(ctx, 31, 0x25467Cu);
    ctx->pc = 0x254678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254674u;
    // 0x254678: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x254674u, 0x25467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25467Cu;
label_25467c:
    // 0x25467c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x25467Cu;
    {
        const bool branch_taken_0x25467c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25467Cu;
        // 0x254680: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25467c) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x254684u;
label_254684:
    // 0x254684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254688: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x254688u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25468c: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x25468Cu;
    SET_GPR_U32(ctx, 31, 0x254694u);
    ctx->pc = 0x254690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25468Cu;
    // 0x254690: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x25468Cu, 0x254694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254694u;
label_254694:
    // 0x254694: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x254694u;
    {
        const bool branch_taken_0x254694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254694u;
        // 0x254698: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254694) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x25469Cu;
label_25469c:
    // 0x25469c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25469cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2546a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2546a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2546a4: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x2546A4u;
    SET_GPR_U32(ctx, 31, 0x2546ACu);
    ctx->pc = 0x2546A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2546A4u;
    // 0x2546a8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x2546A4u, 0x2546ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2546ACu;
label_2546ac:
    // 0x2546ac: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2546ACu;
    {
        const bool branch_taken_0x2546ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2546B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546ACu;
        // 0x2546b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546ac) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x2546B4u;
label_2546b4:
    // 0x2546b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2546b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2546b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2546b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2546bc: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x2546BCu;
    SET_GPR_U32(ctx, 31, 0x2546C4u);
    ctx->pc = 0x2546C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2546BCu;
    // 0x2546c0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x2546BCu, 0x2546C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2546C4u;
label_2546c4:
    // 0x2546c4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2546C4u;
    {
        const bool branch_taken_0x2546c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2546C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546C4u;
        // 0x2546c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546c4) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x2546CCu;
label_2546cc:
    // 0x2546cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2546ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2546d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2546d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2546d4: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x2546D4u;
    SET_GPR_U32(ctx, 31, 0x2546DCu);
    ctx->pc = 0x2546D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2546D4u;
    // 0x2546d8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x2546D4u, 0x2546DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2546DCu;
label_2546dc:
    // 0x2546dc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2546DCu;
    {
        const bool branch_taken_0x2546dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2546E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546DCu;
        // 0x2546e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546dc) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x2546E4u;
label_2546e4:
    // 0x2546e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2546e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2546e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2546e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2546ec: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x2546ECu;
    SET_GPR_U32(ctx, 31, 0x2546F4u);
    ctx->pc = 0x2546F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2546ECu;
    // 0x2546f0: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x2546ECu, 0x2546F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2546F4u;
label_2546f4:
    // 0x2546f4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2546F4u;
    {
        const bool branch_taken_0x2546f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2546F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546F4u;
        // 0x2546f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546f4) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x2546FCu;
label_2546fc:
    // 0x2546fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2546fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254700: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x254700u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x254704: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x254704u;
    SET_GPR_U32(ctx, 31, 0x25470Cu);
    ctx->pc = 0x254708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254704u;
    // 0x254708: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x254704u, 0x25470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25470Cu;
label_25470c:
    // 0x25470c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x25470Cu;
    {
        const bool branch_taken_0x25470c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25470Cu;
        // 0x254710: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25470c) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x254714u;
label_254714:
    // 0x254714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254718: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x254718u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25471c: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x25471Cu;
    SET_GPR_U32(ctx, 31, 0x254724u);
    ctx->pc = 0x254720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25471Cu;
    // 0x254720: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x25471Cu, 0x254724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254724u;
label_254724:
    // 0x254724: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x254724u;
    {
        const bool branch_taken_0x254724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254724u;
        // 0x254728: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254724) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x25472Cu;
label_25472c:
    // 0x25472c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25472cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254730: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x254730u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x254734: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x254734u;
    SET_GPR_U32(ctx, 31, 0x25473Cu);
    ctx->pc = 0x254738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254734u;
    // 0x254738: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x254734u, 0x25473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25473Cu;
label_25473c:
    // 0x25473c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x25473Cu;
    {
        const bool branch_taken_0x25473c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25473Cu;
        // 0x254740: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25473c) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x254744u;
label_254744:
    // 0x254744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254748: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x254748u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25474c: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x25474Cu;
    SET_GPR_U32(ctx, 31, 0x254754u);
    ctx->pc = 0x254750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25474Cu;
    // 0x254750: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x25474Cu, 0x254754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254754u;
label_254754:
    // 0x254754: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x254754u;
    {
        const bool branch_taken_0x254754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254754u;
        // 0x254758: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254754) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x25475Cu;
label_25475c:
    // 0x25475c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25475cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254760: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x254760u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x254764: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x254764u;
    SET_GPR_U32(ctx, 31, 0x25476Cu);
    ctx->pc = 0x254768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254764u;
    // 0x254768: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x254764u, 0x25476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25476Cu;
label_25476c:
    // 0x25476c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x25476Cu;
    {
        const bool branch_taken_0x25476c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25476Cu;
        // 0x254770: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25476c) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x254774u;
label_254774:
    // 0x254774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254778: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x254778u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25477c: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x25477Cu;
    SET_GPR_U32(ctx, 31, 0x254784u);
    ctx->pc = 0x254780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25477Cu;
    // 0x254780: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x25477Cu, 0x254784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254784u;
label_254784:
    // 0x254784: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x254784u;
    {
        const bool branch_taken_0x254784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254784u;
        // 0x254788: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254784) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x25478Cu;
label_25478c:
    // 0x25478c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25478cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254790: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x254790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x254794: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x254794u;
    SET_GPR_U32(ctx, 31, 0x25479Cu);
    ctx->pc = 0x254798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254794u;
    // 0x254798: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x254794u, 0x25479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25479Cu;
label_25479c:
    // 0x25479c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25479cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2547a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2547a4: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x2547A4u;
    SET_GPR_U32(ctx, 31, 0x2547ACu);
    ctx->pc = 0x2547A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547A4u;
    // 0x2547a8: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x2547A4u, 0x2547ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2547ACu;
label_2547ac:
    // 0x2547ac: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2547ACu;
    {
        const bool branch_taken_0x2547ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2547B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547ACu;
        // 0x2547b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547ac) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x2547B4u;
label_2547b4:
    // 0x2547b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2547b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547b8: 0x240500ed  addiu       $a1, $zero, 0xED
    ctx->pc = 0x2547b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
    // 0x2547bc: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x2547BCu;
    SET_GPR_U32(ctx, 31, 0x2547C4u);
    ctx->pc = 0x2547C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547BCu;
    // 0x2547c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x2547BCu, 0x2547C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2547C4u;
label_2547c4:
    // 0x2547c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2547c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547c8: 0x240500ee  addiu       $a1, $zero, 0xEE
    ctx->pc = 0x2547c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x2547cc: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x2547CCu;
    SET_GPR_U32(ctx, 31, 0x2547D4u);
    ctx->pc = 0x2547D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547CCu;
    // 0x2547d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x2547CCu, 0x2547D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2547D4u;
label_2547d4:
    // 0x2547d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2547d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547d8: 0x240500ef  addiu       $a1, $zero, 0xEF
    ctx->pc = 0x2547d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
    // 0x2547dc: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x2547DCu;
    SET_GPR_U32(ctx, 31, 0x2547E4u);
    ctx->pc = 0x2547E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547DCu;
    // 0x2547e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x2547DCu, 0x2547E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2547E4u;
label_2547e4:
    // 0x2547e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2547e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2547e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2547ec: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x2547ECu;
    SET_GPR_U32(ctx, 31, 0x2547F4u);
    ctx->pc = 0x2547F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547ECu;
    // 0x2547f0: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x2547ECu, 0x2547F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2547F4u;
label_2547f4:
    // 0x2547f4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2547F4u;
    {
        const bool branch_taken_0x2547f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2547F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547F4u;
        // 0x2547f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547f4) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x2547FCu;
label_2547fc:
    // 0x2547fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2547fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254800: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x254800u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x254804: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x254804u;
    SET_GPR_U32(ctx, 31, 0x25480Cu);
    ctx->pc = 0x254808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254804u;
    // 0x254808: 0x240500c1  addiu       $a1, $zero, 0xC1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x254804u, 0x25480Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25480Cu;
label_25480c:
    // 0x25480c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x25480Cu;
    {
        const bool branch_taken_0x25480c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25480Cu;
        // 0x254810: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25480c) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x254814u;
label_254814:
    // 0x254814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254818: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x254818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25481c: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x25481Cu;
    SET_GPR_U32(ctx, 31, 0x254824u);
    ctx->pc = 0x254820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25481Cu;
    // 0x254820: 0x240500c2  addiu       $a1, $zero, 0xC2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x25481Cu, 0x254824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254824u;
label_254824:
    // 0x254824: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x254824u;
    {
        const bool branch_taken_0x254824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254824u;
        // 0x254828: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254824) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x25482Cu;
label_25482c:
    // 0x25482c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25482cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254830: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x254830u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x254834: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x254834u;
    SET_GPR_U32(ctx, 31, 0x25483Cu);
    ctx->pc = 0x254838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254834u;
    // 0x254838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x254834u, 0x25483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25483Cu;
label_25483c:
    // 0x25483c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25483Cu;
    {
        const bool branch_taken_0x25483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25483Cu;
        // 0x254840: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25483c) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x254844u;
label_254844:
    // 0x254844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254848: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x254848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25484c: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x25484Cu;
    SET_GPR_U32(ctx, 31, 0x254854u);
    ctx->pc = 0x254850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25484Cu;
    // 0x254850: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x25484Cu, 0x254854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254854u;
label_254854:
    // 0x254854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254858: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x254858u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25485c: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x25485Cu;
    SET_GPR_U32(ctx, 31, 0x254864u);
    ctx->pc = 0x254860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25485Cu;
    // 0x254860: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x25485Cu, 0x254864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254864u;
label_254864:
    // 0x254864: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x254864u;
    {
        const bool branch_taken_0x254864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254864u;
        // 0x254868: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254864) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x25486Cu;
label_25486c:
    // 0x25486c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25486cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254870: 0x2405028d  addiu       $a1, $zero, 0x28D
    ctx->pc = 0x254870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 653));
    // 0x254874: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x254874u;
    SET_GPR_U32(ctx, 31, 0x25487Cu);
    ctx->pc = 0x254878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254874u;
    // 0x254878: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x254874u, 0x25487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25487Cu;
label_25487c:
    // 0x25487c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25487cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254880: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x254880u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x254884: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x254884u;
    SET_GPR_U32(ctx, 31, 0x25488Cu);
    ctx->pc = 0x254888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254884u;
    // 0x254888: 0x2405028f  addiu       $a1, $zero, 0x28F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x254884u, 0x25488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25488Cu;
label_25488c:
    // 0x25488c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25488Cu;
    {
        const bool branch_taken_0x25488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25488Cu;
        // 0x254890: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25488c) {
            ctx->pc = 0x2548B8u;
            return;
        }
    }
    ctx->pc = 0x254894u;
label_254894:
    // 0x254894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254898: 0x24050291  addiu       $a1, $zero, 0x291
    ctx->pc = 0x254898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 657));
    // 0x25489c: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x25489Cu;
    SET_GPR_U32(ctx, 31, 0x2548A4u);
    ctx->pc = 0x2548A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25489Cu;
    // 0x2548a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x25489Cu, 0x2548A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548A4u;
label_2548a4:
    // 0x2548a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2548a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2548a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2548ac: 0xc09516a  jal         func_2545A8
    ctx->pc = 0x2548ACu;
    SET_GPR_U32(ctx, 31, 0x2548B4u);
    ctx->pc = 0x2548B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2548ACu;
    // 0x2548b0: 0x24050293  addiu       $a1, $zero, 0x293 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 659));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545A8u, 0x2548ACu, 0x2548B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548B4u;
}
