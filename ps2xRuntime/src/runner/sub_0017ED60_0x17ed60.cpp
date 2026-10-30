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

// Function: sub_0017ED60
// Address: 0x17ed60 - 0x17ee88
void sub_0017ED60_0x17ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ED60_0x17ed60");
#endif

    switch (ctx->pc) {
        case 0x17ed94u: goto label_17ed94;
        case 0x17eda4u: goto label_17eda4;
        case 0x17ede8u: goto label_17ede8;
        case 0x17ee00u: goto label_17ee00;
        case 0x17ee2cu: goto label_17ee2c;
        default: break;
    }

    ctx->pc = 0x17ed60u;

    // 0x17ed60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x17ed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x17ed64: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x17ed64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x17ed68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ed68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed6c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x17ed6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x17ed70: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x17ed70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x17ed74: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17ed74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed78: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x17ed78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x17ed7c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x17ed7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed80: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x17ed80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x17ed84: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x17ed84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x17ed88: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17ed88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x17ed8c: 0xc05fb1e  jal         func_17EC78
    ctx->pc = 0x17ED8Cu;
    SET_GPR_U32(ctx, 31, 0x17ED94u);
    ctx->pc = 0x17ED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED8Cu;
    // 0x17ed90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC78u, 0x17ED8Cu, 0x17ED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED94u;
label_17ed94:
    // 0x17ed94: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17ed94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ed98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ed98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed9c: 0xc05fb30  jal         func_17ECC0
    ctx->pc = 0x17ED9Cu;
    SET_GPR_U32(ctx, 31, 0x17EDA4u);
    ctx->pc = 0x17EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED9Cu;
    // 0x17eda0: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ECC0u, 0x17ED9Cu, 0x17EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDA4u;
label_17eda4:
    // 0x17eda4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17eda4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17eda8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x17eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x17edac: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x17edacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x17edb0: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x17edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x17edb4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x17edb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x17edb8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x17edb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x17edbc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17edc0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17edc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17edc4: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x17edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x17edc8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17edcc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x17edccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17edd0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17edd4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17edd8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x17EDD8u;
    {
        const bool branch_taken_0x17edd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDD8u;
        // 0x17eddc: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edd8) {
            ctx->pc = 0x17EE50u;
            goto label_17ee50;
        }
    }
    ctx->pc = 0x17EDE0u;
    // 0x17ede0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x17ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17ede4: 0x0  nop
    ctx->pc = 0x17ede4u;
    // NOP
label_17ede8:
    // 0x17ede8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x17ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x17edec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17edecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17edf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17edf4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x17edf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17edf8: 0xc05f1c0  jal         func_17C700
    ctx->pc = 0x17EDF8u;
    SET_GPR_U32(ctx, 31, 0x17EE00u);
    ctx->pc = 0x17EDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDF8u;
    // 0x17edfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C700u, 0x17EDF8u, 0x17EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE00u;
label_17ee00:
    // 0x17ee00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ee04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17ee08: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x17ee08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17ee0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17EE0Cu;
    {
        const bool branch_taken_0x17ee0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE0Cu;
        // 0x17ee10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee0c) {
            ctx->pc = 0x17EE3Cu;
            goto label_17ee3c;
        }
    }
    ctx->pc = 0x17EE14u;
    // 0x17ee14: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x17ee14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17ee18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17ee18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee1c: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x17ee1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x17ee20: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x17ee20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17ee24: 0xc05f210  jal         func_17C840
    ctx->pc = 0x17EE24u;
    SET_GPR_U32(ctx, 31, 0x17EE2Cu);
    ctx->pc = 0x17EE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE24u;
    // 0x17ee28: 0x7e0200a0  sq          $v0, 0xA0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C840u, 0x17EE24u, 0x17EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE2Cu;
label_17ee2c:
    // 0x17ee2c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x17ee2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ee30: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x17ee30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ee34: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x17ee34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x17ee38: 0x7e0200a0  sq          $v0, 0xA0($s0)
    ctx->pc = 0x17ee38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 2));
label_17ee3c:
    // 0x17ee3c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17ee40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17ee40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17ee44: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x17ee44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17ee48: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x17EE48u;
    {
        const bool branch_taken_0x17ee48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ee48) {
            ctx->pc = 0x17EE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EE48u;
            // 0x17ee4c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ede8;
        }
    }
    ctx->pc = 0x17EE50u;
label_17ee50:
    // 0x17ee50: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x17ee50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17ee54: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x17ee54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ee58: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x17ee58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x17ee5c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x17ee5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17ee60: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x17ee60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17ee64: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x17ee64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17ee68: 0x7e0300a0  sq          $v1, 0xA0($s0)
    ctx->pc = 0x17ee68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 3));
    // 0x17ee6c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x17ee6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17ee70: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x17ee70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17ee74: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x17ee74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17ee78: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x17ee78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17ee7c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE7Cu;
        // 0x17ee80: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EE84u;
    // 0x17ee84: 0x0  nop
    ctx->pc = 0x17ee84u;
    // NOP
    ctx->pc = 0x17ee88u;
}
