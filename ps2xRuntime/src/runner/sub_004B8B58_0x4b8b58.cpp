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

// Function: sub_004B8B58
// Address: 0x4b8b58 - 0x4b8c40
void sub_004B8B58_0x4b8b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8B58_0x4b8b58");
#endif

    switch (ctx->pc) {
        case 0x4b8bd8u: goto label_4b8bd8;
        default: break;
    }

    ctx->pc = 0x4b8b58u;

    // 0x4b8b58: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x4b8b58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4b8b5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b8b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8b60: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x4b8b60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x4b8b64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4b8b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4b8b68: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x4b8b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x4b8b6c: 0x28a30017  slti        $v1, $a1, 0x17
    ctx->pc = 0x4b8b6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x4b8b70: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x4B8B70u;
    {
        const bool branch_taken_0x4b8b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8b70) {
            ctx->pc = 0x4B8B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B8B70u;
            // 0x4b8b74: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B8C20u;
            goto label_4b8c20;
        }
    }
    ctx->pc = 0x4B8B78u;
    // 0x4b8b78: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B8B78u;
    {
        const bool branch_taken_0x4b8b78 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x4b8b78) {
            ctx->pc = 0x4B8B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B8B78u;
            // 0x4b8b7c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B8BC4u;
            goto label_4b8bc4;
        }
    }
    ctx->pc = 0x4B8B80u;
    // 0x4b8b80: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x4b8b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x4b8b84: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x4b8b84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x4b8b88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b8b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b8b8c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4b8b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4b8b90: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x4b8b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x4b8b94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b8b94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b8b98: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x4B8B98u;
    {
        const bool branch_taken_0x4b8b98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b8b98) {
            ctx->pc = 0x4B8C30u;
            goto label_4b8c30;
        }
    }
    ctx->pc = 0x4B8BA0u;
    // 0x4b8ba0: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B8BA0u;
    {
        const bool branch_taken_0x4b8ba0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4B8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8BA0u;
        // 0x4b8ba4: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8ba0) {
            ctx->pc = 0x4B8BB0u;
            goto label_4b8bb0;
        }
    }
    ctx->pc = 0x4B8BA8u;
    // 0x4b8ba8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x4B8BA8u;
    {
        const bool branch_taken_0x4b8ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8BA8u;
        // 0x4b8bac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8ba8) {
            ctx->pc = 0x4B8C30u;
            goto label_4b8c30;
        }
    }
    ctx->pc = 0x4B8BB0u;
label_4b8bb0:
    // 0x4b8bb0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x4b8bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x4b8bb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b8bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b8bb8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x4b8bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b8bbc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4B8BBCu;
    {
        const bool branch_taken_0x4b8bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8BBCu;
        // 0x4b8bc0: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8bbc) {
            ctx->pc = 0x4B8C30u;
            goto label_4b8c30;
        }
    }
    ctx->pc = 0x4B8BC4u;
label_4b8bc4:
    // 0x4b8bc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b8bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b8bc8: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x4b8bc8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x4b8bcc: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x4b8bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4b8bd0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B8BD0u;
    {
        const bool branch_taken_0x4b8bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b8bd0) {
            ctx->pc = 0x4B8BE0u;
            goto label_4b8be0;
        }
    }
    ctx->pc = 0x4B8BD8u;
label_4b8bd8:
    // 0x4b8bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8BD8u;
        // 0x4b8bdc: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8BE0u;
label_4b8be0:
    // 0x4b8be0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x4b8be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x4b8be4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x4b8be4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x4b8be8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b8be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b8bec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4b8becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4b8bf0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x4b8bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x4b8bf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b8bf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b8bf8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x4B8BF8u;
    {
        const bool branch_taken_0x4b8bf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b8bf8) {
            ctx->pc = 0x4B8C30u;
            goto label_4b8c30;
        }
    }
    ctx->pc = 0x4B8C00u;
    // 0x4b8c00: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B8C00u;
    {
        const bool branch_taken_0x4b8c00 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4B8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8C00u;
        // 0x4b8c04: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8c00) {
            ctx->pc = 0x4B8C18u;
            goto label_4b8c18;
        }
    }
    ctx->pc = 0x4B8C08u;
    // 0x4b8c08: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x4b8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x4b8c0c: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x4b8c0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x4b8c10: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4b8c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b8c14: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x4b8c14u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_4b8c18:
    // 0x4b8c18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4B8C18u;
    {
        const bool branch_taken_0x4b8c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8C18u;
        // 0x4b8c1c: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8c18) {
            ctx->pc = 0x4B8C30u;
            goto label_4b8c30;
        }
    }
    ctx->pc = 0x4B8C20u;
label_4b8c20:
    // 0x4b8c20: 0x14a2ffed  bne         $a1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4B8C20u;
    {
        const bool branch_taken_0x4b8c20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b8c20) {
            ctx->pc = 0x4B8BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b8bd8;
        }
    }
    ctx->pc = 0x4B8C28u;
    // 0x4b8c28: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8C28u;
        // 0x4b8c2c: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8C30u;
label_4b8c30:
    // 0x4b8c30: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x4b8c30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4b8c34: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8C34u;
        // 0x4b8c38: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8C3Cu;
    // 0x4b8c3c: 0x0  nop
    ctx->pc = 0x4b8c3cu;
    // NOP
    ctx->pc = 0x4b8c40u;
}
