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

// Function: sub_00415B68
// Address: 0x415b68 - 0x415c18
void sub_00415B68_0x415b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415B68_0x415b68");
#endif

    switch (ctx->pc) {
        case 0x415b68u: goto label_415b68;
        case 0x415b6cu: goto label_415b6c;
        case 0x415b70u: goto label_415b70;
        case 0x415b74u: goto label_415b74;
        case 0x415b78u: goto label_415b78;
        case 0x415b7cu: goto label_415b7c;
        case 0x415b80u: goto label_415b80;
        case 0x415b84u: goto label_415b84;
        case 0x415b88u: goto label_415b88;
        case 0x415b8cu: goto label_415b8c;
        case 0x415b90u: goto label_415b90;
        case 0x415b94u: goto label_415b94;
        case 0x415b98u: goto label_415b98;
        case 0x415b9cu: goto label_415b9c;
        case 0x415ba0u: goto label_415ba0;
        case 0x415ba4u: goto label_415ba4;
        case 0x415ba8u: goto label_415ba8;
        case 0x415bacu: goto label_415bac;
        case 0x415bb0u: goto label_415bb0;
        case 0x415bb4u: goto label_415bb4;
        case 0x415bb8u: goto label_415bb8;
        case 0x415bbcu: goto label_415bbc;
        case 0x415bc0u: goto label_415bc0;
        case 0x415bc4u: goto label_415bc4;
        case 0x415bc8u: goto label_415bc8;
        case 0x415bccu: goto label_415bcc;
        case 0x415bd0u: goto label_415bd0;
        case 0x415bd4u: goto label_415bd4;
        case 0x415bd8u: goto label_415bd8;
        case 0x415bdcu: goto label_415bdc;
        case 0x415be0u: goto label_415be0;
        case 0x415be4u: goto label_415be4;
        case 0x415be8u: goto label_415be8;
        case 0x415becu: goto label_415bec;
        case 0x415bf0u: goto label_415bf0;
        case 0x415bf4u: goto label_415bf4;
        case 0x415bf8u: goto label_415bf8;
        case 0x415bfcu: goto label_415bfc;
        case 0x415c00u: goto label_415c00;
        case 0x415c04u: goto label_415c04;
        case 0x415c08u: goto label_415c08;
        case 0x415c0cu: goto label_415c0c;
        case 0x415c10u: goto label_415c10;
        case 0x415c14u: goto label_415c14;
        default: break;
    }

    ctx->pc = 0x415b68u;

label_415b68:
    // 0x415b68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x415b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_415b6c:
    // 0x415b6c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x415b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_415b70:
    // 0x415b70: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x415b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_415b74:
    // 0x415b74: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x415b74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_415b78:
    // 0x415b78: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x415b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_415b7c:
    // 0x415b7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x415b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_415b80:
    // 0x415b80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x415b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_415b84:
    // 0x415b84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x415b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_415b88:
    // 0x415b88: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x415b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_415b8c:
    // 0x415b8c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x415b8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_415b90:
    // 0x415b90: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x415b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_415b94:
    // 0x415b94: 0x6a403  sra         $s4, $a2, 16
    ctx->pc = 0x415b94u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 16));
label_415b98:
    // 0x415b98: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x415b98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_415b9c:
    // 0x415b9c: 0x7ac03  sra         $s5, $a3, 16
    ctx->pc = 0x415b9cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 7), 16));
label_415ba0:
    // 0x415ba0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x415ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_415ba4:
    // 0x415ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_415ba8:
    // 0x415ba8: 0xc1056bc  jal         func_415AF0
label_415bac:
    if (ctx->pc == 0x415BACu) {
        ctx->pc = 0x415BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415BA8u;
        // 0x415bac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x415BB0u;
        goto label_415bb0;
    }
    ctx->pc = 0x415BA8u;
    SET_GPR_U32(ctx, 31, 0x415BB0u);
    ctx->pc = 0x415BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415BA8u;
    // 0x415bac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x415AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415AF0u, 0x415BA8u, 0x415BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415BB0u;
label_415bb0:
    // 0x415bb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x415bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_415bb4:
    // 0x415bb4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_415bb8:
    if (ctx->pc == 0x415BB8u) {
        ctx->pc = 0x415BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415BB4u;
        // 0x415bb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415BBCu;
        goto label_415bbc;
    }
    ctx->pc = 0x415BB4u;
    {
        const bool branch_taken_0x415bb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x415BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415BB4u;
        // 0x415bb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415bb4) {
            ctx->pc = 0x415BD8u;
            goto label_415bd8;
        }
    }
    ctx->pc = 0x415BBCu;
label_415bbc:
    // 0x415bbc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x415bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_415bc0:
    // 0x415bc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x415bc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_415bc4:
    // 0x415bc4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x415bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_415bc8:
    // 0x415bc8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x415bc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_415bcc:
    // 0x415bcc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x415bccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_415bd0:
    // 0x415bd0: 0xc10579c  jal         func_415E70
label_415bd4:
    if (ctx->pc == 0x415BD4u) {
        ctx->pc = 0x415BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415BD0u;
        // 0x415bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415BD8u;
        goto label_415bd8;
    }
    ctx->pc = 0x415BD0u;
    SET_GPR_U32(ctx, 31, 0x415BD8u);
    ctx->pc = 0x415BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415BD0u;
    // 0x415bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415E70u, 0x415BD0u, 0x415BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415BD8u;
label_415bd8:
    // 0x415bd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x415bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_415bdc:
    // 0x415bdc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x415bdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_415be0:
    // 0x415be0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x415be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_415be4:
    // 0x415be4: 0x40f809  jalr        $v0
label_415be8:
    if (ctx->pc == 0x415BE8u) {
        ctx->pc = 0x415BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415BE4u;
        // 0x415be8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415BECu;
        goto label_415bec;
    }
    ctx->pc = 0x415BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x415BECu);
        ctx->pc = 0x415BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415BE4u;
        // 0x415be8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415BE4u, 0x415BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x415BECu;
label_415bec:
    // 0x415bec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x415becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_415bf0:
    // 0x415bf0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x415bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_415bf4:
    // 0x415bf4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x415bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_415bf8:
    // 0x415bf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x415bf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_415bfc:
    // 0x415bfc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x415bfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_415c00:
    // 0x415c00: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x415c00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_415c04:
    // 0x415c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_415c08:
    // 0x415c08: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x415c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_415c0c:
    // 0x415c0c: 0x3e00008  jr          $ra
label_415c10:
    if (ctx->pc == 0x415C10u) {
        ctx->pc = 0x415C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C0Cu;
        // 0x415c10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415C14u;
        goto label_415c14;
    }
    ctx->pc = 0x415C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C0Cu;
        // 0x415c10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415C14u;
label_415c14:
    // 0x415c14: 0x0  nop
    ctx->pc = 0x415c14u;
    // NOP
    ctx->pc = 0x415c18u;
}
