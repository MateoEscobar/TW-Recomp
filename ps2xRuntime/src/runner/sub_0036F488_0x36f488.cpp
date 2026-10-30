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

// Function: sub_0036F488
// Address: 0x36f488 - 0x36f538
void sub_0036F488_0x36f488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F488_0x36f488");
#endif

    switch (ctx->pc) {
        case 0x36f4b4u: goto label_36f4b4;
        case 0x36f4bcu: goto label_36f4bc;
        case 0x36f4d0u: goto label_36f4d0;
        case 0x36f4d8u: goto label_36f4d8;
        case 0x36f4ecu: goto label_36f4ec;
        case 0x36f500u: goto label_36f500;
        case 0x36f514u: goto label_36f514;
        default: break;
    }

    ctx->pc = 0x36f488u;

    // 0x36f488: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36f488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36f48c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f490: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36f490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36f494: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36f494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36f498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f49c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36f49cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f4a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36f4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36f4a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f4a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36f4a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f4ac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F4ACu;
    SET_GPR_U32(ctx, 31, 0x36F4B4u);
    ctx->pc = 0x36F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F4ACu;
    // 0x36f4b0: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F4ACu, 0x36F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F4B4u;
label_36f4b4:
    // 0x36f4b4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F4B4u;
    SET_GPR_U32(ctx, 31, 0x36F4BCu);
    ctx->pc = 0x36F4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F4B4u;
    // 0x36f4b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F4B4u, 0x36F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F4BCu;
label_36f4bc:
    // 0x36f4bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36f4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f4c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36f4c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f4c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36f4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f4c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F4C8u;
    SET_GPR_U32(ctx, 31, 0x36F4D0u);
    ctx->pc = 0x36F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F4C8u;
    // 0x36f4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F4C8u, 0x36F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F4D0u;
label_36f4d0:
    // 0x36f4d0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36F4D0u;
    SET_GPR_U32(ctx, 31, 0x36F4D8u);
    ctx->pc = 0x36F4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F4D0u;
    // 0x36f4d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36F4D0u, 0x36F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F4D8u;
label_36f4d8:
    // 0x36f4d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36f4d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36f4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f4e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36f4e4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36F4E4u;
    SET_GPR_U32(ctx, 31, 0x36F4ECu);
    ctx->pc = 0x36F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F4E4u;
    // 0x36f4e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36F4E4u, 0x36F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F4ECu;
label_36f4ec:
    // 0x36f4ec: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x36f4ecu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36f4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f4f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36f4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36f4f8: 0xc102488  jal         func_409220
    ctx->pc = 0x36F4F8u;
    SET_GPR_U32(ctx, 31, 0x36F500u);
    ctx->pc = 0x36F4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F4F8u;
    // 0x36f4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36F4F8u, 0x36F500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F500u;
label_36f500:
    // 0x36f500: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36f500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f504: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f508: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36f508u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36f50c: 0xc06d28a  jal         func_1B4A28
    ctx->pc = 0x36F50Cu;
    SET_GPR_U32(ctx, 31, 0x36F514u);
    ctx->pc = 0x36F510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F50Cu;
    // 0x36f510: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A28u, 0x36F50Cu, 0x36F514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F514u;
label_36f514:
    // 0x36f514: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36f514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36f518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f51c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36f51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36f520: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36f520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f528: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x36f528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36f52c: 0x3e00008  jr          $ra
    ctx->pc = 0x36F52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F52Cu;
        // 0x36f530: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F534u;
    // 0x36f534: 0x0  nop
    ctx->pc = 0x36f534u;
    // NOP
    ctx->pc = 0x36f538u;
}
