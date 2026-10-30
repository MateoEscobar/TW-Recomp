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

// Function: sub_003A5870
// Address: 0x3a5870 - 0x3a58d8
void sub_003A5870_0x3a5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5870_0x3a5870");
#endif

    switch (ctx->pc) {
        case 0x3a5870u: goto label_3a5870;
        case 0x3a5874u: goto label_3a5874;
        case 0x3a5878u: goto label_3a5878;
        case 0x3a587cu: goto label_3a587c;
        case 0x3a5880u: goto label_3a5880;
        case 0x3a5884u: goto label_3a5884;
        case 0x3a5888u: goto label_3a5888;
        case 0x3a588cu: goto label_3a588c;
        case 0x3a5890u: goto label_3a5890;
        case 0x3a5894u: goto label_3a5894;
        case 0x3a5898u: goto label_3a5898;
        case 0x3a589cu: goto label_3a589c;
        case 0x3a58a0u: goto label_3a58a0;
        case 0x3a58a4u: goto label_3a58a4;
        case 0x3a58a8u: goto label_3a58a8;
        case 0x3a58acu: goto label_3a58ac;
        case 0x3a58b0u: goto label_3a58b0;
        case 0x3a58b4u: goto label_3a58b4;
        case 0x3a58b8u: goto label_3a58b8;
        case 0x3a58bcu: goto label_3a58bc;
        case 0x3a58c0u: goto label_3a58c0;
        case 0x3a58c4u: goto label_3a58c4;
        case 0x3a58c8u: goto label_3a58c8;
        case 0x3a58ccu: goto label_3a58cc;
        case 0x3a58d0u: goto label_3a58d0;
        case 0x3a58d4u: goto label_3a58d4;
        default: break;
    }

    ctx->pc = 0x3a5870u;

label_3a5870:
    // 0x3a5870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a5870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a5874:
    // 0x3a5874: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3a5874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a5878:
    // 0x3a5878: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a5878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a587c:
    // 0x3a587c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3a587cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3a5880:
    // 0x3a5880: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a5880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a5884:
    // 0x3a5884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a5884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a5888:
    // 0x3a5888: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_3a588c:
    if (ctx->pc == 0x3A588Cu) {
        ctx->pc = 0x3A588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5888u;
        // 0x3a588c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5890u;
        goto label_3a5890;
    }
    ctx->pc = 0x3A5888u;
    {
        const bool branch_taken_0x3a5888 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5888u;
        // 0x3a588c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5888) {
            ctx->pc = 0x3A5898u;
            goto label_3a5898;
        }
    }
    ctx->pc = 0x3A5890u;
label_3a5890:
    // 0x3a5890: 0x1000000b  b           . + 4 + (0xB << 2)
label_3a5894:
    if (ctx->pc == 0x3A5894u) {
        ctx->pc = 0x3A5894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5890u;
        // 0x3a5894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5898u;
        goto label_3a5898;
    }
    ctx->pc = 0x3A5890u;
    {
        const bool branch_taken_0x3a5890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5890u;
        // 0x3a5894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5890) {
            ctx->pc = 0x3A58C0u;
            goto label_3a58c0;
        }
    }
    ctx->pc = 0x3A5898u;
label_3a5898:
    // 0x3a5898: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3a5898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a589c:
    // 0x3a589c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3a589cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3a58a0:
    // 0x3a58a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3a58a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3a58a4:
    // 0x3a58a4: 0x40f809  jalr        $v0
label_3a58a8:
    if (ctx->pc == 0x3A58A8u) {
        ctx->pc = 0x3A58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58A4u;
        // 0x3a58a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A58ACu;
        goto label_3a58ac;
    }
    ctx->pc = 0x3A58A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A58ACu);
        ctx->pc = 0x3A58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58A4u;
        // 0x3a58a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A58A4u, 0x3A58ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A58ACu;
label_3a58ac:
    // 0x3a58ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a58acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a58b0:
    // 0x3a58b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a58b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3a58b4:
    // 0x3a58b4: 0xc0e5824  jal         func_396090
label_3a58b8:
    if (ctx->pc == 0x3A58B8u) {
        ctx->pc = 0x3A58B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58B4u;
        // 0x3a58b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A58BCu;
        goto label_3a58bc;
    }
    ctx->pc = 0x3A58B4u;
    SET_GPR_U32(ctx, 31, 0x3A58BCu);
    ctx->pc = 0x3A58B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A58B4u;
    // 0x3a58b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396090u, 0x3A58B4u, 0x3A58BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A58BCu;
label_3a58bc:
    // 0x3a58bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a58bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a58c0:
    // 0x3a58c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a58c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a58c4:
    // 0x3a58c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a58c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a58c8:
    // 0x3a58c8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3a58c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a58cc:
    // 0x3a58cc: 0x3e00008  jr          $ra
label_3a58d0:
    if (ctx->pc == 0x3A58D0u) {
        ctx->pc = 0x3A58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58CCu;
        // 0x3a58d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A58D4u;
        goto label_3a58d4;
    }
    ctx->pc = 0x3A58CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58CCu;
        // 0x3a58d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A58CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A58D4u;
label_3a58d4:
    // 0x3a58d4: 0x0  nop
    ctx->pc = 0x3a58d4u;
    // NOP
    ctx->pc = 0x3a58d8u;
}
