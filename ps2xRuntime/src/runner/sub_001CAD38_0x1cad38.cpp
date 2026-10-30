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

// Function: sub_001CAD38
// Address: 0x1cad38 - 0x1cae58
void sub_001CAD38_0x1cad38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAD38_0x1cad38");
#endif

    switch (ctx->pc) {
        case 0x1cada0u: goto label_1cada0;
        case 0x1cadb8u: goto label_1cadb8;
        case 0x1cadd8u: goto label_1cadd8;
        case 0x1cadf0u: goto label_1cadf0;
        case 0x1cae10u: goto label_1cae10;
        default: break;
    }

    ctx->pc = 0x1cad38u;

    // 0x1cad38: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cad38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cad3c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1cad40: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1cad40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1cad44: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1cad44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1cad48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cad48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cad4c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1cad4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1cad50: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cad50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cad54: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1cad54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1cad58: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1cad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1cad5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1cad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1cad60: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1cad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1cad64: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1cad64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1cad68: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1cad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1cad6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cad6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cad70: 0x8c73ea74  lw          $s3, -0x158C($v1)
    ctx->pc = 0x1cad70u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x50EA74u));
    // 0x1cad74: 0x92020048  lbu         $v0, 0x48($s0)
    ctx->pc = 0x1cad74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1cad78: 0x8e17001c  lw          $s7, 0x1C($s0)
    ctx->pc = 0x1cad78u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1cad7c: 0x8e140014  lw          $s4, 0x14($s0)
    ctx->pc = 0x1cad7cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cad80: 0x8e150050  lw          $s5, 0x50($s0)
    ctx->pc = 0x1cad80u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1cad84: 0x8e1e0044  lw          $fp, 0x44($s0)
    ctx->pc = 0x1cad84u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cad88: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1cad88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1cad8c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1cad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cad90: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1cad90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1cad94: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1CAD94u;
    {
        const bool branch_taken_0x1cad94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD94u;
        // 0x1cad98: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad94) {
            ctx->pc = 0x1CADE8u;
            goto label_1cade8;
        }
    }
    ctx->pc = 0x1CAD9Cu;
    // 0x1cad9c: 0x0  nop
    ctx->pc = 0x1cad9cu;
    // NOP
label_1cada0:
    // 0x1cada0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cada4: 0x16220010  bne         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CADA4u;
    {
        const bool branch_taken_0x1cada4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cada4) {
            ctx->pc = 0x1CADE8u;
            goto label_1cade8;
        }
    }
    ctx->pc = 0x1CADACu;
    // 0x1cadac: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1cadacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cadb0: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x1CADB0u;
    SET_GPR_U32(ctx, 31, 0x1CADB8u);
    ctx->pc = 0x1CADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADB0u;
    // 0x1cadb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1CADB0u, 0x1CADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADB8u;
label_1cadb8:
    // 0x1cadb8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CADB8u;
    {
        const bool branch_taken_0x1cadb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADB8u;
        // 0x1cadbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadb8) {
            ctx->pc = 0x1CADE8u;
            goto label_1cade8;
        }
    }
    ctx->pc = 0x1CADC0u;
    // 0x1cadc0: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x1cadc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x1cadc4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1cadc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1cadc8: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x1cadc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1cadcc: 0xa2000043  sb          $zero, 0x43($s0)
    ctx->pc = 0x1cadccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cadd0: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1CADD0u;
    SET_GPR_U32(ctx, 31, 0x1CADD8u);
    ctx->pc = 0x1CADD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADD0u;
    // 0x1cadd4: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1CADD0u, 0x1CADD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADD8u;
label_1cadd8:
    // 0x1cadd8: 0xae110044  sw          $s1, 0x44($s0)
    ctx->pc = 0x1cadd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
    // 0x1caddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1caddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cade0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CADE0u;
    {
        const bool branch_taken_0x1cade0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADE0u;
        // 0x1cade4: 0xa2000048  sb          $zero, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cade0) {
            ctx->pc = 0x1CAE24u;
            goto label_1cae24;
        }
    }
    ctx->pc = 0x1CADE8u;
label_1cade8:
    // 0x1cade8: 0xc072c64  jal         func_1CB190
    ctx->pc = 0x1CADE8u;
    SET_GPR_U32(ctx, 31, 0x1CADF0u);
    ctx->pc = 0x1CADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADE8u;
    // 0x1cadec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB190u, 0x1CADE8u, 0x1CADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADF0u;
label_1cadf0:
    // 0x1cadf0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1CADF0u;
    {
        const bool branch_taken_0x1cadf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cadf0) {
            ctx->pc = 0x1CADF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CADF0u;
            // 0x1cadf4: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CADA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cada0;
        }
    }
    ctx->pc = 0x1CADF8u;
    // 0x1cadf8: 0xae140014  sw          $s4, 0x14($s0)
    ctx->pc = 0x1cadf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
    // 0x1cadfc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cadfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae00: 0xae17001c  sw          $s7, 0x1C($s0)
    ctx->pc = 0x1cae00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 23));
    // 0x1cae04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae08: 0xc072c04  jal         func_1CB010
    ctx->pc = 0x1CAE08u;
    SET_GPR_U32(ctx, 31, 0x1CAE10u);
    ctx->pc = 0x1CAE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE08u;
    // 0x1cae0c: 0xaed3ea74  sw          $s3, -0x158C($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294961780), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB010u, 0x1CAE08u, 0x1CAE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE10u;
label_1cae10:
    // 0x1cae10: 0xae1e0044  sw          $fp, 0x44($s0)
    ctx->pc = 0x1cae10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 30));
    // 0x1cae14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cae14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae1c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1cae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1cae20: 0xa2030048  sb          $v1, 0x48($s0)
    ctx->pc = 0x1cae20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 3));
label_1cae24:
    // 0x1cae24: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1cae24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cae28: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1cae28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cae2c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1cae2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cae30: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1cae30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cae34: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1cae34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cae38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cae38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cae3c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1cae3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cae40: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1cae40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cae44: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1cae44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cae48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cae48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cae4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE4Cu;
        // 0x1cae50: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE54u;
    // 0x1cae54: 0x0  nop
    ctx->pc = 0x1cae54u;
    // NOP
    ctx->pc = 0x1cae58u;
}
