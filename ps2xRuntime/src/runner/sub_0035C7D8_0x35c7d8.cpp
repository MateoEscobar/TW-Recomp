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

// Function: sub_0035C7D8
// Address: 0x35c7d8 - 0x35c878
void sub_0035C7D8_0x35c7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C7D8_0x35c7d8");
#endif

    switch (ctx->pc) {
        case 0x35c804u: goto label_35c804;
        case 0x35c80cu: goto label_35c80c;
        case 0x35c820u: goto label_35c820;
        case 0x35c828u: goto label_35c828;
        case 0x35c83cu: goto label_35c83c;
        case 0x35c844u: goto label_35c844;
        case 0x35c854u: goto label_35c854;
        default: break;
    }

    ctx->pc = 0x35c7d8u;

    // 0x35c7d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35c7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35c7dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c7e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35c7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35c7e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35c7e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35c7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c7ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35c7ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c7f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c7f4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x35c7f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x35c7f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35c7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c7fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C7FCu;
    SET_GPR_U32(ctx, 31, 0x35C804u);
    ctx->pc = 0x35C800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C7FCu;
    // 0x35c800: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C7FCu, 0x35C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C804u;
label_35c804:
    // 0x35c804: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35C804u;
    SET_GPR_U32(ctx, 31, 0x35C80Cu);
    ctx->pc = 0x35C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C804u;
    // 0x35c808: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35C804u, 0x35C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C80Cu;
label_35c80c:
    // 0x35c80c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x35c80cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x35c810: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35c810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c814: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c818: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C818u;
    SET_GPR_U32(ctx, 31, 0x35C820u);
    ctx->pc = 0x35C81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C818u;
    // 0x35c81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C818u, 0x35C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C820u;
label_35c820:
    // 0x35c820: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35C820u;
    SET_GPR_U32(ctx, 31, 0x35C828u);
    ctx->pc = 0x35C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C820u;
    // 0x35c824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35C820u, 0x35C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C828u;
label_35c828:
    // 0x35c828: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35c828u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35c82c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35c82cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c830: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35c830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c834: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C834u;
    SET_GPR_U32(ctx, 31, 0x35C83Cu);
    ctx->pc = 0x35C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C834u;
    // 0x35c838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C834u, 0x35C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C83Cu;
label_35c83c:
    // 0x35c83c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35C83Cu;
    SET_GPR_U32(ctx, 31, 0x35C844u);
    ctx->pc = 0x35C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C83Cu;
    // 0x35c840: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35C83Cu, 0x35C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C844u;
label_35c844:
    // 0x35c844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35c844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c848: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x35c848u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x35c84c: 0xc08d176  jal         func_2345D8
    ctx->pc = 0x35C84Cu;
    SET_GPR_U32(ctx, 31, 0x35C854u);
    ctx->pc = 0x35C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C84Cu;
    // 0x35c850: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2345D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345D8u, 0x35C84Cu, 0x35C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C854u;
label_35c854:
    // 0x35c854: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35c854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c85c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c85cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c864: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x35c864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35c868: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x35c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35c86c: 0x3e00008  jr          $ra
    ctx->pc = 0x35C86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C86Cu;
        // 0x35c870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C874u;
    // 0x35c874: 0x0  nop
    ctx->pc = 0x35c874u;
    // NOP
    ctx->pc = 0x35c878u;
}
