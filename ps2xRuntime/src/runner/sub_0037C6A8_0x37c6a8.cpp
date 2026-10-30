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

// Function: sub_0037C6A8
// Address: 0x37c6a8 - 0x37c748
void sub_0037C6A8_0x37c6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C6A8_0x37c6a8");
#endif

    switch (ctx->pc) {
        case 0x37c6d4u: goto label_37c6d4;
        case 0x37c6dcu: goto label_37c6dc;
        case 0x37c6f0u: goto label_37c6f0;
        case 0x37c6f8u: goto label_37c6f8;
        case 0x37c70cu: goto label_37c70c;
        case 0x37c714u: goto label_37c714;
        case 0x37c724u: goto label_37c724;
        default: break;
    }

    ctx->pc = 0x37c6a8u;

    // 0x37c6a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37c6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37c6ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c6b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37c6b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37c6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37c6b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37c6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c6bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37c6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c6c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c6c4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x37c6c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x37c6c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c6cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C6CCu;
    SET_GPR_U32(ctx, 31, 0x37C6D4u);
    ctx->pc = 0x37C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C6CCu;
    // 0x37c6d0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C6CCu, 0x37C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C6D4u;
label_37c6d4:
    // 0x37c6d4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37C6D4u;
    SET_GPR_U32(ctx, 31, 0x37C6DCu);
    ctx->pc = 0x37C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C6D4u;
    // 0x37c6d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37C6D4u, 0x37C6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C6DCu;
label_37c6dc:
    // 0x37c6dc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x37c6dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x37c6e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c6e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c6e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C6E8u;
    SET_GPR_U32(ctx, 31, 0x37C6F0u);
    ctx->pc = 0x37C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C6E8u;
    // 0x37c6ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C6E8u, 0x37C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C6F0u;
label_37c6f0:
    // 0x37c6f0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37C6F0u;
    SET_GPR_U32(ctx, 31, 0x37C6F8u);
    ctx->pc = 0x37C6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C6F0u;
    // 0x37c6f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37C6F0u, 0x37C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C6F8u;
label_37c6f8:
    // 0x37c6f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c6fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37c6fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37c700: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37c700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37c704: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C704u;
    SET_GPR_U32(ctx, 31, 0x37C70Cu);
    ctx->pc = 0x37C708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C704u;
    // 0x37c708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C704u, 0x37C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C70Cu;
label_37c70c:
    // 0x37c70c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37C70Cu;
    SET_GPR_U32(ctx, 31, 0x37C714u);
    ctx->pc = 0x37C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C70Cu;
    // 0x37c710: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37C70Cu, 0x37C714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C714u;
label_37c714:
    // 0x37c714: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37c714u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x37c718: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x37c718u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x37c71c: 0xc05fc9a  jal         func_17F268
    ctx->pc = 0x37C71Cu;
    SET_GPR_U32(ctx, 31, 0x37C724u);
    ctx->pc = 0x37C720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C71Cu;
    // 0x37c720: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F268u, 0x37C71Cu, 0x37C724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C724u;
label_37c724:
    // 0x37c724: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37c724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37c728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c72c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37c72cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c734: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x37c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37c738: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x37c738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37c73c: 0x3e00008  jr          $ra
    ctx->pc = 0x37C73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C73Cu;
        // 0x37c740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C744u;
    // 0x37c744: 0x0  nop
    ctx->pc = 0x37c744u;
    // NOP
    ctx->pc = 0x37c748u;
}
