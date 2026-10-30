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

// Function: sub_0023BDE8
// Address: 0x23bde8 - 0x23be98
void sub_0023BDE8_0x23bde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BDE8_0x23bde8");
#endif

    switch (ctx->pc) {
        case 0x23be1cu: goto label_23be1c;
        case 0x23be3cu: goto label_23be3c;
        case 0x23be5cu: goto label_23be5c;
        case 0x23be6cu: goto label_23be6c;
        default: break;
    }

    ctx->pc = 0x23bde8u;

    // 0x23bde8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23bde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23bdec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x23bdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x23bdf0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x23bdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x23bdf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23bdf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bdf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23bdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23bdfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23bdfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be00: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x23be00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x23be04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23be04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23be08: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x23be08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x23be0c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x23BE0Cu;
    {
        const bool branch_taken_0x23be0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE0Cu;
        // 0x23be10: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be0c) {
            ctx->pc = 0x23BE78u;
            goto label_23be78;
        }
    }
    ctx->pc = 0x23BE14u;
    // 0x23be14: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x23BE14u;
    SET_GPR_U32(ctx, 31, 0x23BE1Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x23BE14u, 0x23BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE1Cu;
label_23be1c:
    // 0x23be1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23be1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be20: 0x92020460  lbu         $v0, 0x460($s0)
    ctx->pc = 0x23be20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x23be24: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23BE24u;
    {
        const bool branch_taken_0x23be24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23be24) {
            ctx->pc = 0x23BE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BE24u;
            // 0x23be28: 0x132940  sll         $a1, $s3, 5 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BE40u;
            goto label_23be40;
        }
    }
    ctx->pc = 0x23BE2Cu;
    // 0x23be2c: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x23be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x23be30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23be30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be34: 0xc05dc2e  jal         func_1770B8
    ctx->pc = 0x23BE34u;
    SET_GPR_U32(ctx, 31, 0x23BE3Cu);
    ctx->pc = 0x23BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE34u;
    // 0x23be38: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1770B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1770B8u, 0x23BE34u, 0x23BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE3Cu;
label_23be3c:
    // 0x23be3c: 0x132940  sll         $a1, $s3, 5
    ctx->pc = 0x23be3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
label_23be40:
    // 0x23be40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23be40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be44: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x23be44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x23be48: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23be48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23be4c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x23be4cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x23be50: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x23be50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x23be54: 0xc087408  jal         func_21D020
    ctx->pc = 0x23BE54u;
    SET_GPR_U32(ctx, 31, 0x23BE5Cu);
    ctx->pc = 0x23BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE54u;
    // 0x23be58: 0x7e430010  sq          $v1, 0x10($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x23BE54u, 0x23BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE5Cu;
label_23be5c:
    // 0x23be5c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x23be5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x23be60: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23be60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23be64: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x23BE64u;
    SET_GPR_U32(ctx, 31, 0x23BE6Cu);
    ctx->pc = 0x23BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE64u;
    // 0x23be68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x23BE64u, 0x23BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE6Cu;
label_23be6c:
    // 0x23be6c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x23be6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be70: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x23be70u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x23be74: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x23be74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_23be78:
    // 0x23be78: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x23be78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23be7c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x23be7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23be80: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x23be80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23be84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23be84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23be88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23be88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23be8c: 0x3e00008  jr          $ra
    ctx->pc = 0x23BE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE8Cu;
        // 0x23be90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BE94u;
    // 0x23be94: 0x0  nop
    ctx->pc = 0x23be94u;
    // NOP
    ctx->pc = 0x23be98u;
}
