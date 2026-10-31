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

// Function: sub_0036E4B8
// Address: 0x36e4b8 - 0x36e558
void sub_0036E4B8_0x36e4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E4B8_0x36e4b8");
#endif

    switch (ctx->pc) {
        case 0x36e4e4u: goto label_36e4e4;
        case 0x36e4ecu: goto label_36e4ec;
        case 0x36e500u: goto label_36e500;
        case 0x36e508u: goto label_36e508;
        case 0x36e51cu: goto label_36e51c;
        case 0x36e524u: goto label_36e524;
        case 0x36e534u: goto label_36e534;
        default: break;
    }

    ctx->pc = 0x36e4b8u;

    // 0x36e4b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36e4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36e4bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e4c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36e4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36e4c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36e4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36e4c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36e4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e4cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36e4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e4d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e4d4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x36e4d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36e4d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36e4d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e4dc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E4DCu;
    SET_GPR_U32(ctx, 31, 0x36E4E4u);
    ctx->pc = 0x36E4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E4DCu;
    // 0x36e4e0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E4DCu, 0x36E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E4E4u;
label_36e4e4:
    // 0x36e4e4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E4E4u;
    SET_GPR_U32(ctx, 31, 0x36E4ECu);
    ctx->pc = 0x36E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E4E4u;
    // 0x36e4e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E4E4u, 0x36E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E4ECu;
label_36e4ec:
    // 0x36e4ec: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x36e4ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x36e4f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36e4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e4f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36e4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e4f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E4F8u;
    SET_GPR_U32(ctx, 31, 0x36E500u);
    ctx->pc = 0x36E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E4F8u;
    // 0x36e4fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E4F8u, 0x36E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E500u;
label_36e500:
    // 0x36e500: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E500u;
    SET_GPR_U32(ctx, 31, 0x36E508u);
    ctx->pc = 0x36E504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E500u;
    // 0x36e504: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E500u, 0x36E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E508u;
label_36e508:
    // 0x36e508: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36e508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e50c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36e50cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36e510: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36e510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36e514: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E514u;
    SET_GPR_U32(ctx, 31, 0x36E51Cu);
    ctx->pc = 0x36E518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E514u;
    // 0x36e518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E514u, 0x36E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E51Cu;
label_36e51c:
    // 0x36e51c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E51Cu;
    SET_GPR_U32(ctx, 31, 0x36E524u);
    ctx->pc = 0x36E520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E51Cu;
    // 0x36e520: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E51Cu, 0x36E524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E524u;
label_36e524:
    // 0x36e524: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x36e524u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x36e528: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x36e528u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x36e52c: 0xc05fc86  jal         func_17F218
    ctx->pc = 0x36E52Cu;
    SET_GPR_U32(ctx, 31, 0x36E534u);
    ctx->pc = 0x36E530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E52Cu;
    // 0x36e530: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F218u, 0x36E52Cu, 0x36E534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E534u;
label_36e534:
    // 0x36e534: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36e534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e53c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36e53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e544: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x36e544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36e548: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x36e548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36e54c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E54Cu;
        // 0x36e550: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E554u;
    // 0x36e554: 0x0  nop
    ctx->pc = 0x36e554u;
    // NOP
    ctx->pc = 0x36e558u;
}
