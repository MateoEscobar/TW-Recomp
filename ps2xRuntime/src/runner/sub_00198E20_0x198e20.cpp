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

// Function: sub_00198E20
// Address: 0x198e20 - 0x198ed0
void sub_00198E20_0x198e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198E20_0x198e20");
#endif

    switch (ctx->pc) {
        case 0x198e48u: goto label_198e48;
        case 0x198e68u: goto label_198e68;
        case 0x198e80u: goto label_198e80;
        case 0x198e98u: goto label_198e98;
        case 0x198ea4u: goto label_198ea4;
        case 0x198eb0u: goto label_198eb0;
        default: break;
    }

    ctx->pc = 0x198e20u;

    // 0x198e20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x198e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x198e24: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x198e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x198e28: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x198e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x198e2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x198e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x198e30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x198e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x198e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e38: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x198e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x198e3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x198e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x198e40: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x198E40u;
    SET_GPR_U32(ctx, 31, 0x198E48u);
    ctx->pc = 0x198E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E40u;
    // 0x198e44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x198E40u, 0x198E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E48u;
label_198e48:
    // 0x198e48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x198e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198e50: 0x16020018  bne         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x198E50u;
    {
        const bool branch_taken_0x198e50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x198E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E50u;
        // 0x198e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e50) {
            ctx->pc = 0x198EB4u;
            goto label_198eb4;
        }
    }
    ctx->pc = 0x198E58u;
    // 0x198e58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e5c: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x198e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x198e60: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x198E60u;
    SET_GPR_U32(ctx, 31, 0x198E68u);
    ctx->pc = 0x198E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E60u;
    // 0x198e64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x198E60u, 0x198E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E68u;
label_198e68:
    // 0x198e68: 0x14500012  bne         $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x198E68u;
    {
        const bool branch_taken_0x198e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x198E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E68u;
        // 0x198e6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e68) {
            ctx->pc = 0x198EB4u;
            goto label_198eb4;
        }
    }
    ctx->pc = 0x198E70u;
    // 0x198e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x198e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e78: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x198E78u;
    SET_GPR_U32(ctx, 31, 0x198E80u);
    ctx->pc = 0x198E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E78u;
    // 0x198e7c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x198E78u, 0x198E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E80u;
label_198e80:
    // 0x198e80: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x198e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x198e84: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x198E84u;
    {
        const bool branch_taken_0x198e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x198E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E84u;
        // 0x198e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e84) {
            ctx->pc = 0x198EB4u;
            goto label_198eb4;
        }
    }
    ctx->pc = 0x198E8Cu;
    // 0x198e8c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x198e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198e90: 0xc066402  jal         func_199008
    ctx->pc = 0x198E90u;
    SET_GPR_U32(ctx, 31, 0x198E98u);
    ctx->pc = 0x198E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E90u;
    // 0x198e94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199008u, 0x198E90u, 0x198E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E98u;
label_198e98:
    // 0x198e98: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x198e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x198e9c: 0xc06640e  jal         func_199038
    ctx->pc = 0x198E9Cu;
    SET_GPR_U32(ctx, 31, 0x198EA4u);
    ctx->pc = 0x198EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E9Cu;
    // 0x198ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199038u, 0x198E9Cu, 0x198EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198EA4u;
label_198ea4:
    // 0x198ea4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ea8: 0xc06641a  jal         func_199068
    ctx->pc = 0x198EA8u;
    SET_GPR_U32(ctx, 31, 0x198EB0u);
    ctx->pc = 0x198EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198EA8u;
    // 0x198eac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x198EA8u, 0x198EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198EB0u;
label_198eb0:
    // 0x198eb0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x198eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_198eb4:
    // 0x198eb4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x198eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198eb8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x198eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198ebc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x198ebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198ec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x198ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x198EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EC4u;
        // 0x198ec8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198ECCu;
    // 0x198ecc: 0x0  nop
    ctx->pc = 0x198eccu;
    // NOP
    ctx->pc = 0x198ed0u;
}
