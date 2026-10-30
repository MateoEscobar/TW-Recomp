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

// Function: sub_00221760
// Address: 0x221760 - 0x2217f0
void sub_00221760_0x221760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221760_0x221760");
#endif

    switch (ctx->pc) {
        case 0x22177cu: goto label_22177c;
        case 0x221794u: goto label_221794;
        case 0x2217acu: goto label_2217ac;
        case 0x2217c4u: goto label_2217c4;
        default: break;
    }

    ctx->pc = 0x221760u;

    // 0x221760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221764: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x221764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x221768: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x221768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22176c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22176cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221774: 0xc0885b0  jal         func_2216C0
    ctx->pc = 0x221774u;
    SET_GPR_U32(ctx, 31, 0x22177Cu);
    ctx->pc = 0x221778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221774u;
    // 0x221778: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2216C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2216C0u, 0x221774u, 0x22177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22177Cu;
label_22177c:
    // 0x22177c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x22177cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221780: 0x0  nop
    ctx->pc = 0x221780u;
    // NOP
    // 0x221784: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x221784u;
    {
        const bool branch_taken_0x221784 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x221788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221784u;
        // 0x221788: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221784) {
            ctx->pc = 0x2217D8u;
            goto label_2217d8;
        }
    }
    ctx->pc = 0x22178Cu;
    // 0x22178c: 0xc08859c  jal         func_221670
    ctx->pc = 0x22178Cu;
    SET_GPR_U32(ctx, 31, 0x221794u);
    ctx->pc = 0x221790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22178Cu;
    // 0x221790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221670u, 0x22178Cu, 0x221794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221794u;
label_221794:
    // 0x221794: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x221794u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221798: 0x0  nop
    ctx->pc = 0x221798u;
    // NOP
    // 0x22179c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x22179Cu;
    {
        const bool branch_taken_0x22179c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2217A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22179Cu;
        // 0x2217a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22179c) {
            ctx->pc = 0x2217D8u;
            goto label_2217d8;
        }
    }
    ctx->pc = 0x2217A4u;
    // 0x2217a4: 0xc088588  jal         func_221620
    ctx->pc = 0x2217A4u;
    SET_GPR_U32(ctx, 31, 0x2217ACu);
    ctx->pc = 0x2217A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217A4u;
    // 0x2217a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221620u, 0x2217A4u, 0x2217ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217ACu;
label_2217ac:
    // 0x2217ac: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2217acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2217b0: 0x0  nop
    ctx->pc = 0x2217b0u;
    // NOP
    // 0x2217b4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2217B4u;
    {
        const bool branch_taken_0x2217b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2217B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217B4u;
        // 0x2217b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217b4) {
            ctx->pc = 0x2217D8u;
            goto label_2217d8;
        }
    }
    ctx->pc = 0x2217BCu;
    // 0x2217bc: 0xc088574  jal         func_2215D0
    ctx->pc = 0x2217BCu;
    SET_GPR_U32(ctx, 31, 0x2217C4u);
    ctx->pc = 0x2217C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217BCu;
    // 0x2217c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2215D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2215D0u, 0x2217BCu, 0x2217C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217C4u;
label_2217c4:
    // 0x2217c4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2217c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2217c8: 0x0  nop
    ctx->pc = 0x2217c8u;
    // NOP
    // 0x2217cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2217CCu;
    {
        const bool branch_taken_0x2217cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2217D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217CCu;
        // 0x2217d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217cc) {
            ctx->pc = 0x2217D8u;
            goto label_2217d8;
        }
    }
    ctx->pc = 0x2217D4u;
    // 0x2217d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2217d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2217d8:
    // 0x2217d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2217d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2217dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2217dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2217e0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2217e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2217e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2217E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2217E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217E4u;
        // 0x2217e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2217E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2217ECu;
    // 0x2217ec: 0x0  nop
    ctx->pc = 0x2217ecu;
    // NOP
    ctx->pc = 0x2217f0u;
}
