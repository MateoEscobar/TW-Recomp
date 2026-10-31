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

// Function: sub_00173AA0
// Address: 0x173aa0 - 0x173bd0
void sub_00173AA0_0x173aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173AA0_0x173aa0");
#endif

    switch (ctx->pc) {
        case 0x173aecu: goto label_173aec;
        case 0x173b3cu: goto label_173b3c;
        case 0x173b48u: goto label_173b48;
        case 0x173b68u: goto label_173b68;
        case 0x173b78u: goto label_173b78;
        case 0x173b88u: goto label_173b88;
        default: break;
    }

    ctx->pc = 0x173aa0u;

    // 0x173aa0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x173aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x173aa4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x173aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x173aa8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x173aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x173aac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x173aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ab0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x173ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x173ab4: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x173ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x173ab8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x173ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x173abc: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x173abcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x173ac0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x173ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x173ac4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x173ac4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ac8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x173ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x173acc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x173accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ad0: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x173ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x173ad4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x173ad4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ad8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x173ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x173adc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ae0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x173ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ae4: 0xc137a1a  jal         func_4DE868
    ctx->pc = 0x173AE4u;
    SET_GPR_U32(ctx, 31, 0x173AECu);
    ctx->pc = 0x173AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AE4u;
    // 0x173ae8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE868u, 0x173AE4u, 0x173AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AECu;
label_173aec:
    // 0x173aec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x173aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x173af0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x173af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173af4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x173AF4u;
    {
        const bool branch_taken_0x173af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x173AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AF4u;
        // 0x173af8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173af4) {
            ctx->pc = 0x173B18u;
            goto label_173b18;
        }
    }
    ctx->pc = 0x173AFCu;
    // 0x173afc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x173afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x173b00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x173b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x173b04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x173b08: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x173b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x173b0c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x173b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173b10: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x173B10u;
    {
        const bool branch_taken_0x173b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B10u;
        // 0x173b14: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b10) {
            ctx->pc = 0x173BA8u;
            goto label_173ba8;
        }
    }
    ctx->pc = 0x173B18u;
label_173b18:
    // 0x173b18: 0x16000023  bnez        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x173B18u;
    {
        const bool branch_taken_0x173b18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x173B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B18u;
        // 0x173b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b18) {
            ctx->pc = 0x173BA8u;
            goto label_173ba8;
        }
    }
    ctx->pc = 0x173B20u;
    // 0x173b20: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x173b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173b24: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x173b24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x173b28: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x173b28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x173b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b30: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x173b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x173b34: 0xc10ca04  jal         func_432810
    ctx->pc = 0x173B34u;
    SET_GPR_U32(ctx, 31, 0x173B3Cu);
    ctx->pc = 0x173B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B34u;
    // 0x173b38: 0x24c61bf0  addiu       $a2, $a2, 0x1BF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x173B34u, 0x173B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B3Cu;
label_173b3c:
    // 0x173b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b40: 0xc061668  jal         func_1859A0
    ctx->pc = 0x173B40u;
    SET_GPR_U32(ctx, 31, 0x173B48u);
    ctx->pc = 0x173B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B40u;
    // 0x173b44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x173B40u, 0x173B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B48u;
label_173b48:
    // 0x173b48: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x173B48u;
    {
        const bool branch_taken_0x173b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B48u;
        // 0x173b4c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b48) {
            ctx->pc = 0x173B6Cu;
            goto label_173b6c;
        }
    }
    ctx->pc = 0x173B50u;
    // 0x173b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x173b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b58: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x173b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b5c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x173b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b60: 0xc061eaa  jal         func_187AA8
    ctx->pc = 0x173B60u;
    SET_GPR_U32(ctx, 31, 0x173B68u);
    ctx->pc = 0x173B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B60u;
    // 0x173b64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x173B60u, 0x173B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B68u;
label_173b68:
    // 0x173b68: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x173b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_173b6c:
    // 0x173b6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x173b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173b70: 0xc0552b8  jal         func_154AE0
    ctx->pc = 0x173B70u;
    SET_GPR_U32(ctx, 31, 0x173B78u);
    ctx->pc = 0x173B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B70u;
    // 0x173b74: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x173B70u, 0x173B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B78u;
label_173b78:
    // 0x173b78: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x173b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x173b7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x173b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b80: 0xc137a1a  jal         func_4DE868
    ctx->pc = 0x173B80u;
    SET_GPR_U32(ctx, 31, 0x173B88u);
    ctx->pc = 0x173B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B80u;
    // 0x173b84: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE868u, 0x173B80u, 0x173B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B88u;
label_173b88:
    // 0x173b88: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x173b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173b8c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x173b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x173b90: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x173b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x173b94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x173b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x173b98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x173b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x173b9c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x173b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x173ba0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x173ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173ba4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x173ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_173ba8:
    // 0x173ba8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x173ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x173bac: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x173bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x173bb0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x173bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x173bb4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x173bb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x173bb8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x173bb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x173bbc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x173bbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173bc0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x173bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x173bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x173BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BC4u;
        // 0x173bc8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173BCCu;
    // 0x173bcc: 0x0  nop
    ctx->pc = 0x173bccu;
    // NOP
    ctx->pc = 0x173bd0u;
}
