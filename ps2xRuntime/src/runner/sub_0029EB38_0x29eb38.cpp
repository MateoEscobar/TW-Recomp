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

// Function: sub_0029EB38
// Address: 0x29eb38 - 0x29ec90
void sub_0029EB38_0x29eb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EB38_0x29eb38");
#endif

    switch (ctx->pc) {
        case 0x29eb90u: goto label_29eb90;
        case 0x29ebf4u: goto label_29ebf4;
        default: break;
    }

    ctx->pc = 0x29eb38u;

    // 0x29eb38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29eb38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29eb3c: 0x0  nop
    ctx->pc = 0x29eb3cu;
    // NOP
    // 0x29eb40: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x29eb40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29eb44: 0x0  nop
    ctx->pc = 0x29eb44u;
    // NOP
    // 0x29eb48: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x29EB48u;
    {
        const bool branch_taken_0x29eb48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29eb48) {
            ctx->pc = 0x29EC08u;
            goto label_29ec08;
        }
    }
    ctx->pc = 0x29EB50u;
    // 0x29eb50: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x29eb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x29eb54: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x29eb54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x29eb58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29eb58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29eb5c: 0x0  nop
    ctx->pc = 0x29eb5cu;
    // NOP
    // 0x29eb60: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x29eb60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29eb64: 0x0  nop
    ctx->pc = 0x29eb64u;
    // NOP
    // 0x29eb68: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x29EB68u;
    {
        const bool branch_taken_0x29eb68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29eb68) {
            ctx->pc = 0x29EC08u;
            goto label_29ec08;
        }
    }
    ctx->pc = 0x29EB70u;
    // 0x29eb70: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x29eb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x29eb74: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x29eb74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x29eb78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29eb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29eb7c: 0x0  nop
    ctx->pc = 0x29eb7cu;
    // NOP
    // 0x29eb80: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x29eb80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29eb84: 0x0  nop
    ctx->pc = 0x29eb84u;
    // NOP
    // 0x29eb88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29EB88u;
    {
        const bool branch_taken_0x29eb88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29eb88) {
            ctx->pc = 0x29EB98u;
            goto label_29eb98;
        }
    }
    ctx->pc = 0x29EB90u;
label_29eb90:
    // 0x29eb90: 0x3e00008  jr          $ra
    ctx->pc = 0x29EB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB90u;
        // 0x29eb94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EB98u;
label_29eb98:
    // 0x29eb98: 0x3c013f96  lui         $at, 0x3F96
    ctx->pc = 0x29eb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16278 << 16));
    // 0x29eb9c: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x29eb9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x29eba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29eba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29eba4: 0x0  nop
    ctx->pc = 0x29eba4u;
    // NOP
    // 0x29eba8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x29eba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ebac: 0x0  nop
    ctx->pc = 0x29ebacu;
    // NOP
    // 0x29ebb0: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x29EBB0u;
    {
        const bool branch_taken_0x29ebb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBB0u;
        // 0x29ebb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ebb0) {
            ctx->pc = 0x29EC84u;
            goto label_29ec84;
        }
    }
    ctx->pc = 0x29EBB8u;
    // 0x29ebb8: 0x3c013ffb  lui         $at, 0x3FFB
    ctx->pc = 0x29ebb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16379 << 16));
    // 0x29ebbc: 0x342153d2  ori         $at, $at, 0x53D2
    ctx->pc = 0x29ebbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21458);
    // 0x29ebc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ebc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ebc4: 0x0  nop
    ctx->pc = 0x29ebc4u;
    // NOP
    // 0x29ebc8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x29ebc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ebcc: 0x0  nop
    ctx->pc = 0x29ebccu;
    // NOP
    // 0x29ebd0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29EBD0u;
    {
        const bool branch_taken_0x29ebd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBD0u;
        // 0x29ebd4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ebd0) {
            ctx->pc = 0x29EBE0u;
            goto label_29ebe0;
        }
    }
    ctx->pc = 0x29EBD8u;
    // 0x29ebd8: 0x3e00008  jr          $ra
    ctx->pc = 0x29EBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBD8u;
        // 0x29ebdc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EBE0u;
label_29ebe0:
    // 0x29ebe0: 0x3c01402f  lui         $at, 0x402F
    ctx->pc = 0x29ebe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16431 << 16));
    // 0x29ebe4: 0x3421eddf  ori         $at, $at, 0xEDDF
    ctx->pc = 0x29ebe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60895);
    // 0x29ebe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ebe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ebec: 0x0  nop
    ctx->pc = 0x29ebecu;
    // NOP
    // 0x29ebf0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x29ebf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29ebf4:
    // 0x29ebf4: 0x0  nop
    ctx->pc = 0x29ebf4u;
    // NOP
    // 0x29ebf8: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x29EBF8u;
    {
        const bool branch_taken_0x29ebf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ebf8) {
            ctx->pc = 0x29EC84u;
            goto label_29ec84;
        }
    }
    ctx->pc = 0x29EC00u;
    // 0x29ec00: 0x3e00008  jr          $ra
    ctx->pc = 0x29EC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC00u;
        // 0x29ec04: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EC08u;
label_29ec08:
    // 0x29ec08: 0x3c0140bc  lui         $at, 0x40BC
    ctx->pc = 0x29ec08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16572 << 16));
    // 0x29ec0c: 0x34217edd  ori         $at, $at, 0x7EDD
    ctx->pc = 0x29ec0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32477);
    // 0x29ec10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ec10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ec14: 0x0  nop
    ctx->pc = 0x29ec14u;
    // NOP
    // 0x29ec18: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x29ec18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ec1c: 0x0  nop
    ctx->pc = 0x29ec1cu;
    // NOP
    // 0x29ec20: 0x4501ffdb  bc1t        . + 4 + (-0x25 << 2)
    ctx->pc = 0x29EC20u;
    {
        const bool branch_taken_0x29ec20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ec20) {
            ctx->pc = 0x29EB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29eb90;
        }
    }
    ctx->pc = 0x29EC28u;
    // 0x29ec28: 0x3c0140a3  lui         $at, 0x40A3
    ctx->pc = 0x29ec28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16547 << 16));
    // 0x29ec2c: 0x34215ce2  ori         $at, $at, 0x5CE2
    ctx->pc = 0x29ec2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23778);
    // 0x29ec30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ec30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ec34: 0x0  nop
    ctx->pc = 0x29ec34u;
    // NOP
    // 0x29ec38: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x29ec38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ec3c: 0x0  nop
    ctx->pc = 0x29ec3cu;
    // NOP
    // 0x29ec40: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x29EC40u;
    {
        const bool branch_taken_0x29ec40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC40u;
        // 0x29ec44: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec40) {
            ctx->pc = 0x29EC84u;
            goto label_29ec84;
        }
    }
    ctx->pc = 0x29EC48u;
    // 0x29ec48: 0x3c01408a  lui         $at, 0x408A
    ctx->pc = 0x29ec48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16522 << 16));
    // 0x29ec4c: 0x34213ae6  ori         $at, $at, 0x3AE6
    ctx->pc = 0x29ec4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15078);
    // 0x29ec50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ec50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ec54: 0x0  nop
    ctx->pc = 0x29ec54u;
    // NOP
    // 0x29ec58: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x29ec58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ec5c: 0x0  nop
    ctx->pc = 0x29ec5cu;
    // NOP
    // 0x29ec60: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x29EC60u;
    {
        const bool branch_taken_0x29ec60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC60u;
        // 0x29ec64: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec60) {
            ctx->pc = 0x29EC84u;
            goto label_29ec84;
        }
    }
    ctx->pc = 0x29EC68u;
    // 0x29ec68: 0x3c014062  lui         $at, 0x4062
    ctx->pc = 0x29ec68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16482 << 16));
    // 0x29ec6c: 0x342131d7  ori         $at, $at, 0x31D7
    ctx->pc = 0x29ec6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12759);
    // 0x29ec70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ec70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ec74: 0x0  nop
    ctx->pc = 0x29ec74u;
    // NOP
    // 0x29ec78: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x29ec78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ec7c: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x29EC7Cu;
    {
        const bool branch_taken_0x29ec7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC7Cu;
        // 0x29ec80: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec7c) {
            ctx->pc = 0x29EBF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ebf4;
        }
    }
    ctx->pc = 0x29EC84u;
label_29ec84:
    // 0x29ec84: 0x3e00008  jr          $ra
    ctx->pc = 0x29EC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EC8Cu;
    // 0x29ec8c: 0x0  nop
    ctx->pc = 0x29ec8cu;
    // NOP
    ctx->pc = 0x29ec90u;
}
