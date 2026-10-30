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

// Function: sub_00324B60
// Address: 0x324b60 - 0x324c30
void sub_00324B60_0x324b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324B60_0x324b60");
#endif

    switch (ctx->pc) {
        case 0x324b8cu: goto label_324b8c;
        case 0x324bb8u: goto label_324bb8;
        case 0x324bc8u: goto label_324bc8;
        case 0x324be0u: goto label_324be0;
        case 0x324bf0u: goto label_324bf0;
        case 0x324c00u: goto label_324c00;
        case 0x324c14u: goto label_324c14;
        default: break;
    }

    ctx->pc = 0x324b60u;

    // 0x324b60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x324b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x324b64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x324b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x324b68: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x324b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x324b6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x324b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x324b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b74: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x324b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x324b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324b7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x324b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x324b80: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x324b80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x324b84: 0xc0c8dd2  jal         func_323748
    ctx->pc = 0x324B84u;
    SET_GPR_U32(ctx, 31, 0x324B8Cu);
    ctx->pc = 0x324B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324B84u;
    // 0x324b88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323748u, 0x324B84u, 0x324B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B8Cu;
label_324b8c:
    // 0x324b8c: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x324b8cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x324b90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x324b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b94: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x324b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x324b98: 0x2662fff4  addiu       $v0, $s3, -0xC
    ctx->pc = 0x324b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x324b9c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x324b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x324ba0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x324ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x324ba4: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x324ba4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x324ba8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x324BA8u;
    {
        const bool branch_taken_0x324ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x324BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BA8u;
        // 0x324bac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ba8) {
            ctx->pc = 0x324BE8u;
            goto label_324be8;
        }
    }
    ctx->pc = 0x324BB0u;
    // 0x324bb0: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x324BB0u;
    SET_GPR_U32(ctx, 31, 0x324BB8u);
    ctx->pc = 0x324BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324BB0u;
    // 0x324bb4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x324BB0u, 0x324BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324BB8u;
label_324bb8:
    // 0x324bb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x324bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324bbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x324bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324bc0: 0xc10c190  jal         func_430640
    ctx->pc = 0x324BC0u;
    SET_GPR_U32(ctx, 31, 0x324BC8u);
    ctx->pc = 0x324BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324BC0u;
    // 0x324bc4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x324BC0u, 0x324BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324BC8u;
label_324bc8:
    // 0x324bc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x324bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x324bcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x324bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324bd0: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x324bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x324bd4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x324bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x324bd8: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x324BD8u;
    SET_GPR_U32(ctx, 31, 0x324BE0u);
    ctx->pc = 0x324BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324BD8u;
    // 0x324bdc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x324BD8u, 0x324BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324BE0u;
label_324be0:
    // 0x324be0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x324BE0u;
    {
        const bool branch_taken_0x324be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BE0u;
        // 0x324be4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324be0) {
            ctx->pc = 0x324C18u;
            goto label_324c18;
        }
    }
    ctx->pc = 0x324BE8u;
label_324be8:
    // 0x324be8: 0xc0c923c  jal         func_3248F0
    ctx->pc = 0x324BE8u;
    SET_GPR_U32(ctx, 31, 0x324BF0u);
    ctx->pc = 0x324BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324BE8u;
    // 0x324bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3248F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3248F0u, 0x324BE8u, 0x324BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324BF0u;
label_324bf0:
    // 0x324bf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324BF0u;
    {
        const bool branch_taken_0x324bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BF0u;
        // 0x324bf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324bf0) {
            ctx->pc = 0x324C00u;
            goto label_324c00;
        }
    }
    ctx->pc = 0x324BF8u;
    // 0x324bf8: 0xc0c8cf8  jal         func_3233E0
    ctx->pc = 0x324BF8u;
    SET_GPR_U32(ctx, 31, 0x324C00u);
    ctx->pc = 0x324BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324BF8u;
    // 0x324bfc: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3233E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3233E0u, 0x324BF8u, 0x324C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324C00u;
label_324c00:
    // 0x324c00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x324c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x324c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x324c0c: 0xc0c9256  jal         func_324958
    ctx->pc = 0x324C0Cu;
    SET_GPR_U32(ctx, 31, 0x324C14u);
    ctx->pc = 0x324C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324C0Cu;
    // 0x324c10: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324958u, 0x324C0Cu, 0x324C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324C14u;
label_324c14:
    // 0x324c14: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x324c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_324c18:
    // 0x324c18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x324c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324c1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x324c1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324c20: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x324c20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324c28: 0x3e00008  jr          $ra
    ctx->pc = 0x324C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C28u;
        // 0x324c2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324C30u;
}
