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

// Function: sub_0010BC38
// Address: 0x10bc38 - 0x10bcf8
void sub_0010BC38_0x10bc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BC38_0x10bc38");
#endif

    switch (ctx->pc) {
        case 0x10bc68u: goto label_10bc68;
        case 0x10bc80u: goto label_10bc80;
        case 0x10bc98u: goto label_10bc98;
        case 0x10bca8u: goto label_10bca8;
        case 0x10bcc0u: goto label_10bcc0;
        case 0x10bcccu: goto label_10bccc;
        default: break;
    }

    ctx->pc = 0x10bc38u;

    // 0x10bc38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10bc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10bc3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10bc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10bc40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10bc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10bc44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10bc44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x10bc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x10bc4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10bc4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10bc54: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x10bc54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10bc58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BC58u;
    {
        const bool branch_taken_0x10bc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC58u;
        // 0x10bc5c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc58) {
            ctx->pc = 0x10BC68u;
            goto label_10bc68;
        }
    }
    ctx->pc = 0x10BC60u;
    // 0x10bc60: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x10BC60u;
    SET_GPR_U32(ctx, 31, 0x10BC68u);
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x10BC60u, 0x10BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC68u;
label_10bc68:
    // 0x10bc68: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x10BC68u;
    {
        const bool branch_taken_0x10bc68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC68u;
        // 0x10bc6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc68) {
            ctx->pc = 0x10BCD4u;
            goto label_10bcd4;
        }
    }
    ctx->pc = 0x10BC70u;
    // 0x10bc70: 0xa200001f  sb          $zero, 0x1F($s0)
    ctx->pc = 0x10bc70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x10bc74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc78: 0xc10c4de  jal         func_431378
    ctx->pc = 0x10BC78u;
    SET_GPR_U32(ctx, 31, 0x10BC80u);
    ctx->pc = 0x10BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC78u;
    // 0x10bc7c: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x10BC78u, 0x10BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC80u;
label_10bc80:
    // 0x10bc80: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x10bc80u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x10bc84: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x10bc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x10bc88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10bc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc8c: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x10bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x10bc90: 0xc05be60  jal         func_16F980
    ctx->pc = 0x10BC90u;
    SET_GPR_U32(ctx, 31, 0x10BC98u);
    ctx->pc = 0x10BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC90u;
    // 0x10bc94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F980u, 0x10BC90u, 0x10BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC98u;
label_10bc98:
    // 0x10bc98: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10BC98u;
    {
        const bool branch_taken_0x10bc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC98u;
        // 0x10bc9c: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc98) {
            ctx->pc = 0x10BCD8u;
            goto label_10bcd8;
        }
    }
    ctx->pc = 0x10BCA0u;
    // 0x10bca0: 0xc05e3d0  jal         func_178F40
    ctx->pc = 0x10BCA0u;
    SET_GPR_U32(ctx, 31, 0x10BCA8u);
    ctx->pc = 0x10BCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BCA0u;
    // 0x10bca4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178F40u, 0x10BCA0u, 0x10BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BCA8u;
label_10bca8:
    // 0x10bca8: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x10bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    // 0x10bcac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10bcacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bcb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10bcb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bcb4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10bcb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bcb8: 0xc05bc4a  jal         func_16F128
    ctx->pc = 0x10BCB8u;
    SET_GPR_U32(ctx, 31, 0x10BCC0u);
    ctx->pc = 0x10BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BCB8u;
    // 0x10bcbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F128u, 0x10BCB8u, 0x10BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BCC0u;
label_10bcc0:
    // 0x10bcc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bcc4: 0xc042f5c  jal         func_10BD70
    ctx->pc = 0x10BCC4u;
    SET_GPR_U32(ctx, 31, 0x10BCCCu);
    ctx->pc = 0x10BCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BCC4u;
    // 0x10bcc8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BD70u, 0x10BCC4u, 0x10BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BCCCu;
label_10bccc:
    // 0x10bccc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10BCCCu;
    {
        const bool branch_taken_0x10bccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCCCu;
        // 0x10bcd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bccc) {
            ctx->pc = 0x10BCDCu;
            goto label_10bcdc;
        }
    }
    ctx->pc = 0x10BCD4u;
label_10bcd4:
    // 0x10bcd4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x10bcd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_10bcd8:
    // 0x10bcd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10bcd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bcdc:
    // 0x10bcdc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10bcdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10bce0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10bce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bce4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10bce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bcec: 0x3e00008  jr          $ra
    ctx->pc = 0x10BCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCECu;
        // 0x10bcf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BCF4u;
    // 0x10bcf4: 0x0  nop
    ctx->pc = 0x10bcf4u;
    // NOP
    ctx->pc = 0x10bcf8u;
}
