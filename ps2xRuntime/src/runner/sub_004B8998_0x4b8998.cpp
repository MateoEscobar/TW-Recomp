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

// Function: sub_004B8998
// Address: 0x4b8998 - 0x4b8a70
void sub_004B8998_0x4b8998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8998_0x4b8998");
#endif

    switch (ctx->pc) {
        case 0x4b8a0cu: goto label_4b8a0c;
        default: break;
    }

    ctx->pc = 0x4b8998u;

    // 0x4b8998: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x4b8998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4b899c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b899cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b89a0: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x4b89a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x4b89a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4b89a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4b89a8: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x4b89a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x4b89ac: 0x28a30017  slti        $v1, $a1, 0x17
    ctx->pc = 0x4b89acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x4b89b0: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x4B89B0u;
    {
        const bool branch_taken_0x4b89b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b89b0) {
            ctx->pc = 0x4B89B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B89B0u;
            // 0x4b89b4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B8A50u;
            goto label_4b8a50;
        }
    }
    ctx->pc = 0x4B89B8u;
    // 0x4b89b8: 0x4a3000f  bgezl       $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x4B89B8u;
    {
        const bool branch_taken_0x4b89b8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x4b89b8) {
            ctx->pc = 0x4B89BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B89B8u;
            // 0x4b89bc: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B89F8u;
            goto label_4b89f8;
        }
    }
    ctx->pc = 0x4B89C0u;
    // 0x4b89c0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x4b89c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x4b89c4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x4b89c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x4b89c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b89c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b89cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4b89ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4b89d0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x4b89d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x4b89d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b89d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b89d8: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x4B89D8u;
    {
        const bool branch_taken_0x4b89d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b89d8) {
            ctx->pc = 0x4B8A60u;
            goto label_4b8a60;
        }
    }
    ctx->pc = 0x4B89E0u;
    // 0x4b89e0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B89E0u;
    {
        const bool branch_taken_0x4b89e0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4B89E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B89E0u;
        // 0x4b89e4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b89e0) {
            ctx->pc = 0x4B89F0u;
            goto label_4b89f0;
        }
    }
    ctx->pc = 0x4B89E8u;
    // 0x4b89e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4B89E8u;
    {
        const bool branch_taken_0x4b89e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B89ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B89E8u;
        // 0x4b89ec: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b89e8) {
            ctx->pc = 0x4B8A60u;
            goto label_4b8a60;
        }
    }
    ctx->pc = 0x4B89F0u;
label_4b89f0:
    // 0x4b89f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4B89F0u;
    {
        const bool branch_taken_0x4b89f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B89F0u;
        // 0x4b89f4: 0x44200b  movn        $a0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b89f0) {
            ctx->pc = 0x4B8A60u;
            goto label_4b8a60;
        }
    }
    ctx->pc = 0x4B89F8u;
label_4b89f8:
    // 0x4b89f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b89f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b89fc: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x4b89fcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x4b8a00: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x4b8a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4b8a04: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B8A04u;
    {
        const bool branch_taken_0x4b8a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b8a04) {
            ctx->pc = 0x4B8A14u;
            goto label_4b8a14;
        }
    }
    ctx->pc = 0x4B8A0Cu;
label_4b8a0c:
    // 0x4b8a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8A0Cu;
        // 0x4b8a10: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8A14u;
label_4b8a14:
    // 0x4b8a14: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x4b8a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x4b8a18: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x4b8a18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x4b8a1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b8a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b8a20: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4b8a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4b8a24: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x4b8a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x4b8a28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b8a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b8a2c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x4B8A2Cu;
    {
        const bool branch_taken_0x4b8a2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b8a2c) {
            ctx->pc = 0x4B8A60u;
            goto label_4b8a60;
        }
    }
    ctx->pc = 0x4B8A34u;
    // 0x4b8a34: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B8A34u;
    {
        const bool branch_taken_0x4b8a34 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x4B8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8A34u;
        // 0x4b8a38: 0x3c020080  lui         $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8a34) {
            ctx->pc = 0x4B8A44u;
            goto label_4b8a44;
        }
    }
    ctx->pc = 0x4B8A3Cu;
    // 0x4b8a3c: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x4b8a3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x4b8a40: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4b8a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4b8a44:
    // 0x4b8a44: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x4b8a44u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x4b8a48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4B8A48u;
    {
        const bool branch_taken_0x4b8a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8A48u;
        // 0x4b8a4c: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8a48) {
            ctx->pc = 0x4B8A60u;
            goto label_4b8a60;
        }
    }
    ctx->pc = 0x4B8A50u;
label_4b8a50:
    // 0x4b8a50: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4B8A50u;
    {
        const bool branch_taken_0x4b8a50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b8a50) {
            ctx->pc = 0x4B8A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b8a0c;
        }
    }
    ctx->pc = 0x4B8A58u;
    // 0x4b8a58: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8A58u;
        // 0x4b8a5c: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8A60u;
label_4b8a60:
    // 0x4b8a60: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x4b8a60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4b8a64: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8A64u;
        // 0x4b8a68: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8A6Cu;
    // 0x4b8a6c: 0x0  nop
    ctx->pc = 0x4b8a6cu;
    // NOP
    ctx->pc = 0x4b8a70u;
}
