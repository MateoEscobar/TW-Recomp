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

// Function: sub_003A58E8
// Address: 0x3a58e8 - 0x3a5938
void sub_003A58E8_0x3a58e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A58E8_0x3a58e8");
#endif

    switch (ctx->pc) {
        case 0x3a5908u: goto label_3a5908;
        case 0x3a5918u: goto label_3a5918;
        default: break;
    }

    ctx->pc = 0x3a58e8u;

    // 0x3a58e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a58e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a58ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a58ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a58f0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x3a58f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3a58f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a58f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a58f8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3a58f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3a58fc: 0x948500c6  lhu         $a1, 0xC6($a0)
    ctx->pc = 0x3a58fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 198)));
    // 0x3a5900: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x3A5900u;
    SET_GPR_U32(ctx, 31, 0x3A5908u);
    ctx->pc = 0x3A5904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5900u;
    // 0x3a5904: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x3A5900u, 0x3A5908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5908u;
label_3a5908:
    // 0x3a5908: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5908u;
    {
        const bool branch_taken_0x3a5908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5908u;
        // 0x3a590c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5908) {
            ctx->pc = 0x3A5920u;
            goto label_3a5920;
        }
    }
    ctx->pc = 0x3A5910u;
    // 0x3a5910: 0xc065bb8  jal         func_196EE0
    ctx->pc = 0x3A5910u;
    SET_GPR_U32(ctx, 31, 0x3A5918u);
    ctx->pc = 0x3A5914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5910u;
    // 0x3a5914: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x196EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196EE0u, 0x3A5910u, 0x3A5918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5918u;
label_3a5918:
    // 0x3a5918: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A5918u;
    {
        const bool branch_taken_0x3a5918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5918u;
        // 0x3a591c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5918) {
            ctx->pc = 0x3A5924u;
            goto label_3a5924;
        }
    }
    ctx->pc = 0x3A5920u;
label_3a5920:
    // 0x3a5920: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a5920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a5924:
    // 0x3a5924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a5924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5928: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3a5928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a592c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A592Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A592Cu;
        // 0x3a5930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A592Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5934u;
    // 0x3a5934: 0x0  nop
    ctx->pc = 0x3a5934u;
    // NOP
    ctx->pc = 0x3a5938u;
}
