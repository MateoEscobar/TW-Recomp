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

// Function: sub_0035A8B0
// Address: 0x35a8b0 - 0x35a950
void sub_0035A8B0_0x35a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A8B0_0x35a8b0");
#endif

    switch (ctx->pc) {
        case 0x35a8dcu: goto label_35a8dc;
        case 0x35a8e4u: goto label_35a8e4;
        case 0x35a8f8u: goto label_35a8f8;
        case 0x35a900u: goto label_35a900;
        case 0x35a914u: goto label_35a914;
        case 0x35a91cu: goto label_35a91c;
        case 0x35a92cu: goto label_35a92c;
        default: break;
    }

    ctx->pc = 0x35a8b0u;

    // 0x35a8b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35a8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35a8b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a8b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35a8bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35a8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35a8c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35a8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a8c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35a8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a8cc: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x35a8ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x35a8d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35a8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a8d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A8D4u;
    SET_GPR_U32(ctx, 31, 0x35A8DCu);
    ctx->pc = 0x35A8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A8D4u;
    // 0x35a8d8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A8D4u, 0x35A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A8DCu;
label_35a8dc:
    // 0x35a8dc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A8DCu;
    SET_GPR_U32(ctx, 31, 0x35A8E4u);
    ctx->pc = 0x35A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A8DCu;
    // 0x35a8e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A8DCu, 0x35A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A8E4u;
label_35a8e4:
    // 0x35a8e4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x35a8e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x35a8e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35a8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a8ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35a8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35a8f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A8F0u;
    SET_GPR_U32(ctx, 31, 0x35A8F8u);
    ctx->pc = 0x35A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A8F0u;
    // 0x35a8f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A8F0u, 0x35A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A8F8u;
label_35a8f8:
    // 0x35a8f8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A8F8u;
    SET_GPR_U32(ctx, 31, 0x35A900u);
    ctx->pc = 0x35A8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A8F8u;
    // 0x35a8fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A8F8u, 0x35A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A900u;
label_35a900:
    // 0x35a900: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35a900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a904: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35a904u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35a908: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35a908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35a90c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A90Cu;
    SET_GPR_U32(ctx, 31, 0x35A914u);
    ctx->pc = 0x35A910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A90Cu;
    // 0x35a910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A90Cu, 0x35A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A914u;
label_35a914:
    // 0x35a914: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A914u;
    SET_GPR_U32(ctx, 31, 0x35A91Cu);
    ctx->pc = 0x35A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A914u;
    // 0x35a918: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A914u, 0x35A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A91Cu;
label_35a91c:
    // 0x35a91c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x35a91cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x35a920: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x35a920u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x35a924: 0xc08db0a  jal         func_236C28
    ctx->pc = 0x35A924u;
    SET_GPR_U32(ctx, 31, 0x35A92Cu);
    ctx->pc = 0x35A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A924u;
    // 0x35a928: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C28u, 0x35A924u, 0x35A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A92Cu;
label_35a92c:
    // 0x35a92c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35a92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35a934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a93c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x35a93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35a940: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x35a940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35a944: 0x3e00008  jr          $ra
    ctx->pc = 0x35A944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A944u;
        // 0x35a948: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A94Cu;
    // 0x35a94c: 0x0  nop
    ctx->pc = 0x35a94cu;
    // NOP
    ctx->pc = 0x35a950u;
}
