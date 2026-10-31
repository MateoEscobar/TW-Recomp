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

// Function: sub_00182B50
// Address: 0x182b50 - 0x182bd8
void sub_00182B50_0x182b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182B50_0x182b50");
#endif

    switch (ctx->pc) {
        case 0x182b78u: goto label_182b78;
        case 0x182b80u: goto label_182b80;
        case 0x182b8cu: goto label_182b8c;
        case 0x182b98u: goto label_182b98;
        case 0x182bb8u: goto label_182bb8;
        default: break;
    }

    ctx->pc = 0x182b50u;

    // 0x182b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x182b54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x182b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x182b58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b60: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x182b60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x182b64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x182b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b68: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x182b68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x182b6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b70: 0xc065bd2  jal         func_196F48
    ctx->pc = 0x182B70u;
    SET_GPR_U32(ctx, 31, 0x182B78u);
    ctx->pc = 0x182B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182B70u;
    // 0x182b74: 0xa2000012  sb          $zero, 0x12($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196F48u, 0x182B70u, 0x182B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182B78u;
label_182b78:
    // 0x182b78: 0xc04808c  jal         func_120230
    ctx->pc = 0x182B78u;
    SET_GPR_U32(ctx, 31, 0x182B80u);
    ctx->pc = 0x182B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182B78u;
    // 0x182b7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x182B78u, 0x182B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182B80u;
label_182b80:
    // 0x182b80: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x182b80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x182b84: 0xc060aca  jal         func_182B28
    ctx->pc = 0x182B84u;
    SET_GPR_U32(ctx, 31, 0x182B8Cu);
    ctx->pc = 0x182B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182B84u;
    // 0x182b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B28u, 0x182B84u, 0x182B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182B8Cu;
label_182b8c:
    // 0x182b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b90: 0xc060aca  jal         func_182B28
    ctx->pc = 0x182B90u;
    SET_GPR_U32(ctx, 31, 0x182B98u);
    ctx->pc = 0x182B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182B90u;
    // 0x182b94: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B28u, 0x182B90u, 0x182B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182B98u;
label_182b98:
    // 0x182b98: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x182b98u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x182b9c: 0x92060011  lbu         $a2, 0x11($s0)
    ctx->pc = 0x182b9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x182ba0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x182ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x182ba4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ba8: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x182ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x182bac: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x182bacu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x182bb0: 0xc062a0c  jal         func_18A830
    ctx->pc = 0x182BB0u;
    SET_GPR_U32(ctx, 31, 0x182BB8u);
    ctx->pc = 0x182BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182BB0u;
    // 0x182bb4: 0x4614ab01  sub.s       $f12, $f21, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A830u, 0x182BB0u, 0x182BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182BB8u;
label_182bb8:
    // 0x182bb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x182bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182bbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182bc4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x182bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x182bc8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x182bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x182bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x182BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182BCCu;
        // 0x182bd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182BD4u;
    // 0x182bd4: 0x0  nop
    ctx->pc = 0x182bd4u;
    // NOP
    ctx->pc = 0x182bd8u;
}
