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

// Function: sub_0035A510
// Address: 0x35a510 - 0x35a5d8
void sub_0035A510_0x35a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A510_0x35a510");
#endif

    switch (ctx->pc) {
        case 0x35a540u: goto label_35a540;
        case 0x35a548u: goto label_35a548;
        case 0x35a55cu: goto label_35a55c;
        case 0x35a564u: goto label_35a564;
        case 0x35a578u: goto label_35a578;
        case 0x35a580u: goto label_35a580;
        case 0x35a594u: goto label_35a594;
        case 0x35a59cu: goto label_35a59c;
        case 0x35a5b0u: goto label_35a5b0;
        default: break;
    }

    ctx->pc = 0x35a510u;

    // 0x35a510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35a514: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a518: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35a51c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35a51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35a520: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35a520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a524: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35a524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a52c: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x35a52cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x35a530: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35a530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a534: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x35a534u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x35a538: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A538u;
    SET_GPR_U32(ctx, 31, 0x35A540u);
    ctx->pc = 0x35A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A538u;
    // 0x35a53c: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A538u, 0x35A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A540u;
label_35a540:
    // 0x35a540: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A540u;
    SET_GPR_U32(ctx, 31, 0x35A548u);
    ctx->pc = 0x35A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A540u;
    // 0x35a544: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A540u, 0x35A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A548u;
label_35a548:
    // 0x35a548: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x35a548u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x35a54c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35a54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a550: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35a550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35a554: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A554u;
    SET_GPR_U32(ctx, 31, 0x35A55Cu);
    ctx->pc = 0x35A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A554u;
    // 0x35a558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A554u, 0x35A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A55Cu;
label_35a55c:
    // 0x35a55c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A55Cu;
    SET_GPR_U32(ctx, 31, 0x35A564u);
    ctx->pc = 0x35A560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A55Cu;
    // 0x35a560: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A55Cu, 0x35A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A564u;
label_35a564:
    // 0x35a564: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x35a564u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x35a568: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35a568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a56c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35a56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35a570: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A570u;
    SET_GPR_U32(ctx, 31, 0x35A578u);
    ctx->pc = 0x35A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A570u;
    // 0x35a574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A570u, 0x35A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A578u;
label_35a578:
    // 0x35a578: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A578u;
    SET_GPR_U32(ctx, 31, 0x35A580u);
    ctx->pc = 0x35A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A578u;
    // 0x35a57c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A578u, 0x35A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A580u;
label_35a580:
    // 0x35a580: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35a580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a584: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35a584u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35a588: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35a588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35a58c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A58Cu;
    SET_GPR_U32(ctx, 31, 0x35A594u);
    ctx->pc = 0x35A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A58Cu;
    // 0x35a590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A58Cu, 0x35A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A594u;
label_35a594:
    // 0x35a594: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A594u;
    SET_GPR_U32(ctx, 31, 0x35A59Cu);
    ctx->pc = 0x35A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A594u;
    // 0x35a598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A594u, 0x35A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A59Cu;
label_35a59c:
    // 0x35a59c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x35a59cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x35a5a0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x35a5a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x35a5a4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x35a5a4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x35a5a8: 0xc08d928  jal         func_2364A0
    ctx->pc = 0x35A5A8u;
    SET_GPR_U32(ctx, 31, 0x35A5B0u);
    ctx->pc = 0x35A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A5A8u;
    // 0x35a5ac: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2364A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2364A0u, 0x35A5A8u, 0x35A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A5B0u;
label_35a5b0:
    // 0x35a5b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35a5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a5b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a5b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a5b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35a5b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a5bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a5c0: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x35a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x35a5c4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x35a5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35a5c8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x35a5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35a5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x35A5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A5CCu;
        // 0x35a5d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A5D4u;
    // 0x35a5d4: 0x0  nop
    ctx->pc = 0x35a5d4u;
    // NOP
    ctx->pc = 0x35a5d8u;
}
